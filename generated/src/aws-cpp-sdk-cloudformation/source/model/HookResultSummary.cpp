/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/HookResultSummary.h>
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

HookResultSummary::HookResultSummary(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

HookResultSummary& HookResultSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode hookResultIdNode = resultNode.FirstChild("HookResultId");
    if(!hookResultIdNode.IsNull())
    {
      m_hookResultId = Aws::Utils::Xml::DecodeEscapedXmlText(hookResultIdNode.GetText());
      m_hookResultIdHasBeenSet = true;
    }
    XmlNode invocationPointNode = resultNode.FirstChild("InvocationPoint");
    if(!invocationPointNode.IsNull())
    {
      m_invocationPoint = HookInvocationPointMapper::GetHookInvocationPointForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(invocationPointNode.GetText()).c_str()));
      m_invocationPointHasBeenSet = true;
    }
    XmlNode failureModeNode = resultNode.FirstChild("FailureMode");
    if(!failureModeNode.IsNull())
    {
      m_failureMode = HookFailureModeMapper::GetHookFailureModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(failureModeNode.GetText()).c_str()));
      m_failureModeHasBeenSet = true;
    }
    XmlNode typeNameNode = resultNode.FirstChild("TypeName");
    if(!typeNameNode.IsNull())
    {
      m_typeName = Aws::Utils::Xml::DecodeEscapedXmlText(typeNameNode.GetText());
      m_typeNameHasBeenSet = true;
    }
    XmlNode typeVersionIdNode = resultNode.FirstChild("TypeVersionId");
    if(!typeVersionIdNode.IsNull())
    {
      m_typeVersionId = Aws::Utils::Xml::DecodeEscapedXmlText(typeVersionIdNode.GetText());
      m_typeVersionIdHasBeenSet = true;
    }
    XmlNode typeConfigurationVersionIdNode = resultNode.FirstChild("TypeConfigurationVersionId");
    if(!typeConfigurationVersionIdNode.IsNull())
    {
      m_typeConfigurationVersionId = Aws::Utils::Xml::DecodeEscapedXmlText(typeConfigurationVersionIdNode.GetText());
      m_typeConfigurationVersionIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = HookStatusMapper::GetHookStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode hookStatusReasonNode = resultNode.FirstChild("HookStatusReason");
    if(!hookStatusReasonNode.IsNull())
    {
      m_hookStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(hookStatusReasonNode.GetText());
      m_hookStatusReasonHasBeenSet = true;
    }
    XmlNode invokedAtNode = resultNode.FirstChild("InvokedAt");
    if(!invokedAtNode.IsNull())
    {
      m_invokedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(invokedAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_invokedAtHasBeenSet = true;
    }
    XmlNode targetTypeNode = resultNode.FirstChild("TargetType");
    if(!targetTypeNode.IsNull())
    {
      m_targetType = ListHookResultsTargetTypeMapper::GetListHookResultsTargetTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetTypeNode.GetText()).c_str()));
      m_targetTypeHasBeenSet = true;
    }
    XmlNode targetIdNode = resultNode.FirstChild("TargetId");
    if(!targetIdNode.IsNull())
    {
      m_targetId = Aws::Utils::Xml::DecodeEscapedXmlText(targetIdNode.GetText());
      m_targetIdHasBeenSet = true;
    }
    XmlNode typeArnNode = resultNode.FirstChild("TypeArn");
    if(!typeArnNode.IsNull())
    {
      m_typeArn = Aws::Utils::Xml::DecodeEscapedXmlText(typeArnNode.GetText());
      m_typeArnHasBeenSet = true;
    }
    XmlNode hookExecutionTargetNode = resultNode.FirstChild("HookExecutionTarget");
    if(!hookExecutionTargetNode.IsNull())
    {
      m_hookExecutionTarget = Aws::Utils::Xml::DecodeEscapedXmlText(hookExecutionTargetNode.GetText());
      m_hookExecutionTargetHasBeenSet = true;
    }
  }

  return *this;
}

void HookResultSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_hookResultIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HookResultId=" << StringUtils::URLEncode(m_hookResultId.c_str()) << "&";
  }

  if(m_invocationPointHasBeenSet)
  {
      oStream << location << index << locationValue << ".InvocationPoint=" << StringUtils::URLEncode(HookInvocationPointMapper::GetNameForHookInvocationPoint(m_invocationPoint)) << "&";
  }

  if(m_failureModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureMode=" << StringUtils::URLEncode(HookFailureModeMapper::GetNameForHookFailureMode(m_failureMode)) << "&";
  }

  if(m_typeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }

  if(m_typeVersionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeVersionId=" << StringUtils::URLEncode(m_typeVersionId.c_str()) << "&";
  }

  if(m_typeConfigurationVersionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeConfigurationVersionId=" << StringUtils::URLEncode(m_typeConfigurationVersionId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(HookStatusMapper::GetNameForHookStatus(m_status)) << "&";
  }

  if(m_hookStatusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".HookStatusReason=" << StringUtils::URLEncode(m_hookStatusReason.c_str()) << "&";
  }

  if(m_invokedAtHasBeenSet)
  {
      oStream << location << index << locationValue << ".InvokedAt=" << StringUtils::URLEncode(m_invokedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_targetTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetType=" << StringUtils::URLEncode(ListHookResultsTargetTypeMapper::GetNameForListHookResultsTargetType(m_targetType)) << "&";
  }

  if(m_targetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetId=" << StringUtils::URLEncode(m_targetId.c_str()) << "&";
  }

  if(m_typeArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeArn=" << StringUtils::URLEncode(m_typeArn.c_str()) << "&";
  }

  if(m_hookExecutionTargetHasBeenSet)
  {
      oStream << location << index << locationValue << ".HookExecutionTarget=" << StringUtils::URLEncode(m_hookExecutionTarget.c_str()) << "&";
  }

}

void HookResultSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_hookResultIdHasBeenSet)
  {
      oStream << location << ".HookResultId=" << StringUtils::URLEncode(m_hookResultId.c_str()) << "&";
  }
  if(m_invocationPointHasBeenSet)
  {
      oStream << location << ".InvocationPoint=" << StringUtils::URLEncode(HookInvocationPointMapper::GetNameForHookInvocationPoint(m_invocationPoint)) << "&";
  }
  if(m_failureModeHasBeenSet)
  {
      oStream << location << ".FailureMode=" << StringUtils::URLEncode(HookFailureModeMapper::GetNameForHookFailureMode(m_failureMode)) << "&";
  }
  if(m_typeNameHasBeenSet)
  {
      oStream << location << ".TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }
  if(m_typeVersionIdHasBeenSet)
  {
      oStream << location << ".TypeVersionId=" << StringUtils::URLEncode(m_typeVersionId.c_str()) << "&";
  }
  if(m_typeConfigurationVersionIdHasBeenSet)
  {
      oStream << location << ".TypeConfigurationVersionId=" << StringUtils::URLEncode(m_typeConfigurationVersionId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(HookStatusMapper::GetNameForHookStatus(m_status)) << "&";
  }
  if(m_hookStatusReasonHasBeenSet)
  {
      oStream << location << ".HookStatusReason=" << StringUtils::URLEncode(m_hookStatusReason.c_str()) << "&";
  }
  if(m_invokedAtHasBeenSet)
  {
      oStream << location << ".InvokedAt=" << StringUtils::URLEncode(m_invokedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_targetTypeHasBeenSet)
  {
      oStream << location << ".TargetType=" << StringUtils::URLEncode(ListHookResultsTargetTypeMapper::GetNameForListHookResultsTargetType(m_targetType)) << "&";
  }
  if(m_targetIdHasBeenSet)
  {
      oStream << location << ".TargetId=" << StringUtils::URLEncode(m_targetId.c_str()) << "&";
  }
  if(m_typeArnHasBeenSet)
  {
      oStream << location << ".TypeArn=" << StringUtils::URLEncode(m_typeArn.c_str()) << "&";
  }
  if(m_hookExecutionTargetHasBeenSet)
  {
      oStream << location << ".HookExecutionTarget=" << StringUtils::URLEncode(m_hookExecutionTarget.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
