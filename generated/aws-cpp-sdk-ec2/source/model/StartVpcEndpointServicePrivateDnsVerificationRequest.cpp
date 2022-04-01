/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/StartVpcEndpointServicePrivateDnsVerificationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

StartVpcEndpointServicePrivateDnsVerificationRequest::StartVpcEndpointServicePrivateDnsVerificationRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_serviceIdHasBeenSet(false)
{
}

Aws::String StartVpcEndpointServicePrivateDnsVerificationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StartVpcEndpointServicePrivateDnsVerification&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_serviceIdHasBeenSet)
  {
    ss << "ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  StartVpcEndpointServicePrivateDnsVerificationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
