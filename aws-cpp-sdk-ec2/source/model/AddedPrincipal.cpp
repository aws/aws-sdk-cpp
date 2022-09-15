/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AddedPrincipal.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

AddedPrincipal::AddedPrincipal() : 
    m_principalType(PrincipalType::NOT_SET),
    m_principalTypeHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_servicePermissionIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false)
{
}

AddedPrincipal::AddedPrincipal(const XmlNode& xmlNode) : 
    m_principalType(PrincipalType::NOT_SET),
    m_principalTypeHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_servicePermissionIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false)
{
  *this = xmlNode;
}

AddedPrincipal& AddedPrincipal::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode principalTypeNode = resultNode.FirstChild("principalType");
    if(!principalTypeNode.IsNull())
    {
      m_principalType = PrincipalTypeMapper::GetPrincipalTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(principalTypeNode.GetText()).c_str()).c_str());
      m_principalTypeHasBeenSet = true;
    }
    XmlNode principalNode = resultNode.FirstChild("principal");
    if(!principalNode.IsNull())
    {
      m_principal = Aws::Utils::Xml::DecodeEscapedXmlText(principalNode.GetText());
      m_principalHasBeenSet = true;
    }
    XmlNode servicePermissionIdNode = resultNode.FirstChild("servicePermissionId");
    if(!servicePermissionIdNode.IsNull())
    {
      m_servicePermissionId = Aws::Utils::Xml::DecodeEscapedXmlText(servicePermissionIdNode.GetText());
      m_servicePermissionIdHasBeenSet = true;
    }
    XmlNode serviceIdNode = resultNode.FirstChild("serviceId");
    if(!serviceIdNode.IsNull())
    {
      m_serviceId = Aws::Utils::Xml::DecodeEscapedXmlText(serviceIdNode.GetText());
      m_serviceIdHasBeenSet = true;
    }
  }

  return *this;
}

void AddedPrincipal::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_principalTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrincipalType=" << PrincipalTypeMapper::GetNameForPrincipalType(m_principalType) << "&";
  }

  if(m_principalHasBeenSet)
  {
      oStream << location << index << locationValue << ".Principal=" << StringUtils::URLEncode(m_principal.c_str()) << "&";
  }

  if(m_servicePermissionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServicePermissionId=" << StringUtils::URLEncode(m_servicePermissionId.c_str()) << "&";
  }

  if(m_serviceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }

}

void AddedPrincipal::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_principalTypeHasBeenSet)
  {
      oStream << location << ".PrincipalType=" << PrincipalTypeMapper::GetNameForPrincipalType(m_principalType) << "&";
  }
  if(m_principalHasBeenSet)
  {
      oStream << location << ".Principal=" << StringUtils::URLEncode(m_principal.c_str()) << "&";
  }
  if(m_servicePermissionIdHasBeenSet)
  {
      oStream << location << ".ServicePermissionId=" << StringUtils::URLEncode(m_servicePermissionId.c_str()) << "&";
  }
  if(m_serviceIdHasBeenSet)
  {
      oStream << location << ".ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
