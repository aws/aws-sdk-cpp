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

HookResultSummary::HookResultSummary() : 
    m_invocationPoint(HookInvocationPoint::NOT_SET),
    m_invocationPointHasBeenSet(false),
    m_failureMode(HookFailureMode::NOT_SET),
    m_failureModeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_typeVersionIdHasBeenSet(false),
    m_typeConfigurationVersionIdHasBeenSet(false),
    m_status(HookStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_hookStatusReasonHasBeenSet(false)
{
}

HookResultSummary::HookResultSummary(const XmlNode& xmlNode)
  : HookResultSummary()
{
  *this = xmlNode;
}

HookResultSummary& HookResultSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode invocationPointNode = resultNode.FirstChild("InvocationPoint");
    if(!invocationPointNode.IsNull())
    {
      m_invocationPoint = HookInvocationPointMapper::GetHookInvocationPointForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(invocationPointNode.GetText()).c_str()).c_str());
      m_invocationPointHasBeenSet = true;
    }
    XmlNode failureModeNode = resultNode.FirstChild("FailureMode");
    if(!failureModeNode.IsNull())
    {
      m_failureMode = HookFailureModeMapper::GetHookFailureModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(failureModeNode.GetText()).c_str()).c_str());
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
      m_status = HookStatusMapper::GetHookStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode hookStatusReasonNode = resultNode.FirstChild("HookStatusReason");
    if(!hookStatusReasonNode.IsNull())
    {
      m_hookStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(hookStatusReasonNode.GetText());
      m_hookStatusReasonHasBeenSet = true;
    }
  }

  return *this;
}

void HookResultSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_invocationPointHasBeenSet)
  {
      oStream << location << index << locationValue << ".InvocationPoint=" << HookInvocationPointMapper::GetNameForHookInvocationPoint(m_invocationPoint) << "&";
  }

  if(m_failureModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureMode=" << HookFailureModeMapper::GetNameForHookFailureMode(m_failureMode) << "&";
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
      oStream << location << index << locationValue << ".Status=" << HookStatusMapper::GetNameForHookStatus(m_status) << "&";
  }

  if(m_hookStatusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".HookStatusReason=" << StringUtils::URLEncode(m_hookStatusReason.c_str()) << "&";
  }

}

void HookResultSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_invocationPointHasBeenSet)
  {
      oStream << location << ".InvocationPoint=" << HookInvocationPointMapper::GetNameForHookInvocationPoint(m_invocationPoint) << "&";
  }
  if(m_failureModeHasBeenSet)
  {
      oStream << location << ".FailureMode=" << HookFailureModeMapper::GetNameForHookFailureMode(m_failureMode) << "&";
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
      oStream << location << ".Status=" << HookStatusMapper::GetNameForHookStatus(m_status) << "&";
  }
  if(m_hookStatusReasonHasBeenSet)
  {
      oStream << location << ".HookStatusReason=" << StringUtils::URLEncode(m_hookStatusReason.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
