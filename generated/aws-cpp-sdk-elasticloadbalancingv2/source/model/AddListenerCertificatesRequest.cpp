/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/AddListenerCertificatesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

AddListenerCertificatesRequest::AddListenerCertificatesRequest() : 
    m_listenerArnHasBeenSet(false),
    m_certificatesHasBeenSet(false)
{
}

Aws::String AddListenerCertificatesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AddListenerCertificates&";
  if(m_listenerArnHasBeenSet)
  {
    ss << "ListenerArn=" << StringUtils::URLEncode(m_listenerArn.c_str()) << "&";
  }

  if(m_certificatesHasBeenSet)
  {
    unsigned certificatesCount = 1;
    for(auto& item : m_certificates)
    {
      item.OutputToStream(ss, "Certificates.member.", certificatesCount, "");
      certificatesCount++;
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  AddListenerCertificatesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
