/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DisableVgwRoutePropagationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DisableVgwRoutePropagationRequest::DisableVgwRoutePropagationRequest() : 
    m_gatewayIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DisableVgwRoutePropagationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DisableVgwRoutePropagation&";
  if(m_gatewayIdHasBeenSet)
  {
    ss << "GatewayId=" << StringUtils::URLEncode(m_gatewayId.c_str()) << "&";
  }

  if(m_routeTableIdHasBeenSet)
  {
    ss << "RouteTableId=" << StringUtils::URLEncode(m_routeTableId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DisableVgwRoutePropagationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
