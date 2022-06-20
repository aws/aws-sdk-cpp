/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/AssetLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

AssetLocation::AssetLocation() : 
    m_rackElevation(0.0),
    m_rackElevationHasBeenSet(false)
{
}

AssetLocation::AssetLocation(JsonView jsonValue) : 
    m_rackElevation(0.0),
    m_rackElevationHasBeenSet(false)
{
  *this = jsonValue;
}

AssetLocation& AssetLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RackElevation"))
  {
    m_rackElevation = jsonValue.GetDouble("RackElevation");

    m_rackElevationHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetLocation::Jsonize() const
{
  JsonValue payload;

  if(m_rackElevationHasBeenSet)
  {
   payload.WithDouble("RackElevation", m_rackElevation);

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
