/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/ModifyCapacityReservationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

Aws::String ModifyCapacityReservationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyCapacityReservation&";
  if(m_loadBalancerArnHasBeenSet)
  {
    ss << "LoadBalancerArn=" << StringUtils::URLEncode(m_loadBalancerArn.c_str()) << "&";
  }

  if(m_minimumLoadBalancerCapacityHasBeenSet)
  {
    m_minimumLoadBalancerCapacity.OutputToStream(ss, "MinimumLoadBalancerCapacity");
  }

  if(m_resetCapacityReservationHasBeenSet)
  {
    ss << "ResetCapacityReservation=" << std::boolalpha << m_resetCapacityReservation << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  ModifyCapacityReservationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
