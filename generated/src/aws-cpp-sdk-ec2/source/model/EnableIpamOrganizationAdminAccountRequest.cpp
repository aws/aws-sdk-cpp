/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EnableIpamOrganizationAdminAccountRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

EnableIpamOrganizationAdminAccountRequest::EnableIpamOrganizationAdminAccountRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_delegatedAdminAccountIdHasBeenSet(false)
{
}

Aws::String EnableIpamOrganizationAdminAccountRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnableIpamOrganizationAdminAccount&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_delegatedAdminAccountIdHasBeenSet)
  {
    ss << "DelegatedAdminAccountId=" << StringUtils::URLEncode(m_delegatedAdminAccountId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  EnableIpamOrganizationAdminAccountRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
