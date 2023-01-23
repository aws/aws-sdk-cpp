/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/MissionProfileListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

MissionProfileListItem::MissionProfileListItem() : 
    m_missionProfileArnHasBeenSet(false),
    m_missionProfileIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

MissionProfileListItem::MissionProfileListItem(JsonView jsonValue) : 
    m_missionProfileArnHasBeenSet(false),
    m_missionProfileIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regionHasBeenSet(false)
{
  *this = jsonValue;
}

MissionProfileListItem& MissionProfileListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("missionProfileArn"))
  {
    m_missionProfileArn = jsonValue.GetString("missionProfileArn");

    m_missionProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("missionProfileId"))
  {
    m_missionProfileId = jsonValue.GetString("missionProfileId");

    m_missionProfileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  return *this;
}

JsonValue MissionProfileListItem::Jsonize() const
{
  JsonValue payload;

  if(m_missionProfileArnHasBeenSet)
  {
   payload.WithString("missionProfileArn", m_missionProfileArn);

  }

  if(m_missionProfileIdHasBeenSet)
  {
   payload.WithString("missionProfileId", m_missionProfileId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
