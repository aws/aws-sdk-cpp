/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/GetTrustStoreRevocationContentRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

GetTrustStoreRevocationContentRequest::GetTrustStoreRevocationContentRequest() : 
    m_trustStoreArnHasBeenSet(false),
    m_revocationId(0),
    m_revocationIdHasBeenSet(false)
{
}

Aws::String GetTrustStoreRevocationContentRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetTrustStoreRevocationContent&";
  if(m_trustStoreArnHasBeenSet)
  {
    ss << "TrustStoreArn=" << StringUtils::URLEncode(m_trustStoreArn.c_str()) << "&";
  }

  if(m_revocationIdHasBeenSet)
  {
    ss << "RevocationId=" << m_revocationId << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  GetTrustStoreRevocationContentRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
