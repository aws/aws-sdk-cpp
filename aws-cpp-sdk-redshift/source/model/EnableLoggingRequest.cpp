/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

