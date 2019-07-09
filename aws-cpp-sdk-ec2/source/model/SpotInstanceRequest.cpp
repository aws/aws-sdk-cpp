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

#include <aws/ec2/model/SpotInstanceRequest.h>
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

SpotInstanceRequest::SpotInstanceRequest() : 
    m_actualBlockHourlyPriceHasBeenSet(false),
    m_availabilityZoneGroupHasBeenSet(false),
    m_blockDurationMinutes(0),
    m_blockDurationMinutesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_faultHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_launchGroupHasBeenSet(false),
    m_launchSpecificationHasBeenSet(false),
    m_launchedAvailabilityZoneHasBeenSet(false),
    m_productDescription(RIProductDescription::NOT_SET),
    m_productDescriptionHasBeenSet(false),
    m_spotInstanceRequestIdHasBeenSet(false),
    m_spotPriceHasBeenSet(false),
    m_state(SpotInstanceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(SpotInstanceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_validFromHasBeenSet(false),
    m_validUntilHasBeenSet(false),
    m_instanceInterruptionBehavior(InstanceInterruptionBehavior::NOT_SET),
    m_instanceInterruptionBehaviorHasBeenSet(false)
{
}

SpotInstanceRequest::SpotInstanceRequest(const XmlNode& xmlNode) : 
    m_actualBlockHourlyPriceHasBeenSet(false),
    m_availabilityZoneGroupHasBeenSet(false),
    m_blockDurationMinutes(0),
    m_blockDurationMinutesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_faultHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_launchGroupHasBeenSet(false),
    m_launchSpecificationHasBeenSet(false),
    m_launchedAvailabilityZoneHasBeenSet(false),
    m_productDescription(RIProductDescription::NOT_SET),
    m_productDescriptionHasBeenSet(false),
    m_spotInstanceRequestIdHasBeenSet(false),
    m_spotPriceHasBeenSet(false),
    m_state(SpotInstanceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(SpotInstanceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_validFromHasBeenSet(false),
    m_validUntilHasBeenSet(false),
    m_instanceInterruptionBehavior(InstanceInterruptionBehavior::NOT_SET),
    m_instanceInterruptionBehaviorHasBeenSet(false)
{
  *this = xmlNode;
}

SpotInstanceRequest& SpotInstanceRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode actualBlockHourlyPriceNode = resultNode.FirstChild("actualBlockHourlyPrice");
    if(!actualBlockHourlyPriceNode.IsNull())
    {
      m_actualBlockHourlyPrice = actualBlockHourlyPriceNode.GetText();
      m_actualBlockHourlyPriceHasBeenSet = true;
    }
    XmlNode availabilityZoneGroupNode = resultNode.FirstChild("availabilityZoneGroup");
    if(!availabilityZoneGroupNode.IsNull())
    {
      m_availabilityZoneGroup = availabilityZoneGroupNode.GetText();
      m_availabilityZoneGroupHasBeenSet = true;
    }
    XmlNode blockDurationMinutesNode = resultNode.FirstChild("blockDurationMinutes");
    if(!blockDurationMinutesNode.IsNull())
    {
      m_blockDurationMinutes = StringUtils::ConvertToInt32(StringUtils::Trim(blockDurationMinutesNode.GetText().c_str()).c_str());
      m_blockDurationMinutesHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(createTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode faultNode = resultNode.FirstChild("fault");
    if(!faultNode.IsNull())
    {
      m_fault = faultNode;
      m_faultHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = instanceIdNode.GetText();
      m_instanceIdHasBeenSet = true;
    }
    XmlNode launchGroupNode = resultNode.FirstChild("launchGroup");
    if(!launchGroupNode.IsNull())
    {
      m_launchGroup = launchGroupNode.GetText();
      m_launchGroupHasBeenSet = true;
    }
    XmlNode launchSpecificationNode = resultNode.FirstChild("launchSpecification");
    if(!launchSpecificationNode.IsNull())
    {
      m_launchSpecification = launchSpecificationNode;
      m_launchSpecificationHasBeenSet = true;
    }
    XmlNode launchedAvailabilityZoneNode = resultNode.FirstChild("launchedAvailabilityZone");
    if(!launchedAvailabilityZoneNode.IsNull())
    {
      m_launchedAvailabilityZone = launchedAvailabilityZoneNode.GetText();
      m_launchedAvailabilityZoneHasBeenSet = true;
    }
    XmlNode productDescriptionNode = resultNode.FirstChild("productDescription");
    if(!productDescriptionNode.IsNull())
    {
      m_productDescription = RIProductDescriptionMapper::GetRIProductDescriptionForName(StringUtils::Trim(productDescriptionNode.GetText().c_str()).c_str());
      m_productDescriptionHasBeenSet = true;
    }
    XmlNode spotInstanceRequestIdNode = resultNode.FirstChild("spotInstanceRequestId");
    if(!spotInstanceRequestIdNode.IsNull())
    {
      m_spotInstanceRequestId = spotInstanceRequestIdNode.GetText();
      m_spotInstanceRequestIdHasBeenSet = true;
    }
    XmlNode spotPriceNode = resultNode.FirstChild("spotPrice");
    if(!spotPriceNode.IsNull())
    {
      m_spotPrice = spotPriceNode.GetText();
      m_spotPriceHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = SpotInstanceStateMapper::GetSpotInstanceStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode;
      m_statusHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = SpotInstanceTypeMapper::GetSpotInstanceTypeForName(StringUtils::Trim(typeNode.GetText().c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode validFromNode = resultNode.FirstChild("validFrom");
    if(!validFromNode.IsNull())
    {
      m_validFrom = DateTime(StringUtils::Trim(validFromNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_validFromHasBeenSet = true;
    }
    XmlNode validUntilNode = resultNode.FirstChild("validUntil");
    if(!validUntilNode.IsNull())
    {
      m_validUntil = DateTime(StringUtils::Trim(validUntilNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_validUntilHasBeenSet = true;
    }
    XmlNode instanceInterruptionBehaviorNode = resultNode.FirstChild("instanceInterruptionBehavior");
    if(!instanceInterruptionBehaviorNode.IsNull())
    {
      m_instanceInterruptionBehavior = InstanceInterruptionBehaviorMapper::GetInstanceInterruptionBehaviorForName(StringUtils::Trim(instanceInterruptionBehaviorNode.GetText().c_str()).c_str());
      m_instanceInterruptionBehaviorHasBeenSet = true;
    }
  }

  return *this;
}

void SpotInstanceRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_actualBlockHourlyPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActualBlockHourlyPrice=" << StringUtils::URLEncode(m_actualBlockHourlyPrice.c_str()) << "&";
  }

  if(m_availabilityZoneGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZoneGroup=" << StringUtils::URLEncode(m_availabilityZoneGroup.c_str()) << "&";
  }

  if(m_blockDurationMinutesHasBeenSet)
  {
      oStream << location << index << locationValue << ".BlockDurationMinutes=" << m_blockDurationMinutes << "&";
  }

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_faultHasBeenSet)
  {
      Aws::StringStream faultLocationAndMemberSs;
      faultLocationAndMemberSs << location << index << locationValue << ".Fault";
      m_fault.OutputToStream(oStream, faultLocationAndMemberSs.str().c_str());
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_launchGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchGroup=" << StringUtils::URLEncode(m_launchGroup.c_str()) << "&";
  }

  if(m_launchSpecificationHasBeenSet)
  {
      Aws::StringStream launchSpecificationLocationAndMemberSs;
      launchSpecificationLocationAndMemberSs << location << index << locationValue << ".LaunchSpecification";
      m_launchSpecification.OutputToStream(oStream, launchSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_launchedAvailabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchedAvailabilityZone=" << StringUtils::URLEncode(m_launchedAvailabilityZone.c_str()) << "&";
  }

  if(m_productDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProductDescription=" << RIProductDescriptionMapper::GetNameForRIProductDescription(m_productDescription) << "&";
  }

  if(m_spotInstanceRequestIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotInstanceRequestId=" << StringUtils::URLEncode(m_spotInstanceRequestId.c_str()) << "&";
  }

  if(m_spotPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotPrice=" << StringUtils::URLEncode(m_spotPrice.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << SpotInstanceStateMapper::GetNameForSpotInstanceState(m_state) << "&";
  }

  if(m_statusHasBeenSet)
  {
      Aws::StringStream statusLocationAndMemberSs;
      statusLocationAndMemberSs << location << index << locationValue << ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMemberSs.str().c_str());
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << SpotInstanceTypeMapper::GetNameForSpotInstanceType(m_type) << "&";
  }

  if(m_validFromHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidFrom=" << StringUtils::URLEncode(m_validFrom.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_validUntilHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_instanceInterruptionBehaviorHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceInterruptionBehavior=" << InstanceInterruptionBehaviorMapper::GetNameForInstanceInterruptionBehavior(m_instanceInterruptionBehavior) << "&";
  }

}

void SpotInstanceRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_actualBlockHourlyPriceHasBeenSet)
  {
      oStream << location << ".ActualBlockHourlyPrice=" << StringUtils::URLEncode(m_actualBlockHourlyPrice.c_str()) << "&";
  }
  if(m_availabilityZoneGroupHasBeenSet)
  {
      oStream << location << ".AvailabilityZoneGroup=" << StringUtils::URLEncode(m_availabilityZoneGroup.c_str()) << "&";
  }
  if(m_blockDurationMinutesHasBeenSet)
  {
      oStream << location << ".BlockDurationMinutes=" << m_blockDurationMinutes << "&";
  }
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_faultHasBeenSet)
  {
      Aws::String faultLocationAndMember(location);
      faultLocationAndMember += ".Fault";
      m_fault.OutputToStream(oStream, faultLocationAndMember.c_str());
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_launchGroupHasBeenSet)
  {
      oStream << location << ".LaunchGroup=" << StringUtils::URLEncode(m_launchGroup.c_str()) << "&";
  }
  if(m_launchSpecificationHasBeenSet)
  {
      Aws::String launchSpecificationLocationAndMember(location);
      launchSpecificationLocationAndMember += ".LaunchSpecification";
      m_launchSpecification.OutputToStream(oStream, launchSpecificationLocationAndMember.c_str());
  }
  if(m_launchedAvailabilityZoneHasBeenSet)
  {
      oStream << location << ".LaunchedAvailabilityZone=" << StringUtils::URLEncode(m_launchedAvailabilityZone.c_str()) << "&";
  }
  if(m_productDescriptionHasBeenSet)
  {
      oStream << location << ".ProductDescription=" << RIProductDescriptionMapper::GetNameForRIProductDescription(m_productDescription) << "&";
  }
  if(m_spotInstanceRequestIdHasBeenSet)
  {
      oStream << location << ".SpotInstanceRequestId=" << StringUtils::URLEncode(m_spotInstanceRequestId.c_str()) << "&";
  }
  if(m_spotPriceHasBeenSet)
  {
      oStream << location << ".SpotPrice=" << StringUtils::URLEncode(m_spotPrice.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << SpotInstanceStateMapper::GetNameForSpotInstanceState(m_state) << "&";
  }
  if(m_statusHasBeenSet)
  {
      Aws::String statusLocationAndMember(location);
      statusLocationAndMember += ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMember.c_str());
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << SpotInstanceTypeMapper::GetNameForSpotInstanceType(m_type) << "&";
  }
  if(m_validFromHasBeenSet)
  {
      oStream << location << ".ValidFrom=" << StringUtils::URLEncode(m_validFrom.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_validUntilHasBeenSet)
  {
      oStream << location << ".ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_instanceInterruptionBehaviorHasBeenSet)
  {
      oStream << location << ".InstanceInterruptionBehavior=" << InstanceInterruptionBehaviorMapper::GetNameForInstanceInterruptionBehavior(m_instanceInterruptionBehavior) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
