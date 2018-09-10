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

#include <aws/iot/model/ActiveViolation.h>
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

ActiveViolation::ActiveViolation() : 
    m_violationIdHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_securityProfileNameHasBeenSet(false),
    m_behaviorHasBeenSet(false),
    m_lastViolationValueHasBeenSet(false),
    m_lastViolationTimeHasBeenSet(false),
    m_violationStartTimeHasBeenSet(false)
{
}

ActiveViolation::ActiveViolation(JsonView jsonValue) : 
    m_violationIdHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_securityProfileNameHasBeenSet(false),
    m_behaviorHasBeenSet(false),
    m_lastViolationValueHasBeenSet(false),
    m_lastViolationTimeHasBeenSet(false),
    m_violationStartTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ActiveViolation& ActiveViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("violationId"))
  {
    m_violationId = jsonValue.GetString("violationId");

    m_violationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingName"))
  {
    m_thingName = jsonValue.GetString("thingName");

    m_thingNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityProfileName"))
  {
    m_securityProfileName = jsonValue.GetString("securityProfileName");

    m_securityProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("behavior"))
  {
    m_behavior = jsonValue.GetObject("behavior");

    m_behaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastViolationValue"))
  {
    m_lastViolationValue = jsonValue.GetObject("lastViolationValue");

    m_lastViolationValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastViolationTime"))
  {
    m_lastViolationTime = jsonValue.GetDouble("lastViolationTime");

    m_lastViolationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("violationStartTime"))
  {
    m_violationStartTime = jsonValue.GetDouble("violationStartTime");

    m_violationStartTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ActiveViolation::Jsonize() const
{
  JsonValue payload;

  if(m_violationIdHasBeenSet)
  {
   payload.WithString("violationId", m_violationId);

  }

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_securityProfileNameHasBeenSet)
  {
   payload.WithString("securityProfileName", m_securityProfileName);

  }

  if(m_behaviorHasBeenSet)
  {
   payload.WithObject("behavior", m_behavior.Jsonize());

  }

  if(m_lastViolationValueHasBeenSet)
  {
   payload.WithObject("lastViolationValue", m_lastViolationValue.Jsonize());

  }

  if(m_lastViolationTimeHasBeenSet)
  {
   payload.WithDouble("lastViolationTime", m_lastViolationTime.SecondsWithMSPrecision());
  }

  if(m_violationStartTimeHasBeenSet)
  {
   payload.WithDouble("violationStartTime", m_violationStartTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
