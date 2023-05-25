/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/IotEventsInputIdentifier.h>
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

IotEventsInputIdentifier::IotEventsInputIdentifier() : 
    m_inputNameHasBeenSet(false)
{
}

IotEventsInputIdentifier::IotEventsInputIdentifier(JsonView jsonValue) : 
    m_inputNameHasBeenSet(false)
{
  *this = jsonValue;
}

IotEventsInputIdentifier& IotEventsInputIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputName"))
  {
    m_inputName = jsonValue.GetString("inputName");

    m_inputNameHasBeenSet = true;
  }

  return *this;
}

JsonValue IotEventsInputIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_inputNameHasBeenSet)
  {
   payload.WithString("inputName", m_inputName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
