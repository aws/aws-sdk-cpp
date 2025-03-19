/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackRefactorSummary.h>
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

StackRefactorSummary::StackRefactorSummary(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

StackRefactorSummary& StackRefactorSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stackRefactorIdNode = resultNode.FirstChild("StackRefactorId");
    if(!stackRefactorIdNode.IsNull())
    {
      m_stackRefactorId = Aws::Utils::Xml::DecodeEscapedXmlText(stackRefactorIdNode.GetText());
      m_stackRefactorIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode executionStatusNode = resultNode.FirstChild("ExecutionStatus");
    if(!executionStatusNode.IsNull())
    {
      m_executionStatus = StackRefactorExecutionStatusMapper::GetStackRefactorExecutionStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(executionStatusNode.GetText()).c_str()));
      m_executionStatusHasBeenSet = true;
    }
    XmlNode executionStatusReasonNode = resultNode.FirstChild("ExecutionStatusReason");
    if(!executionStatusReasonNode.IsNull())
    {
      m_executionStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(executionStatusReasonNode.GetText());
      m_executionStatusReasonHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StackRefactorStatusMapper::GetStackRefactorStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
      m_statusReasonHasBeenSet = true;
    }
  }

  return *this;
}

void StackRefactorSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stackRefactorIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackRefactorId=" << StringUtils::URLEncode(m_stackRefactorId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_executionStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExecutionStatus=" << StringUtils::URLEncode(StackRefactorExecutionStatusMapper::GetNameForStackRefactorExecutionStatus(m_executionStatus)) << "&";
  }

  if(m_executionStatusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExecutionStatusReason=" << StringUtils::URLEncode(m_executionStatusReason.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(StackRefactorStatusMapper::GetNameForStackRefactorStatus(m_status)) << "&";
  }

  if(m_statusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }

}

void StackRefactorSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stackRefactorIdHasBeenSet)
  {
      oStream << location << ".StackRefactorId=" << StringUtils::URLEncode(m_stackRefactorId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_executionStatusHasBeenSet)
  {
      oStream << location << ".ExecutionStatus=" << StringUtils::URLEncode(StackRefactorExecutionStatusMapper::GetNameForStackRefactorExecutionStatus(m_executionStatus)) << "&";
  }
  if(m_executionStatusReasonHasBeenSet)
  {
      oStream << location << ".ExecutionStatusReason=" << StringUtils::URLEncode(m_executionStatusReason.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(StackRefactorStatusMapper::GetNameForStackRefactorStatus(m_status)) << "&";
  }
  if(m_statusReasonHasBeenSet)
  {
      oStream << location << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
