/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/CommercialRegion.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p> A reference to a table within Athena.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AthenaTableReference">AWS
 * API Reference</a></p>
 */
class AthenaTableReference {
 public:
  AWS_CLEANROOMS_API AthenaTableReference() = default;
  AWS_CLEANROOMS_API AthenaTableReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API AthenaTableReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services Region where the Athena table is located. This
   * parameter is required to uniquely identify and access tables across different
   * Regions.</p>
   */
  inline CommercialRegion GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  inline void SetRegion(CommercialRegion value) {
    m_regionHasBeenSet = true;
    m_region = value;
  }
  inline AthenaTableReference& WithRegion(CommercialRegion value) {
    SetRegion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The workgroup of the Athena table reference.</p>
   */
  inline const Aws::String& GetWorkGroup() const { return m_workGroup; }
  inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
  template <typename WorkGroupT = Aws::String>
  void SetWorkGroup(WorkGroupT&& value) {
    m_workGroupHasBeenSet = true;
    m_workGroup = std::forward<WorkGroupT>(value);
  }
  template <typename WorkGroupT = Aws::String>
  AthenaTableReference& WithWorkGroup(WorkGroupT&& value) {
    SetWorkGroup(std::forward<WorkGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The output location for the Athena table.</p>
   */
  inline const Aws::String& GetOutputLocation() const { return m_outputLocation; }
  inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
  template <typename OutputLocationT = Aws::String>
  void SetOutputLocation(OutputLocationT&& value) {
    m_outputLocationHasBeenSet = true;
    m_outputLocation = std::forward<OutputLocationT>(value);
  }
  template <typename OutputLocationT = Aws::String>
  AthenaTableReference& WithOutputLocation(OutputLocationT&& value) {
    SetOutputLocation(std::forward<OutputLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The database name.</p>
   */
  inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
  inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
  template <typename DatabaseNameT = Aws::String>
  void SetDatabaseName(DatabaseNameT&& value) {
    m_databaseNameHasBeenSet = true;
    m_databaseName = std::forward<DatabaseNameT>(value);
  }
  template <typename DatabaseNameT = Aws::String>
  AthenaTableReference& WithDatabaseName(DatabaseNameT&& value) {
    SetDatabaseName(std::forward<DatabaseNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The table reference.</p>
   */
  inline const Aws::String& GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  template <typename TableNameT = Aws::String>
  void SetTableName(TableNameT&& value) {
    m_tableNameHasBeenSet = true;
    m_tableName = std::forward<TableNameT>(value);
  }
  template <typename TableNameT = Aws::String>
  AthenaTableReference& WithTableName(TableNameT&& value) {
    SetTableName(std::forward<TableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The catalog name.</p>
   */
  inline const Aws::String& GetCatalogName() const { return m_catalogName; }
  inline bool CatalogNameHasBeenSet() const { return m_catalogNameHasBeenSet; }
  template <typename CatalogNameT = Aws::String>
  void SetCatalogName(CatalogNameT&& value) {
    m_catalogNameHasBeenSet = true;
    m_catalogName = std::forward<CatalogNameT>(value);
  }
  template <typename CatalogNameT = Aws::String>
  AthenaTableReference& WithCatalogName(CatalogNameT&& value) {
    SetCatalogName(std::forward<CatalogNameT>(value));
    return *this;
  }
  ///@}
 private:
  CommercialRegion m_region{CommercialRegion::NOT_SET};

  Aws::String m_workGroup;

  Aws::String m_outputLocation;

  Aws::String m_databaseName;

  Aws::String m_tableName;

  Aws::String m_catalogName;
  bool m_regionHasBeenSet = false;
  bool m_workGroupHasBeenSet = false;
  bool m_outputLocationHasBeenSet = false;
  bool m_databaseNameHasBeenSet = false;
  bool m_tableNameHasBeenSet = false;
  bool m_catalogNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
