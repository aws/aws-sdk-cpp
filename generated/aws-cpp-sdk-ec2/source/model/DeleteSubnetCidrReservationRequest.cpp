/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteSubnetCidrReservationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteSubnetCidrReservationRequest::DeleteSubnetCidrReservationRequest() : 
    m_subnetCidrReservationIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DeleteSubnetCidrReservationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteSubnetCidrReservation&";
  if(m_subnetCidrReservationIdHasBeenSet)
  {
    ss << "SubnetCidrReservationId=" << StringUtils::URLEncode(m_subnetCidrReservationId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteSubnetCidrReservationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
