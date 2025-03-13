/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AwsJobRateIncreaseCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

AwsJobRateIncreaseCriteria::AwsJobRateIncreaseCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsJobRateIncreaseCriteria& AwsJobRateIncreaseCriteria::operator =(JsonView jsonValue)
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

JsonValue AwsJobRateIncreaseCriteria::Jsonize() const
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
} // namespace IoT
} // namespace Aws
