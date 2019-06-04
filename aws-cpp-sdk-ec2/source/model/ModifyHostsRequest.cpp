/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/ModifyHostsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyHostsRequest::ModifyHostsRequest() : 
    m_autoPlacement(AutoPlacement::NOT_SET),
    m_autoPlacementHasBeenSet(false),
    m_hostIdsHasBeenSet(false),
    m_hostRecovery(HostRecovery::NOT_SET),
    m_hostRecoveryHasBeenSet(false)
{
}

Aws::String ModifyHostsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyHosts&";
  if(m_autoPlacementHasBeenSet)
  {
    ss << "AutoPlacement=" << AutoPlacementMapper::GetNameForAutoPlacement(m_autoPlacement) << "&";
  }

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

  if(m_hostRecoveryHasBeenSet)
  {
    ss << "HostRecovery=" << HostRecoveryMapper::GetNameForHostRecovery(m_hostRecovery) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyHostsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
