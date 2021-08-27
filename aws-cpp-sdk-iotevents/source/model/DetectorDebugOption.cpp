/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/DetectorDebugOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

DetectorDebugOption::DetectorDebugOption() : 
    m_detectorModelNameHasBeenSet(false),
    m_keyValueHasBeenSet(false)
{
}

DetectorDebugOption::DetectorDebugOption(JsonView jsonValue) : 
    m_detectorModelNameHasBeenSet(false),
    m_keyValueHasBeenSet(false)
{
  *this = jsonValue;
}

DetectorDebugOption& DetectorDebugOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("detectorModelName"))
  {
    m_detectorModelName = jsonValue.GetString("detectorModelName");

    m_detectorModelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyValue"))
  {
    m_keyValue = jsonValue.GetString("keyValue");

    m_keyValueHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectorDebugOption::Jsonize() const
{
  JsonValue payload;

  if(m_detectorModelNameHasBeenSet)
  {
   payload.WithString("detectorModelName", m_detectorModelName);

  }

  if(m_keyValueHasBeenSet)
  {
   payload.WithString("keyValue", m_keyValue);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
