/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeStackInstanceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

DescribeStackInstanceRequest::DescribeStackInstanceRequest() : 
    m_stackSetNameHasBeenSet(false),
    m_stackInstanceAccountHasBeenSet(false),
    m_stackInstanceRegionHasBeenSet(false)
{
}

Aws::String DescribeStackInstanceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeStackInstance&";
  if(m_stackSetNameHasBeenSet)
  {
    ss << "StackSetName=" << StringUtils::URLEncode(m_stackSetName.c_str()) << "&";
  }

  if(m_stackInstanceAccountHasBeenSet)
  {
    ss << "StackInstanceAccount=" << StringUtils::URLEncode(m_stackInstanceAccount.c_str()) << "&";
  }

  if(m_stackInstanceRegionHasBeenSet)
  {
    ss << "StackInstanceRegion=" << StringUtils::URLEncode(m_stackInstanceRegion.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  DescribeStackInstanceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
