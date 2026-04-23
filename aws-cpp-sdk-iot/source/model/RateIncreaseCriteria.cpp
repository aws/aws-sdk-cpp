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

#include <aws/iot/model/RateIncreaseCriteria.h>
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

RateIncreaseCriteria::RateIncreaseCriteria() : 
    m_numberOfNotifiedThings(0),
    m_numberOfNotifiedThingsHasBeenSet(false),
    m_numberOfSucceededThings(0),
    m_numberOfSucceededThingsHasBeenSet(false)
{
}

RateIncreaseCriteria::RateIncreaseCriteria(JsonView jsonValue) : 
    m_numberOfNotifiedThings(0),
    m_numberOfNotifiedThingsHasBeenSet(false),
    m_numberOfSucceededThings(0),
    m_numberOfSucceededThingsHasBeenSet(false)
{
  *this = jsonValue;
}

RateIncreaseCriteria& RateIncreaseCriteria::operator =(JsonView jsonValue)
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

JsonValue RateIncreaseCriteria::Jsonize() const
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
