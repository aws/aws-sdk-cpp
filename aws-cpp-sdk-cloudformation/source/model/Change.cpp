/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/Change.h>
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

Change::Change() : 
    m_type(ChangeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_resourceChangeHasBeenSet(false)
{
}

Change::Change(const XmlNode& xmlNode) : 
    m_type(ChangeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_resourceChangeHasBeenSet(false)
{
  *this = xmlNode;
}

Change& Change::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = ChangeTypeMapper::GetChangeTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode resourceChangeNode = resultNode.FirstChild("ResourceChange");
    if(!resourceChangeNode.IsNull())
    {
      m_resourceChange = resourceChangeNode;
      m_resourceChangeHasBeenSet = true;
    }
  }

  return *this;
}

void Change::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << ChangeTypeMapper::GetNameForChangeType(m_type) << "&";
  }

  if(m_resourceChangeHasBeenSet)
  {
      Aws::StringStream resourceChangeLocationAndMemberSs;
      resourceChangeLocationAndMemberSs << location << index << locationValue << ".ResourceChange";
      m_resourceChange.OutputToStream(oStream, resourceChangeLocationAndMemberSs.str().c_str());
  }

}

void Change::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << ChangeTypeMapper::GetNameForChangeType(m_type) << "&";
  }
  if(m_resourceChangeHasBeenSet)
  {
      Aws::String resourceChangeLocationAndMember(location);
      resourceChangeLocationAndMember += ".ResourceChange";
      m_resourceChange.OutputToStream(oStream, resourceChangeLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
