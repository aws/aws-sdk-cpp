/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessInstanceCustomSubDomain.h>
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

VerifiedAccessInstanceCustomSubDomain::VerifiedAccessInstanceCustomSubDomain(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

VerifiedAccessInstanceCustomSubDomain& VerifiedAccessInstanceCustomSubDomain::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subDomainNode = resultNode.FirstChild("subDomain");
    if(!subDomainNode.IsNull())
    {
      m_subDomain = Aws::Utils::Xml::DecodeEscapedXmlText(subDomainNode.GetText());
      m_subDomainHasBeenSet = true;
    }
    XmlNode nameserversNode = resultNode.FirstChild("nameserverSet");
    if(!nameserversNode.IsNull())
    {
      XmlNode nameserversMember = nameserversNode.FirstChild("item");
      m_nameserversHasBeenSet = !nameserversMember.IsNull();
      while(!nameserversMember.IsNull())
      {
        m_nameservers.push_back(nameserversMember.GetText());
        nameserversMember = nameserversMember.NextNode("item");
      }

      m_nameserversHasBeenSet = true;
    }
  }

  return *this;
}

void VerifiedAccessInstanceCustomSubDomain::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subDomainHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubDomain=" << StringUtils::URLEncode(m_subDomain.c_str()) << "&";
  }

  if(m_nameserversHasBeenSet)
  {
      unsigned nameserversIdx = 1;
      for(auto& item : m_nameservers)
      {
        oStream << location << index << locationValue << ".NameserverSet." << nameserversIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void VerifiedAccessInstanceCustomSubDomain::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subDomainHasBeenSet)
  {
      oStream << location << ".SubDomain=" << StringUtils::URLEncode(m_subDomain.c_str()) << "&";
  }
  if(m_nameserversHasBeenSet)
  {
      unsigned nameserversIdx = 1;
      for(auto& item : m_nameservers)
      {
        oStream << location << ".NameserverSet." << nameserversIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
