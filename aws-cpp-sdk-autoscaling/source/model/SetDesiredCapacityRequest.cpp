/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/SetDesiredCapacityRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

SetDesiredCapacityRequest::SetDesiredCapacityRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_desiredCapacity(0),
    m_desiredCapacityHasBeenSet(false),
    m_honorCooldown(false),
    m_honorCooldownHasBeenSet(false)
{
}

Aws::String SetDesiredCapacityRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetDesiredCapacity&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_desiredCapacityHasBeenSet)
  {
    ss << "DesiredCapacity=" << m_desiredCapacity << "&";
  }

  if(m_honorCooldownHasBeenSet)
  {
    ss << "HonorCooldown=" << std::boolalpha << m_honorCooldown << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  SetDesiredCapacityRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
