﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackSetOperationSummary.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

StackSetOperationSummary::StackSetOperationSummary() : 
    m_operationIdHasBeenSet(false),
    m_action(StackSetOperationAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_status(StackSetOperationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false)
{
}

StackSetOperationSummary::StackSetOperationSummary(const XmlNode& xmlNode) : 
    m_operationIdHasBeenSet(false),
    m_action(StackSetOperationAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_status(StackSetOperationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false)
{
  *this = xmlNode;
}

StackSetOperationSummary& StackSetOperationSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode operationIdNode = resultNode.FirstChild("OperationId");
    if(!operationIdNode.IsNull())
    {
      m_operationId = Aws::Utils::Xml::DecodeEscapedXmlText(operationIdNode.GetText());
      m_operationIdHasBeenSet = true;
    }
    XmlNode actionNode = resultNode.FirstChild("Action");
    if(!actionNode.IsNull())
    {
      m_action = StackSetOperationActionMapper::GetStackSetOperationActionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(actionNode.GetText()).c_str()).c_str());
      m_actionHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StackSetOperationStatusMapper::GetStackSetOperationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode creationTimestampNode = resultNode.FirstChild("CreationTimestamp");
    if(!creationTimestampNode.IsNull())
    {
      m_creationTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimestampNode.GetText()).c_str()).c_str(), DateFormat::ISO_8601);
      m_creationTimestampHasBeenSet = true;
    }
    XmlNode endTimestampNode = resultNode.FirstChild("EndTimestamp");
    if(!endTimestampNode.IsNull())
    {
      m_endTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endTimestampNode.GetText()).c_str()).c_str(), DateFormat::ISO_8601);
      m_endTimestampHasBeenSet = true;
    }
  }

  return *this;
}

void StackSetOperationSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_operationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OperationId=" << StringUtils::URLEncode(m_operationId.c_str()) << "&";
  }

  if(m_actionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Action=" << StackSetOperationActionMapper::GetNameForStackSetOperationAction(m_action) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StackSetOperationStatusMapper::GetNameForStackSetOperationStatus(m_status) << "&";
  }

  if(m_creationTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTimestamp=" << StringUtils::URLEncode(m_creationTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndTimestamp=" << StringUtils::URLEncode(m_endTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void StackSetOperationSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_operationIdHasBeenSet)
  {
      oStream << location << ".OperationId=" << StringUtils::URLEncode(m_operationId.c_str()) << "&";
  }
  if(m_actionHasBeenSet)
  {
      oStream << location << ".Action=" << StackSetOperationActionMapper::GetNameForStackSetOperationAction(m_action) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StackSetOperationStatusMapper::GetNameForStackSetOperationStatus(m_status) << "&";
  }
  if(m_creationTimestampHasBeenSet)
  {
      oStream << location << ".CreationTimestamp=" << StringUtils::URLEncode(m_creationTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endTimestampHasBeenSet)
  {
      oStream << location << ".EndTimestamp=" << StringUtils::URLEncode(m_endTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
