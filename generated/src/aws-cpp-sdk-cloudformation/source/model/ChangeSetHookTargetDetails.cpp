/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ChangeSetHookTargetDetails.h>
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

ChangeSetHookTargetDetails::ChangeSetHookTargetDetails() : 
    m_targetType(HookTargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_resourceTargetDetailsHasBeenSet(false)
{
}

ChangeSetHookTargetDetails::ChangeSetHookTargetDetails(const XmlNode& xmlNode) : 
    m_targetType(HookTargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_resourceTargetDetailsHasBeenSet(false)
{
  *this = xmlNode;
}

ChangeSetHookTargetDetails& ChangeSetHookTargetDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode targetTypeNode = resultNode.FirstChild("TargetType");
    if(!targetTypeNode.IsNull())
    {
      m_targetType = HookTargetTypeMapper::GetHookTargetTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetTypeNode.GetText()).c_str()).c_str());
      m_targetTypeHasBeenSet = true;
    }
    XmlNode resourceTargetDetailsNode = resultNode.FirstChild("ResourceTargetDetails");
    if(!resourceTargetDetailsNode.IsNull())
    {
      m_resourceTargetDetails = resourceTargetDetailsNode;
      m_resourceTargetDetailsHasBeenSet = true;
    }
  }

  return *this;
}

void ChangeSetHookTargetDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_targetTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetType=" << HookTargetTypeMapper::GetNameForHookTargetType(m_targetType) << "&";
  }

  if(m_resourceTargetDetailsHasBeenSet)
  {
      Aws::StringStream resourceTargetDetailsLocationAndMemberSs;
      resourceTargetDetailsLocationAndMemberSs << location << index << locationValue << ".ResourceTargetDetails";
      m_resourceTargetDetails.OutputToStream(oStream, resourceTargetDetailsLocationAndMemberSs.str().c_str());
  }

}

void ChangeSetHookTargetDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_targetTypeHasBeenSet)
  {
      oStream << location << ".TargetType=" << HookTargetTypeMapper::GetNameForHookTargetType(m_targetType) << "&";
  }
  if(m_resourceTargetDetailsHasBeenSet)
  {
      Aws::String resourceTargetDetailsLocationAndMember(location);
      resourceTargetDetailsLocationAndMember += ".ResourceTargetDetails";
      m_resourceTargetDetails.OutputToStream(oStream, resourceTargetDetailsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
