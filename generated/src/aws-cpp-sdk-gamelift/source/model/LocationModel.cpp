/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/LocationModel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

LocationModel::LocationModel() : 
    m_locationNameHasBeenSet(false),
    m_locationArnHasBeenSet(false)
{
}

LocationModel::LocationModel(JsonView jsonValue) : 
    m_locationNameHasBeenSet(false),
    m_locationArnHasBeenSet(false)
{
  *this = jsonValue;
}

LocationModel& LocationModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocationName"))
  {
    m_locationName = jsonValue.GetString("LocationName");

    m_locationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocationArn"))
  {
    m_locationArn = jsonValue.GetString("LocationArn");

    m_locationArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LocationModel::Jsonize() const
{
  JsonValue payload;

  if(m_locationNameHasBeenSet)
  {
   payload.WithString("LocationName", m_locationName);

  }

  if(m_locationArnHasBeenSet)
  {
   payload.WithString("LocationArn", m_locationArn);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
