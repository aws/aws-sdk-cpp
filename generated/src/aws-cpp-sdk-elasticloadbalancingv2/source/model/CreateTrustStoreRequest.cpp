/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/CreateTrustStoreRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

CreateTrustStoreRequest::CreateTrustStoreRequest() : 
    m_nameHasBeenSet(false),
    m_caCertificatesBundleS3BucketHasBeenSet(false),
    m_caCertificatesBundleS3KeyHasBeenSet(false),
    m_caCertificatesBundleS3ObjectVersionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateTrustStoreRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateTrustStore&";
  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
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

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  CreateTrustStoreRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
