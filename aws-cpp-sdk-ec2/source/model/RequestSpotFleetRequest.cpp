/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RequestSpotFleetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

RequestSpotFleetRequest::RequestSpotFleetRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_spotFleetRequestConfigHasBeenSet(false)
{
}

Aws::String RequestSpotFleetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RequestSpotFleet&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_spotFleetRequestConfigHasBeenSet)
  {
    m_spotFleetRequestConfig.OutputToStream(ss, "SpotFleetRequestConfig");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  RequestSpotFleetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
