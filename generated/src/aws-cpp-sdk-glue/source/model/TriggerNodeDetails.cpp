/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TriggerNodeDetails.h>
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

TriggerNodeDetails::TriggerNodeDetails() : 
    m_triggerHasBeenSet(false)
{
}

TriggerNodeDetails::TriggerNodeDetails(JsonView jsonValue) : 
    m_triggerHasBeenSet(false)
{
  *this = jsonValue;
}

TriggerNodeDetails& TriggerNodeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Trigger"))
  {
    m_trigger = jsonValue.GetObject("Trigger");

    m_triggerHasBeenSet = true;
  }

  return *this;
}

JsonValue TriggerNodeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_triggerHasBeenSet)
  {
   payload.WithObject("Trigger", m_trigger.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
