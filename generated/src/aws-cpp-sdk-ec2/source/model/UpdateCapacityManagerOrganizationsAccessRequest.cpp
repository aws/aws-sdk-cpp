/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/UpdateCapacityManagerOrganizationsAccessRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String UpdateCapacityManagerOrganizationsAccessRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateCapacityManagerOrganizationsAccess&";
  if(m_organizationsAccessHasBeenSet)
  {
    ss << "OrganizationsAccess=" << std::boolalpha << m_organizationsAccess << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  UpdateCapacityManagerOrganizationsAccessRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
