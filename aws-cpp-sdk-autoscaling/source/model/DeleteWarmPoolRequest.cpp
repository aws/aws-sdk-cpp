/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DeleteWarmPoolRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DeleteWarmPoolRequest::DeleteWarmPoolRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_forceDelete(false),
    m_forceDeleteHasBeenSet(false)
{
}

Aws::String DeleteWarmPoolRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteWarmPool&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_forceDeleteHasBeenSet)
  {
    ss << "ForceDelete=" << std::boolalpha << m_forceDelete << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DeleteWarmPoolRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
