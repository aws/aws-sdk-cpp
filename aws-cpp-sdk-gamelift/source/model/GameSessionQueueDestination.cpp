/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

GameSessionQueueDestination::GameSessionQueueDestination(const JsonValue& jsonValue) : 
    m_destinationArnHasBeenSet(false)
{
  *this = jsonValue;
}

GameSessionQueueDestination& GameSessionQueueDestination::operator =(const JsonValue& jsonValue)
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