/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstanceNetworkPerformanceOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyInstanceNetworkPerformanceOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyInstanceNetworkPerformanceOptions&";
  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_bandwidthWeightingHasBeenSet)
  {
    ss << "BandwidthWeighting=" << StringUtils::URLEncode(InstanceBandwidthWeightingMapper::GetNameForInstanceBandwidthWeighting(m_bandwidthWeighting)) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyInstanceNetworkPerformanceOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
