/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/BaseTableDependencyType.h>
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
 * <p>Contains column lineage information that traces a disallowed output column
 * back to its source in a base table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ColumnLineageEntry">AWS
 * API Reference</a></p>
 */
class ColumnLineageEntry {
 public:
  AWS_CLEANROOMS_API ColumnLineageEntry() = default;
  AWS_CLEANROOMS_API ColumnLineageEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API ColumnLineageEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the column in the intermediate table.</p>
   */
  inline const Aws::String& GetColumn() const { return m_column; }
  inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
  template <typename ColumnT = Aws::String>
  void SetColumn(ColumnT&& value) {
    m_columnHasBeenSet = true;
    m_column = std::forward<ColumnT>(value);
  }
  template <typename ColumnT = Aws::String>
  ColumnLineageEntry& WithColumn(ColumnT&& value) {
    SetColumn(std::forward<ColumnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the column in the source table.</p>
   */
  inline const Aws::String& GetSourceColumn() const { return m_sourceColumn; }
  inline bool SourceColumnHasBeenSet() const { return m_sourceColumnHasBeenSet; }
  template <typename SourceColumnT = Aws::String>
  void SetSourceColumn(SourceColumnT&& value) {
    m_sourceColumnHasBeenSet = true;
    m_sourceColumn = std::forward<SourceColumnT>(value);
  }
  template <typename SourceColumnT = Aws::String>
  ColumnLineageEntry& WithSourceColumn(SourceColumnT&& value) {
    SetSourceColumn(std::forward<SourceColumnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the source table.</p>
   */
  inline const Aws::String& GetSourceName() const { return m_sourceName; }
  inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
  template <typename SourceNameT = Aws::String>
  void SetSourceName(SourceNameT&& value) {
    m_sourceNameHasBeenSet = true;
    m_sourceName = std::forward<SourceNameT>(value);
  }
  template <typename SourceNameT = Aws::String>
  ColumnLineageEntry& WithSourceName(SourceNameT&& value) {
    SetSourceName(std::forward<SourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the source table.</p>
   */
  inline const Aws::String& GetSourceId() const { return m_sourceId; }
  inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
  template <typename SourceIdT = Aws::String>
  void SetSourceId(SourceIdT&& value) {
    m_sourceIdHasBeenSet = true;
    m_sourceId = std::forward<SourceIdT>(value);
  }
  template <typename SourceIdT = Aws::String>
  ColumnLineageEntry& WithSourceId(SourceIdT&& value) {
    SetSourceId(std::forward<SourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the source table.</p>
   */
  inline BaseTableDependencyType GetSourceType() const { return m_sourceType; }
  inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
  inline void SetSourceType(BaseTableDependencyType value) {
    m_sourceTypeHasBeenSet = true;
    m_sourceType = value;
  }
  inline ColumnLineageEntry& WithSourceType(BaseTableDependencyType value) {
    SetSourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the owner of the source table.</p>
   */
  inline const Aws::String& GetSourceAccountId() const { return m_sourceAccountId; }
  inline bool SourceAccountIdHasBeenSet() const { return m_sourceAccountIdHasBeenSet; }
  template <typename SourceAccountIdT = Aws::String>
  void SetSourceAccountId(SourceAccountIdT&& value) {
    m_sourceAccountIdHasBeenSet = true;
    m_sourceAccountId = std::forward<SourceAccountIdT>(value);
  }
  template <typename SourceAccountIdT = Aws::String>
  ColumnLineageEntry& WithSourceAccountId(SourceAccountIdT&& value) {
    SetSourceAccountId(std::forward<SourceAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_column;

  Aws::String m_sourceColumn;

  Aws::String m_sourceName;

  Aws::String m_sourceId;

  BaseTableDependencyType m_sourceType{BaseTableDependencyType::NOT_SET};

  Aws::String m_sourceAccountId;
  bool m_columnHasBeenSet = false;
  bool m_sourceColumnHasBeenSet = false;
  bool m_sourceNameHasBeenSet = false;
  bool m_sourceIdHasBeenSet = false;
  bool m_sourceTypeHasBeenSet = false;
  bool m_sourceAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
