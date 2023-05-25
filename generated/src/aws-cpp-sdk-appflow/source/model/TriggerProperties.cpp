/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/TriggerProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

TriggerProperties::TriggerProperties() : 
    m_scheduledHasBeenSet(false)
{
}

TriggerProperties::TriggerProperties(JsonView jsonValue) : 
    m_scheduledHasBeenSet(false)
{
  *this = jsonValue;
}

TriggerProperties& TriggerProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Scheduled"))
  {
    m_scheduled = jsonValue.GetObject("Scheduled");

    m_scheduledHasBeenSet = true;
  }

  return *this;
}

JsonValue TriggerProperties::Jsonize() const
{
  JsonValue payload;

  if(m_scheduledHasBeenSet)
  {
   payload.WithObject("Scheduled", m_scheduled.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
