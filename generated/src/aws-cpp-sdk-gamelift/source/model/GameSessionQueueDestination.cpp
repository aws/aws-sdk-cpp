/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameSessionQueueDestination.h>
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

GameSessionQueueDestination::GameSessionQueueDestination() : 
    m_destinationArnHasBeenSet(false)
{
}

GameSessionQueueDestination::GameSessionQueueDestination(JsonView jsonValue) : 
    m_destinationArnHasBeenSet(false)
{
  *this = jsonValue;
}

GameSessionQueueDestination& GameSessionQueueDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationArn"))
  {
    m_destinationArn = jsonValue.GetString("DestinationArn");

    m_destinationArnHasBeenSet = true;
  }

  return *this;
}

JsonValue GameSessionQueueDestination::Jsonize() const
{
  JsonValue payload;

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("DestinationArn", m_destinationArn);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
