/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeStackDriftDetectionStatusRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

DescribeStackDriftDetectionStatusRequest::DescribeStackDriftDetectionStatusRequest() : 
    m_stackDriftDetectionIdHasBeenSet(false)
{
}

Aws::String DescribeStackDriftDetectionStatusRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeStackDriftDetectionStatus&";
  if(m_stackDriftDetectionIdHasBeenSet)
  {
    ss << "StackDriftDetectionId=" << StringUtils::URLEncode(m_stackDriftDetectionId.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  DescribeStackDriftDetectionStatusRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
