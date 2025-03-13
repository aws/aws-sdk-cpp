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
    AWS_DIRECTORYSERVICE_API SettingEntry() = default;
    AWS_DIRECTORYSERVICE_API SettingEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API SettingEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type, or category, of a directory setting. Similar settings have the same
     * type. For example, <code>Protocol</code>, <code>Cipher</code>, or
     * <code>Certificate-Based Authentication</code>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    SettingEntry& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the directory setting. For example:</p> <p> <code>TLS_1_0</code>
     * </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SettingEntry& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid range of values for the directory setting. These values depend on
     * the <code>DataType</code> of your directory.</p>
     */
    inline const Aws::String& GetAllowedValues() const { return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    template<typename AllowedValuesT = Aws::String>
    void SetAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::forward<AllowedValuesT>(value); }
    template<typename AllowedValuesT = Aws::String>
    SettingEntry& WithAllowedValues(AllowedValuesT&& value) { SetAllowedValues(std::forward<AllowedValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the directory setting that is applied to the directory.</p>
     */
    inline const Aws::String& GetAppliedValue() const { return m_appliedValue; }
    inline bool AppliedValueHasBeenSet() const { return m_appliedValueHasBeenSet; }
    template<typename AppliedValueT = Aws::String>
    void SetAppliedValue(AppliedValueT&& value) { m_appliedValueHasBeenSet = true; m_appliedValue = std::forward<AppliedValueT>(value); }
    template<typename AppliedValueT = Aws::String>
    SettingEntry& WithAppliedValue(AppliedValueT&& value) { SetAppliedValue(std::forward<AppliedValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that was last requested for the directory setting.</p>
     */
    inline const Aws::String& GetRequestedValue() const { return m_requestedValue; }
    inline bool RequestedValueHasBeenSet() const { return m_requestedValueHasBeenSet; }
    template<typename RequestedValueT = Aws::String>
    void SetRequestedValue(RequestedValueT&& value) { m_requestedValueHasBeenSet = true; m_requestedValue = std::forward<RequestedValueT>(value); }
    template<typename RequestedValueT = Aws::String>
    SettingEntry& WithRequestedValue(RequestedValueT&& value) { SetRequestedValue(std::forward<RequestedValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall status of the request to update the directory setting request. If
     * the directory setting is deployed in more than one region, and the request fails
     * in any region, the overall status is <code>Failed</code>.</p>
     */
    inline DirectoryConfigurationStatus GetRequestStatus() const { return m_requestStatus; }
    inline bool RequestStatusHasBeenSet() const { return m_requestStatusHasBeenSet; }
    inline void SetRequestStatus(DirectoryConfigurationStatus value) { m_requestStatusHasBeenSet = true; m_requestStatus = value; }
    inline SettingEntry& WithRequestStatus(DirectoryConfigurationStatus value) { SetRequestStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the status of the request to update the directory setting. If
     * the directory setting is deployed in more than one region, status is returned
     * for the request in each region where the setting is deployed.</p>
     */
    inline const Aws::Map<Aws::String, DirectoryConfigurationStatus>& GetRequestDetailedStatus() const { return m_requestDetailedStatus; }
    inline bool RequestDetailedStatusHasBeenSet() const { return m_requestDetailedStatusHasBeenSet; }
    template<typename RequestDetailedStatusT = Aws::Map<Aws::String, DirectoryConfigurationStatus>>
    void SetRequestDetailedStatus(RequestDetailedStatusT&& value) { m_requestDetailedStatusHasBeenSet = true; m_requestDetailedStatus = std::forward<RequestDetailedStatusT>(value); }
    template<typename RequestDetailedStatusT = Aws::Map<Aws::String, DirectoryConfigurationStatus>>
    SettingEntry& WithRequestDetailedStatus(RequestDetailedStatusT&& value) { SetRequestDetailedStatus(std::forward<RequestDetailedStatusT>(value)); return *this;}
    inline SettingEntry& AddRequestDetailedStatus(Aws::String key, DirectoryConfigurationStatus value) {
      m_requestDetailedStatusHasBeenSet = true; m_requestDetailedStatus.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The last status message for the directory status request.</p>
     */
    inline const Aws::String& GetRequestStatusMessage() const { return m_requestStatusMessage; }
    inline bool RequestStatusMessageHasBeenSet() const { return m_requestStatusMessageHasBeenSet; }
    template<typename RequestStatusMessageT = Aws::String>
    void SetRequestStatusMessage(RequestStatusMessageT&& value) { m_requestStatusMessageHasBeenSet = true; m_requestStatusMessage = std::forward<RequestStatusMessageT>(value); }
    template<typename RequestStatusMessageT = Aws::String>
    SettingEntry& WithRequestStatusMessage(RequestStatusMessageT&& value) { SetRequestStatusMessage(std::forward<RequestStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the directory setting was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    SettingEntry& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the request to update a directory setting was last
     * submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRequestedDateTime() const { return m_lastRequestedDateTime; }
    inline bool LastRequestedDateTimeHasBeenSet() const { return m_lastRequestedDateTimeHasBeenSet; }
    template<typename LastRequestedDateTimeT = Aws::Utils::DateTime>
    void SetLastRequestedDateTime(LastRequestedDateTimeT&& value) { m_lastRequestedDateTimeHasBeenSet = true; m_lastRequestedDateTime = std::forward<LastRequestedDateTimeT>(value); }
    template<typename LastRequestedDateTimeT = Aws::Utils::DateTime>
    SettingEntry& WithLastRequestedDateTime(LastRequestedDateTimeT&& value) { SetLastRequestedDateTime(std::forward<LastRequestedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of a directory setting. This is used to define the
     * <code>AllowedValues</code> of a setting. For example a data type can be
     * <code>Boolean</code>, <code>DurationInSeconds</code>, or <code>Enum</code>.</p>
     */
    inline const Aws::String& GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    template<typename DataTypeT = Aws::String>
    void SetDataType(DataTypeT&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::forward<DataTypeT>(value); }
    template<typename DataTypeT = Aws::String>
    SettingEntry& WithDataType(DataTypeT&& value) { SetDataType(std::forward<DataTypeT>(value)); return *this;}
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

    DirectoryConfigurationStatus m_requestStatus{DirectoryConfigurationStatus::NOT_SET};
    bool m_requestStatusHasBeenSet = false;

    Aws::Map<Aws::String, DirectoryConfigurationStatus> m_requestDetailedStatus;
    bool m_requestDetailedStatusHasBeenSet = false;

    Aws::String m_requestStatusMessage;
    bool m_requestStatusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastRequestedDateTime{};
    bool m_lastRequestedDateTimeHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
