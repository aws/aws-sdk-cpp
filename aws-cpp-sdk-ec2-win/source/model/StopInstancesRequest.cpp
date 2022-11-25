/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/StopInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

StopInstancesRequest::StopInstancesRequest() : 
    m_instanceIdsHasBeenSet(false),
    m_hibernate(false),
    m_hibernateHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false)
{
}

Aws::String StopInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StopInstances&";
  if(m_instanceIdsHasBeenSet)
  {
    unsigned instanceIdsCount = 1;
    for(auto& item : m_instanceIds)
    {
      ss << "InstanceId." << instanceIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      instanceIdsCount++;
    }
  }

  if(m_hibernateHasBeenSet)
  {
    ss << "Hibernate=" << std::boolalpha << m_hibernate << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_forceHasBeenSet)
  {
    ss << "Force=" << std::boolalpha << m_force << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  StopInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
