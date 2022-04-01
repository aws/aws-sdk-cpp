/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/TrailInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

TrailInfo::TrailInfo() : 
    m_trailARNHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_homeRegionHasBeenSet(false)
{
}

TrailInfo::TrailInfo(JsonView jsonValue) : 
    m_trailARNHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_homeRegionHasBeenSet(false)
{
  *this = jsonValue;
}

TrailInfo& TrailInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrailARN"))
  {
    m_trailARN = jsonValue.GetString("TrailARN");

    m_trailARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HomeRegion"))
  {
    m_homeRegion = jsonValue.GetString("HomeRegion");

    m_homeRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue TrailInfo::Jsonize() const
{
  JsonValue payload;

  if(m_trailARNHasBeenSet)
  {
   payload.WithString("TrailARN", m_trailARN);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_homeRegionHasBeenSet)
  {
   payload.WithString("HomeRegion", m_homeRegion);

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
