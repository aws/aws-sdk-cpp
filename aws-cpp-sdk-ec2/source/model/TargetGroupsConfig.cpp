/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TargetGroupsConfig.h>
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

TargetGroupsConfig::TargetGroupsConfig() : 
    m_targetGroupsHasBeenSet(false)
{
}

TargetGroupsConfig::TargetGroupsConfig(const XmlNode& xmlNode) : 
    m_targetGroupsHasBeenSet(false)
{
  *this = xmlNode;
}

TargetGroupsConfig& TargetGroupsConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode targetGroupsNode = resultNode.FirstChild("targetGroups");
    if(!targetGroupsNode.IsNull())
    {
      XmlNode targetGroupsMember = targetGroupsNode.FirstChild("item");
      while(!targetGroupsMember.IsNull())
      {
        m_targetGroups.push_back(targetGroupsMember);
        targetGroupsMember = targetGroupsMember.NextNode("item");
      }

      m_targetGroupsHasBeenSet = true;
    }
  }

  return *this;
}

void TargetGroupsConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_targetGroupsHasBeenSet)
  {
      unsigned targetGroupsIdx = 1;
      for(auto& item : m_targetGroups)
      {
        Aws::StringStream targetGroupsSs;
        targetGroupsSs << location << index << locationValue << ".TargetGroups." << targetGroupsIdx++;
        item.OutputToStream(oStream, targetGroupsSs.str().c_str());
      }
  }

}

void TargetGroupsConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_targetGroupsHasBeenSet)
  {
      unsigned targetGroupsIdx = 1;
      for(auto& item : m_targetGroups)
      {
        Aws::StringStream targetGroupsSs;
        targetGroupsSs << location <<  ".TargetGroups." << targetGroupsIdx++;
        item.OutputToStream(oStream, targetGroupsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
