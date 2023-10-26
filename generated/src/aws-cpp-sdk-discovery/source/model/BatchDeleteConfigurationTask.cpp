/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/BatchDeleteConfigurationTask.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

BatchDeleteConfigurationTask::BatchDeleteConfigurationTask() : 
    m_taskIdHasBeenSet(false),
    m_status(BatchDeleteConfigurationTaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_configurationType(DeletionConfigurationItemType::NOT_SET),
    m_configurationTypeHasBeenSet(false),
    m_requestedConfigurationsHasBeenSet(false),
    m_deletedConfigurationsHasBeenSet(false),
    m_failedConfigurationsHasBeenSet(false),
    m_deletionWarningsHasBeenSet(false)
{
}

BatchDeleteConfigurationTask::BatchDeleteConfigurationTask(JsonView jsonValue) : 
    m_taskIdHasBeenSet(false),
    m_status(BatchDeleteConfigurationTaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_configurationType(DeletionConfigurationItemType::NOT_SET),
    m_configurationTypeHasBeenSet(false),
    m_requestedConfigurationsHasBeenSet(false),
    m_deletedConfigurationsHasBeenSet(false),
    m_failedConfigurationsHasBeenSet(false),
    m_deletionWarningsHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDeleteConfigurationTask& BatchDeleteConfigurationTask::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = BatchDeleteConfigurationTaskStatusMapper::GetBatchDeleteConfigurationTaskStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurationType"))
  {
    m_configurationType = DeletionConfigurationItemTypeMapper::GetDeletionConfigurationItemTypeForName(jsonValue.GetString("configurationType"));

    m_configurationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestedConfigurations"))
  {
    Aws::Utils::Array<JsonView> requestedConfigurationsJsonList = jsonValue.GetArray("requestedConfigurations");
    for(unsigned requestedConfigurationsIndex = 0; requestedConfigurationsIndex < requestedConfigurationsJsonList.GetLength(); ++requestedConfigurationsIndex)
    {
      m_requestedConfigurations.push_back(requestedConfigurationsJsonList[requestedConfigurationsIndex].AsString());
    }
    m_requestedConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deletedConfigurations"))
  {
    Aws::Utils::Array<JsonView> deletedConfigurationsJsonList = jsonValue.GetArray("deletedConfigurations");
    for(unsigned deletedConfigurationsIndex = 0; deletedConfigurationsIndex < deletedConfigurationsJsonList.GetLength(); ++deletedConfigurationsIndex)
    {
      m_deletedConfigurations.push_back(deletedConfigurationsJsonList[deletedConfigurationsIndex].AsString());
    }
    m_deletedConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failedConfigurations"))
  {
    Aws::Utils::Array<JsonView> failedConfigurationsJsonList = jsonValue.GetArray("failedConfigurations");
    for(unsigned failedConfigurationsIndex = 0; failedConfigurationsIndex < failedConfigurationsJsonList.GetLength(); ++failedConfigurationsIndex)
    {
      m_failedConfigurations.push_back(failedConfigurationsJsonList[failedConfigurationsIndex].AsObject());
    }
    m_failedConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deletionWarnings"))
  {
    Aws::Utils::Array<JsonView> deletionWarningsJsonList = jsonValue.GetArray("deletionWarnings");
    for(unsigned deletionWarningsIndex = 0; deletionWarningsIndex < deletionWarningsJsonList.GetLength(); ++deletionWarningsIndex)
    {
      m_deletionWarnings.push_back(deletionWarningsJsonList[deletionWarningsIndex].AsObject());
    }
    m_deletionWarningsHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDeleteConfigurationTask::Jsonize() const
{
  JsonValue payload;

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", BatchDeleteConfigurationTaskStatusMapper::GetNameForBatchDeleteConfigurationTaskStatus(m_status));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_configurationTypeHasBeenSet)
  {
   payload.WithString("configurationType", DeletionConfigurationItemTypeMapper::GetNameForDeletionConfigurationItemType(m_configurationType));
  }

  if(m_requestedConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requestedConfigurationsJsonList(m_requestedConfigurations.size());
   for(unsigned requestedConfigurationsIndex = 0; requestedConfigurationsIndex < requestedConfigurationsJsonList.GetLength(); ++requestedConfigurationsIndex)
   {
     requestedConfigurationsJsonList[requestedConfigurationsIndex].AsString(m_requestedConfigurations[requestedConfigurationsIndex]);
   }
   payload.WithArray("requestedConfigurations", std::move(requestedConfigurationsJsonList));

  }

  if(m_deletedConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deletedConfigurationsJsonList(m_deletedConfigurations.size());
   for(unsigned deletedConfigurationsIndex = 0; deletedConfigurationsIndex < deletedConfigurationsJsonList.GetLength(); ++deletedConfigurationsIndex)
   {
     deletedConfigurationsJsonList[deletedConfigurationsIndex].AsString(m_deletedConfigurations[deletedConfigurationsIndex]);
   }
   payload.WithArray("deletedConfigurations", std::move(deletedConfigurationsJsonList));

  }

  if(m_failedConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failedConfigurationsJsonList(m_failedConfigurations.size());
   for(unsigned failedConfigurationsIndex = 0; failedConfigurationsIndex < failedConfigurationsJsonList.GetLength(); ++failedConfigurationsIndex)
   {
     failedConfigurationsJsonList[failedConfigurationsIndex].AsObject(m_failedConfigurations[failedConfigurationsIndex].Jsonize());
   }
   payload.WithArray("failedConfigurations", std::move(failedConfigurationsJsonList));

  }

  if(m_deletionWarningsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deletionWarningsJsonList(m_deletionWarnings.size());
   for(unsigned deletionWarningsIndex = 0; deletionWarningsIndex < deletionWarningsJsonList.GetLength(); ++deletionWarningsIndex)
   {
     deletionWarningsJsonList[deletionWarningsIndex].AsObject(m_deletionWarnings[deletionWarningsIndex].Jsonize());
   }
   payload.WithArray("deletionWarnings", std::move(deletionWarningsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
