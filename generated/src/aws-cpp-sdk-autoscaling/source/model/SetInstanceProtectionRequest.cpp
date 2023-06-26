/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/SetInstanceProtectionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

SetInstanceProtectionRequest::SetInstanceProtectionRequest() : 
    m_instanceIdsHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_protectedFromScaleIn(false),
    m_protectedFromScaleInHasBeenSet(false)
{
}

Aws::String SetInstanceProtectionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetInstanceProtection&";
  if(m_instanceIdsHasBeenSet)
  {
    unsigned instanceIdsCount = 1;
    for(auto& item : m_instanceIds)
    {
      ss << "InstanceIds.member." << instanceIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      instanceIdsCount++;
    }
  }

  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_protectedFromScaleInHasBeenSet)
  {
    ss << "ProtectedFromScaleIn=" << std::boolalpha << m_protectedFromScaleIn << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  SetInstanceProtectionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
