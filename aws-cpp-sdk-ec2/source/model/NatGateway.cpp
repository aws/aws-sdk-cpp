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

#include <aws/ec2/model/NatGateway.h>
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

NatGateway::NatGateway() : 
    m_createTimeHasBeenSet(false),
    m_deleteTimeHasBeenSet(false),
    m_failureCodeHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_natGatewayAddressesHasBeenSet(false),
    m_natGatewayIdHasBeenSet(false),
    m_provisionedBandwidthHasBeenSet(false),
    m_state(NatGatewayState::NOT_SET),
    m_stateHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

NatGateway::NatGateway(const XmlNode& xmlNode) : 
    m_createTimeHasBeenSet(false),
    m_deleteTimeHasBeenSet(false),
    m_failureCodeHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_natGatewayAddressesHasBeenSet(false),
    m_natGatewayIdHasBeenSet(false),
    m_provisionedBandwidthHasBeenSet(false),
    m_state(NatGatewayState::NOT_SET),
    m_stateHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

NatGateway& NatGateway::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(createTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode deleteTimeNode = resultNode.FirstChild("deleteTime");
    if(!deleteTimeNode.IsNull())
    {
      m_deleteTime = DateTime(StringUtils::Trim(deleteTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_deleteTimeHasBeenSet = true;
    }
    XmlNode failureCodeNode = resultNode.FirstChild("failureCode");
    if(!failureCodeNode.IsNull())
    {
      m_failureCode = failureCodeNode.GetText();
      m_failureCodeHasBeenSet = true;
    }
    XmlNode failureMessageNode = resultNode.FirstChild("failureMessage");
    if(!failureMessageNode.IsNull())
    {
      m_failureMessage = failureMessageNode.GetText();
      m_failureMessageHasBeenSet = true;
    }
    XmlNode natGatewayAddressesNode = resultNode.FirstChild("natGatewayAddressSet");
    if(!natGatewayAddressesNode.IsNull())
    {
      XmlNode natGatewayAddressesMember = natGatewayAddressesNode.FirstChild("item");
      while(!natGatewayAddressesMember.IsNull())
      {
        m_natGatewayAddresses.push_back(natGatewayAddressesMember);
        natGatewayAddressesMember = natGatewayAddressesMember.NextNode("item");
      }

      m_natGatewayAddressesHasBeenSet = true;
    }
    XmlNode natGatewayIdNode = resultNode.FirstChild("natGatewayId");
    if(!natGatewayIdNode.IsNull())
    {
      m_natGatewayId = natGatewayIdNode.GetText();
      m_natGatewayIdHasBeenSet = true;
    }
    XmlNode provisionedBandwidthNode = resultNode.FirstChild("provisionedBandwidth");
    if(!provisionedBandwidthNode.IsNull())
    {
      m_provisionedBandwidth = provisionedBandwidthNode;
      m_provisionedBandwidthHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = NatGatewayStateMapper::GetNatGatewayStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = subnetIdNode.GetText();
      m_subnetIdHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
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

void NatGateway::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_deleteTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeleteTime=" << StringUtils::URLEncode(m_deleteTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_failureCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureCode=" << StringUtils::URLEncode(m_failureCode.c_str()) << "&";
  }

  if(m_failureMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureMessage=" << StringUtils::URLEncode(m_failureMessage.c_str()) << "&";
  }

  if(m_natGatewayAddressesHasBeenSet)
  {
      unsigned natGatewayAddressesIdx = 1;
      for(auto& item : m_natGatewayAddresses)
      {
        Aws::StringStream natGatewayAddressesSs;
        natGatewayAddressesSs << location << index << locationValue << ".NatGatewayAddressSet." << natGatewayAddressesIdx++;
        item.OutputToStream(oStream, natGatewayAddressesSs.str().c_str());
      }
  }

  if(m_natGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NatGatewayId=" << StringUtils::URLEncode(m_natGatewayId.c_str()) << "&";
  }

  if(m_provisionedBandwidthHasBeenSet)
  {
      Aws::StringStream provisionedBandwidthLocationAndMemberSs;
      provisionedBandwidthLocationAndMemberSs << location << index << locationValue << ".ProvisionedBandwidth";
      m_provisionedBandwidth.OutputToStream(oStream, provisionedBandwidthLocationAndMemberSs.str().c_str());
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << NatGatewayStateMapper::GetNameForNatGatewayState(m_state) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
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

void NatGateway::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_deleteTimeHasBeenSet)
  {
      oStream << location << ".DeleteTime=" << StringUtils::URLEncode(m_deleteTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_failureCodeHasBeenSet)
  {
      oStream << location << ".FailureCode=" << StringUtils::URLEncode(m_failureCode.c_str()) << "&";
  }
  if(m_failureMessageHasBeenSet)
  {
      oStream << location << ".FailureMessage=" << StringUtils::URLEncode(m_failureMessage.c_str()) << "&";
  }
  if(m_natGatewayAddressesHasBeenSet)
  {
      unsigned natGatewayAddressesIdx = 1;
      for(auto& item : m_natGatewayAddresses)
      {
        Aws::StringStream natGatewayAddressesSs;
        natGatewayAddressesSs << location <<  ".NatGatewayAddressSet." << natGatewayAddressesIdx++;
        item.OutputToStream(oStream, natGatewayAddressesSs.str().c_str());
      }
  }
  if(m_natGatewayIdHasBeenSet)
  {
      oStream << location << ".NatGatewayId=" << StringUtils::URLEncode(m_natGatewayId.c_str()) << "&";
  }
  if(m_provisionedBandwidthHasBeenSet)
  {
      Aws::String provisionedBandwidthLocationAndMember(location);
      provisionedBandwidthLocationAndMember += ".ProvisionedBandwidth";
      m_provisionedBandwidth.OutputToStream(oStream, provisionedBandwidthLocationAndMember.c_str());
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << NatGatewayStateMapper::GetNameForNatGatewayState(m_state) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
