/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTableLockLevel.h>
#include <aws/connect/model/DataTableStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class CreateDataTableRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API CreateDataTableRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDataTable"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the Amazon Connect instance where the data table
   * will be created.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  CreateDataTableRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the data table. Must conform to Connect human readable string
   * specification and have 1-127 characters. Whitespace must be trimmed first. Must
   * not start with the reserved case insensitive values 'connect:' and 'aws:'. Must
   * be unique for the instance using case-insensitive comparison.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateDataTableRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description for the data table. Must conform to Connect human
   * readable string specification and have 0-250 characters. Whitespace must be
   * trimmed first.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateDataTableRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IANA timezone identifier to use when resolving time based dynamic values.
   * Required even if no time slices are specified.</p>
   */
  inline const Aws::String& GetTimeZone() const { return m_timeZone; }
  inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
  template <typename TimeZoneT = Aws::String>
  void SetTimeZone(TimeZoneT&& value) {
    m_timeZoneHasBeenSet = true;
    m_timeZone = std::forward<TimeZoneT>(value);
  }
  template <typename TimeZoneT = Aws::String>
  CreateDataTableRequest& WithTimeZone(TimeZoneT&& value) {
    SetTimeZone(std::forward<TimeZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data level that concurrent value edits are locked on. One of DATA_TABLE,
   * PRIMARY_VALUE, ATTRIBUTE, VALUE, and NONE. NONE is the default if unspecified.
   * This determines how concurrent edits are handled when multiple users attempt to
   * modify values simultaneously.</p>
   */
  inline DataTableLockLevel GetValueLockLevel() const { return m_valueLockLevel; }
  inline bool ValueLockLevelHasBeenSet() const { return m_valueLockLevelHasBeenSet; }
  inline void SetValueLockLevel(DataTableLockLevel value) {
    m_valueLockLevelHasBeenSet = true;
    m_valueLockLevel = value;
  }
  inline CreateDataTableRequest& WithValueLockLevel(DataTableLockLevel value) {
    SetValueLockLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the data table. One of PUBLISHED or SAVED. Required parameter
   * that determines the initial state of the table.</p>
   */
  inline DataTableStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DataTableStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateDataTableRequest& WithStatus(DataTableStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Key value pairs for attribute based access control (TBAC or ABAC). Optional
   * tags to apply to the data table for organization and access control
   * purposes.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateDataTableRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateDataTableRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;
  bool m_instanceIdHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::String m_timeZone;
  bool m_timeZoneHasBeenSet = false;

  DataTableLockLevel m_valueLockLevel{DataTableLockLevel::NOT_SET};
  bool m_valueLockLevelHasBeenSet = false;

  DataTableStatus m_status{DataTableStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
