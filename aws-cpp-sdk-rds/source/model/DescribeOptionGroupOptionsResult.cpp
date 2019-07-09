/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/rds/model/DescribeOptionGroupOptionsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeOptionGroupOptionsResult::DescribeOptionGroupOptionsResult()
{
}

DescribeOptionGroupOptionsResult::DescribeOptionGroupOptionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeOptionGroupOptionsResult& DescribeOptionGroupOptionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeOptionGroupOptionsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeOptionGroupOptionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode optionGroupOptionsNode = resultNode.FirstChild("OptionGroupOptions");
    if(!optionGroupOptionsNode.IsNull())
    {
      XmlNode optionGroupOptionsMember = optionGroupOptionsNode.FirstChild("OptionGroupOption");
      while(!optionGroupOptionsMember.IsNull())
      {
        m_optionGroupOptions.push_back(optionGroupOptionsMember);
        optionGroupOptionsMember = optionGroupOptionsMember.NextNode("OptionGroupOption");
      }

    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = markerNode.GetText();
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeOptionGroupOptionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
