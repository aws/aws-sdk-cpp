/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ChangeProgressDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

ChangeProgressDetails::ChangeProgressDetails() : 
    m_changeIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_configChangeStatus(ConfigChangeStatus::NOT_SET),
    m_configChangeStatusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_initiatedBy(InitiatedBy::NOT_SET),
    m_initiatedByHasBeenSet(false)
{
}

ChangeProgressDetails::ChangeProgressDetails(JsonView jsonValue) : 
    m_changeIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_configChangeStatus(ConfigChangeStatus::NOT_SET),
    m_configChangeStatusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_initiatedBy(InitiatedBy::NOT_SET),
    m_initiatedByHasBeenSet(false)
{
  *this = jsonValue;
}

ChangeProgressDetails& ChangeProgressDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChangeId"))
  {
    m_changeId = jsonValue.GetString("ChangeId");

    m_changeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigChangeStatus"))
  {
    m_configChangeStatus = ConfigChangeStatusMapper::GetConfigChangeStatusForName(jsonValue.GetString("ConfigChangeStatus"));

    m_configChangeStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitiatedBy"))
  {
    m_initiatedBy = InitiatedByMapper::GetInitiatedByForName(jsonValue.GetString("InitiatedBy"));

    m_initiatedByHasBeenSet = true;
  }

  return *this;
}

JsonValue ChangeProgressDetails::Jsonize() const
{
  JsonValue payload;

  if(m_changeIdHasBeenSet)
  {
   payload.WithString("ChangeId", m_changeId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_configChangeStatusHasBeenSet)
  {
   payload.WithString("ConfigChangeStatus", ConfigChangeStatusMapper::GetNameForConfigChangeStatus(m_configChangeStatus));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_initiatedByHasBeenSet)
  {
   payload.WithString("InitiatedBy", InitiatedByMapper::GetNameForInitiatedBy(m_initiatedBy));
  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
