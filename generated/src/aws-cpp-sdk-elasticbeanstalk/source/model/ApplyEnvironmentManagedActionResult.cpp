/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
      m_actionId = Aws::Utils::Xml::DecodeEscapedXmlText(actionIdNode.GetText());
    }
    XmlNode actionDescriptionNode = resultNode.FirstChild("ActionDescription");
    if(!actionDescriptionNode.IsNull())
    {
      m_actionDescription = Aws::Utils::Xml::DecodeEscapedXmlText(actionDescriptionNode.GetText());
    }
    XmlNode actionTypeNode = resultNode.FirstChild("ActionType");
    if(!actionTypeNode.IsNull())
    {
      m_actionType = ActionTypeMapper::GetActionTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(actionTypeNode.GetText()).c_str()).c_str());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::ApplyEnvironmentManagedActionResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
