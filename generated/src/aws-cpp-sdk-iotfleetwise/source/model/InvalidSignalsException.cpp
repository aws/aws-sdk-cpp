/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/InvalidSignalsException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

InvalidSignalsException::InvalidSignalsException() : 
    m_messageHasBeenSet(false),
    m_invalidSignalsHasBeenSet(false)
{
}

InvalidSignalsException::InvalidSignalsException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_invalidSignalsHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidSignalsException& InvalidSignalsException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("invalidSignals"))
  {
    Aws::Utils::Array<JsonView> invalidSignalsJsonList = jsonValue.GetArray("invalidSignals");
    for(unsigned invalidSignalsIndex = 0; invalidSignalsIndex < invalidSignalsJsonList.GetLength(); ++invalidSignalsIndex)
    {
      m_invalidSignals.push_back(invalidSignalsJsonList[invalidSignalsIndex].AsObject());
    }
    m_invalidSignalsHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidSignalsException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_invalidSignalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> invalidSignalsJsonList(m_invalidSignals.size());
   for(unsigned invalidSignalsIndex = 0; invalidSignalsIndex < invalidSignalsJsonList.GetLength(); ++invalidSignalsIndex)
   {
     invalidSignalsJsonList[invalidSignalsIndex].AsObject(m_invalidSignals[invalidSignalsIndex].Jsonize());
   }
   payload.WithArray("invalidSignals", std::move(invalidSignalsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
