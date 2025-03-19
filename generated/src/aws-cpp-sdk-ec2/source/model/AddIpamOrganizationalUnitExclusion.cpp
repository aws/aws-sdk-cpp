/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AddIpamOrganizationalUnitExclusion.h>
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

AddIpamOrganizationalUnitExclusion::AddIpamOrganizationalUnitExclusion(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AddIpamOrganizationalUnitExclusion& AddIpamOrganizationalUnitExclusion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode organizationsEntityPathNode = resultNode.FirstChild("OrganizationsEntityPath");
    if(!organizationsEntityPathNode.IsNull())
    {
      m_organizationsEntityPath = Aws::Utils::Xml::DecodeEscapedXmlText(organizationsEntityPathNode.GetText());
      m_organizationsEntityPathHasBeenSet = true;
    }
  }

  return *this;
}

void AddIpamOrganizationalUnitExclusion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_organizationsEntityPathHasBeenSet)
  {
      oStream << location << index << locationValue << ".OrganizationsEntityPath=" << StringUtils::URLEncode(m_organizationsEntityPath.c_str()) << "&";
  }

}

void AddIpamOrganizationalUnitExclusion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_organizationsEntityPathHasBeenSet)
  {
      oStream << location << ".OrganizationsEntityPath=" << StringUtils::URLEncode(m_organizationsEntityPath.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
