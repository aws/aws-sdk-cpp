/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DeltaTime.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

DeltaTime::DeltaTime() : 
    m_offsetSeconds(0),
    m_offsetSecondsHasBeenSet(false),
    m_timeExpressionHasBeenSet(false)
{
}

DeltaTime::DeltaTime(JsonView jsonValue) : 
    m_offsetSeconds(0),
    m_offsetSecondsHasBeenSet(false),
    m_timeExpressionHasBeenSet(false)
{
  *this = jsonValue;
}

DeltaTime& DeltaTime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("offsetSeconds"))
  {
    m_offsetSeconds = jsonValue.GetInteger("offsetSeconds");

    m_offsetSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeExpression"))
  {
    m_timeExpression = jsonValue.GetString("timeExpression");

    m_timeExpressionHasBeenSet = true;
  }

  return *this;
}

JsonValue DeltaTime::Jsonize() const
{
  JsonValue payload;

  if(m_offsetSecondsHasBeenSet)
  {
   payload.WithInteger("offsetSeconds", m_offsetSeconds);

  }

  if(m_timeExpressionHasBeenSet)
  {
   payload.WithString("timeExpression", m_timeExpression);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
