/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/FulfillmentCodeHookSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

FulfillmentCodeHookSettings::FulfillmentCodeHookSettings() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_postFulfillmentStatusSpecificationHasBeenSet(false),
    m_fulfillmentUpdatesSpecificationHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false)
{
}

FulfillmentCodeHookSettings::FulfillmentCodeHookSettings(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_postFulfillmentStatusSpecificationHasBeenSet(false),
    m_fulfillmentUpdatesSpecificationHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false)
{
  *this = jsonValue;
}

FulfillmentCodeHookSettings& FulfillmentCodeHookSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("postFulfillmentStatusSpecification"))
  {
    m_postFulfillmentStatusSpecification = jsonValue.GetObject("postFulfillmentStatusSpecification");

    m_postFulfillmentStatusSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fulfillmentUpdatesSpecification"))
  {
    m_fulfillmentUpdatesSpecification = jsonValue.GetObject("fulfillmentUpdatesSpecification");

    m_fulfillmentUpdatesSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("active"))
  {
    m_active = jsonValue.GetBool("active");

    m_activeHasBeenSet = true;
  }

  return *this;
}

JsonValue FulfillmentCodeHookSettings::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_postFulfillmentStatusSpecificationHasBeenSet)
  {
   payload.WithObject("postFulfillmentStatusSpecification", m_postFulfillmentStatusSpecification.Jsonize());

  }

  if(m_fulfillmentUpdatesSpecificationHasBeenSet)
  {
   payload.WithObject("fulfillmentUpdatesSpecification", m_fulfillmentUpdatesSpecification.Jsonize());

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("active", m_active);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
