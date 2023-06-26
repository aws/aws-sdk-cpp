/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeStackResourcesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

DescribeStackResourcesRequest::DescribeStackResourcesRequest() : 
    m_stackNameHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false)
{
}

Aws::String DescribeStackResourcesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeStackResources&";
  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_logicalResourceIdHasBeenSet)
  {
    ss << "LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }

  if(m_physicalResourceIdHasBeenSet)
  {
    ss << "PhysicalResourceId=" << StringUtils::URLEncode(m_physicalResourceId.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  DescribeStackResourcesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
