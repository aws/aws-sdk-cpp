﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/RemoveListenerCertificatesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

Aws::String RemoveListenerCertificatesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RemoveListenerCertificates&";
  if(m_listenerArnHasBeenSet)
  {
    ss << "ListenerArn=" << StringUtils::URLEncode(m_listenerArn.c_str()) << "&";
  }

  if(m_certificatesHasBeenSet)
  {
    if (m_certificates.empty())
    {
      ss << "Certificates=&";
    }
    else
    {
      unsigned certificatesCount = 1;
      for(auto& item : m_certificates)
      {
        item.OutputToStream(ss, "Certificates.member.", certificatesCount, "");
        certificatesCount++;
      }
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  RemoveListenerCertificatesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
