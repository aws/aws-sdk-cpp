/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/DetectorStateSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

DetectorStateSummary::DetectorStateSummary() : 
    m_stateNameHasBeenSet(false)
{
}

DetectorStateSummary::DetectorStateSummary(JsonView jsonValue) : 
    m_stateNameHasBeenSet(false)
{
  *this = jsonValue;
}

DetectorStateSummary& DetectorStateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stateName"))
  {
    m_stateName = jsonValue.GetString("stateName");

    m_stateNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectorStateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_stateNameHasBeenSet)
  {
   payload.WithString("stateName", m_stateName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
