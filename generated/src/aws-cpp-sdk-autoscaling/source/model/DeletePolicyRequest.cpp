/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DeletePolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DeletePolicyRequest::DeletePolicyRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_policyNameHasBeenSet(false)
{
}

Aws::String DeletePolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeletePolicy&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_policyNameHasBeenSet)
  {
    ss << "PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DeletePolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
