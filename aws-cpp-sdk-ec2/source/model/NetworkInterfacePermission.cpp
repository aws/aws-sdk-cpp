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

#include <aws/ec2/model/NetworkInterfacePermission.h>
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

NetworkInterfacePermission::NetworkInterfacePermission() : 
    m_networkInterfacePermissionIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_awsServiceHasBeenSet(false),
    m_permission(InterfacePermissionType::NOT_SET),
    m_permissionHasBeenSet(false),
    m_permissionStateHasBeenSet(false)
{
}

NetworkInterfacePermission::NetworkInterfacePermission(const XmlNode& xmlNode) : 
    m_networkInterfacePermissionIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_awsServiceHasBeenSet(false),
    m_permission(InterfacePermissionType::NOT_SET),
    m_permissionHasBeenSet(false),
    m_permissionStateHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkInterfacePermission& NetworkInterfacePermission::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode networkInterfacePermissionIdNode = resultNode.FirstChild("networkInterfacePermissionId");
    if(!networkInterfacePermissionIdNode.IsNull())
    {
      m_networkInterfacePermissionId = networkInterfacePermissionIdNode.GetText();
      m_networkInterfacePermissionIdHasBeenSet = true;
    }
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = networkInterfaceIdNode.GetText();
      m_networkInterfaceIdHasBeenSet = true;
    }
    XmlNode awsAccountIdNode = resultNode.FirstChild("awsAccountId");
    if(!awsAccountIdNode.IsNull())
    {
      m_awsAccountId = awsAccountIdNode.GetText();
      m_awsAccountIdHasBeenSet = true;
    }
    XmlNode awsServiceNode = resultNode.FirstChild("awsService");
    if(!awsServiceNode.IsNull())
    {
      m_awsService = awsServiceNode.GetText();
      m_awsServiceHasBeenSet = true;
    }
    XmlNode permissionNode = resultNode.FirstChild("permission");
    if(!permissionNode.IsNull())
    {
      m_permission = InterfacePermissionTypeMapper::GetInterfacePermissionTypeForName(StringUtils::Trim(permissionNode.GetText().c_str()).c_str());
      m_permissionHasBeenSet = true;
    }
    XmlNode permissionStateNode = resultNode.FirstChild("permissionState");
    if(!permissionStateNode.IsNull())
    {
      m_permissionState = permissionStateNode;
      m_permissionStateHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkInterfacePermission::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_networkInterfacePermissionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfacePermissionId=" << StringUtils::URLEncode(m_networkInterfacePermissionId.c_str()) << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_awsAccountIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AwsAccountId=" << StringUtils::URLEncode(m_awsAccountId.c_str()) << "&";
  }

  if(m_awsServiceHasBeenSet)
  {
      oStream << location << index << locationValue << ".AwsService=" << StringUtils::URLEncode(m_awsService.c_str()) << "&";
  }

  if(m_permissionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Permission=" << InterfacePermissionTypeMapper::GetNameForInterfacePermissionType(m_permission) << "&";
  }

  if(m_permissionStateHasBeenSet)
  {
      Aws::StringStream permissionStateLocationAndMemberSs;
      permissionStateLocationAndMemberSs << location << index << locationValue << ".PermissionState";
      m_permissionState.OutputToStream(oStream, permissionStateLocationAndMemberSs.str().c_str());
  }

}

void NetworkInterfacePermission::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_networkInterfacePermissionIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfacePermissionId=" << StringUtils::URLEncode(m_networkInterfacePermissionId.c_str()) << "&";
  }
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
  if(m_awsAccountIdHasBeenSet)
  {
      oStream << location << ".AwsAccountId=" << StringUtils::URLEncode(m_awsAccountId.c_str()) << "&";
  }
  if(m_awsServiceHasBeenSet)
  {
      oStream << location << ".AwsService=" << StringUtils::URLEncode(m_awsService.c_str()) << "&";
  }
  if(m_permissionHasBeenSet)
  {
      oStream << location << ".Permission=" << InterfacePermissionTypeMapper::GetNameForInterfacePermissionType(m_permission) << "&";
  }
  if(m_permissionStateHasBeenSet)
  {
      Aws::String permissionStateLocationAndMember(location);
      permissionStateLocationAndMember += ".PermissionState";
      m_permissionState.OutputToStream(oStream, permissionStateLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
