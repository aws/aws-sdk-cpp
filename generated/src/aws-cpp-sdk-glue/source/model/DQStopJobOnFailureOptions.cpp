/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DQStopJobOnFailureOptions.h>
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

DQStopJobOnFailureOptions::DQStopJobOnFailureOptions() : 
    m_stopJobOnFailureTiming(DQStopJobOnFailureTiming::NOT_SET),
    m_stopJobOnFailureTimingHasBeenSet(false)
{
}

DQStopJobOnFailureOptions::DQStopJobOnFailureOptions(JsonView jsonValue) : 
    m_stopJobOnFailureTiming(DQStopJobOnFailureTiming::NOT_SET),
    m_stopJobOnFailureTimingHasBeenSet(false)
{
  *this = jsonValue;
}

DQStopJobOnFailureOptions& DQStopJobOnFailureOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StopJobOnFailureTiming"))
  {
    m_stopJobOnFailureTiming = DQStopJobOnFailureTimingMapper::GetDQStopJobOnFailureTimingForName(jsonValue.GetString("StopJobOnFailureTiming"));

    m_stopJobOnFailureTimingHasBeenSet = true;
  }

  return *this;
}

JsonValue DQStopJobOnFailureOptions::Jsonize() const
{
  JsonValue payload;

  if(m_stopJobOnFailureTimingHasBeenSet)
  {
   payload.WithString("StopJobOnFailureTiming", DQStopJobOnFailureTimingMapper::GetNameForDQStopJobOnFailureTiming(m_stopJobOnFailureTiming));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
