/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ChangeSetHook.h>
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

ChangeSetHook::ChangeSetHook() : 
    m_invocationPoint(HookInvocationPoint::NOT_SET),
    m_invocationPointHasBeenSet(false),
    m_failureMode(HookFailureMode::NOT_SET),
    m_failureModeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_typeVersionIdHasBeenSet(false),
    m_typeConfigurationVersionIdHasBeenSet(false),
    m_targetDetailsHasBeenSet(false)
{
}

ChangeSetHook::ChangeSetHook(const XmlNode& xmlNode) : 
    m_invocationPoint(HookInvocationPoint::NOT_SET),
    m_invocationPointHasBeenSet(false),
    m_failureMode(HookFailureMode::NOT_SET),
    m_failureModeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_typeVersionIdHasBeenSet(false),
    m_typeConfigurationVersionIdHasBeenSet(false),
    m_targetDetailsHasBeenSet(false)
{
  *this = xmlNode;
}

ChangeSetHook& ChangeSetHook::operator =(const XmlNode& xmlNode)
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
    XmlNode targetDetailsNode = resultNode.FirstChild("TargetDetails");
    if(!targetDetailsNode.IsNull())
    {
      m_targetDetails = targetDetailsNode;
      m_targetDetailsHasBeenSet = true;
    }
  }

  return *this;
}

void ChangeSetHook::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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

  if(m_targetDetailsHasBeenSet)
  {
      Aws::StringStream targetDetailsLocationAndMemberSs;
      targetDetailsLocationAndMemberSs << location << index << locationValue << ".TargetDetails";
      m_targetDetails.OutputToStream(oStream, targetDetailsLocationAndMemberSs.str().c_str());
  }

}

void ChangeSetHook::OutputToStream(Aws::OStream& oStream, const char* location) const
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
  if(m_targetDetailsHasBeenSet)
  {
      Aws::String targetDetailsLocationAndMember(location);
      targetDetailsLocationAndMember += ".TargetDetails";
      m_targetDetails.OutputToStream(oStream, targetDetailsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
