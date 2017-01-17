﻿/*
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
#include <aws/storagegateway/model/Tape.h>
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

Tape::Tape() : 
    m_tapeARNHasBeenSet(false),
    m_tapeBarcodeHasBeenSet(false),
    m_tapeCreatedDateHasBeenSet(false),
    m_tapeSizeInBytes(0),
    m_tapeSizeInBytesHasBeenSet(false),
    m_tapeStatusHasBeenSet(false),
    m_vTLDeviceHasBeenSet(false),
    m_progress(0.0),
    m_progressHasBeenSet(false)
{
}

Tape::Tape(const JsonValue& jsonValue) : 
    m_tapeARNHasBeenSet(false),
    m_tapeBarcodeHasBeenSet(false),
    m_tapeCreatedDateHasBeenSet(false),
    m_tapeSizeInBytes(0),
    m_tapeSizeInBytesHasBeenSet(false),
    m_tapeStatusHasBeenSet(false),
    m_vTLDeviceHasBeenSet(false),
    m_progress(0.0),
    m_progressHasBeenSet(false)
{
  *this = jsonValue;
}

Tape& Tape::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TapeARN"))
  {
    m_tapeARN = jsonValue.GetString("TapeARN");

    m_tapeARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TapeBarcode"))
  {
    m_tapeBarcode = jsonValue.GetString("TapeBarcode");

    m_tapeBarcodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TapeCreatedDate"))
  {
    m_tapeCreatedDate = jsonValue.GetDouble("TapeCreatedDate");

    m_tapeCreatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TapeSizeInBytes"))
  {
    m_tapeSizeInBytes = jsonValue.GetInt64("TapeSizeInBytes");

    m_tapeSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TapeStatus"))
  {
    m_tapeStatus = jsonValue.GetString("TapeStatus");

    m_tapeStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VTLDevice"))
  {
    m_vTLDevice = jsonValue.GetString("VTLDevice");

    m_vTLDeviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Progress"))
  {
    m_progress = jsonValue.GetDouble("Progress");

    m_progressHasBeenSet = true;
  }

  return *this;
}

JsonValue Tape::Jsonize() const
{
  JsonValue payload;

  if(m_tapeARNHasBeenSet)
  {
   payload.WithString("TapeARN", m_tapeARN);

  }

  if(m_tapeBarcodeHasBeenSet)
  {
   payload.WithString("TapeBarcode", m_tapeBarcode);

  }

  if(m_tapeCreatedDateHasBeenSet)
  {
   payload.WithDouble("TapeCreatedDate", m_tapeCreatedDate.SecondsWithMSPrecision());
  }

  if(m_tapeSizeInBytesHasBeenSet)
  {
   payload.WithInt64("TapeSizeInBytes", m_tapeSizeInBytes);

  }

  if(m_tapeStatusHasBeenSet)
  {
   payload.WithString("TapeStatus", m_tapeStatus);

  }

  if(m_vTLDeviceHasBeenSet)
  {
   payload.WithString("VTLDevice", m_vTLDevice);

  }

  if(m_progressHasBeenSet)
  {
   payload.WithDouble("Progress", m_progress);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws