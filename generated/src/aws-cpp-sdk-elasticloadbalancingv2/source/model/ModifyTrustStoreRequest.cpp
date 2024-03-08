/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/ModifyTrustStoreRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

ModifyTrustStoreRequest::ModifyTrustStoreRequest() : 
    m_trustStoreArnHasBeenSet(false),
    m_caCertificatesBundleS3BucketHasBeenSet(false),
    m_caCertificatesBundleS3KeyHasBeenSet(false),
    m_caCertificatesBundleS3ObjectVersionHasBeenSet(false)
{
}

Aws::String ModifyTrustStoreRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyTrustStore&";
  if(m_trustStoreArnHasBeenSet)
  {
    ss << "TrustStoreArn=" << StringUtils::URLEncode(m_trustStoreArn.c_str()) << "&";
  }

  if(m_caCertificatesBundleS3BucketHasBeenSet)
  {
    ss << "CaCertificatesBundleS3Bucket=" << StringUtils::URLEncode(m_caCertificatesBundleS3Bucket.c_str()) << "&";
  }

  if(m_caCertificatesBundleS3KeyHasBeenSet)
  {
    ss << "CaCertificatesBundleS3Key=" << StringUtils::URLEncode(m_caCertificatesBundleS3Key.c_str()) << "&";
  }

  if(m_caCertificatesBundleS3ObjectVersionHasBeenSet)
  {
    ss << "CaCertificatesBundleS3ObjectVersion=" << StringUtils::URLEncode(m_caCertificatesBundleS3ObjectVersion.c_str()) << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  ModifyTrustStoreRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
