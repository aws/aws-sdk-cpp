/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateSpotDatafeedSubscriptionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateSpotDatafeedSubscriptionRequest::CreateSpotDatafeedSubscriptionRequest() : 
    m_bucketHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

Aws::String CreateSpotDatafeedSubscriptionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateSpotDatafeedSubscription&";
  if(m_bucketHasBeenSet)
  {
    ss << "Bucket=" << StringUtils::URLEncode(m_bucket.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_prefixHasBeenSet)
  {
    ss << "Prefix=" << StringUtils::URLEncode(m_prefix.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateSpotDatafeedSubscriptionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
