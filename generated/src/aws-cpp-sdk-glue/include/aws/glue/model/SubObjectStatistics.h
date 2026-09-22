/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/SubObjectSourceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Statistics for one sub-object referenced by a materialized view, recorded
 * when the materialized view was created or last fully refreshed. These values
 * describe what that refresh selected from the sub-object, which can be a subset
 * of the table when the materialized view's definition limits the data it reads.
 * The fields present depend on the sub-object's format.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SubObjectStatistics">AWS
 * API Reference</a></p>
 */
class SubObjectStatistics {
 public:
  AWS_GLUE_API SubObjectStatistics() = default;
  AWS_GLUE_API SubObjectStatistics(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API SubObjectStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source type of the sub-object (for example, its table format), which
   * identifies the sub-object.</p>
   */
  inline SubObjectSourceType GetSourceType() const { return m_sourceType; }
  inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
  inline void SetSourceType(SubObjectSourceType value) {
    m_sourceTypeHasBeenSet = true;
    m_sourceType = value;
  }
  inline SubObjectStatistics& WithSourceType(SubObjectSourceType value) {
    SetSourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Glue version ID of the sub-object that the statistics were captured
   * for.</p>
   */
  inline const Aws::String& GetGlueVersionId() const { return m_glueVersionId; }
  inline bool GlueVersionIdHasBeenSet() const { return m_glueVersionIdHasBeenSet; }
  template <typename GlueVersionIdT = Aws::String>
  void SetGlueVersionId(GlueVersionIdT&& value) {
    m_glueVersionIdHasBeenSet = true;
    m_glueVersionId = std::forward<GlueVersionIdT>(value);
  }
  template <typename GlueVersionIdT = Aws::String>
  SubObjectStatistics& WithGlueVersionId(GlueVersionIdT&& value) {
    SetGlueVersionId(std::forward<GlueVersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sub-object partitions selected for that refresh. Not present
   * for unpartitioned sub-objects.</p>
   */
  inline long long GetPartitionCount() const { return m_partitionCount; }
  inline bool PartitionCountHasBeenSet() const { return m_partitionCountHasBeenSet; }
  inline void SetPartitionCount(long long value) {
    m_partitionCountHasBeenSet = true;
    m_partitionCount = value;
  }
  inline SubObjectStatistics& WithPartitionCount(long long value) {
    SetPartitionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sub-object data files selected for that refresh.</p>
   */
  inline long long GetFileCount() const { return m_fileCount; }
  inline bool FileCountHasBeenSet() const { return m_fileCountHasBeenSet; }
  inline void SetFileCount(long long value) {
    m_fileCountHasBeenSet = true;
    m_fileCount = value;
  }
  inline SubObjectStatistics& WithFileCount(long long value) {
    SetFileCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total size, in bytes, of the data files counted by
   * <code>FileCount</code>.</p>
   */
  inline long long GetTotalFileBytes() const { return m_totalFileBytes; }
  inline bool TotalFileBytesHasBeenSet() const { return m_totalFileBytesHasBeenSet; }
  inline void SetTotalFileBytes(long long value) {
    m_totalFileBytesHasBeenSet = true;
    m_totalFileBytes = value;
  }
  inline SubObjectStatistics& WithTotalFileBytes(long long value) {
    SetTotalFileBytes(value);
    return *this;
  }
  ///@}
 private:
  SubObjectSourceType m_sourceType{SubObjectSourceType::NOT_SET};

  Aws::String m_glueVersionId;

  long long m_partitionCount{0};

  long long m_fileCount{0};

  long long m_totalFileBytes{0};
  bool m_sourceTypeHasBeenSet = false;
  bool m_glueVersionIdHasBeenSet = false;
  bool m_partitionCountHasBeenSet = false;
  bool m_fileCountHasBeenSet = false;
  bool m_totalFileBytesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
