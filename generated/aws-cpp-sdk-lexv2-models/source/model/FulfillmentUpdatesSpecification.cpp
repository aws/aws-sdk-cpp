/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/FulfillmentUpdatesSpecification.h>
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

FulfillmentUpdatesSpecification::FulfillmentUpdatesSpecification() : 
    m_active(false),
    m_activeHasBeenSet(false),
    m_startResponseHasBeenSet(false),
    m_updateResponseHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false)
{
}

FulfillmentUpdatesSpecification::FulfillmentUpdatesSpecification(JsonView jsonValue) : 
    m_active(false),
    m_activeHasBeenSet(false),
    m_startResponseHasBeenSet(false),
    m_updateResponseHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

FulfillmentUpdatesSpecification& FulfillmentUpdatesSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("active"))
  {
    m_active = jsonValue.GetBool("active");

    m_activeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startResponse"))
  {
    m_startResponse = jsonValue.GetObject("startResponse");

    m_startResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateResponse"))
  {
    m_updateResponse = jsonValue.GetObject("updateResponse");

    m_updateResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutInSeconds"))
  {
    m_timeoutInSeconds = jsonValue.GetInteger("timeoutInSeconds");

    m_timeoutInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue FulfillmentUpdatesSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_activeHasBeenSet)
  {
   payload.WithBool("active", m_active);

  }

  if(m_startResponseHasBeenSet)
  {
   payload.WithObject("startResponse", m_startResponse.Jsonize());

  }

  if(m_updateResponseHasBeenSet)
  {
   payload.WithObject("updateResponse", m_updateResponse.Jsonize());

  }

  if(m_timeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("timeoutInSeconds", m_timeoutInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
