/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AllocateIpamPoolCidrRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AllocateIpamPoolCidrRequest::AllocateIpamPoolCidrRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ipamPoolIdHasBeenSet(false),
    m_cidrHasBeenSet(false),
    m_netmaskLength(0),
    m_netmaskLengthHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_previewNextCidr(false),
    m_previewNextCidrHasBeenSet(false),
    m_allowedCidrsHasBeenSet(false),
    m_disallowedCidrsHasBeenSet(false)
{
}

Aws::String AllocateIpamPoolCidrRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AllocateIpamPoolCidr&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamPoolIdHasBeenSet)
  {
    ss << "IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }

  if(m_cidrHasBeenSet)
  {
    ss << "Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if(m_netmaskLengthHasBeenSet)
  {
    ss << "NetmaskLength=" << m_netmaskLength << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_previewNextCidrHasBeenSet)
  {
    ss << "PreviewNextCidr=" << std::boolalpha << m_previewNextCidr << "&";
  }

  if(m_allowedCidrsHasBeenSet)
  {
    unsigned allowedCidrsCount = 1;
    for(auto& item : m_allowedCidrs)
    {
      ss << "AllowedCidr." << allowedCidrsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      allowedCidrsCount++;
    }
  }

  if(m_disallowedCidrsHasBeenSet)
  {
    unsigned disallowedCidrsCount = 1;
    for(auto& item : m_disallowedCidrs)
    {
      ss << "DisallowedCidr." << disallowedCidrsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      disallowedCidrsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AllocateIpamPoolCidrRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
