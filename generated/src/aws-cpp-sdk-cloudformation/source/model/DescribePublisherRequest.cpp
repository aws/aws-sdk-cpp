/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribePublisherRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

DescribePublisherRequest::DescribePublisherRequest() : 
    m_publisherIdHasBeenSet(false)
{
}

Aws::String DescribePublisherRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribePublisher&";
  if(m_publisherIdHasBeenSet)
  {
    ss << "PublisherId=" << StringUtils::URLEncode(m_publisherId.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  DescribePublisherRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
