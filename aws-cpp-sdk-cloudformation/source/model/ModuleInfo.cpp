/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ModuleInfo.h>
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

ModuleInfo::ModuleInfo() : 
    m_typeHierarchyHasBeenSet(false),
    m_logicalIdHierarchyHasBeenSet(false)
{
}

ModuleInfo::ModuleInfo(const XmlNode& xmlNode) : 
    m_typeHierarchyHasBeenSet(false),
    m_logicalIdHierarchyHasBeenSet(false)
{
  *this = xmlNode;
}

ModuleInfo& ModuleInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeHierarchyNode = resultNode.FirstChild("TypeHierarchy");
    if(!typeHierarchyNode.IsNull())
    {
      m_typeHierarchy = Aws::Utils::Xml::DecodeEscapedXmlText(typeHierarchyNode.GetText());
      m_typeHierarchyHasBeenSet = true;
    }
    XmlNode logicalIdHierarchyNode = resultNode.FirstChild("LogicalIdHierarchy");
    if(!logicalIdHierarchyNode.IsNull())
    {
      m_logicalIdHierarchy = Aws::Utils::Xml::DecodeEscapedXmlText(logicalIdHierarchyNode.GetText());
      m_logicalIdHierarchyHasBeenSet = true;
    }
  }

  return *this;
}

void ModuleInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typeHierarchyHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeHierarchy=" << StringUtils::URLEncode(m_typeHierarchy.c_str()) << "&";
  }

  if(m_logicalIdHierarchyHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogicalIdHierarchy=" << StringUtils::URLEncode(m_logicalIdHierarchy.c_str()) << "&";
  }

}

void ModuleInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typeHierarchyHasBeenSet)
  {
      oStream << location << ".TypeHierarchy=" << StringUtils::URLEncode(m_typeHierarchy.c_str()) << "&";
  }
  if(m_logicalIdHierarchyHasBeenSet)
  {
      oStream << location << ".LogicalIdHierarchy=" << StringUtils::URLEncode(m_logicalIdHierarchy.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
