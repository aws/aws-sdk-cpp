/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/AutoTuneDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

AutoTuneDetails::AutoTuneDetails() : 
    m_scheduledAutoTuneDetailsHasBeenSet(false)
{
}

AutoTuneDetails::AutoTuneDetails(JsonView jsonValue) : 
    m_scheduledAutoTuneDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

AutoTuneDetails& AutoTuneDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScheduledAutoTuneDetails"))
  {
    m_scheduledAutoTuneDetails = jsonValue.GetObject("ScheduledAutoTuneDetails");

    m_scheduledAutoTuneDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoTuneDetails::Jsonize() const
{
  JsonValue payload;

  if(m_scheduledAutoTuneDetailsHasBeenSet)
  {
   payload.WithObject("ScheduledAutoTuneDetails", m_scheduledAutoTuneDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
