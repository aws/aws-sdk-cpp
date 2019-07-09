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

#include <aws/elasticbeanstalk/model/ApplyEnvironmentManagedActionResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ApplyEnvironmentManagedActionResult::ApplyEnvironmentManagedActionResult() : 
    m_actionType(ActionType::NOT_SET)
{
}

ApplyEnvironmentManagedActionResult::ApplyEnvironmentManagedActionResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_actionType(ActionType::NOT_SET)
{
  *this = result;
}

ApplyEnvironmentManagedActionResult& ApplyEnvironmentManagedActionResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ApplyEnvironmentManagedActionResult"))
  {
    resultNode = rootNode.FirstChild("ApplyEnvironmentManagedActionResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode actionIdNode = resultNode.FirstChild("ActionId");
    if(!actionIdNode.IsNull())
    {
      m_actionId = actionIdNode.GetText();
    }
    XmlNode actionDescriptionNode = resultNode.FirstChild("ActionDescription");
    if(!actionDescriptionNode.IsNull())
    {
      m_actionDescription = actionDescriptionNode.GetText();
    }
    XmlNode actionTypeNode = resultNode.FirstChild("ActionType");
    if(!actionTypeNode.IsNull())
    {
      m_actionType = ActionTypeMapper::GetActionTypeForName(StringUtils::Trim(actionTypeNode.GetText().c_str()).c_str());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::ApplyEnvironmentManagedActionResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
