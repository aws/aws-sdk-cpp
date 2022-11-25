/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVpcEndpointServicePayerResponsibilityRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyVpcEndpointServicePayerResponsibilityRequest::ModifyVpcEndpointServicePayerResponsibilityRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_payerResponsibility(PayerResponsibility::NOT_SET),
    m_payerResponsibilityHasBeenSet(false)
{
}

Aws::String ModifyVpcEndpointServicePayerResponsibilityRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVpcEndpointServicePayerResponsibility&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_serviceIdHasBeenSet)
  {
    ss << "ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }

  if(m_payerResponsibilityHasBeenSet)
  {
    ss << "PayerResponsibility=" << PayerResponsibilityMapper::GetNameForPayerResponsibility(m_payerResponsibility) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVpcEndpointServicePayerResponsibilityRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
