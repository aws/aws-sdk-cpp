/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DisassociateIpamResourceDiscoveryRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DisassociateIpamResourceDiscoveryRequest::DisassociateIpamResourceDiscoveryRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ipamResourceDiscoveryAssociationIdHasBeenSet(false)
{
}

Aws::String DisassociateIpamResourceDiscoveryRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DisassociateIpamResourceDiscovery&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamResourceDiscoveryAssociationIdHasBeenSet)
  {
    ss << "IpamResourceDiscoveryAssociationId=" << StringUtils::URLEncode(m_ipamResourceDiscoveryAssociationId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DisassociateIpamResourceDiscoveryRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
