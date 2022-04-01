/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails.h>
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

AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails::AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails() : 
    m_availabilityZoneCount(0),
    m_availabilityZoneCountHasBeenSet(false)
{
}

AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails::AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails(JsonView jsonValue) : 
    m_availabilityZoneCount(0),
    m_availabilityZoneCountHasBeenSet(false)
{
  *this = jsonValue;
}

AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails& AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailabilityZoneCount"))
  {
    m_availabilityZoneCount = jsonValue.GetInteger("AvailabilityZoneCount");

    m_availabilityZoneCountHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZoneCountHasBeenSet)
  {
   payload.WithInteger("AvailabilityZoneCount", m_availabilityZoneCount);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
