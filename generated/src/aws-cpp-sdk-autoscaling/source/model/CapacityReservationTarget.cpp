/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/CapacityReservationTarget.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

CapacityReservationTarget::CapacityReservationTarget(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CapacityReservationTarget& CapacityReservationTarget::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode capacityReservationIdsNode = resultNode.FirstChild("CapacityReservationIds");
    if(!capacityReservationIdsNode.IsNull())
    {
      XmlNode capacityReservationIdsMember = capacityReservationIdsNode.FirstChild("member");
      m_capacityReservationIdsHasBeenSet = !capacityReservationIdsMember.IsNull();
      while(!capacityReservationIdsMember.IsNull())
      {
        m_capacityReservationIds.push_back(capacityReservationIdsMember.GetText());
        capacityReservationIdsMember = capacityReservationIdsMember.NextNode("member");
      }

      m_capacityReservationIdsHasBeenSet = true;
    }
    XmlNode capacityReservationResourceGroupArnsNode = resultNode.FirstChild("CapacityReservationResourceGroupArns");
    if(!capacityReservationResourceGroupArnsNode.IsNull())
    {
      XmlNode capacityReservationResourceGroupArnsMember = capacityReservationResourceGroupArnsNode.FirstChild("member");
      m_capacityReservationResourceGroupArnsHasBeenSet = !capacityReservationResourceGroupArnsMember.IsNull();
      while(!capacityReservationResourceGroupArnsMember.IsNull())
      {
        m_capacityReservationResourceGroupArns.push_back(capacityReservationResourceGroupArnsMember.GetText());
        capacityReservationResourceGroupArnsMember = capacityReservationResourceGroupArnsMember.NextNode("member");
      }

      m_capacityReservationResourceGroupArnsHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityReservationTarget::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityReservationIdsHasBeenSet)
  {
      unsigned capacityReservationIdsIdx = 1;
      for(auto& item : m_capacityReservationIds)
      {
        oStream << location << index << locationValue << ".CapacityReservationIds.member." << capacityReservationIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_capacityReservationResourceGroupArnsHasBeenSet)
  {
      unsigned capacityReservationResourceGroupArnsIdx = 1;
      for(auto& item : m_capacityReservationResourceGroupArns)
      {
        oStream << location << index << locationValue << ".CapacityReservationResourceGroupArns.member." << capacityReservationResourceGroupArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void CapacityReservationTarget::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityReservationIdsHasBeenSet)
  {
      unsigned capacityReservationIdsIdx = 1;
      for(auto& item : m_capacityReservationIds)
      {
        oStream << location << ".CapacityReservationIds.member." << capacityReservationIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_capacityReservationResourceGroupArnsHasBeenSet)
  {
      unsigned capacityReservationResourceGroupArnsIdx = 1;
      for(auto& item : m_capacityReservationResourceGroupArns)
      {
        oStream << location << ".CapacityReservationResourceGroupArns.member." << capacityReservationResourceGroupArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
