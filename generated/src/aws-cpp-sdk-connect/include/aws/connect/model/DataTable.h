/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTableLockLevel.h>
#include <aws/connect/model/DataTableLockVersion.h>
#include <aws/connect/model/DataTableStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Represents a data table in Amazon Connect. A data table is a JSON-like data
 * structure where attributes and values are dynamically set by customers.
 * Customers can reference table values within call flows, applications, views, and
 * workspaces to pinpoint dynamic configuration that changes their contact center's
 * behavior in a predetermined and safe way.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DataTable">AWS
 * API Reference</a></p>
 */
class DataTable {
 public:
  AWS_CONNECT_API DataTable() = default;
  AWS_CONNECT_API DataTable(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API DataTable& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The human-readable name of the data table. Must be unique within the instance
   * and conform to Connect naming standards.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DataTable& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the data table. Does not include version
   * aliases.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DataTable& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the data table. Does not include version
   * aliases.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DataTable& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IANA timezone identifier used when resolving time based dynamic values.
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
  DataTable& WithTimeZone(TimeZoneT&& value) {
    SetTimeZone(std::forward<TimeZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description of the data table's purpose and contents.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DataTable& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data level that concurrent value edits are locked on. One of DATA_TABLE,
   * PRIMARY_VALUE, ATTRIBUTE, VALUE, and NONE. Determines how concurrent edits are
   * handled when multiple users attempt to modify values simultaneously.</p>
   */
  inline DataTableLockLevel GetValueLockLevel() const { return m_valueLockLevel; }
  inline bool ValueLockLevelHasBeenSet() const { return m_valueLockLevelHasBeenSet; }
  inline void SetValueLockLevel(DataTableLockLevel value) {
    m_valueLockLevelHasBeenSet = true;
    m_valueLockLevel = value;
  }
  inline DataTable& WithValueLockLevel(DataTableLockLevel value) {
    SetValueLockLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lock version information used for optimistic locking and table
   * versioning. Changes with each update to prevent concurrent modification
   * conflicts.</p>
   */
  inline const DataTableLockVersion& GetLockVersion() const { return m_lockVersion; }
  inline bool LockVersionHasBeenSet() const { return m_lockVersionHasBeenSet; }
  template <typename LockVersionT = DataTableLockVersion>
  void SetLockVersion(LockVersionT&& value) {
    m_lockVersionHasBeenSet = true;
    m_lockVersion = std::forward<LockVersionT>(value);
  }
  template <typename LockVersionT = DataTableLockVersion>
  DataTable& WithLockVersion(LockVersionT&& value) {
    SetLockVersion(std::forward<LockVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier and alias for customer managed versions (not $LATEST or
   * $SAVED).</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  DataTable& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the customer managed version.</p>
   */
  inline const Aws::String& GetVersionDescription() const { return m_versionDescription; }
  inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
  template <typename VersionDescriptionT = Aws::String>
  void SetVersionDescription(VersionDescriptionT&& value) {
    m_versionDescriptionHasBeenSet = true;
    m_versionDescription = std::forward<VersionDescriptionT>(value);
  }
  template <typename VersionDescriptionT = Aws::String>
  DataTable& WithVersionDescription(VersionDescriptionT&& value) {
    SetVersionDescription(std::forward<VersionDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the data table. One of PUBLISHED or SAVED.</p>
   */
  inline DataTableStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DataTableStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DataTable& WithStatus(DataTableStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the data table was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  DataTable& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the data table or any of its properties were last
   * modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  DataTable& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS region where the data table was last modified, used for region
   * replication.</p>
   */
  inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
  inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
  template <typename LastModifiedRegionT = Aws::String>
  void SetLastModifiedRegion(LastModifiedRegionT&& value) {
    m_lastModifiedRegionHasBeenSet = true;
    m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value);
  }
  template <typename LastModifiedRegionT = Aws::String>
  DataTable& WithLastModifiedRegion(LastModifiedRegionT&& value) {
    SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Key-value pairs for attribute based access control (TBAC or ABAC) and
   * organization.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  DataTable& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  DataTable& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_timeZone;
  bool m_timeZoneHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  DataTableLockLevel m_valueLockLevel{DataTableLockLevel::NOT_SET};
  bool m_valueLockLevelHasBeenSet = false;

  DataTableLockVersion m_lockVersion;
  bool m_lockVersionHasBeenSet = false;

  Aws::String m_version;
  bool m_versionHasBeenSet = false;

  Aws::String m_versionDescription;
  bool m_versionDescriptionHasBeenSet = false;

  DataTableStatus m_status{DataTableStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_createdTime{};
  bool m_createdTimeHasBeenSet = false;

  Aws::Utils::DateTime m_lastModifiedTime{};
  bool m_lastModifiedTimeHasBeenSet = false;

  Aws::String m_lastModifiedRegion;
  bool m_lastModifiedRegionHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
