/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/storagegateway/model/AutomaticTapeCreationRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

AutomaticTapeCreationRule::AutomaticTapeCreationRule() : 
    m_tapeBarcodePrefixHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_tapeSizeInBytes(0),
    m_tapeSizeInBytesHasBeenSet(false),
    m_minimumNumTapes(0),
    m_minimumNumTapesHasBeenSet(false)
{
}

AutomaticTapeCreationRule::AutomaticTapeCreationRule(JsonView jsonValue) : 
    m_tapeBarcodePrefixHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_tapeSizeInBytes(0),
    m_tapeSizeInBytesHasBeenSet(false),
    m_minimumNumTapes(0),
    m_minimumNumTapesHasBeenSet(false)
{
  *this = jsonValue;
}

AutomaticTapeCreationRule& AutomaticTapeCreationRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TapeBarcodePrefix"))
  {
    m_tapeBarcodePrefix = jsonValue.GetString("TapeBarcodePrefix");

    m_tapeBarcodePrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PoolId"))
  {
    m_poolId = jsonValue.GetString("PoolId");

    m_poolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TapeSizeInBytes"))
  {
    m_tapeSizeInBytes = jsonValue.GetInt64("TapeSizeInBytes");

    m_tapeSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinimumNumTapes"))
  {
    m_minimumNumTapes = jsonValue.GetInteger("MinimumNumTapes");

    m_minimumNumTapesHasBeenSet = true;
  }

  return *this;
}

JsonValue AutomaticTapeCreationRule::Jsonize() const
{
  JsonValue payload;

  if(m_tapeBarcodePrefixHasBeenSet)
  {
   payload.WithString("TapeBarcodePrefix", m_tapeBarcodePrefix);

  }

  if(m_poolIdHasBeenSet)
  {
   payload.WithString("PoolId", m_poolId);

  }

  if(m_tapeSizeInBytesHasBeenSet)
  {
   payload.WithInt64("TapeSizeInBytes", m_tapeSizeInBytes);

  }

  if(m_minimumNumTapesHasBeenSet)
  {
   payload.WithInteger("MinimumNumTapes", m_minimumNumTapes);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
