/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackSetAutoDeploymentTargetSummary.h>
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

StackSetAutoDeploymentTargetSummary::StackSetAutoDeploymentTargetSummary() : 
    m_organizationalUnitIdHasBeenSet(false),
    m_regionsHasBeenSet(false)
{
}

StackSetAutoDeploymentTargetSummary::StackSetAutoDeploymentTargetSummary(const XmlNode& xmlNode) : 
    m_organizationalUnitIdHasBeenSet(false),
    m_regionsHasBeenSet(false)
{
  *this = xmlNode;
}

StackSetAutoDeploymentTargetSummary& StackSetAutoDeploymentTargetSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode organizationalUnitIdNode = resultNode.FirstChild("OrganizationalUnitId");
    if(!organizationalUnitIdNode.IsNull())
    {
      m_organizationalUnitId = Aws::Utils::Xml::DecodeEscapedXmlText(organizationalUnitIdNode.GetText());
      m_organizationalUnitIdHasBeenSet = true;
    }
    XmlNode regionsNode = resultNode.FirstChild("Regions");
    if(!regionsNode.IsNull())
    {
      XmlNode regionsMember = regionsNode.FirstChild("member");
      while(!regionsMember.IsNull())
      {
        m_regions.push_back(regionsMember.GetText());
        regionsMember = regionsMember.NextNode("member");
      }

      m_regionsHasBeenSet = true;
    }
  }

  return *this;
}

void StackSetAutoDeploymentTargetSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_organizationalUnitIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OrganizationalUnitId=" << StringUtils::URLEncode(m_organizationalUnitId.c_str()) << "&";
  }

  if(m_regionsHasBeenSet)
  {
      unsigned regionsIdx = 1;
      for(auto& item : m_regions)
      {
        oStream << location << index << locationValue << ".Regions.member." << regionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void StackSetAutoDeploymentTargetSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_organizationalUnitIdHasBeenSet)
  {
      oStream << location << ".OrganizationalUnitId=" << StringUtils::URLEncode(m_organizationalUnitId.c_str()) << "&";
  }
  if(m_regionsHasBeenSet)
  {
      unsigned regionsIdx = 1;
      for(auto& item : m_regions)
      {
        oStream << location << ".Regions.member." << regionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
