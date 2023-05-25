/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RebootInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

RebootInstancesRequest::RebootInstancesRequest() : 
    m_instanceIdsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String RebootInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RebootInstances&";
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

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  RebootInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
