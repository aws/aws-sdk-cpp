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

#include <aws/rds/model/ModifyCurrentDBClusterCapacityResult.h>
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

ModifyCurrentDBClusterCapacityResult::ModifyCurrentDBClusterCapacityResult() : 
    m_pendingCapacity(0),
    m_currentCapacity(0),
    m_secondsBeforeTimeout(0)
{
}

ModifyCurrentDBClusterCapacityResult::ModifyCurrentDBClusterCapacityResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_pendingCapacity(0),
    m_currentCapacity(0),
    m_secondsBeforeTimeout(0)
{
  *this = result;
}

ModifyCurrentDBClusterCapacityResult& ModifyCurrentDBClusterCapacityResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyCurrentDBClusterCapacityResult"))
  {
    resultNode = rootNode.FirstChild("ModifyCurrentDBClusterCapacityResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = dBClusterIdentifierNode.GetText();
    }
    XmlNode pendingCapacityNode = resultNode.FirstChild("PendingCapacity");
    if(!pendingCapacityNode.IsNull())
    {
      m_pendingCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(pendingCapacityNode.GetText().c_str()).c_str());
    }
    XmlNode currentCapacityNode = resultNode.FirstChild("CurrentCapacity");
    if(!currentCapacityNode.IsNull())
    {
      m_currentCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(currentCapacityNode.GetText().c_str()).c_str());
    }
    XmlNode secondsBeforeTimeoutNode = resultNode.FirstChild("SecondsBeforeTimeout");
    if(!secondsBeforeTimeoutNode.IsNull())
    {
      m_secondsBeforeTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(secondsBeforeTimeoutNode.GetText().c_str()).c_str());
    }
    XmlNode timeoutActionNode = resultNode.FirstChild("TimeoutAction");
    if(!timeoutActionNode.IsNull())
    {
      m_timeoutAction = timeoutActionNode.GetText();
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::ModifyCurrentDBClusterCapacityResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
