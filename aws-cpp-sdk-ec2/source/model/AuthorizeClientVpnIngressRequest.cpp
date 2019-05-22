/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/ec2/model/AuthorizeClientVpnIngressRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AuthorizeClientVpnIngressRequest::AuthorizeClientVpnIngressRequest() : 
    m_clientVpnEndpointIdHasBeenSet(false),
    m_targetNetworkCidrHasBeenSet(false),
    m_accessGroupIdHasBeenSet(false),
    m_authorizeAllGroups(false),
    m_authorizeAllGroupsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String AuthorizeClientVpnIngressRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AuthorizeClientVpnIngress&";
  if(m_clientVpnEndpointIdHasBeenSet)
  {
    ss << "ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }

  if(m_targetNetworkCidrHasBeenSet)
  {
    ss << "TargetNetworkCidr=" << StringUtils::URLEncode(m_targetNetworkCidr.c_str()) << "&";
  }

  if(m_accessGroupIdHasBeenSet)
  {
    ss << "AccessGroupId=" << StringUtils::URLEncode(m_accessGroupId.c_str()) << "&";
  }

  if(m_authorizeAllGroupsHasBeenSet)
  {
    ss << "AuthorizeAllGroups=" << std::boolalpha << m_authorizeAllGroups << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AuthorizeClientVpnIngressRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
