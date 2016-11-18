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
#include <aws/rds/model/EC2SecurityGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

EC2SecurityGroup::EC2SecurityGroup() : 
    m_statusHasBeenSet(false),
    m_eC2SecurityGroupNameHasBeenSet(false),
    m_eC2SecurityGroupIdHasBeenSet(false),
    m_eC2SecurityGroupOwnerIdHasBeenSet(false)
{
}

EC2SecurityGroup::EC2SecurityGroup(const XmlNode& xmlNode) : 
    m_statusHasBeenSet(false),
    m_eC2SecurityGroupNameHasBeenSet(false),
    m_eC2SecurityGroupIdHasBeenSet(false),
    m_eC2SecurityGroupOwnerIdHasBeenSet(false)
{
  *this = xmlNode;
}

EC2SecurityGroup& EC2SecurityGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StringUtils::Trim(statusNode.GetText().c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode eC2SecurityGroupNameNode = resultNode.FirstChild("EC2SecurityGroupName");
    if(!eC2SecurityGroupNameNode.IsNull())
    {
      m_eC2SecurityGroupName = StringUtils::Trim(eC2SecurityGroupNameNode.GetText().c_str());
      m_eC2SecurityGroupNameHasBeenSet = true;
    }
    XmlNode eC2SecurityGroupIdNode = resultNode.FirstChild("EC2SecurityGroupId");
    if(!eC2SecurityGroupIdNode.IsNull())
    {
      m_eC2SecurityGroupId = StringUtils::Trim(eC2SecurityGroupIdNode.GetText().c_str());
      m_eC2SecurityGroupIdHasBeenSet = true;
    }
    XmlNode eC2SecurityGroupOwnerIdNode = resultNode.FirstChild("EC2SecurityGroupOwnerId");
    if(!eC2SecurityGroupOwnerIdNode.IsNull())
    {
      m_eC2SecurityGroupOwnerId = StringUtils::Trim(eC2SecurityGroupOwnerIdNode.GetText().c_str());
      m_eC2SecurityGroupOwnerIdHasBeenSet = true;
    }
  }

  return *this;
}

void EC2SecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_eC2SecurityGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EC2SecurityGroupName=" << StringUtils::URLEncode(m_eC2SecurityGroupName.c_str()) << "&";
  }

  if(m_eC2SecurityGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".EC2SecurityGroupId=" << StringUtils::URLEncode(m_eC2SecurityGroupId.c_str()) << "&";
  }

  if(m_eC2SecurityGroupOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".EC2SecurityGroupOwnerId=" << StringUtils::URLEncode(m_eC2SecurityGroupOwnerId.c_str()) << "&";
  }

}

void EC2SecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_eC2SecurityGroupNameHasBeenSet)
  {
      oStream << location << ".EC2SecurityGroupName=" << StringUtils::URLEncode(m_eC2SecurityGroupName.c_str()) << "&";
  }
  if(m_eC2SecurityGroupIdHasBeenSet)
  {
      oStream << location << ".EC2SecurityGroupId=" << StringUtils::URLEncode(m_eC2SecurityGroupId.c_str()) << "&";
  }
  if(m_eC2SecurityGroupOwnerIdHasBeenSet)
  {
      oStream << location << ".EC2SecurityGroupOwnerId=" << StringUtils::URLEncode(m_eC2SecurityGroupOwnerId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
