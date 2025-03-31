/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyRouteServerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyRouteServerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyRouteServer&";
  if(m_routeServerIdHasBeenSet)
  {
    ss << "RouteServerId=" << StringUtils::URLEncode(m_routeServerId.c_str()) << "&";
  }

  if(m_persistRoutesHasBeenSet)
  {
    ss << "PersistRoutes=" << StringUtils::URLEncode(RouteServerPersistRoutesActionMapper::GetNameForRouteServerPersistRoutesAction(m_persistRoutes)) << "&";
  }

  if(m_persistRoutesDurationHasBeenSet)
  {
    ss << "PersistRoutesDuration=" << m_persistRoutesDuration << "&";
  }

  if(m_snsNotificationsEnabledHasBeenSet)
  {
    ss << "SnsNotificationsEnabled=" << std::boolalpha << m_snsNotificationsEnabled << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyRouteServerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
