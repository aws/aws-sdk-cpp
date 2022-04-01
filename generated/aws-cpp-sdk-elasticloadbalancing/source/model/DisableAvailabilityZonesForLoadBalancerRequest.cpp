/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/DisableAvailabilityZonesForLoadBalancerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

DisableAvailabilityZonesForLoadBalancerRequest::DisableAvailabilityZonesForLoadBalancerRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false)
{
}

Aws::String DisableAvailabilityZonesForLoadBalancerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DisableAvailabilityZonesForLoadBalancer&";
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


void  DisableAvailabilityZonesForLoadBalancerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
