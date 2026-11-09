/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/ECR_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECR {
namespace Model {

/**
 * <p>An object representing the progress of a replication backfill, including the
 * total, completed, and failed replication counts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ReplicationBackfillProgress">AWS
 * API Reference</a></p>
 */
class ReplicationBackfillProgress {
 public:
  AWS_ECR_API ReplicationBackfillProgress() = default;
  AWS_ECR_API ReplicationBackfillProgress(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API ReplicationBackfillProgress& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of replications that the backfill will perform. Each image
   * and tag combination is counted as a single replication.</p>
   */
  inline int GetTotalReplicationCount() const { return m_totalReplicationCount; }
  inline bool TotalReplicationCountHasBeenSet() const { return m_totalReplicationCountHasBeenSet; }
  inline void SetTotalReplicationCount(int value) {
    m_totalReplicationCountHasBeenSet = true;
    m_totalReplicationCount = value;
  }
  inline ReplicationBackfillProgress& WithTotalReplicationCount(int value) {
    SetTotalReplicationCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of replications that have completed successfully.</p>
   */
  inline int GetCompletedReplicationCount() const { return m_completedReplicationCount; }
  inline bool CompletedReplicationCountHasBeenSet() const { return m_completedReplicationCountHasBeenSet; }
  inline void SetCompletedReplicationCount(int value) {
    m_completedReplicationCountHasBeenSet = true;
    m_completedReplicationCount = value;
  }
  inline ReplicationBackfillProgress& WithCompletedReplicationCount(int value) {
    SetCompletedReplicationCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of replications that have failed.</p>
   */
  inline int GetFailedReplicationCount() const { return m_failedReplicationCount; }
  inline bool FailedReplicationCountHasBeenSet() const { return m_failedReplicationCountHasBeenSet; }
  inline void SetFailedReplicationCount(int value) {
    m_failedReplicationCountHasBeenSet = true;
    m_failedReplicationCount = value;
  }
  inline ReplicationBackfillProgress& WithFailedReplicationCount(int value) {
    SetFailedReplicationCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The distinct failure codes for the replications that have failed. Each
   * failure code appears at most once, regardless of how many replications failed
   * with that code.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFailureCodes() const { return m_failureCodes; }
  inline bool FailureCodesHasBeenSet() const { return m_failureCodesHasBeenSet; }
  template <typename FailureCodesT = Aws::Vector<Aws::String>>
  void SetFailureCodes(FailureCodesT&& value) {
    m_failureCodesHasBeenSet = true;
    m_failureCodes = std::forward<FailureCodesT>(value);
  }
  template <typename FailureCodesT = Aws::Vector<Aws::String>>
  ReplicationBackfillProgress& WithFailureCodes(FailureCodesT&& value) {
    SetFailureCodes(std::forward<FailureCodesT>(value));
    return *this;
  }
  template <typename FailureCodesT = Aws::String>
  ReplicationBackfillProgress& AddFailureCodes(FailureCodesT&& value) {
    m_failureCodesHasBeenSet = true;
    m_failureCodes.emplace_back(std::forward<FailureCodesT>(value));
    return *this;
  }
  ///@}
 private:
  int m_totalReplicationCount{0};

  int m_completedReplicationCount{0};

  int m_failedReplicationCount{0};

  Aws::Vector<Aws::String> m_failureCodes;
  bool m_totalReplicationCountHasBeenSet = false;
  bool m_completedReplicationCountHasBeenSet = false;
  bool m_failedReplicationCountHasBeenSet = false;
  bool m_failureCodesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
