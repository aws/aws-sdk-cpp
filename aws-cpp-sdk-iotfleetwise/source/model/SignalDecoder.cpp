/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/SignalDecoder.h>
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

SignalDecoder::SignalDecoder() : 
    m_fullyQualifiedNameHasBeenSet(false),
    m_type(SignalDecoderType::NOT_SET),
    m_typeHasBeenSet(false),
    m_interfaceIdHasBeenSet(false),
    m_canSignalHasBeenSet(false),
    m_obdSignalHasBeenSet(false)
{
}

SignalDecoder::SignalDecoder(JsonView jsonValue) : 
    m_fullyQualifiedNameHasBeenSet(false),
    m_type(SignalDecoderType::NOT_SET),
    m_typeHasBeenSet(false),
    m_interfaceIdHasBeenSet(false),
    m_canSignalHasBeenSet(false),
    m_obdSignalHasBeenSet(false)
{
  *this = jsonValue;
}

SignalDecoder& SignalDecoder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fullyQualifiedName"))
  {
    m_fullyQualifiedName = jsonValue.GetString("fullyQualifiedName");

    m_fullyQualifiedNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = SignalDecoderTypeMapper::GetSignalDecoderTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interfaceId"))
  {
    m_interfaceId = jsonValue.GetString("interfaceId");

    m_interfaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("canSignal"))
  {
    m_canSignal = jsonValue.GetObject("canSignal");

    m_canSignalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("obdSignal"))
  {
    m_obdSignal = jsonValue.GetObject("obdSignal");

    m_obdSignalHasBeenSet = true;
  }

  return *this;
}

JsonValue SignalDecoder::Jsonize() const
{
  JsonValue payload;

  if(m_fullyQualifiedNameHasBeenSet)
  {
   payload.WithString("fullyQualifiedName", m_fullyQualifiedName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SignalDecoderTypeMapper::GetNameForSignalDecoderType(m_type));
  }

  if(m_interfaceIdHasBeenSet)
  {
   payload.WithString("interfaceId", m_interfaceId);

  }

  if(m_canSignalHasBeenSet)
  {
   payload.WithObject("canSignal", m_canSignal.Jsonize());

  }

  if(m_obdSignalHasBeenSet)
  {
   payload.WithObject("obdSignal", m_obdSignal.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
