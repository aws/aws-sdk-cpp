/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ManagedActionHistoryItem.h>
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

ManagedActionHistoryItem::ManagedActionHistoryItem() : 
    m_actionIdHasBeenSet(false),
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_actionDescriptionHasBeenSet(false),
    m_failureType(FailureType::NOT_SET),
    m_failureTypeHasBeenSet(false),
    m_status(ActionHistoryStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureDescriptionHasBeenSet(false),
    m_executedTimeHasBeenSet(false),
    m_finishedTimeHasBeenSet(false)
{
}

ManagedActionHistoryItem::ManagedActionHistoryItem(const XmlNode& xmlNode) : 
    m_actionIdHasBeenSet(false),
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_actionDescriptionHasBeenSet(false),
    m_failureType(FailureType::NOT_SET),
    m_failureTypeHasBeenSet(false),
    m_status(ActionHistoryStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureDescriptionHasBeenSet(false),
    m_executedTimeHasBeenSet(false),
    m_finishedTimeHasBeenSet(false)
{
  *this = xmlNode;
}

ManagedActionHistoryItem& ManagedActionHistoryItem::operator =(const XmlNode& xmlNode)
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
    XmlNode actionTypeNode = resultNode.FirstChild("ActionType");
    if(!actionTypeNode.IsNull())
    {
      m_actionType = ActionTypeMapper::GetActionTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(actionTypeNode.GetText()).c_str()).c_str());
      m_actionTypeHasBeenSet = true;
    }
    XmlNode actionDescriptionNode = resultNode.FirstChild("ActionDescription");
    if(!actionDescriptionNode.IsNull())
    {
      m_actionDescription = Aws::Utils::Xml::DecodeEscapedXmlText(actionDescriptionNode.GetText());
      m_actionDescriptionHasBeenSet = true;
    }
    XmlNode failureTypeNode = resultNode.FirstChild("FailureType");
    if(!failureTypeNode.IsNull())
    {
      m_failureType = FailureTypeMapper::GetFailureTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(failureTypeNode.GetText()).c_str()).c_str());
      m_failureTypeHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ActionHistoryStatusMapper::GetActionHistoryStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode failureDescriptionNode = resultNode.FirstChild("FailureDescription");
    if(!failureDescriptionNode.IsNull())
    {
      m_failureDescription = Aws::Utils::Xml::DecodeEscapedXmlText(failureDescriptionNode.GetText());
      m_failureDescriptionHasBeenSet = true;
    }
    XmlNode executedTimeNode = resultNode.FirstChild("ExecutedTime");
    if(!executedTimeNode.IsNull())
    {
      m_executedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(executedTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_executedTimeHasBeenSet = true;
    }
    XmlNode finishedTimeNode = resultNode.FirstChild("FinishedTime");
    if(!finishedTimeNode.IsNull())
    {
      m_finishedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(finishedTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_finishedTimeHasBeenSet = true;
    }
  }

  return *this;
}

void ManagedActionHistoryItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_actionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActionId=" << StringUtils::URLEncode(m_actionId.c_str()) << "&";
  }

  if(m_actionTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActionType=" << ActionTypeMapper::GetNameForActionType(m_actionType) << "&";
  }

  if(m_actionDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActionDescription=" << StringUtils::URLEncode(m_actionDescription.c_str()) << "&";
  }

  if(m_failureTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureType=" << FailureTypeMapper::GetNameForFailureType(m_failureType) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << ActionHistoryStatusMapper::GetNameForActionHistoryStatus(m_status) << "&";
  }

  if(m_failureDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureDescription=" << StringUtils::URLEncode(m_failureDescription.c_str()) << "&";
  }

  if(m_executedTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExecutedTime=" << StringUtils::URLEncode(m_executedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_finishedTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".FinishedTime=" << StringUtils::URLEncode(m_finishedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void ManagedActionHistoryItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_actionIdHasBeenSet)
  {
      oStream << location << ".ActionId=" << StringUtils::URLEncode(m_actionId.c_str()) << "&";
  }
  if(m_actionTypeHasBeenSet)
  {
      oStream << location << ".ActionType=" << ActionTypeMapper::GetNameForActionType(m_actionType) << "&";
  }
  if(m_actionDescriptionHasBeenSet)
  {
      oStream << location << ".ActionDescription=" << StringUtils::URLEncode(m_actionDescription.c_str()) << "&";
  }
  if(m_failureTypeHasBeenSet)
  {
      oStream << location << ".FailureType=" << FailureTypeMapper::GetNameForFailureType(m_failureType) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << ActionHistoryStatusMapper::GetNameForActionHistoryStatus(m_status) << "&";
  }
  if(m_failureDescriptionHasBeenSet)
  {
      oStream << location << ".FailureDescription=" << StringUtils::URLEncode(m_failureDescription.c_str()) << "&";
  }
  if(m_executedTimeHasBeenSet)
  {
      oStream << location << ".ExecutedTime=" << StringUtils::URLEncode(m_executedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_finishedTimeHasBeenSet)
  {
      oStream << location << ".FinishedTime=" << StringUtils::URLEncode(m_finishedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
