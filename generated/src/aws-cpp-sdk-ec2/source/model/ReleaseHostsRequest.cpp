/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReleaseHostsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ReleaseHostsRequest::ReleaseHostsRequest() : 
    m_hostIdsHasBeenSet(false)
{
}

Aws::String ReleaseHostsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ReleaseHosts&";
  if(m_hostIdsHasBeenSet)
  {
    unsigned hostIdsCount = 1;
    for(auto& item : m_hostIds)
    {
      ss << "HostId." << hostIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      hostIdsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ReleaseHostsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
