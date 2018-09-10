﻿/*
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

#include <aws/mediaconvert/model/DashIsoGroupSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

DashIsoGroupSettings::DashIsoGroupSettings() : 
    m_baseUrlHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_fragmentLength(0),
    m_fragmentLengthHasBeenSet(false),
    m_hbbtvCompliance(DashIsoHbbtvCompliance::NOT_SET),
    m_hbbtvComplianceHasBeenSet(false),
    m_minBufferTime(0),
    m_minBufferTimeHasBeenSet(false),
    m_segmentControl(DashIsoSegmentControl::NOT_SET),
    m_segmentControlHasBeenSet(false),
    m_segmentLength(0),
    m_segmentLengthHasBeenSet(false),
    m_writeSegmentTimelineInRepresentation(DashIsoWriteSegmentTimelineInRepresentation::NOT_SET),
    m_writeSegmentTimelineInRepresentationHasBeenSet(false)
{
}

DashIsoGroupSettings::DashIsoGroupSettings(JsonView jsonValue) : 
    m_baseUrlHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_fragmentLength(0),
    m_fragmentLengthHasBeenSet(false),
    m_hbbtvCompliance(DashIsoHbbtvCompliance::NOT_SET),
    m_hbbtvComplianceHasBeenSet(false),
    m_minBufferTime(0),
    m_minBufferTimeHasBeenSet(false),
    m_segmentControl(DashIsoSegmentControl::NOT_SET),
    m_segmentControlHasBeenSet(false),
    m_segmentLength(0),
    m_segmentLengthHasBeenSet(false),
    m_writeSegmentTimelineInRepresentation(DashIsoWriteSegmentTimelineInRepresentation::NOT_SET),
    m_writeSegmentTimelineInRepresentationHasBeenSet(false)
{
  *this = jsonValue;
}

DashIsoGroupSettings& DashIsoGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("baseUrl"))
  {
    m_baseUrl = jsonValue.GetString("baseUrl");

    m_baseUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fragmentLength"))
  {
    m_fragmentLength = jsonValue.GetInteger("fragmentLength");

    m_fragmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hbbtvCompliance"))
  {
    m_hbbtvCompliance = DashIsoHbbtvComplianceMapper::GetDashIsoHbbtvComplianceForName(jsonValue.GetString("hbbtvCompliance"));

    m_hbbtvComplianceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minBufferTime"))
  {
    m_minBufferTime = jsonValue.GetInteger("minBufferTime");

    m_minBufferTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentControl"))
  {
    m_segmentControl = DashIsoSegmentControlMapper::GetDashIsoSegmentControlForName(jsonValue.GetString("segmentControl"));

    m_segmentControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentLength"))
  {
    m_segmentLength = jsonValue.GetInteger("segmentLength");

    m_segmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("writeSegmentTimelineInRepresentation"))
  {
    m_writeSegmentTimelineInRepresentation = DashIsoWriteSegmentTimelineInRepresentationMapper::GetDashIsoWriteSegmentTimelineInRepresentationForName(jsonValue.GetString("writeSegmentTimelineInRepresentation"));

    m_writeSegmentTimelineInRepresentationHasBeenSet = true;
  }

  return *this;
}

JsonValue DashIsoGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_baseUrlHasBeenSet)
  {
   payload.WithString("baseUrl", m_baseUrl);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_fragmentLengthHasBeenSet)
  {
   payload.WithInteger("fragmentLength", m_fragmentLength);

  }

  if(m_hbbtvComplianceHasBeenSet)
  {
   payload.WithString("hbbtvCompliance", DashIsoHbbtvComplianceMapper::GetNameForDashIsoHbbtvCompliance(m_hbbtvCompliance));
  }

  if(m_minBufferTimeHasBeenSet)
  {
   payload.WithInteger("minBufferTime", m_minBufferTime);

  }

  if(m_segmentControlHasBeenSet)
  {
   payload.WithString("segmentControl", DashIsoSegmentControlMapper::GetNameForDashIsoSegmentControl(m_segmentControl));
  }

  if(m_segmentLengthHasBeenSet)
  {
   payload.WithInteger("segmentLength", m_segmentLength);

  }

  if(m_writeSegmentTimelineInRepresentationHasBeenSet)
  {
   payload.WithString("writeSegmentTimelineInRepresentation", DashIsoWriteSegmentTimelineInRepresentationMapper::GetNameForDashIsoWriteSegmentTimelineInRepresentation(m_writeSegmentTimelineInRepresentation));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
