/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/EventSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

EventSummary::EventSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

EventSummary& EventSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("openLineageRunEventSummary"))
  {
    m_openLineageRunEventSummary = jsonValue.GetObject("openLineageRunEventSummary");
    m_openLineageRunEventSummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue EventSummary::Jsonize() const
{
  JsonValue payload;

  if(m_openLineageRunEventSummaryHasBeenSet)
  {
   payload.WithObject("openLineageRunEventSummary", m_openLineageRunEventSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
