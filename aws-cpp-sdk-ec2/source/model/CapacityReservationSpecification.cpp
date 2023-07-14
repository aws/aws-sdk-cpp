/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationSpecification.h>
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

CapacityReservationSpecification::CapacityReservationSpecification() : 
    m_capacityReservationPreference(CapacityReservationPreference::NOT_SET),
    m_capacityReservationPreferenceHasBeenSet(false),
    m_capacityReservationTargetHasBeenSet(false)
{
}

CapacityReservationSpecification::CapacityReservationSpecification(const XmlNode& xmlNode) : 
    m_capacityReservationPreference(CapacityReservationPreference::NOT_SET),
    m_capacityReservationPreferenceHasBeenSet(false),
    m_capacityReservationTargetHasBeenSet(false)
{
  *this = xmlNode;
}

CapacityReservationSpecification& CapacityReservationSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode capacityReservationPreferenceNode = resultNode.FirstChild("CapacityReservationPreference");
    if(!capacityReservationPreferenceNode.IsNull())
    {
      m_capacityReservationPreference = CapacityReservationPreferenceMapper::GetCapacityReservationPreferenceForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationPreferenceNode.GetText()).c_str()).c_str());
      m_capacityReservationPreferenceHasBeenSet = true;
    }
    XmlNode capacityReservationTargetNode = resultNode.FirstChild("CapacityReservationTarget");
    if(!capacityReservationTargetNode.IsNull())
    {
      m_capacityReservationTarget = capacityReservationTargetNode;
      m_capacityReservationTargetHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityReservationSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityReservationPreferenceHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityReservationPreference=" << CapacityReservationPreferenceMapper::GetNameForCapacityReservationPreference(m_capacityReservationPreference) << "&";
  }

  if(m_capacityReservationTargetHasBeenSet)
  {
      Aws::StringStream capacityReservationTargetLocationAndMemberSs;
      capacityReservationTargetLocationAndMemberSs << location << index << locationValue << ".CapacityReservationTarget";
      m_capacityReservationTarget.OutputToStream(oStream, capacityReservationTargetLocationAndMemberSs.str().c_str());
  }

}

void CapacityReservationSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityReservationPreferenceHasBeenSet)
  {
      oStream << location << ".CapacityReservationPreference=" << CapacityReservationPreferenceMapper::GetNameForCapacityReservationPreference(m_capacityReservationPreference) << "&";
  }
  if(m_capacityReservationTargetHasBeenSet)
  {
      Aws::String capacityReservationTargetLocationAndMember(location);
      capacityReservationTargetLocationAndMember += ".CapacityReservationTarget";
      m_capacityReservationTarget.OutputToStream(oStream, capacityReservationTargetLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
