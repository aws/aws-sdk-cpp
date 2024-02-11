/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssociateIpamByoasnRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AssociateIpamByoasnRequest::AssociateIpamByoasnRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_asnHasBeenSet(false),
    m_cidrHasBeenSet(false)
{
}

Aws::String AssociateIpamByoasnRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssociateIpamByoasn&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_asnHasBeenSet)
  {
    ss << "Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }

  if(m_cidrHasBeenSet)
  {
    ss << "Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AssociateIpamByoasnRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
