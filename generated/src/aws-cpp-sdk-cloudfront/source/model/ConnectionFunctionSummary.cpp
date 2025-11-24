/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ConnectionFunctionSummary.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {

ConnectionFunctionSummary::ConnectionFunctionSummary(const XmlNode& xmlNode) { *this = xmlNode; }

ConnectionFunctionSummary& ConnectionFunctionSummary::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if (!nameNode.IsNull()) {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode idNode = resultNode.FirstChild("Id");
    if (!idNode.IsNull()) {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode connectionFunctionConfigNode = resultNode.FirstChild("ConnectionFunctionConfig");
    if (!connectionFunctionConfigNode.IsNull()) {
      m_connectionFunctionConfig = connectionFunctionConfigNode;
      m_connectionFunctionConfigHasBeenSet = true;
    }
    XmlNode connectionFunctionArnNode = resultNode.FirstChild("ConnectionFunctionArn");
    if (!connectionFunctionArnNode.IsNull()) {
      m_connectionFunctionArn = Aws::Utils::Xml::DecodeEscapedXmlText(connectionFunctionArnNode.GetText());
      m_connectionFunctionArnHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if (!statusNode.IsNull()) {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode stageNode = resultNode.FirstChild("Stage");
    if (!stageNode.IsNull()) {
      m_stage = FunctionStageMapper::GetFunctionStageForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stageNode.GetText()).c_str()));
      m_stageHasBeenSet = true;
    }
    XmlNode createdTimeNode = resultNode.FirstChild("CreatedTime");
    if (!createdTimeNode.IsNull()) {
      m_createdTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdTimeNode.GetText()).c_str()).c_str(),
                               Aws::Utils::DateFormat::ISO_8601);
      m_createdTimeHasBeenSet = true;
    }
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    if (!lastModifiedTimeNode.IsNull()) {
      m_lastModifiedTime =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastModifiedTimeNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_lastModifiedTimeHasBeenSet = true;
    }
  }

  return *this;
}

void ConnectionFunctionSummary::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_nameHasBeenSet) {
    XmlNode nameNode = parentNode.CreateChildElement("Name");
    nameNode.SetText(m_name);
  }

  if (m_idHasBeenSet) {
    XmlNode idNode = parentNode.CreateChildElement("Id");
    idNode.SetText(m_id);
  }

  if (m_connectionFunctionConfigHasBeenSet) {
    XmlNode connectionFunctionConfigNode = parentNode.CreateChildElement("ConnectionFunctionConfig");
    m_connectionFunctionConfig.AddToNode(connectionFunctionConfigNode);
  }

  if (m_connectionFunctionArnHasBeenSet) {
    XmlNode connectionFunctionArnNode = parentNode.CreateChildElement("ConnectionFunctionArn");
    connectionFunctionArnNode.SetText(m_connectionFunctionArn);
  }

  if (m_statusHasBeenSet) {
    XmlNode statusNode = parentNode.CreateChildElement("Status");
    statusNode.SetText(m_status);
  }

  if (m_stageHasBeenSet) {
    XmlNode stageNode = parentNode.CreateChildElement("Stage");
    stageNode.SetText(FunctionStageMapper::GetNameForFunctionStage(m_stage));
  }

  if (m_createdTimeHasBeenSet) {
    XmlNode createdTimeNode = parentNode.CreateChildElement("CreatedTime");
    createdTimeNode.SetText(m_createdTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastModifiedTimeHasBeenSet) {
    XmlNode lastModifiedTimeNode = parentNode.CreateChildElement("LastModifiedTime");
    lastModifiedTimeNode.SetText(m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }
}

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
