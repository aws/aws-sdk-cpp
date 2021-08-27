/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/EnableAvailabilityZonesForLoadBalancerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

EnableAvailabilityZonesForLoadBalancerRequest::EnableAvailabilityZonesForLoadBalancerRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false)
{
}

Aws::String EnableAvailabilityZonesForLoadBalancerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnableAvailabilityZonesForLoadBalancer&";
  if(m_loadBalancerNameHasBeenSet)
  {
    ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_availabilityZonesHasBeenSet)
  {
    unsigned availabilityZonesCount = 1;
    for(auto& item : m_availabilityZones)
    {
      ss << "AvailabilityZones.member." << availabilityZonesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      availabilityZonesCount++;
    }
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  EnableAvailabilityZonesForLoadBalancerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
