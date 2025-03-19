/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/PutWarmPoolRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

Aws::String PutWarmPoolRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutWarmPool&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_maxGroupPreparedCapacityHasBeenSet)
  {
    ss << "MaxGroupPreparedCapacity=" << m_maxGroupPreparedCapacity << "&";
  }

  if(m_minSizeHasBeenSet)
  {
    ss << "MinSize=" << m_minSize << "&";
  }

  if(m_poolStateHasBeenSet)
  {
    ss << "PoolState=" << StringUtils::URLEncode(WarmPoolStateMapper::GetNameForWarmPoolState(m_poolState)) << "&";
  }

  if(m_instanceReusePolicyHasBeenSet)
  {
    m_instanceReusePolicy.OutputToStream(ss, "InstanceReusePolicy");
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  PutWarmPoolRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
