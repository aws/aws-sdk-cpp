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

#include <aws/elasticache/model/BatchStopUpdateActionResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

BatchStopUpdateActionResult::BatchStopUpdateActionResult()
{
}

BatchStopUpdateActionResult::BatchStopUpdateActionResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

BatchStopUpdateActionResult& BatchStopUpdateActionResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "BatchStopUpdateActionResult"))
  {
    resultNode = rootNode.FirstChild("BatchStopUpdateActionResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode processedUpdateActionsNode = resultNode.FirstChild("ProcessedUpdateActions");
    if(!processedUpdateActionsNode.IsNull())
    {
      XmlNode processedUpdateActionsMember = processedUpdateActionsNode.FirstChild("ProcessedUpdateAction");
      while(!processedUpdateActionsMember.IsNull())
      {
        m_processedUpdateActions.push_back(processedUpdateActionsMember);
        processedUpdateActionsMember = processedUpdateActionsMember.NextNode("ProcessedUpdateAction");
      }

    }
    XmlNode unprocessedUpdateActionsNode = resultNode.FirstChild("UnprocessedUpdateActions");
    if(!unprocessedUpdateActionsNode.IsNull())
    {
      XmlNode unprocessedUpdateActionsMember = unprocessedUpdateActionsNode.FirstChild("UnprocessedUpdateAction");
      while(!unprocessedUpdateActionsMember.IsNull())
      {
        m_unprocessedUpdateActions.push_back(unprocessedUpdateActionsMember);
        unprocessedUpdateActionsMember = unprocessedUpdateActionsMember.NextNode("UnprocessedUpdateAction");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElastiCache::Model::BatchStopUpdateActionResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
