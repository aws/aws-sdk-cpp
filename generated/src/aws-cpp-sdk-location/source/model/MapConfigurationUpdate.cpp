/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/MapConfigurationUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

MapConfigurationUpdate::MapConfigurationUpdate() : 
    m_politicalViewHasBeenSet(false)
{
}

MapConfigurationUpdate::MapConfigurationUpdate(JsonView jsonValue) : 
    m_politicalViewHasBeenSet(false)
{
  *this = jsonValue;
}

MapConfigurationUpdate& MapConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PoliticalView"))
  {
    m_politicalView = jsonValue.GetString("PoliticalView");

    m_politicalViewHasBeenSet = true;
  }

  return *this;
}

JsonValue MapConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_politicalViewHasBeenSet)
  {
   payload.WithString("PoliticalView", m_politicalView);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
