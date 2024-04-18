/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/SourceCloudProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

SourceCloudProperties::SourceCloudProperties() : 
    m_originAccountIDHasBeenSet(false),
    m_originAvailabilityZoneHasBeenSet(false),
    m_originRegionHasBeenSet(false),
    m_sourceOutpostArnHasBeenSet(false)
{
}

SourceCloudProperties::SourceCloudProperties(JsonView jsonValue) : 
    m_originAccountIDHasBeenSet(false),
    m_originAvailabilityZoneHasBeenSet(false),
    m_originRegionHasBeenSet(false),
    m_sourceOutpostArnHasBeenSet(false)
{
  *this = jsonValue;
}

SourceCloudProperties& SourceCloudProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("originAccountID"))
  {
    m_originAccountID = jsonValue.GetString("originAccountID");

    m_originAccountIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("originAvailabilityZone"))
  {
    m_originAvailabilityZone = jsonValue.GetString("originAvailabilityZone");

    m_originAvailabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("originRegion"))
  {
    m_originRegion = jsonValue.GetString("originRegion");

    m_originRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceOutpostArn"))
  {
    m_sourceOutpostArn = jsonValue.GetString("sourceOutpostArn");

    m_sourceOutpostArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceCloudProperties::Jsonize() const
{
  JsonValue payload;

  if(m_originAccountIDHasBeenSet)
  {
   payload.WithString("originAccountID", m_originAccountID);

  }

  if(m_originAvailabilityZoneHasBeenSet)
  {
   payload.WithString("originAvailabilityZone", m_originAvailabilityZone);

  }

  if(m_originRegionHasBeenSet)
  {
   payload.WithString("originRegion", m_originRegion);

  }

  if(m_sourceOutpostArnHasBeenSet)
  {
   payload.WithString("sourceOutpostArn", m_sourceOutpostArn);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
