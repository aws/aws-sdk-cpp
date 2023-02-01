/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/DecoderManifestValidationException.h>
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

DecoderManifestValidationException::DecoderManifestValidationException() : 
    m_invalidSignalsHasBeenSet(false),
    m_invalidNetworkInterfacesHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

DecoderManifestValidationException::DecoderManifestValidationException(JsonView jsonValue) : 
    m_invalidSignalsHasBeenSet(false),
    m_invalidNetworkInterfacesHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

DecoderManifestValidationException& DecoderManifestValidationException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("invalidSignals"))
  {
    Aws::Utils::Array<JsonView> invalidSignalsJsonList = jsonValue.GetArray("invalidSignals");
    for(unsigned invalidSignalsIndex = 0; invalidSignalsIndex < invalidSignalsJsonList.GetLength(); ++invalidSignalsIndex)
    {
      m_invalidSignals.push_back(invalidSignalsJsonList[invalidSignalsIndex].AsObject());
    }
    m_invalidSignalsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("invalidNetworkInterfaces"))
  {
    Aws::Utils::Array<JsonView> invalidNetworkInterfacesJsonList = jsonValue.GetArray("invalidNetworkInterfaces");
    for(unsigned invalidNetworkInterfacesIndex = 0; invalidNetworkInterfacesIndex < invalidNetworkInterfacesJsonList.GetLength(); ++invalidNetworkInterfacesIndex)
    {
      m_invalidNetworkInterfaces.push_back(invalidNetworkInterfacesJsonList[invalidNetworkInterfacesIndex].AsObject());
    }
    m_invalidNetworkInterfacesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue DecoderManifestValidationException::Jsonize() const
{
  JsonValue payload;

  if(m_invalidSignalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> invalidSignalsJsonList(m_invalidSignals.size());
   for(unsigned invalidSignalsIndex = 0; invalidSignalsIndex < invalidSignalsJsonList.GetLength(); ++invalidSignalsIndex)
   {
     invalidSignalsJsonList[invalidSignalsIndex].AsObject(m_invalidSignals[invalidSignalsIndex].Jsonize());
   }
   payload.WithArray("invalidSignals", std::move(invalidSignalsJsonList));

  }

  if(m_invalidNetworkInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> invalidNetworkInterfacesJsonList(m_invalidNetworkInterfaces.size());
   for(unsigned invalidNetworkInterfacesIndex = 0; invalidNetworkInterfacesIndex < invalidNetworkInterfacesJsonList.GetLength(); ++invalidNetworkInterfacesIndex)
   {
     invalidNetworkInterfacesJsonList[invalidNetworkInterfacesIndex].AsObject(m_invalidNetworkInterfaces[invalidNetworkInterfacesIndex].Jsonize());
   }
   payload.WithArray("invalidNetworkInterfaces", std::move(invalidNetworkInterfacesJsonList));

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
