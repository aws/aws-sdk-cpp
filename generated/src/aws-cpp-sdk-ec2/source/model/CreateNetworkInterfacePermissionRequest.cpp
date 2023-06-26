/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateNetworkInterfacePermissionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateNetworkInterfacePermissionRequest::CreateNetworkInterfacePermissionRequest() : 
    m_networkInterfaceIdHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_awsServiceHasBeenSet(false),
    m_permission(InterfacePermissionType::NOT_SET),
    m_permissionHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateNetworkInterfacePermissionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateNetworkInterfacePermission&";
  if(m_networkInterfaceIdHasBeenSet)
  {
    ss << "NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_awsAccountIdHasBeenSet)
  {
    ss << "AwsAccountId=" << StringUtils::URLEncode(m_awsAccountId.c_str()) << "&";
  }

  if(m_awsServiceHasBeenSet)
  {
    ss << "AwsService=" << StringUtils::URLEncode(m_awsService.c_str()) << "&";
  }

  if(m_permissionHasBeenSet)
  {
    ss << "Permission=" << InterfacePermissionTypeMapper::GetNameForInterfacePermissionType(m_permission) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateNetworkInterfacePermissionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
