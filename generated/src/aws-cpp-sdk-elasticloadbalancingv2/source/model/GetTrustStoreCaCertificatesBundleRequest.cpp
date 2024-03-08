/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/GetTrustStoreCaCertificatesBundleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

GetTrustStoreCaCertificatesBundleRequest::GetTrustStoreCaCertificatesBundleRequest() : 
    m_trustStoreArnHasBeenSet(false)
{
}

Aws::String GetTrustStoreCaCertificatesBundleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetTrustStoreCaCertificatesBundle&";
  if(m_trustStoreArnHasBeenSet)
  {
    ss << "TrustStoreArn=" << StringUtils::URLEncode(m_trustStoreArn.c_str()) << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  GetTrustStoreCaCertificatesBundleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
