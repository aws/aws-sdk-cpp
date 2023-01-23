/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateVpcEndpointConnectionNotificationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateVpcEndpointConnectionNotificationRequest::CreateVpcEndpointConnectionNotificationRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false),
    m_connectionNotificationArnHasBeenSet(false),
    m_connectionEventsHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String CreateVpcEndpointConnectionNotificationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateVpcEndpointConnectionNotification&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_serviceIdHasBeenSet)
  {
    ss << "ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }

  if(m_vpcEndpointIdHasBeenSet)
  {
    ss << "VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
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

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateVpcEndpointConnectionNotificationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
