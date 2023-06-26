/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PurchaseReservedInstancesOfferingRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

PurchaseReservedInstancesOfferingRequest::PurchaseReservedInstancesOfferingRequest() : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_reservedInstancesOfferingIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_limitPriceHasBeenSet(false),
    m_purchaseTimeHasBeenSet(false)
{
}

Aws::String PurchaseReservedInstancesOfferingRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PurchaseReservedInstancesOffering&";
  if(m_instanceCountHasBeenSet)
  {
    ss << "InstanceCount=" << m_instanceCount << "&";
  }

  if(m_reservedInstancesOfferingIdHasBeenSet)
  {
    ss << "ReservedInstancesOfferingId=" << StringUtils::URLEncode(m_reservedInstancesOfferingId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_limitPriceHasBeenSet)
  {
    m_limitPrice.OutputToStream(ss, "LimitPrice");
  }

  if(m_purchaseTimeHasBeenSet)
  {
    ss << "PurchaseTime=" << StringUtils::URLEncode(m_purchaseTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  PurchaseReservedInstancesOfferingRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
