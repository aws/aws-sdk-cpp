/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SpotMaintenanceStrategies.h>
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

SpotMaintenanceStrategies::SpotMaintenanceStrategies() : 
    m_capacityRebalanceHasBeenSet(false)
{
}

SpotMaintenanceStrategies::SpotMaintenanceStrategies(const XmlNode& xmlNode) : 
    m_capacityRebalanceHasBeenSet(false)
{
  *this = xmlNode;
}

SpotMaintenanceStrategies& SpotMaintenanceStrategies::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode capacityRebalanceNode = resultNode.FirstChild("capacityRebalance");
    if(!capacityRebalanceNode.IsNull())
    {
      m_capacityRebalance = capacityRebalanceNode;
      m_capacityRebalanceHasBeenSet = true;
    }
  }

  return *this;
}

void SpotMaintenanceStrategies::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityRebalanceHasBeenSet)
  {
      Aws::StringStream capacityRebalanceLocationAndMemberSs;
      capacityRebalanceLocationAndMemberSs << location << index << locationValue << ".CapacityRebalance";
      m_capacityRebalance.OutputToStream(oStream, capacityRebalanceLocationAndMemberSs.str().c_str());
  }

}

void SpotMaintenanceStrategies::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityRebalanceHasBeenSet)
  {
      Aws::String capacityRebalanceLocationAndMember(location);
      capacityRebalanceLocationAndMember += ".CapacityRebalance";
      m_capacityRebalance.OutputToStream(oStream, capacityRebalanceLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
