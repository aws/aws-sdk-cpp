/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TimestampFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

TimestampFilter::TimestampFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

TimestampFilter& TimestampFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecordedBefore"))
  {
    m_recordedBefore = jsonValue.GetDouble("RecordedBefore");
    m_recordedBeforeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecordedAfter"))
  {
    m_recordedAfter = jsonValue.GetDouble("RecordedAfter");
    m_recordedAfterHasBeenSet = true;
  }
  return *this;
}

JsonValue TimestampFilter::Jsonize() const
{
  JsonValue payload;

  if(m_recordedBeforeHasBeenSet)
  {
   payload.WithDouble("RecordedBefore", m_recordedBefore.SecondsWithMSPrecision());
  }

  if(m_recordedAfterHasBeenSet)
  {
   payload.WithDouble("RecordedAfter", m_recordedAfter.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
