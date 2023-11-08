/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Detection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Detection::Detection() : 
    m_anomalyHasBeenSet(false)
{
}

Detection::Detection(JsonView jsonValue) : 
    m_anomalyHasBeenSet(false)
{
  *this = jsonValue;
}

Detection& Detection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("anomaly"))
  {
    m_anomaly = jsonValue.GetObject("anomaly");

    m_anomalyHasBeenSet = true;
  }

  return *this;
}

JsonValue Detection::Jsonize() const
{
  JsonValue payload;

  if(m_anomalyHasBeenSet)
  {
   payload.WithObject("anomaly", m_anomaly.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
