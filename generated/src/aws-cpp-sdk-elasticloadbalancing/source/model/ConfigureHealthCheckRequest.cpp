/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/ConfigureHealthCheckRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

ConfigureHealthCheckRequest::ConfigureHealthCheckRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_healthCheckHasBeenSet(false)
{
}

Aws::String ConfigureHealthCheckRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ConfigureHealthCheck&";
  if(m_loadBalancerNameHasBeenSet)
  {
    ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_healthCheckHasBeenSet)
  {
    m_healthCheck.OutputToStream(ss, "HealthCheck");
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  ConfigureHealthCheckRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
