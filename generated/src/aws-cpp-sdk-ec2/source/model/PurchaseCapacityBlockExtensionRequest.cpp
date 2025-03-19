/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PurchaseCapacityBlockExtensionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String PurchaseCapacityBlockExtensionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PurchaseCapacityBlockExtension&";
  if(m_capacityBlockExtensionOfferingIdHasBeenSet)
  {
    ss << "CapacityBlockExtensionOfferingId=" << StringUtils::URLEncode(m_capacityBlockExtensionOfferingId.c_str()) << "&";
  }

  if(m_capacityReservationIdHasBeenSet)
  {
    ss << "CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  PurchaseCapacityBlockExtensionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
