/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeTypeRegistrationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

DescribeTypeRegistrationRequest::DescribeTypeRegistrationRequest() : 
    m_registrationTokenHasBeenSet(false)
{
}

Aws::String DescribeTypeRegistrationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeTypeRegistration&";
  if(m_registrationTokenHasBeenSet)
  {
    ss << "RegistrationToken=" << StringUtils::URLEncode(m_registrationToken.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  DescribeTypeRegistrationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
