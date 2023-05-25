/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/DisableActionConfiguration.h>
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

DisableActionConfiguration::DisableActionConfiguration() : 
    m_noteHasBeenSet(false)
{
}

DisableActionConfiguration::DisableActionConfiguration(JsonView jsonValue) : 
    m_noteHasBeenSet(false)
{
  *this = jsonValue;
}

DisableActionConfiguration& DisableActionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("note"))
  {
    m_note = jsonValue.GetString("note");

    m_noteHasBeenSet = true;
  }

  return *this;
}

JsonValue DisableActionConfiguration::Jsonize() const
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
