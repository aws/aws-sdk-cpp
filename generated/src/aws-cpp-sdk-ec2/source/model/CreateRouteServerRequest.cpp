/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateRouteServerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateRouteServerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateRouteServer&";
  if(m_amazonSideAsnHasBeenSet)
  {
    ss << "AmazonSideAsn=" << m_amazonSideAsn << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
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

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateRouteServerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
