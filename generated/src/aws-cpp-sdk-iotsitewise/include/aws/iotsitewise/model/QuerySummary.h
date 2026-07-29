/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/QueryStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Contains summary information about a query.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/QuerySummary">AWS
 * API Reference</a></p>
 */
class QuerySummary {
 public:
  AWS_IOTSITEWISE_API QuerySummary() = default;
  AWS_IOTSITEWISE_API QuerySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API QuerySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the query execution.</p>
   */
  inline const Aws::String& GetQueryId() const { return m_queryId; }
  inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
  template <typename QueryIdT = Aws::String>
  void SetQueryId(QueryIdT&& value) {
    m_queryIdHasBeenSet = true;
    m_queryId = std::forward<QueryIdT>(value);
  }
  template <typename QueryIdT = Aws::String>
  QuerySummary& WithQueryId(QueryIdT&& value) {
    SetQueryId(std::forward<QueryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current query status.</p>
   */
  inline QueryStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(QueryStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline QuerySummary& WithStatus(QueryStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the query was submitted, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetSubmittedAt() const { return m_submittedAt; }
  inline bool SubmittedAtHasBeenSet() const { return m_submittedAtHasBeenSet; }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  void SetSubmittedAt(SubmittedAtT&& value) {
    m_submittedAtHasBeenSet = true;
    m_submittedAt = std::forward<SubmittedAtT>(value);
  }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  QuerySummary& WithSubmittedAt(SubmittedAtT&& value) {
    SetSubmittedAt(std::forward<SubmittedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the query reached a terminal state, in Unix epoch
   * time.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  QuerySummary& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_queryId;

  QueryStatus m_status{QueryStatus::NOT_SET};

  Aws::Utils::DateTime m_submittedAt{};

  Aws::Utils::DateTime m_completedAt{};
  bool m_queryIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_submittedAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
