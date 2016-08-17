/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/iam/model/GetAccountSummaryResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetAccountSummaryResult::GetAccountSummaryResult()
{
}

GetAccountSummaryResult::GetAccountSummaryResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetAccountSummaryResult& GetAccountSummaryResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "GetAccountSummaryResult")
  {
    resultNode = rootNode.FirstChild("GetAccountSummaryResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode summaryMapNode = resultNode.FirstChild("SummaryMap");

    if(!summaryMapNode.IsNull())
    {
      XmlNode summaryMapEntry = summaryMapNode.FirstChild("entry");
      while(!summaryMapEntry.IsNull())
      {
        XmlNode keyNode = summaryMapEntry.FirstChild("key");
        XmlNode valueNode = summaryMapEntry.FirstChild("value");
        m_summaryMap[SummaryKeyTypeMapper::GetSummaryKeyTypeForName(StringUtils::Trim(keyNode.GetText().c_str()))] =
           StringUtils::ConvertToInt32(StringUtils::Trim(valueNode.GetText().c_str()).c_str());
        summaryMapEntry = summaryMapEntry.NextNode("entry");
      }

    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetAccountSummaryResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
