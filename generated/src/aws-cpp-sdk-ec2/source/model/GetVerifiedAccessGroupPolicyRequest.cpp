/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetVerifiedAccessGroupPolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

GetVerifiedAccessGroupPolicyRequest::GetVerifiedAccessGroupPolicyRequest() : 
    m_verifiedAccessGroupIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String GetVerifiedAccessGroupPolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetVerifiedAccessGroupPolicy&";
  if(m_verifiedAccessGroupIdHasBeenSet)
  {
    ss << "VerifiedAccessGroupId=" << StringUtils::URLEncode(m_verifiedAccessGroupId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetVerifiedAccessGroupPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
