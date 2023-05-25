/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ChangeSetHookResourceTargetDetails.h>
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

ChangeSetHookResourceTargetDetails::ChangeSetHookResourceTargetDetails() : 
    m_logicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceAction(ChangeAction::NOT_SET),
    m_resourceActionHasBeenSet(false)
{
}

ChangeSetHookResourceTargetDetails::ChangeSetHookResourceTargetDetails(const XmlNode& xmlNode) : 
    m_logicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceAction(ChangeAction::NOT_SET),
    m_resourceActionHasBeenSet(false)
{
  *this = xmlNode;
}

ChangeSetHookResourceTargetDetails& ChangeSetHookResourceTargetDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode logicalResourceIdNode = resultNode.FirstChild("LogicalResourceId");
    if(!logicalResourceIdNode.IsNull())
    {
      m_logicalResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(logicalResourceIdNode.GetText());
      m_logicalResourceIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("ResourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode resourceActionNode = resultNode.FirstChild("ResourceAction");
    if(!resourceActionNode.IsNull())
    {
      m_resourceAction = ChangeActionMapper::GetChangeActionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceActionNode.GetText()).c_str()).c_str());
      m_resourceActionHasBeenSet = true;
    }
  }

  return *this;
}

void ChangeSetHookResourceTargetDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_logicalResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }

  if(m_resourceActionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceAction=" << ChangeActionMapper::GetNameForChangeAction(m_resourceAction) << "&";
  }

}

void ChangeSetHookResourceTargetDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_logicalResourceIdHasBeenSet)
  {
      oStream << location << ".LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }
  if(m_resourceActionHasBeenSet)
  {
      oStream << location << ".ResourceAction=" << ChangeActionMapper::GetNameForChangeAction(m_resourceAction) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
