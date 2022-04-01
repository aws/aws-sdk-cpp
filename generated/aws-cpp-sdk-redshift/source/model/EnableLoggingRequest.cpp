/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/EnableLoggingRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

EnableLoggingRequest::EnableLoggingRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false)
{
}

Aws::String EnableLoggingRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnableLogging&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_bucketNameHasBeenSet)
  {
    ss << "BucketName=" << StringUtils::URLEncode(m_bucketName.c_str()) << "&";
  }

  if(m_s3KeyPrefixHasBeenSet)
  {
    ss << "S3KeyPrefix=" << StringUtils::URLEncode(m_s3KeyPrefix.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  EnableLoggingRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
