/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteVpcEndpointConnectionNotificationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteVpcEndpointConnectionNotificationsRequest::DeleteVpcEndpointConnectionNotificationsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_connectionNotificationIdsHasBeenSet(false)
{
}

Aws::String DeleteVpcEndpointConnectionNotificationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteVpcEndpointConnectionNotifications&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_connectionNotificationIdsHasBeenSet)
  {
    unsigned connectionNotificationIdsCount = 1;
    for(auto& item : m_connectionNotificationIds)
    {
      ss << "ConnectionNotificationId." << connectionNotificationIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      connectionNotificationIdsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteVpcEndpointConnectionNotificationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
