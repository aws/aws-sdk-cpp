/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/CreateLBCookieStickinessPolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

CreateLBCookieStickinessPolicyRequest::CreateLBCookieStickinessPolicyRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_cookieExpirationPeriod(0),
    m_cookieExpirationPeriodHasBeenSet(false)
{
}

Aws::String CreateLBCookieStickinessPolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateLBCookieStickinessPolicy&";
  if(m_loadBalancerNameHasBeenSet)
  {
    ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_policyNameHasBeenSet)
  {
    ss << "PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }

  if(m_cookieExpirationPeriodHasBeenSet)
  {
    ss << "CookieExpirationPeriod=" << m_cookieExpirationPeriod << "&";
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  CreateLBCookieStickinessPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
