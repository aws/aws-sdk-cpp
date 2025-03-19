/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeStackRefactorRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String DescribeStackRefactorRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeStackRefactor&";
  if(m_stackRefactorIdHasBeenSet)
  {
    ss << "StackRefactorId=" << StringUtils::URLEncode(m_stackRefactorId.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  DescribeStackRefactorRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
