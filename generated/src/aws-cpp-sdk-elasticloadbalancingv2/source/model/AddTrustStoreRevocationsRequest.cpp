/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/AddTrustStoreRevocationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

AddTrustStoreRevocationsRequest::AddTrustStoreRevocationsRequest() : 
    m_trustStoreArnHasBeenSet(false),
    m_revocationContentsHasBeenSet(false)
{
}

Aws::String AddTrustStoreRevocationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AddTrustStoreRevocations&";
  if(m_trustStoreArnHasBeenSet)
  {
    ss << "TrustStoreArn=" << StringUtils::URLEncode(m_trustStoreArn.c_str()) << "&";
  }

  if(m_revocationContentsHasBeenSet)
  {
    unsigned revocationContentsCount = 1;
    for(auto& item : m_revocationContents)
    {
      item.OutputToStream(ss, "RevocationContents.member.", revocationContentsCount, "");
      revocationContentsCount++;
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  AddTrustStoreRevocationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
