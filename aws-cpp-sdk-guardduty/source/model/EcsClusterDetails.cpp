/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/EcsClusterDetails.h>
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

EcsClusterDetails::EcsClusterDetails() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_activeServicesCount(0),
    m_activeServicesCountHasBeenSet(false),
    m_registeredContainerInstancesCount(0),
    m_registeredContainerInstancesCountHasBeenSet(false),
    m_runningTasksCount(0),
    m_runningTasksCountHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_taskDetailsHasBeenSet(false)
{
}

EcsClusterDetails::EcsClusterDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_activeServicesCount(0),
    m_activeServicesCountHasBeenSet(false),
    m_registeredContainerInstancesCount(0),
    m_registeredContainerInstancesCountHasBeenSet(false),
    m_runningTasksCount(0),
    m_runningTasksCountHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_taskDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

EcsClusterDetails& EcsClusterDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activeServicesCount"))
  {
    m_activeServicesCount = jsonValue.GetInteger("activeServicesCount");

    m_activeServicesCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registeredContainerInstancesCount"))
  {
    m_registeredContainerInstancesCount = jsonValue.GetInteger("registeredContainerInstancesCount");

    m_registeredContainerInstancesCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runningTasksCount"))
  {
    m_runningTasksCount = jsonValue.GetInteger("runningTasksCount");

    m_runningTasksCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskDetails"))
  {
    m_taskDetails = jsonValue.GetObject("taskDetails");

    m_taskDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue EcsClusterDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_activeServicesCountHasBeenSet)
  {
   payload.WithInteger("activeServicesCount", m_activeServicesCount);

  }

  if(m_registeredContainerInstancesCountHasBeenSet)
  {
   payload.WithInteger("registeredContainerInstancesCount", m_registeredContainerInstancesCount);

  }

  if(m_runningTasksCountHasBeenSet)
  {
   payload.WithInteger("runningTasksCount", m_runningTasksCount);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_taskDetailsHasBeenSet)
  {
   payload.WithObject("taskDetails", m_taskDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
