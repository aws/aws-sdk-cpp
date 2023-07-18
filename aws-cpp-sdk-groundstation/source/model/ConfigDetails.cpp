﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/ConfigDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

ConfigDetails::ConfigDetails() : 
    m_antennaDemodDecodeDetailsHasBeenSet(false),
    m_endpointDetailsHasBeenSet(false),
    m_s3RecordingDetailsHasBeenSet(false)
{
}

ConfigDetails::ConfigDetails(JsonView jsonValue) : 
    m_antennaDemodDecodeDetailsHasBeenSet(false),
    m_endpointDetailsHasBeenSet(false),
    m_s3RecordingDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigDetails& ConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("antennaDemodDecodeDetails"))
  {
    m_antennaDemodDecodeDetails = jsonValue.GetObject("antennaDemodDecodeDetails");

    m_antennaDemodDecodeDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpointDetails"))
  {
    m_endpointDetails = jsonValue.GetObject("endpointDetails");

    m_endpointDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3RecordingDetails"))
  {
    m_s3RecordingDetails = jsonValue.GetObject("s3RecordingDetails");

    m_s3RecordingDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_antennaDemodDecodeDetailsHasBeenSet)
  {
   payload.WithObject("antennaDemodDecodeDetails", m_antennaDemodDecodeDetails.Jsonize());

  }

  if(m_endpointDetailsHasBeenSet)
  {
   payload.WithObject("endpointDetails", m_endpointDetails.Jsonize());

  }

  if(m_s3RecordingDetailsHasBeenSet)
  {
   payload.WithObject("s3RecordingDetails", m_s3RecordingDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
