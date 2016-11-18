﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ec2/model/CreateVpcRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateVpcRequest::CreateVpcRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_instanceTenancy(Tenancy::NOT_SET),
    m_instanceTenancyHasBeenSet(false)
{
}

Aws::String CreateVpcRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateVpc&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_cidrBlockHasBeenSet)
  {
    ss << "CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }

  if(m_instanceTenancyHasBeenSet)
  {
    ss << "InstanceTenancy=" << TenancyMapper::GetNameForTenancy(m_instanceTenancy) << "&";
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

