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

#include <aws/ec2/model/VpcPeeringConnection.h>
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

VpcPeeringConnection::VpcPeeringConnection() : 
    m_accepterVpcInfoHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_requesterVpcInfoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false)
{
}

VpcPeeringConnection::VpcPeeringConnection(const XmlNode& xmlNode) : 
    m_accepterVpcInfoHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_requesterVpcInfoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false)
{
  *this = xmlNode;
}

VpcPeeringConnection& VpcPeeringConnection::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accepterVpcInfoNode = resultNode.FirstChild("accepterVpcInfo");
    if(!accepterVpcInfoNode.IsNull())
    {
      m_accepterVpcInfo = accepterVpcInfoNode;
      m_accepterVpcInfoHasBeenSet = true;
    }
    XmlNode expirationTimeNode = resultNode.FirstChild("expirationTime");
    if(!expirationTimeNode.IsNull())
    {
      m_expirationTime = DateTime(StringUtils::Trim(expirationTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_expirationTimeHasBeenSet = true;
    }
    XmlNode requesterVpcInfoNode = resultNode.FirstChild("requesterVpcInfo");
    if(!requesterVpcInfoNode.IsNull())
    {
      m_requesterVpcInfo = requesterVpcInfoNode;
      m_requesterVpcInfoHasBeenSet = true;
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
    XmlNode vpcPeeringConnectionIdNode = resultNode.FirstChild("vpcPeeringConnectionId");
    if(!vpcPeeringConnectionIdNode.IsNull())
    {
      m_vpcPeeringConnectionId = vpcPeeringConnectionIdNode.GetText();
      m_vpcPeeringConnectionIdHasBeenSet = true;
    }
  }

  return *this;
}

void VpcPeeringConnection::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_accepterVpcInfoHasBeenSet)
  {
      Aws::StringStream accepterVpcInfoLocationAndMemberSs;
      accepterVpcInfoLocationAndMemberSs << location << index << locationValue << ".AccepterVpcInfo";
      m_accepterVpcInfo.OutputToStream(oStream, accepterVpcInfoLocationAndMemberSs.str().c_str());
  }

  if(m_expirationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExpirationTime=" << StringUtils::URLEncode(m_expirationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_requesterVpcInfoHasBeenSet)
  {
      Aws::StringStream requesterVpcInfoLocationAndMemberSs;
      requesterVpcInfoLocationAndMemberSs << location << index << locationValue << ".RequesterVpcInfo";
      m_requesterVpcInfo.OutputToStream(oStream, requesterVpcInfoLocationAndMemberSs.str().c_str());
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

  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcPeeringConnectionId=" << StringUtils::URLEncode(m_vpcPeeringConnectionId.c_str()) << "&";
  }

}

void VpcPeeringConnection::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_accepterVpcInfoHasBeenSet)
  {
      Aws::String accepterVpcInfoLocationAndMember(location);
      accepterVpcInfoLocationAndMember += ".AccepterVpcInfo";
      m_accepterVpcInfo.OutputToStream(oStream, accepterVpcInfoLocationAndMember.c_str());
  }
  if(m_expirationTimeHasBeenSet)
  {
      oStream << location << ".ExpirationTime=" << StringUtils::URLEncode(m_expirationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_requesterVpcInfoHasBeenSet)
  {
      Aws::String requesterVpcInfoLocationAndMember(location);
      requesterVpcInfoLocationAndMember += ".RequesterVpcInfo";
      m_requesterVpcInfo.OutputToStream(oStream, requesterVpcInfoLocationAndMember.c_str());
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
  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
      oStream << location << ".VpcPeeringConnectionId=" << StringUtils::URLEncode(m_vpcPeeringConnectionId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
