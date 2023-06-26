/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/SettingEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

SettingEntry::SettingEntry() : 
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_appliedValueHasBeenSet(false),
    m_requestedValueHasBeenSet(false),
    m_requestStatus(DirectoryConfigurationStatus::NOT_SET),
    m_requestStatusHasBeenSet(false),
    m_requestDetailedStatusHasBeenSet(false),
    m_requestStatusMessageHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_lastRequestedDateTimeHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
}

SettingEntry::SettingEntry(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_appliedValueHasBeenSet(false),
    m_requestedValueHasBeenSet(false),
    m_requestStatus(DirectoryConfigurationStatus::NOT_SET),
    m_requestStatusHasBeenSet(false),
    m_requestDetailedStatusHasBeenSet(false),
    m_requestStatusMessageHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_lastRequestedDateTimeHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SettingEntry& SettingEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedValues"))
  {
    m_allowedValues = jsonValue.GetString("AllowedValues");

    m_allowedValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppliedValue"))
  {
    m_appliedValue = jsonValue.GetString("AppliedValue");

    m_appliedValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestedValue"))
  {
    m_requestedValue = jsonValue.GetString("RequestedValue");

    m_requestedValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestStatus"))
  {
    m_requestStatus = DirectoryConfigurationStatusMapper::GetDirectoryConfigurationStatusForName(jsonValue.GetString("RequestStatus"));

    m_requestStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestDetailedStatus"))
  {
    Aws::Map<Aws::String, JsonView> requestDetailedStatusJsonMap = jsonValue.GetObject("RequestDetailedStatus").GetAllObjects();
    for(auto& requestDetailedStatusItem : requestDetailedStatusJsonMap)
    {
      m_requestDetailedStatus[requestDetailedStatusItem.first] = DirectoryConfigurationStatusMapper::GetDirectoryConfigurationStatusForName(requestDetailedStatusItem.second.AsString());
    }
    m_requestDetailedStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestStatusMessage"))
  {
    m_requestStatusMessage = jsonValue.GetString("RequestStatusMessage");

    m_requestStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("LastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRequestedDateTime"))
  {
    m_lastRequestedDateTime = jsonValue.GetDouble("LastRequestedDateTime");

    m_lastRequestedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataType"))
  {
    m_dataType = jsonValue.GetString("DataType");

    m_dataTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SettingEntry::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_allowedValuesHasBeenSet)
  {
   payload.WithString("AllowedValues", m_allowedValues);

  }

  if(m_appliedValueHasBeenSet)
  {
   payload.WithString("AppliedValue", m_appliedValue);

  }

  if(m_requestedValueHasBeenSet)
  {
   payload.WithString("RequestedValue", m_requestedValue);

  }

  if(m_requestStatusHasBeenSet)
  {
   payload.WithString("RequestStatus", DirectoryConfigurationStatusMapper::GetNameForDirectoryConfigurationStatus(m_requestStatus));
  }

  if(m_requestDetailedStatusHasBeenSet)
  {
   JsonValue requestDetailedStatusJsonMap;
   for(auto& requestDetailedStatusItem : m_requestDetailedStatus)
   {
     requestDetailedStatusJsonMap.WithString(requestDetailedStatusItem.first, DirectoryConfigurationStatusMapper::GetNameForDirectoryConfigurationStatus(requestDetailedStatusItem.second));
   }
   payload.WithObject("RequestDetailedStatus", std::move(requestDetailedStatusJsonMap));

  }

  if(m_requestStatusMessageHasBeenSet)
  {
   payload.WithString("RequestStatusMessage", m_requestStatusMessage);

  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_lastRequestedDateTimeHasBeenSet)
  {
   payload.WithDouble("LastRequestedDateTime", m_lastRequestedDateTime.SecondsWithMSPrecision());
  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("DataType", m_dataType);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
