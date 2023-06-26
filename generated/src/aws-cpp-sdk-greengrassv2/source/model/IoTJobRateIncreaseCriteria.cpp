﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/IoTJobRateIncreaseCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

IoTJobRateIncreaseCriteria::IoTJobRateIncreaseCriteria() : 
    m_numberOfNotifiedThings(0),
    m_numberOfNotifiedThingsHasBeenSet(false),
    m_numberOfSucceededThings(0),
    m_numberOfSucceededThingsHasBeenSet(false)
{
}

IoTJobRateIncreaseCriteria::IoTJobRateIncreaseCriteria(JsonView jsonValue) : 
    m_numberOfNotifiedThings(0),
    m_numberOfNotifiedThingsHasBeenSet(false),
    m_numberOfSucceededThings(0),
    m_numberOfSucceededThingsHasBeenSet(false)
{
  *this = jsonValue;
}

IoTJobRateIncreaseCriteria& IoTJobRateIncreaseCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("numberOfNotifiedThings"))
  {
    m_numberOfNotifiedThings = jsonValue.GetInteger("numberOfNotifiedThings");

    m_numberOfNotifiedThingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfSucceededThings"))
  {
    m_numberOfSucceededThings = jsonValue.GetInteger("numberOfSucceededThings");

    m_numberOfSucceededThingsHasBeenSet = true;
  }

  return *this;
}

JsonValue IoTJobRateIncreaseCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfNotifiedThingsHasBeenSet)
  {
   payload.WithInteger("numberOfNotifiedThings", m_numberOfNotifiedThings);

  }

  if(m_numberOfSucceededThingsHasBeenSet)
  {
   payload.WithInteger("numberOfSucceededThings", m_numberOfSucceededThings);

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
