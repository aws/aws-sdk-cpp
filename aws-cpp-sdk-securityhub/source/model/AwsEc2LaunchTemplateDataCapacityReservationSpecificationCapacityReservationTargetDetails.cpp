/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails::AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails() : 
    m_capacityReservationIdHasBeenSet(false),
    m_capacityReservationResourceGroupArnHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails::AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails(JsonView jsonValue) : 
    m_capacityReservationIdHasBeenSet(false),
    m_capacityReservationResourceGroupArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails& AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CapacityReservationId"))
  {
    m_capacityReservationId = jsonValue.GetString("CapacityReservationId");

    m_capacityReservationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityReservationResourceGroupArn"))
  {
    m_capacityReservationResourceGroupArn = jsonValue.GetString("CapacityReservationResourceGroupArn");

    m_capacityReservationResourceGroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails::Jsonize() const
{
  JsonValue payload;

  if(m_capacityReservationIdHasBeenSet)
  {
   payload.WithString("CapacityReservationId", m_capacityReservationId);

  }

  if(m_capacityReservationResourceGroupArnHasBeenSet)
  {
   payload.WithString("CapacityReservationResourceGroupArn", m_capacityReservationResourceGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
