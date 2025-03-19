/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ObdSignal.h>
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

ObdSignal::ObdSignal(JsonView jsonValue)
{
  *this = jsonValue;
}

ObdSignal& ObdSignal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pidResponseLength"))
  {
    m_pidResponseLength = jsonValue.GetInteger("pidResponseLength");
    m_pidResponseLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceMode"))
  {
    m_serviceMode = jsonValue.GetInteger("serviceMode");
    m_serviceModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pid"))
  {
    m_pid = jsonValue.GetInteger("pid");
    m_pidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scaling"))
  {
    m_scaling = jsonValue.GetDouble("scaling");
    m_scalingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("offset"))
  {
    m_offset = jsonValue.GetDouble("offset");
    m_offsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startByte"))
  {
    m_startByte = jsonValue.GetInteger("startByte");
    m_startByteHasBeenSet = true;
  }
  if(jsonValue.ValueExists("byteLength"))
  {
    m_byteLength = jsonValue.GetInteger("byteLength");
    m_byteLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bitRightShift"))
  {
    m_bitRightShift = jsonValue.GetInteger("bitRightShift");
    m_bitRightShiftHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bitMaskLength"))
  {
    m_bitMaskLength = jsonValue.GetInteger("bitMaskLength");
    m_bitMaskLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isSigned"))
  {
    m_isSigned = jsonValue.GetBool("isSigned");
    m_isSignedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signalValueType"))
  {
    m_signalValueType = SignalValueTypeMapper::GetSignalValueTypeForName(jsonValue.GetString("signalValueType"));
    m_signalValueTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ObdSignal::Jsonize() const
{
  JsonValue payload;

  if(m_pidResponseLengthHasBeenSet)
  {
   payload.WithInteger("pidResponseLength", m_pidResponseLength);

  }

  if(m_serviceModeHasBeenSet)
  {
   payload.WithInteger("serviceMode", m_serviceMode);

  }

  if(m_pidHasBeenSet)
  {
   payload.WithInteger("pid", m_pid);

  }

  if(m_scalingHasBeenSet)
  {
   payload.WithDouble("scaling", m_scaling);

  }

  if(m_offsetHasBeenSet)
  {
   payload.WithDouble("offset", m_offset);

  }

  if(m_startByteHasBeenSet)
  {
   payload.WithInteger("startByte", m_startByte);

  }

  if(m_byteLengthHasBeenSet)
  {
   payload.WithInteger("byteLength", m_byteLength);

  }

  if(m_bitRightShiftHasBeenSet)
  {
   payload.WithInteger("bitRightShift", m_bitRightShift);

  }

  if(m_bitMaskLengthHasBeenSet)
  {
   payload.WithInteger("bitMaskLength", m_bitMaskLength);

  }

  if(m_isSignedHasBeenSet)
  {
   payload.WithBool("isSigned", m_isSigned);

  }

  if(m_signalValueTypeHasBeenSet)
  {
   payload.WithString("signalValueType", SignalValueTypeMapper::GetNameForSignalValueType(m_signalValueType));
  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
