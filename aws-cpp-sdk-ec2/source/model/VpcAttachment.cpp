﻿/*
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
#include <aws/ec2/model/VpcAttachment.h>
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

VpcAttachment::VpcAttachment() : 
    m_vpcIdHasBeenSet(false),
    m_state(AttachmentStatus::NOT_SET),
    m_stateHasBeenSet(false)
{
}

VpcAttachment::VpcAttachment(const XmlNode& xmlNode) : 
    m_vpcIdHasBeenSet(false),
    m_state(AttachmentStatus::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

VpcAttachment& VpcAttachment::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = StringUtils::Trim(vpcIdNode.GetText().c_str());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = AttachmentStatusMapper::GetAttachmentStatusForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void VpcAttachment::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << AttachmentStatusMapper::GetNameForAttachmentStatus(m_state) << "&";
  }

}

void VpcAttachment::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << AttachmentStatusMapper::GetNameForAttachmentStatus(m_state) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
