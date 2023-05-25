/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVpcTenancyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyVpcTenancyRequest::ModifyVpcTenancyRequest() : 
    m_vpcIdHasBeenSet(false),
    m_instanceTenancy(VpcTenancy::NOT_SET),
    m_instanceTenancyHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifyVpcTenancyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVpcTenancy&";
  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_instanceTenancyHasBeenSet)
  {
    ss << "InstanceTenancy=" << VpcTenancyMapper::GetNameForVpcTenancy(m_instanceTenancy) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVpcTenancyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
