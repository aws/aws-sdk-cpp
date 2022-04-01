/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/SetLoadBalancerListenerSSLCertificateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

SetLoadBalancerListenerSSLCertificateRequest::SetLoadBalancerListenerSSLCertificateRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_loadBalancerPort(0),
    m_loadBalancerPortHasBeenSet(false),
    m_sSLCertificateIdHasBeenSet(false)
{
}

Aws::String SetLoadBalancerListenerSSLCertificateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetLoadBalancerListenerSSLCertificate&";
  if(m_loadBalancerNameHasBeenSet)
  {
    ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_loadBalancerPortHasBeenSet)
  {
    ss << "LoadBalancerPort=" << m_loadBalancerPort << "&";
  }

  if(m_sSLCertificateIdHasBeenSet)
  {
    ss << "SSLCertificateId=" << StringUtils::URLEncode(m_sSLCertificateId.c_str()) << "&";
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  SetLoadBalancerListenerSSLCertificateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
