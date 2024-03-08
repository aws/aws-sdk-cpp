/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/RemoveTrustStoreRevocationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

RemoveTrustStoreRevocationsRequest::RemoveTrustStoreRevocationsRequest() : 
    m_trustStoreArnHasBeenSet(false),
    m_revocationIdsHasBeenSet(false)
{
}

Aws::String RemoveTrustStoreRevocationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RemoveTrustStoreRevocations&";
  if(m_trustStoreArnHasBeenSet)
  {
    ss << "TrustStoreArn=" << StringUtils::URLEncode(m_trustStoreArn.c_str()) << "&";
  }

  if(m_revocationIdsHasBeenSet)
  {
    unsigned revocationIdsCount = 1;
    for(auto& item : m_revocationIds)
    {
      ss << "RevocationIds.member." << revocationIdsCount << "="
          << item << "&";
      revocationIdsCount++;
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  RemoveTrustStoreRevocationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
