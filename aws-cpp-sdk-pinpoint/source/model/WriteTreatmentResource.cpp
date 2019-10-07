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

#include <aws/pinpoint/model/WriteTreatmentResource.h>
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

WriteTreatmentResource::WriteTreatmentResource() : 
    m_messageConfigurationHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_sizePercent(0),
    m_sizePercentHasBeenSet(false),
    m_templateConfigurationHasBeenSet(false),
    m_treatmentDescriptionHasBeenSet(false),
    m_treatmentNameHasBeenSet(false)
{
}

WriteTreatmentResource::WriteTreatmentResource(JsonView jsonValue) : 
    m_messageConfigurationHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_sizePercent(0),
    m_sizePercentHasBeenSet(false),
    m_templateConfigurationHasBeenSet(false),
    m_treatmentDescriptionHasBeenSet(false),
    m_treatmentNameHasBeenSet(false)
{
  *this = jsonValue;
}

WriteTreatmentResource& WriteTreatmentResource::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("TemplateConfiguration"))
  {
    m_templateConfiguration = jsonValue.GetObject("TemplateConfiguration");

    m_templateConfigurationHasBeenSet = true;
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

JsonValue WriteTreatmentResource::Jsonize() const
{
  JsonValue payload;

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

  if(m_templateConfigurationHasBeenSet)
  {
   payload.WithObject("TemplateConfiguration", m_templateConfiguration.Jsonize());

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
