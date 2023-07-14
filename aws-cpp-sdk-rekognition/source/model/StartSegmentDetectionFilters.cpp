/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StartSegmentDetectionFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

StartSegmentDetectionFilters::StartSegmentDetectionFilters() : 
    m_technicalCueFilterHasBeenSet(false),
    m_shotFilterHasBeenSet(false)
{
}

StartSegmentDetectionFilters::StartSegmentDetectionFilters(JsonView jsonValue) : 
    m_technicalCueFilterHasBeenSet(false),
    m_shotFilterHasBeenSet(false)
{
  *this = jsonValue;
}

StartSegmentDetectionFilters& StartSegmentDetectionFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TechnicalCueFilter"))
  {
    m_technicalCueFilter = jsonValue.GetObject("TechnicalCueFilter");

    m_technicalCueFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShotFilter"))
  {
    m_shotFilter = jsonValue.GetObject("ShotFilter");

    m_shotFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue StartSegmentDetectionFilters::Jsonize() const
{
  JsonValue payload;

  if(m_technicalCueFilterHasBeenSet)
  {
   payload.WithObject("TechnicalCueFilter", m_technicalCueFilter.Jsonize());

  }

  if(m_shotFilterHasBeenSet)
  {
   payload.WithObject("ShotFilter", m_shotFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
