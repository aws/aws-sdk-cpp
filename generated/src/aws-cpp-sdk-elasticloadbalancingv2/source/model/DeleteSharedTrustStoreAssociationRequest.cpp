/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DeleteSharedTrustStoreAssociationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

Aws::String DeleteSharedTrustStoreAssociationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteSharedTrustStoreAssociation&";
  if(m_trustStoreArnHasBeenSet)
  {
    ss << "TrustStoreArn=" << StringUtils::URLEncode(m_trustStoreArn.c_str()) << "&";
  }

  if(m_resourceArnHasBeenSet)
  {
    ss << "ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  DeleteSharedTrustStoreAssociationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
