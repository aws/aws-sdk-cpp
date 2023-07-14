/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/TelemetryRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

TelemetryRecord::TelemetryRecord() : 
    m_timestampHasBeenSet(false),
    m_segmentsReceivedCount(0),
    m_segmentsReceivedCountHasBeenSet(false),
    m_segmentsSentCount(0),
    m_segmentsSentCountHasBeenSet(false),
    m_segmentsSpilloverCount(0),
    m_segmentsSpilloverCountHasBeenSet(false),
    m_segmentsRejectedCount(0),
    m_segmentsRejectedCountHasBeenSet(false),
    m_backendConnectionErrorsHasBeenSet(false)
{
}

TelemetryRecord::TelemetryRecord(JsonView jsonValue) : 
    m_timestampHasBeenSet(false),
    m_segmentsReceivedCount(0),
    m_segmentsReceivedCountHasBeenSet(false),
    m_segmentsSentCount(0),
    m_segmentsSentCountHasBeenSet(false),
    m_segmentsSpilloverCount(0),
    m_segmentsSpilloverCountHasBeenSet(false),
    m_segmentsRejectedCount(0),
    m_segmentsRejectedCountHasBeenSet(false),
    m_backendConnectionErrorsHasBeenSet(false)
{
  *this = jsonValue;
}

TelemetryRecord& TelemetryRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentsReceivedCount"))
  {
    m_segmentsReceivedCount = jsonValue.GetInteger("SegmentsReceivedCount");

    m_segmentsReceivedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentsSentCount"))
  {
    m_segmentsSentCount = jsonValue.GetInteger("SegmentsSentCount");

    m_segmentsSentCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentsSpilloverCount"))
  {
    m_segmentsSpilloverCount = jsonValue.GetInteger("SegmentsSpilloverCount");

    m_segmentsSpilloverCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentsRejectedCount"))
  {
    m_segmentsRejectedCount = jsonValue.GetInteger("SegmentsRejectedCount");

    m_segmentsRejectedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackendConnectionErrors"))
  {
    m_backendConnectionErrors = jsonValue.GetObject("BackendConnectionErrors");

    m_backendConnectionErrorsHasBeenSet = true;
  }

  return *this;
}

JsonValue TelemetryRecord::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_segmentsReceivedCountHasBeenSet)
  {
   payload.WithInteger("SegmentsReceivedCount", m_segmentsReceivedCount);

  }

  if(m_segmentsSentCountHasBeenSet)
  {
   payload.WithInteger("SegmentsSentCount", m_segmentsSentCount);

  }

  if(m_segmentsSpilloverCountHasBeenSet)
  {
   payload.WithInteger("SegmentsSpilloverCount", m_segmentsSpilloverCount);

  }

  if(m_segmentsRejectedCountHasBeenSet)
  {
   payload.WithInteger("SegmentsRejectedCount", m_segmentsRejectedCount);

  }

  if(m_backendConnectionErrorsHasBeenSet)
  {
   payload.WithObject("BackendConnectionErrors", m_backendConnectionErrors.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
