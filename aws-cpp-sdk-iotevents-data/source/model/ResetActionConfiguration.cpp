/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/ResetActionConfiguration.h>
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

ResetActionConfiguration::ResetActionConfiguration() : 
    m_noteHasBeenSet(false)
{
}

ResetActionConfiguration::ResetActionConfiguration(JsonView jsonValue) : 
    m_noteHasBeenSet(false)
{
  *this = jsonValue;
}

ResetActionConfiguration& ResetActionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("note"))
  {
    m_note = jsonValue.GetString("note");

    m_noteHasBeenSet = true;
  }

  return *this;
}

JsonValue ResetActionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_noteHasBeenSet)
  {
   payload.WithString("note", m_note);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
