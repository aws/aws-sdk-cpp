/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteNetworkInterfacePermissionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteNetworkInterfacePermissionRequest::DeleteNetworkInterfacePermissionRequest() : 
    m_networkInterfacePermissionIdHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DeleteNetworkInterfacePermissionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteNetworkInterfacePermission&";
  if(m_networkInterfacePermissionIdHasBeenSet)
  {
    ss << "NetworkInterfacePermissionId=" << StringUtils::URLEncode(m_networkInterfacePermissionId.c_str()) << "&";
  }

  if(m_forceHasBeenSet)
  {
    ss << "Force=" << std::boolalpha << m_force << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteNetworkInterfacePermissionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
