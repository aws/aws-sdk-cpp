/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyCapacityReservationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyCapacityReservationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyCapacityReservation&";
  if(m_capacityReservationIdHasBeenSet)
  {
    ss << "CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }

  if(m_instanceCountHasBeenSet)
  {
    ss << "InstanceCount=" << m_instanceCount << "&";
  }

  if(m_endDateHasBeenSet)
  {
    ss << "EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endDateTypeHasBeenSet)
  {
    ss << "EndDateType=" << StringUtils::URLEncode(EndDateTypeMapper::GetNameForEndDateType(m_endDateType)) << "&";
  }

  if(m_acceptHasBeenSet)
  {
    ss << "Accept=" << std::boolalpha << m_accept << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_additionalInfoHasBeenSet)
  {
    ss << "AdditionalInfo=" << StringUtils::URLEncode(m_additionalInfo.c_str()) << "&";
  }

  if(m_instanceMatchCriteriaHasBeenSet)
  {
    ss << "InstanceMatchCriteria=" << StringUtils::URLEncode(InstanceMatchCriteriaMapper::GetNameForInstanceMatchCriteria(m_instanceMatchCriteria)) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyCapacityReservationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
