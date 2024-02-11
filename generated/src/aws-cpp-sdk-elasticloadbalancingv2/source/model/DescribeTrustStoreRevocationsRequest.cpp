/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreRevocationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

DescribeTrustStoreRevocationsRequest::DescribeTrustStoreRevocationsRequest() : 
    m_trustStoreArnHasBeenSet(false),
    m_revocationIdsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false)
{
}

Aws::String DescribeTrustStoreRevocationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeTrustStoreRevocations&";
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

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_pageSizeHasBeenSet)
  {
    ss << "PageSize=" << m_pageSize << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  DescribeTrustStoreRevocationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
