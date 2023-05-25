/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/Attribute.h>
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

Attribute::Attribute() : 
    m_jsonPathHasBeenSet(false)
{
}

Attribute::Attribute(JsonView jsonValue) : 
    m_jsonPathHasBeenSet(false)
{
  *this = jsonValue;
}

Attribute& Attribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jsonPath"))
  {
    m_jsonPath = jsonValue.GetString("jsonPath");

    m_jsonPathHasBeenSet = true;
  }

  return *this;
}

JsonValue Attribute::Jsonize() const
{
  JsonValue payload;

  if(m_jsonPathHasBeenSet)
  {
   payload.WithString("jsonPath", m_jsonPath);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
