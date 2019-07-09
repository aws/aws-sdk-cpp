/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/elasticache/model/ReplicationGroupPendingModifiedValues.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

ReplicationGroupPendingModifiedValues::ReplicationGroupPendingModifiedValues() : 
    m_primaryClusterIdHasBeenSet(false),
    m_automaticFailoverStatus(PendingAutomaticFailoverStatus::NOT_SET),
    m_automaticFailoverStatusHasBeenSet(false),
    m_reshardingHasBeenSet(false)
{
}

ReplicationGroupPendingModifiedValues::ReplicationGroupPendingModifiedValues(const XmlNode& xmlNode) : 
    m_primaryClusterIdHasBeenSet(false),
    m_automaticFailoverStatus(PendingAutomaticFailoverStatus::NOT_SET),
    m_automaticFailoverStatusHasBeenSet(false),
    m_reshardingHasBeenSet(false)
{
  *this = xmlNode;
}

ReplicationGroupPendingModifiedValues& ReplicationGroupPendingModifiedValues::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode primaryClusterIdNode = resultNode.FirstChild("PrimaryClusterId");
    if(!primaryClusterIdNode.IsNull())
    {
      m_primaryClusterId = primaryClusterIdNode.GetText();
      m_primaryClusterIdHasBeenSet = true;
    }
    XmlNode automaticFailoverStatusNode = resultNode.FirstChild("AutomaticFailoverStatus");
    if(!automaticFailoverStatusNode.IsNull())
    {
      m_automaticFailoverStatus = PendingAutomaticFailoverStatusMapper::GetPendingAutomaticFailoverStatusForName(StringUtils::Trim(automaticFailoverStatusNode.GetText().c_str()).c_str());
      m_automaticFailoverStatusHasBeenSet = true;
    }
    XmlNode reshardingNode = resultNode.FirstChild("Resharding");
    if(!reshardingNode.IsNull())
    {
      m_resharding = reshardingNode;
      m_reshardingHasBeenSet = true;
    }
  }

  return *this;
}

void ReplicationGroupPendingModifiedValues::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_primaryClusterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrimaryClusterId=" << StringUtils::URLEncode(m_primaryClusterId.c_str()) << "&";
  }

  if(m_automaticFailoverStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutomaticFailoverStatus=" << PendingAutomaticFailoverStatusMapper::GetNameForPendingAutomaticFailoverStatus(m_automaticFailoverStatus) << "&";
  }

  if(m_reshardingHasBeenSet)
  {
      Aws::StringStream reshardingLocationAndMemberSs;
      reshardingLocationAndMemberSs << location << index << locationValue << ".Resharding";
      m_resharding.OutputToStream(oStream, reshardingLocationAndMemberSs.str().c_str());
  }

}

void ReplicationGroupPendingModifiedValues::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_primaryClusterIdHasBeenSet)
  {
      oStream << location << ".PrimaryClusterId=" << StringUtils::URLEncode(m_primaryClusterId.c_str()) << "&";
  }
  if(m_automaticFailoverStatusHasBeenSet)
  {
      oStream << location << ".AutomaticFailoverStatus=" << PendingAutomaticFailoverStatusMapper::GetNameForPendingAutomaticFailoverStatus(m_automaticFailoverStatus) << "&";
  }
  if(m_reshardingHasBeenSet)
  {
      Aws::String reshardingLocationAndMember(location);
      reshardingLocationAndMember += ".Resharding";
      m_resharding.OutputToStream(oStream, reshardingLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
