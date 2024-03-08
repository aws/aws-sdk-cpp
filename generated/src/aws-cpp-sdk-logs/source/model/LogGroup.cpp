/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/LogGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

LogGroup::LogGroup() : 
    m_logGroupNameHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_retentionInDays(0),
    m_retentionInDaysHasBeenSet(false),
    m_metricFilterCount(0),
    m_metricFilterCountHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_storedBytes(0),
    m_storedBytesHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dataProtectionStatus(DataProtectionStatus::NOT_SET),
    m_dataProtectionStatusHasBeenSet(false),
    m_inheritedPropertiesHasBeenSet(false),
    m_logGroupClass(LogGroupClass::NOT_SET),
    m_logGroupClassHasBeenSet(false),
    m_logGroupArnHasBeenSet(false)
{
}

LogGroup::LogGroup(JsonView jsonValue) : 
    m_logGroupNameHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_retentionInDays(0),
    m_retentionInDaysHasBeenSet(false),
    m_metricFilterCount(0),
    m_metricFilterCountHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_storedBytes(0),
    m_storedBytesHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dataProtectionStatus(DataProtectionStatus::NOT_SET),
    m_dataProtectionStatusHasBeenSet(false),
    m_inheritedPropertiesHasBeenSet(false),
    m_logGroupClass(LogGroupClass::NOT_SET),
    m_logGroupClassHasBeenSet(false),
    m_logGroupArnHasBeenSet(false)
{
  *this = jsonValue;
}

LogGroup& LogGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetInt64("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retentionInDays"))
  {
    m_retentionInDays = jsonValue.GetInteger("retentionInDays");

    m_retentionInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricFilterCount"))
  {
    m_metricFilterCount = jsonValue.GetInteger("metricFilterCount");

    m_metricFilterCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storedBytes"))
  {
    m_storedBytes = jsonValue.GetInt64("storedBytes");

    m_storedBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataProtectionStatus"))
  {
    m_dataProtectionStatus = DataProtectionStatusMapper::GetDataProtectionStatusForName(jsonValue.GetString("dataProtectionStatus"));

    m_dataProtectionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inheritedProperties"))
  {
    Aws::Utils::Array<JsonView> inheritedPropertiesJsonList = jsonValue.GetArray("inheritedProperties");
    for(unsigned inheritedPropertiesIndex = 0; inheritedPropertiesIndex < inheritedPropertiesJsonList.GetLength(); ++inheritedPropertiesIndex)
    {
      m_inheritedProperties.push_back(InheritedPropertyMapper::GetInheritedPropertyForName(inheritedPropertiesJsonList[inheritedPropertiesIndex].AsString()));
    }
    m_inheritedPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroupClass"))
  {
    m_logGroupClass = LogGroupClassMapper::GetLogGroupClassForName(jsonValue.GetString("logGroupClass"));

    m_logGroupClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroupArn"))
  {
    m_logGroupArn = jsonValue.GetString("logGroupArn");

    m_logGroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LogGroup::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithInt64("creationTime", m_creationTime);

  }

  if(m_retentionInDaysHasBeenSet)
  {
   payload.WithInteger("retentionInDays", m_retentionInDays);

  }

  if(m_metricFilterCountHasBeenSet)
  {
   payload.WithInteger("metricFilterCount", m_metricFilterCount);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_storedBytesHasBeenSet)
  {
   payload.WithInt64("storedBytes", m_storedBytes);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_dataProtectionStatusHasBeenSet)
  {
   payload.WithString("dataProtectionStatus", DataProtectionStatusMapper::GetNameForDataProtectionStatus(m_dataProtectionStatus));
  }

  if(m_inheritedPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inheritedPropertiesJsonList(m_inheritedProperties.size());
   for(unsigned inheritedPropertiesIndex = 0; inheritedPropertiesIndex < inheritedPropertiesJsonList.GetLength(); ++inheritedPropertiesIndex)
   {
     inheritedPropertiesJsonList[inheritedPropertiesIndex].AsString(InheritedPropertyMapper::GetNameForInheritedProperty(m_inheritedProperties[inheritedPropertiesIndex]));
   }
   payload.WithArray("inheritedProperties", std::move(inheritedPropertiesJsonList));

  }

  if(m_logGroupClassHasBeenSet)
  {
   payload.WithString("logGroupClass", LogGroupClassMapper::GetNameForLogGroupClass(m_logGroupClass));
  }

  if(m_logGroupArnHasBeenSet)
  {
   payload.WithString("logGroupArn", m_logGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
