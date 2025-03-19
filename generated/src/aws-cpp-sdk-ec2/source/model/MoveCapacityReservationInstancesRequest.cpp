/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MoveCapacityReservationInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String MoveCapacityReservationInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=MoveCapacityReservationInstances&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_sourceCapacityReservationIdHasBeenSet)
  {
    ss << "SourceCapacityReservationId=" << StringUtils::URLEncode(m_sourceCapacityReservationId.c_str()) << "&";
  }

  if(m_destinationCapacityReservationIdHasBeenSet)
  {
    ss << "DestinationCapacityReservationId=" << StringUtils::URLEncode(m_destinationCapacityReservationId.c_str()) << "&";
  }

  if(m_instanceCountHasBeenSet)
  {
    ss << "InstanceCount=" << m_instanceCount << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  MoveCapacityReservationInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
