/*
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
#include <aws/ec2/model/ModifyVpcAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyVpcAttributeRequest::ModifyVpcAttributeRequest() : 
    m_vpcIdHasBeenSet(false),
    m_enableDnsSupportHasBeenSet(false),
    m_enableDnsHostnamesHasBeenSet(false)
{
}

Aws::String ModifyVpcAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVpcAttribute&";
  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_enableDnsSupportHasBeenSet)
  {
    m_enableDnsSupport.OutputToStream(ss, "EnableDnsSupport");
  }

  if(m_enableDnsHostnamesHasBeenSet)
  {
    m_enableDnsHostnames.OutputToStream(ss, "EnableDnsHostnames");
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

