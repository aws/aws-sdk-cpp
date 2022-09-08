/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ManagedAction.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

ManagedAction::ManagedAction() : 
    m_actionIdHasBeenSet(false),
    m_actionDescriptionHasBeenSet(false),
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_status(ActionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_windowStartTimeHasBeenSet(false)
{
}

ManagedAction::ManagedAction(const XmlNode& xmlNode) : 
    m_actionIdHasBeenSet(false),
    m_actionDescriptionHasBeenSet(false),
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_status(ActionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_windowStartTimeHasBeenSet(false)
{
  *this = xmlNode;
}

ManagedAction& ManagedAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode actionIdNode = resultNode.FirstChild("ActionId");
    if(!actionIdNode.IsNull())
    {
      m_actionId = Aws::Utils::Xml::DecodeEscapedXmlText(actionIdNode.GetText());
      m_actionIdHasBeenSet = true;
    }
    XmlNode actionDescriptionNode = resultNode.FirstChild("ActionDescription");
    if(!actionDescriptionNode.IsNull())
    {
      m_actionDescription = Aws::Utils::Xml::DecodeEscapedXmlText(actionDescriptionNode.GetText());
      m_actionDescriptionHasBeenSet = true;
    }
    XmlNode actionTypeNode = resultNode.FirstChild("ActionType");
    if(!actionTypeNode.IsNull())
    {
      m_actionType = ActionTypeMapper::GetActionTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(actionTypeNode.GetText()).c_str()).c_str());
      m_actionTypeHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ActionStatusMapper::GetActionStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode windowStartTimeNode = resultNode.FirstChild("WindowStartTime");
    if(!windowStartTimeNode.IsNull())
    {
      m_windowStartTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(windowStartTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_windowStartTimeHasBeenSet = true;
    }
  }

  return *this;
}

void ManagedAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_actionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActionId=" << StringUtils::URLEncode(m_actionId.c_str()) << "&";
  }

  if(m_actionDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActionDescription=" << StringUtils::URLEncode(m_actionDescription.c_str()) << "&";
  }

  if(m_actionTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActionType=" << ActionTypeMapper::GetNameForActionType(m_actionType) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << ActionStatusMapper::GetNameForActionStatus(m_status) << "&";
  }

  if(m_windowStartTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".WindowStartTime=" << StringUtils::URLEncode(m_windowStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void ManagedAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_actionIdHasBeenSet)
  {
      oStream << location << ".ActionId=" << StringUtils::URLEncode(m_actionId.c_str()) << "&";
  }
  if(m_actionDescriptionHasBeenSet)
  {
      oStream << location << ".ActionDescription=" << StringUtils::URLEncode(m_actionDescription.c_str()) << "&";
  }
  if(m_actionTypeHasBeenSet)
  {
      oStream << location << ".ActionType=" << ActionTypeMapper::GetNameForActionType(m_actionType) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << ActionStatusMapper::GetNameForActionStatus(m_status) << "&";
  }
  if(m_windowStartTimeHasBeenSet)
  {
      oStream << location << ".WindowStartTime=" << StringUtils::URLEncode(m_windowStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
