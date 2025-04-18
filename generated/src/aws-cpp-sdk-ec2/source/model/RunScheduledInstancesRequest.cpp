﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RunScheduledInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String RunScheduledInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RunScheduledInstances&";
  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_instanceCountHasBeenSet)
  {
    ss << "InstanceCount=" << m_instanceCount << "&";
  }

  if(m_launchSpecificationHasBeenSet)
  {
    m_launchSpecification.OutputToStream(ss, "LaunchSpecification");
  }

  if(m_scheduledInstanceIdHasBeenSet)
  {
    ss << "ScheduledInstanceId=" << StringUtils::URLEncode(m_scheduledInstanceId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  RunScheduledInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
