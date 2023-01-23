/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVpcEndpointConnectionNotificationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyVpcEndpointConnectionNotificationRequest::ModifyVpcEndpointConnectionNotificationRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_connectionNotificationIdHasBeenSet(false),
    m_connectionNotificationArnHasBeenSet(false),
    m_connectionEventsHasBeenSet(false)
{
}

Aws::String ModifyVpcEndpointConnectionNotificationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVpcEndpointConnectionNotification&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_connectionNotificationIdHasBeenSet)
  {
    ss << "ConnectionNotificationId=" << StringUtils::URLEncode(m_connectionNotificationId.c_str()) << "&";
  }

  if(m_connectionNotificationArnHasBeenSet)
  {
    ss << "ConnectionNotificationArn=" << StringUtils::URLEncode(m_connectionNotificationArn.c_str()) << "&";
  }

  if(m_connectionEventsHasBeenSet)
  {
    unsigned connectionEventsCount = 1;
    for(auto& item : m_connectionEvents)
    {
      ss << "ConnectionEvents." << connectionEventsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      connectionEventsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVpcEndpointConnectionNotificationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
