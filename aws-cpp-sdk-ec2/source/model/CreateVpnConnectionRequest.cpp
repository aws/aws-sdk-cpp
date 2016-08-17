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
#include <aws/ec2/model/CreateVpnConnectionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateVpnConnectionRequest::CreateVpnConnectionRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_customerGatewayIdHasBeenSet(false),
    m_vpnGatewayIdHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

Aws::String CreateVpnConnectionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateVpnConnection&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_typeHasBeenSet)
  {
    ss << "Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }

  if(m_customerGatewayIdHasBeenSet)
  {
    ss << "CustomerGatewayId=" << StringUtils::URLEncode(m_customerGatewayId.c_str()) << "&";
  }

  if(m_vpnGatewayIdHasBeenSet)
  {
    ss << "VpnGatewayId=" << StringUtils::URLEncode(m_vpnGatewayId.c_str()) << "&";
  }

  if(m_optionsHasBeenSet)
  {
    m_options.OutputToStream(ss, "Options");
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

