/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AllocateAddressRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AllocateAddressRequest::AllocateAddressRequest() : 
    m_domain(DomainType::NOT_SET),
    m_domainHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_publicIpv4PoolHasBeenSet(false),
    m_networkBorderGroupHasBeenSet(false),
    m_customerOwnedIpv4PoolHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String AllocateAddressRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AllocateAddress&";
  if(m_domainHasBeenSet)
  {
    ss << "Domain=" << DomainTypeMapper::GetNameForDomainType(m_domain) << "&";
  }

  if(m_addressHasBeenSet)
  {
    ss << "Address=" << StringUtils::URLEncode(m_address.c_str()) << "&";
  }

  if(m_publicIpv4PoolHasBeenSet)
  {
    ss << "PublicIpv4Pool=" << StringUtils::URLEncode(m_publicIpv4Pool.c_str()) << "&";
  }

  if(m_networkBorderGroupHasBeenSet)
  {
    ss << "NetworkBorderGroup=" << StringUtils::URLEncode(m_networkBorderGroup.c_str()) << "&";
  }

  if(m_customerOwnedIpv4PoolHasBeenSet)
  {
    ss << "CustomerOwnedIpv4Pool=" << StringUtils::URLEncode(m_customerOwnedIpv4Pool.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AllocateAddressRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
