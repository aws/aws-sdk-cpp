/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DisassociateNatGatewayAddressRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DisassociateNatGatewayAddressRequest::DisassociateNatGatewayAddressRequest() : 
    m_natGatewayIdHasBeenSet(false),
    m_associationIdsHasBeenSet(false),
    m_maxDrainDurationSeconds(0),
    m_maxDrainDurationSecondsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DisassociateNatGatewayAddressRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DisassociateNatGatewayAddress&";
  if(m_natGatewayIdHasBeenSet)
  {
    ss << "NatGatewayId=" << StringUtils::URLEncode(m_natGatewayId.c_str()) << "&";
  }

  if(m_associationIdsHasBeenSet)
  {
    unsigned associationIdsCount = 1;
    for(auto& item : m_associationIds)
    {
      ss << "AssociationId." << associationIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      associationIdsCount++;
    }
  }

  if(m_maxDrainDurationSecondsHasBeenSet)
  {
    ss << "MaxDrainDurationSeconds=" << m_maxDrainDurationSeconds << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DisassociateNatGatewayAddressRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
