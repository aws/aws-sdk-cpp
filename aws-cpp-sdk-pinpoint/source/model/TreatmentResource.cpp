﻿/*
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

#include <aws/pinpoint/model/TreatmentResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

TreatmentResource::TreatmentResource() : 
    m_idHasBeenSet(false),
    m_messageConfigurationHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_sizePercent(0),
    m_sizePercentHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_treatmentDescriptionHasBeenSet(false),
    m_treatmentNameHasBeenSet(false)
{
}

TreatmentResource::TreatmentResource(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_messageConfigurationHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_sizePercent(0),
    m_sizePercentHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_treatmentDescriptionHasBeenSet(false),
    m_treatmentNameHasBeenSet(false)
{
  *this = jsonValue;
}

TreatmentResource& TreatmentResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageConfiguration"))
  {
    m_messageConfiguration = jsonValue.GetObject("MessageConfiguration");

    m_messageConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetObject("Schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizePercent"))
  {
    m_sizePercent = jsonValue.GetInteger("SizePercent");

    m_sizePercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetObject("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TreatmentDescription"))
  {
    m_treatmentDescription = jsonValue.GetString("TreatmentDescription");

    m_treatmentDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TreatmentName"))
  {
    m_treatmentName = jsonValue.GetString("TreatmentName");

    m_treatmentNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TreatmentResource::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_messageConfigurationHasBeenSet)
  {
   payload.WithObject("MessageConfiguration", m_messageConfiguration.Jsonize());

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("Schedule", m_schedule.Jsonize());

  }

  if(m_sizePercentHasBeenSet)
  {
   payload.WithInteger("SizePercent", m_sizePercent);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("State", m_state.Jsonize());

  }

  if(m_treatmentDescriptionHasBeenSet)
  {
   payload.WithString("TreatmentDescription", m_treatmentDescription);

  }

  if(m_treatmentNameHasBeenSet)
  {
   payload.WithString("TreatmentName", m_treatmentName);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
