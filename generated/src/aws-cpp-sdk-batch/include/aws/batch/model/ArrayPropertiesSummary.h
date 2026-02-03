/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch {
namespace Model {

/**
 * <p>An object that represents the array properties of a job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ArrayPropertiesSummary">AWS
 * API Reference</a></p>
 */
class ArrayPropertiesSummary {
 public:
  AWS_BATCH_API ArrayPropertiesSummary() = default;
  AWS_BATCH_API ArrayPropertiesSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API ArrayPropertiesSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The size of the array job. This parameter is returned for parent array
   * jobs.</p>
   */
  inline int GetSize() const { return m_size; }
  inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
  inline void SetSize(int value) {
    m_sizeHasBeenSet = true;
    m_size = value;
  }
  inline ArrayPropertiesSummary& WithSize(int value) {
    SetSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job index within the array that's associated with this job. This
   * parameter is returned for children of array jobs.</p>
   */
  inline int GetIndex() const { return m_index; }
  inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
  inline void SetIndex(int value) {
    m_indexHasBeenSet = true;
    m_index = value;
  }
  inline ArrayPropertiesSummary& WithIndex(int value) {
    SetIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the number of array job children in each available job status.
   * This parameter is returned for parent array jobs.</p>
   */
  inline const Aws::Map<Aws::String, int>& GetStatusSummary() const { return m_statusSummary; }
  inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }
  template <typename StatusSummaryT = Aws::Map<Aws::String, int>>
  void SetStatusSummary(StatusSummaryT&& value) {
    m_statusSummaryHasBeenSet = true;
    m_statusSummary = std::forward<StatusSummaryT>(value);
  }
  template <typename StatusSummaryT = Aws::Map<Aws::String, int>>
  ArrayPropertiesSummary& WithStatusSummary(StatusSummaryT&& value) {
    SetStatusSummary(std::forward<StatusSummaryT>(value));
    return *this;
  }
  inline ArrayPropertiesSummary& AddStatusSummary(Aws::String key, int value) {
    m_statusSummaryHasBeenSet = true;
    m_statusSummary.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp (in milliseconds) for when the <code>statusSummary</code>
   * was last updated.</p>
   */
  inline long long GetStatusSummaryLastUpdatedAt() const { return m_statusSummaryLastUpdatedAt; }
  inline bool StatusSummaryLastUpdatedAtHasBeenSet() const { return m_statusSummaryLastUpdatedAtHasBeenSet; }
  inline void SetStatusSummaryLastUpdatedAt(long long value) {
    m_statusSummaryLastUpdatedAtHasBeenSet = true;
    m_statusSummaryLastUpdatedAt = value;
  }
  inline ArrayPropertiesSummary& WithStatusSummaryLastUpdatedAt(long long value) {
    SetStatusSummaryLastUpdatedAt(value);
    return *this;
  }
  ///@}
 private:
  int m_size{0};

  int m_index{0};

  Aws::Map<Aws::String, int> m_statusSummary;

  long long m_statusSummaryLastUpdatedAt{0};
  bool m_sizeHasBeenSet = false;
  bool m_indexHasBeenSet = false;
  bool m_statusSummaryHasBeenSet = false;
  bool m_statusSummaryLastUpdatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
