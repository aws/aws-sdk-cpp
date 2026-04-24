/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {

/**
 * <p>Contains metadata about a lookup table returned by
 * <code>DescribeLookupTables</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LookupTable">AWS
 * API Reference</a></p>
 */
class LookupTable {
 public:
  AWS_CLOUDWATCHLOGS_API LookupTable() = default;
  AWS_CLOUDWATCHLOGS_API LookupTable(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API LookupTable& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the lookup table.</p>
   */
  inline const Aws::String& GetLookupTableArn() const { return m_lookupTableArn; }
  inline bool LookupTableArnHasBeenSet() const { return m_lookupTableArnHasBeenSet; }
  template <typename LookupTableArnT = Aws::String>
  void SetLookupTableArn(LookupTableArnT&& value) {
    m_lookupTableArnHasBeenSet = true;
    m_lookupTableArn = std::forward<LookupTableArnT>(value);
  }
  template <typename LookupTableArnT = Aws::String>
  LookupTable& WithLookupTableArn(LookupTableArnT&& value) {
    SetLookupTableArn(std::forward<LookupTableArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the lookup table.</p>
   */
  inline const Aws::String& GetLookupTableName() const { return m_lookupTableName; }
  inline bool LookupTableNameHasBeenSet() const { return m_lookupTableNameHasBeenSet; }
  template <typename LookupTableNameT = Aws::String>
  void SetLookupTableName(LookupTableNameT&& value) {
    m_lookupTableNameHasBeenSet = true;
    m_lookupTableName = std::forward<LookupTableNameT>(value);
  }
  template <typename LookupTableNameT = Aws::String>
  LookupTable& WithLookupTableName(LookupTableNameT&& value) {
    SetLookupTableName(std::forward<LookupTableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the lookup table.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  LookupTable& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The column headers from the first row of the CSV file.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTableFields() const { return m_tableFields; }
  inline bool TableFieldsHasBeenSet() const { return m_tableFieldsHasBeenSet; }
  template <typename TableFieldsT = Aws::Vector<Aws::String>>
  void SetTableFields(TableFieldsT&& value) {
    m_tableFieldsHasBeenSet = true;
    m_tableFields = std::forward<TableFieldsT>(value);
  }
  template <typename TableFieldsT = Aws::Vector<Aws::String>>
  LookupTable& WithTableFields(TableFieldsT&& value) {
    SetTableFields(std::forward<TableFieldsT>(value));
    return *this;
  }
  template <typename TableFieldsT = Aws::String>
  LookupTable& AddTableFields(TableFieldsT&& value) {
    m_tableFieldsHasBeenSet = true;
    m_tableFields.emplace_back(std::forward<TableFieldsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of data rows in the lookup table, excluding the header row.</p>
   */
  inline long long GetRecordsCount() const { return m_recordsCount; }
  inline bool RecordsCountHasBeenSet() const { return m_recordsCountHasBeenSet; }
  inline void SetRecordsCount(long long value) {
    m_recordsCountHasBeenSet = true;
    m_recordsCount = value;
  }
  inline LookupTable& WithRecordsCount(long long value) {
    SetRecordsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the lookup table in bytes.</p>
   */
  inline long long GetSizeBytes() const { return m_sizeBytes; }
  inline bool SizeBytesHasBeenSet() const { return m_sizeBytesHasBeenSet; }
  inline void SetSizeBytes(long long value) {
    m_sizeBytesHasBeenSet = true;
    m_sizeBytes = value;
  }
  inline LookupTable& WithSizeBytes(long long value) {
    SetSizeBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the lookup table was last updated, expressed as the number of
   * milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
   */
  inline long long GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
  inline void SetLastUpdatedTime(long long value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = value;
  }
  inline LookupTable& WithLastUpdatedTime(long long value) {
    SetLastUpdatedTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the KMS key used to encrypt the lookup table data, if
   * applicable.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  LookupTable& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_lookupTableArn;

  Aws::String m_lookupTableName;

  Aws::String m_description;

  Aws::Vector<Aws::String> m_tableFields;

  long long m_recordsCount{0};

  long long m_sizeBytes{0};

  long long m_lastUpdatedTime{0};

  Aws::String m_kmsKeyId;
  bool m_lookupTableArnHasBeenSet = false;
  bool m_lookupTableNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tableFieldsHasBeenSet = false;
  bool m_recordsCountHasBeenSet = false;
  bool m_sizeBytesHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
