/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstanceCapacityReservationAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyInstanceCapacityReservationAttributesRequest::ModifyInstanceCapacityReservationAttributesRequest() : 
    m_instanceIdHasBeenSet(false),
    m_capacityReservationSpecificationHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifyInstanceCapacityReservationAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyInstanceCapacityReservationAttributes&";
  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_capacityReservationSpecificationHasBeenSet)
  {
    m_capacityReservationSpecification.OutputToStream(ss, "CapacityReservationSpecification");
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyInstanceCapacityReservationAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
