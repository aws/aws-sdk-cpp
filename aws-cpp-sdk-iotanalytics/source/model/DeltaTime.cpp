/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
