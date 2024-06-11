/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/DirectoryConfigurationStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains information about the specified configurable setting for a
   * directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/SettingEntry">AWS API
   * Reference</a></p>
   */
  class SettingEntry
  {
  public:
    AWS_DIRECTORYSERVICE_API SettingEntry();
    AWS_DIRECTORYSERVICE_API SettingEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API SettingEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type, or category, of a directory setting. Similar settings have the same
     * type. For example, <code>Protocol</code>, <code>Cipher</code>, or
     * <code>Certificate-Based Authentication</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline SettingEntry& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline SettingEntry& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline SettingEntry& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the directory setting. For example:</p> <p> <code>TLS_1_0</code>
     * </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SettingEntry& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SettingEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SettingEntry& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid range of values for the directory setting. These values depend on
     * the <code>DataType</code> of your directory.</p>
     */
    inline const Aws::String& GetAllowedValues() const{ return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    inline void SetAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }
    inline void SetAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }
    inline void SetAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.assign(value); }
    inline SettingEntry& WithAllowedValues(const Aws::String& value) { SetAllowedValues(value); return *this;}
    inline SettingEntry& WithAllowedValues(Aws::String&& value) { SetAllowedValues(std::move(value)); return *this;}
    inline SettingEntry& WithAllowedValues(const char* value) { SetAllowedValues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the directory setting that is applied to the directory.</p>
     */
    inline const Aws::String& GetAppliedValue() const{ return m_appliedValue; }
    inline bool AppliedValueHasBeenSet() const { return m_appliedValueHasBeenSet; }
    inline void SetAppliedValue(const Aws::String& value) { m_appliedValueHasBeenSet = true; m_appliedValue = value; }
    inline void SetAppliedValue(Aws::String&& value) { m_appliedValueHasBeenSet = true; m_appliedValue = std::move(value); }
    inline void SetAppliedValue(const char* value) { m_appliedValueHasBeenSet = true; m_appliedValue.assign(value); }
    inline SettingEntry& WithAppliedValue(const Aws::String& value) { SetAppliedValue(value); return *this;}
    inline SettingEntry& WithAppliedValue(Aws::String&& value) { SetAppliedValue(std::move(value)); return *this;}
    inline SettingEntry& WithAppliedValue(const char* value) { SetAppliedValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that was last requested for the directory setting.</p>
     */
    inline const Aws::String& GetRequestedValue() const{ return m_requestedValue; }
    inline bool RequestedValueHasBeenSet() const { return m_requestedValueHasBeenSet; }
    inline void SetRequestedValue(const Aws::String& value) { m_requestedValueHasBeenSet = true; m_requestedValue = value; }
    inline void SetRequestedValue(Aws::String&& value) { m_requestedValueHasBeenSet = true; m_requestedValue = std::move(value); }
    inline void SetRequestedValue(const char* value) { m_requestedValueHasBeenSet = true; m_requestedValue.assign(value); }
    inline SettingEntry& WithRequestedValue(const Aws::String& value) { SetRequestedValue(value); return *this;}
    inline SettingEntry& WithRequestedValue(Aws::String&& value) { SetRequestedValue(std::move(value)); return *this;}
    inline SettingEntry& WithRequestedValue(const char* value) { SetRequestedValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall status of the request to update the directory setting request. If
     * the directory setting is deployed in more than one region, and the request fails
     * in any region, the overall status is <code>Failed</code>.</p>
     */
    inline const DirectoryConfigurationStatus& GetRequestStatus() const{ return m_requestStatus; }
    inline bool RequestStatusHasBeenSet() const { return m_requestStatusHasBeenSet; }
    inline void SetRequestStatus(const DirectoryConfigurationStatus& value) { m_requestStatusHasBeenSet = true; m_requestStatus = value; }
    inline void SetRequestStatus(DirectoryConfigurationStatus&& value) { m_requestStatusHasBeenSet = true; m_requestStatus = std::move(value); }
    inline SettingEntry& WithRequestStatus(const DirectoryConfigurationStatus& value) { SetRequestStatus(value); return *this;}
    inline SettingEntry& WithRequestStatus(DirectoryConfigurationStatus&& value) { SetRequestStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the status of the request to update the directory setting. If
     * the directory setting is deployed in more than one region, status is returned
     * for the request in each region where the setting is deployed.</p>
     */
    inline const Aws::Map<Aws::String, DirectoryConfigurationStatus>& GetRequestDetailedStatus() const{ return m_requestDetailedStatus; }
    inline bool RequestDetailedStatusHasBeenSet() const { return m_requestDetailedStatusHasBeenSet; }
    inline void SetRequestDetailedStatus(const Aws::Map<Aws::String, DirectoryConfigurationStatus>& value) { m_requestDetailedStatusHasBeenSet = true; m_requestDetailedStatus = value; }
    inline void SetRequestDetailedStatus(Aws::Map<Aws::String, DirectoryConfigurationStatus>&& value) { m_requestDetailedStatusHasBeenSet = true; m_requestDetailedStatus = std::move(value); }
    inline SettingEntry& WithRequestDetailedStatus(const Aws::Map<Aws::String, DirectoryConfigurationStatus>& value) { SetRequestDetailedStatus(value); return *this;}
    inline SettingEntry& WithRequestDetailedStatus(Aws::Map<Aws::String, DirectoryConfigurationStatus>&& value) { SetRequestDetailedStatus(std::move(value)); return *this;}
    inline SettingEntry& AddRequestDetailedStatus(const Aws::String& key, const DirectoryConfigurationStatus& value) { m_requestDetailedStatusHasBeenSet = true; m_requestDetailedStatus.emplace(key, value); return *this; }
    inline SettingEntry& AddRequestDetailedStatus(Aws::String&& key, const DirectoryConfigurationStatus& value) { m_requestDetailedStatusHasBeenSet = true; m_requestDetailedStatus.emplace(std::move(key), value); return *this; }
    inline SettingEntry& AddRequestDetailedStatus(const Aws::String& key, DirectoryConfigurationStatus&& value) { m_requestDetailedStatusHasBeenSet = true; m_requestDetailedStatus.emplace(key, std::move(value)); return *this; }
    inline SettingEntry& AddRequestDetailedStatus(Aws::String&& key, DirectoryConfigurationStatus&& value) { m_requestDetailedStatusHasBeenSet = true; m_requestDetailedStatus.emplace(std::move(key), std::move(value)); return *this; }
    inline SettingEntry& AddRequestDetailedStatus(const char* key, DirectoryConfigurationStatus&& value) { m_requestDetailedStatusHasBeenSet = true; m_requestDetailedStatus.emplace(key, std::move(value)); return *this; }
    inline SettingEntry& AddRequestDetailedStatus(const char* key, const DirectoryConfigurationStatus& value) { m_requestDetailedStatusHasBeenSet = true; m_requestDetailedStatus.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last status message for the directory status request.</p>
     */
    inline const Aws::String& GetRequestStatusMessage() const{ return m_requestStatusMessage; }
    inline bool RequestStatusMessageHasBeenSet() const { return m_requestStatusMessageHasBeenSet; }
    inline void SetRequestStatusMessage(const Aws::String& value) { m_requestStatusMessageHasBeenSet = true; m_requestStatusMessage = value; }
    inline void SetRequestStatusMessage(Aws::String&& value) { m_requestStatusMessageHasBeenSet = true; m_requestStatusMessage = std::move(value); }
    inline void SetRequestStatusMessage(const char* value) { m_requestStatusMessageHasBeenSet = true; m_requestStatusMessage.assign(value); }
    inline SettingEntry& WithRequestStatusMessage(const Aws::String& value) { SetRequestStatusMessage(value); return *this;}
    inline SettingEntry& WithRequestStatusMessage(Aws::String&& value) { SetRequestStatusMessage(std::move(value)); return *this;}
    inline SettingEntry& WithRequestStatusMessage(const char* value) { SetRequestStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the directory setting was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline SettingEntry& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline SettingEntry& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the request to update a directory setting was last
     * submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRequestedDateTime() const{ return m_lastRequestedDateTime; }
    inline bool LastRequestedDateTimeHasBeenSet() const { return m_lastRequestedDateTimeHasBeenSet; }
    inline void SetLastRequestedDateTime(const Aws::Utils::DateTime& value) { m_lastRequestedDateTimeHasBeenSet = true; m_lastRequestedDateTime = value; }
    inline void SetLastRequestedDateTime(Aws::Utils::DateTime&& value) { m_lastRequestedDateTimeHasBeenSet = true; m_lastRequestedDateTime = std::move(value); }
    inline SettingEntry& WithLastRequestedDateTime(const Aws::Utils::DateTime& value) { SetLastRequestedDateTime(value); return *this;}
    inline SettingEntry& WithLastRequestedDateTime(Aws::Utils::DateTime&& value) { SetLastRequestedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of a directory setting. This is used to define the
     * <code>AllowedValues</code> of a setting. For example a data type can be
     * <code>Boolean</code>, <code>DurationInSeconds</code>, or <code>Enum</code>.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }
    inline SettingEntry& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}
    inline SettingEntry& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}
    inline SettingEntry& WithDataType(const char* value) { SetDataType(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    Aws::String m_appliedValue;
    bool m_appliedValueHasBeenSet = false;

    Aws::String m_requestedValue;
    bool m_requestedValueHasBeenSet = false;

    DirectoryConfigurationStatus m_requestStatus;
    bool m_requestStatusHasBeenSet = false;

    Aws::Map<Aws::String, DirectoryConfigurationStatus> m_requestDetailedStatus;
    bool m_requestDetailedStatusHasBeenSet = false;

    Aws::String m_requestStatusMessage;
    bool m_requestStatusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastRequestedDateTime;
    bool m_lastRequestedDateTimeHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
