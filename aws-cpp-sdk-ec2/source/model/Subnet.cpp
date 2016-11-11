/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/Subnet.h>
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

Subnet::Subnet() : 
    m_subnetIdHasBeenSet(false),
    m_state(SubnetState::NOT_SET),
    m_stateHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_availableIpAddressCount(0),
    m_availableIpAddressCountHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_defaultForAz(false),
    m_defaultForAzHasBeenSet(false),
    m_mapPublicIpOnLaunch(false),
    m_mapPublicIpOnLaunchHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Subnet::Subnet(const XmlNode& xmlNode) : 
    m_subnetIdHasBeenSet(false),
    m_state(SubnetState::NOT_SET),
    m_stateHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_availableIpAddressCount(0),
    m_availableIpAddressCountHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_defaultForAz(false),
    m_defaultForAzHasBeenSet(false),
    m_mapPublicIpOnLaunch(false),
    m_mapPublicIpOnLaunchHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

Subnet& Subnet::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = StringUtils::Trim(subnetIdNode.GetText().c_str());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = SubnetStateMapper::GetSubnetStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = StringUtils::Trim(vpcIdNode.GetText().c_str());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode cidrBlockNode = resultNode.FirstChild("cidrBlock");
    if(!cidrBlockNode.IsNull())
    {
      m_cidrBlock = StringUtils::Trim(cidrBlockNode.GetText().c_str());
      m_cidrBlockHasBeenSet = true;
    }
    XmlNode availableIpAddressCountNode = resultNode.FirstChild("availableIpAddressCount");
    if(!availableIpAddressCountNode.IsNull())
    {
      m_availableIpAddressCount = StringUtils::ConvertToInt32(StringUtils::Trim(availableIpAddressCountNode.GetText().c_str()).c_str());
      m_availableIpAddressCountHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = StringUtils::Trim(availabilityZoneNode.GetText().c_str());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode defaultForAzNode = resultNode.FirstChild("defaultForAz");
    if(!defaultForAzNode.IsNull())
    {
      m_defaultForAz = StringUtils::ConvertToBool(StringUtils::Trim(defaultForAzNode.GetText().c_str()).c_str());
      m_defaultForAzHasBeenSet = true;
    }
    XmlNode mapPublicIpOnLaunchNode = resultNode.FirstChild("mapPublicIpOnLaunch");
    if(!mapPublicIpOnLaunchNode.IsNull())
    {
      m_mapPublicIpOnLaunch = StringUtils::ConvertToBool(StringUtils::Trim(mapPublicIpOnLaunchNode.GetText().c_str()).c_str());
      m_mapPublicIpOnLaunchHasBeenSet = true;
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
  }

  return *this;
}

void Subnet::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << SubnetStateMapper::GetNameForSubnetState(m_state) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_cidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }

  if(m_availableIpAddressCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailableIpAddressCount=" << m_availableIpAddressCount << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_defaultForAzHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultForAz=" << m_defaultForAz << "&";
  }

  if(m_mapPublicIpOnLaunchHasBeenSet)
  {
      oStream << location << index << locationValue << ".MapPublicIpOnLaunch=" << m_mapPublicIpOnLaunch << "&";
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

}

void Subnet::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << SubnetStateMapper::GetNameForSubnetState(m_state) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_cidrBlockHasBeenSet)
  {
      oStream << location << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }
  if(m_availableIpAddressCountHasBeenSet)
  {
      oStream << location << ".AvailableIpAddressCount=" << m_availableIpAddressCount << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_defaultForAzHasBeenSet)
  {
      oStream << location << ".DefaultForAz=" << m_defaultForAz << "&";
  }
  if(m_mapPublicIpOnLaunchHasBeenSet)
  {
      oStream << location << ".MapPublicIpOnLaunch=" << m_mapPublicIpOnLaunch << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".item." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
