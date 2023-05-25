/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
