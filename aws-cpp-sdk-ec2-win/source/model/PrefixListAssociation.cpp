/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PrefixListAssociation.h>
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

PrefixListAssociation::PrefixListAssociation() : 
    m_resourceIdHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false)
{
}

PrefixListAssociation::PrefixListAssociation(const XmlNode& xmlNode) : 
    m_resourceIdHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false)
{
  *this = xmlNode;
}

PrefixListAssociation& PrefixListAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceIdNode = resultNode.FirstChild("resourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdNode.GetText());
      m_resourceIdHasBeenSet = true;
    }
    XmlNode resourceOwnerNode = resultNode.FirstChild("resourceOwner");
    if(!resourceOwnerNode.IsNull())
    {
      m_resourceOwner = Aws::Utils::Xml::DecodeEscapedXmlText(resourceOwnerNode.GetText());
      m_resourceOwnerHasBeenSet = true;
    }
  }

  return *this;
}

void PrefixListAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if(m_resourceOwnerHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceOwner=" << StringUtils::URLEncode(m_resourceOwner.c_str()) << "&";
  }

}

void PrefixListAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if(m_resourceOwnerHasBeenSet)
  {
      oStream << location << ".ResourceOwner=" << StringUtils::URLEncode(m_resourceOwner.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
