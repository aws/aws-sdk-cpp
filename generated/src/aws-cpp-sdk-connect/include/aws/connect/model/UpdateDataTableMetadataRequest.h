/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTableLockLevel.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class UpdateDataTableMetadataRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API UpdateDataTableMetadataRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateDataTableMetadata"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the Amazon Connect instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  UpdateDataTableMetadataRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the data table. Must also accept the table ARN with
   * or without a version alias. If the version is provided as part of the identifier
   * or ARN, the version must be $LATEST. Providing any other alias fails with an
   * error.</p>
   */
  inline const Aws::String& GetDataTableId() const { return m_dataTableId; }
  inline bool DataTableIdHasBeenSet() const { return m_dataTableIdHasBeenSet; }
  template <typename DataTableIdT = Aws::String>
  void SetDataTableId(DataTableIdT&& value) {
    m_dataTableIdHasBeenSet = true;
    m_dataTableId = std::forward<DataTableIdT>(value);
  }
  template <typename DataTableIdT = Aws::String>
  UpdateDataTableMetadataRequest& WithDataTableId(DataTableIdT&& value) {
    SetDataTableId(std::forward<DataTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated name for the data table. Must conform to Connect human readable
   * string specification and have 1-127 characters. Must be unique for the instance
   * using case-insensitive comparison.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateDataTableMetadataRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description for the data table. Must conform to Connect human
   * readable string specification and have 0-250 characters.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateDataTableMetadataRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated value lock level for the data table. One of DATA_TABLE,
   * PRIMARY_VALUE, ATTRIBUTE, VALUE, and NONE.</p>
   */
  inline DataTableLockLevel GetValueLockLevel() const { return m_valueLockLevel; }
  inline bool ValueLockLevelHasBeenSet() const { return m_valueLockLevelHasBeenSet; }
  inline void SetValueLockLevel(DataTableLockLevel value) {
    m_valueLockLevelHasBeenSet = true;
    m_valueLockLevel = value;
  }
  inline UpdateDataTableMetadataRequest& WithValueLockLevel(DataTableLockLevel value) {
    SetValueLockLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated IANA timezone identifier to use when resolving time based dynamic
   * values.</p>
   */
  inline const Aws::String& GetTimeZone() const { return m_timeZone; }
  inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
  template <typename TimeZoneT = Aws::String>
  void SetTimeZone(TimeZoneT&& value) {
    m_timeZoneHasBeenSet = true;
    m_timeZone = std::forward<TimeZoneT>(value);
  }
  template <typename TimeZoneT = Aws::String>
  UpdateDataTableMetadataRequest& WithTimeZone(TimeZoneT&& value) {
    SetTimeZone(std::forward<TimeZoneT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_dataTableId;

  Aws::String m_name;

  Aws::String m_description;

  DataTableLockLevel m_valueLockLevel{DataTableLockLevel::NOT_SET};

  Aws::String m_timeZone;
  bool m_instanceIdHasBeenSet = false;
  bool m_dataTableIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_valueLockLevelHasBeenSet = false;
  bool m_timeZoneHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
