/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/ExecutionStatus.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Lambda {
namespace Model {

/**
 */
class ListDurableExecutionsByFunctionRequest : public LambdaRequest {
 public:
  AWS_LAMBDA_API ListDurableExecutionsByFunctionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDurableExecutionsByFunction"; }

  AWS_LAMBDA_API Aws::String SerializePayload() const override;

  AWS_LAMBDA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The name or ARN of the Lambda function. You can specify a function name, a
   * partial ARN, or a full ARN.</p>
   */
  inline const Aws::String& GetFunctionName() const { return m_functionName; }
  inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
  template <typename FunctionNameT = Aws::String>
  void SetFunctionName(FunctionNameT&& value) {
    m_functionNameHasBeenSet = true;
    m_functionName = std::forward<FunctionNameT>(value);
  }
  template <typename FunctionNameT = Aws::String>
  ListDurableExecutionsByFunctionRequest& WithFunctionName(FunctionNameT&& value) {
    SetFunctionName(std::forward<FunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The function version or alias. If not specified, lists executions for the
   * $LATEST version.</p>
   */
  inline const Aws::String& GetQualifier() const { return m_qualifier; }
  inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }
  template <typename QualifierT = Aws::String>
  void SetQualifier(QualifierT&& value) {
    m_qualifierHasBeenSet = true;
    m_qualifier = std::forward<QualifierT>(value);
  }
  template <typename QualifierT = Aws::String>
  ListDurableExecutionsByFunctionRequest& WithQualifier(QualifierT&& value) {
    SetQualifier(std::forward<QualifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter executions by name. Only executions with names that contain this
   * string are returned.</p>
   */
  inline const Aws::String& GetDurableExecutionName() const { return m_durableExecutionName; }
  inline bool DurableExecutionNameHasBeenSet() const { return m_durableExecutionNameHasBeenSet; }
  template <typename DurableExecutionNameT = Aws::String>
  void SetDurableExecutionName(DurableExecutionNameT&& value) {
    m_durableExecutionNameHasBeenSet = true;
    m_durableExecutionName = std::forward<DurableExecutionNameT>(value);
  }
  template <typename DurableExecutionNameT = Aws::String>
  ListDurableExecutionsByFunctionRequest& WithDurableExecutionName(DurableExecutionNameT&& value) {
    SetDurableExecutionName(std::forward<DurableExecutionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter executions by status. Valid values: RUNNING, SUCCEEDED, FAILED,
   * TIMED_OUT, STOPPED.</p>
   */
  inline const Aws::Vector<ExecutionStatus>& GetStatuses() const { return m_statuses; }
  inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
  template <typename StatusesT = Aws::Vector<ExecutionStatus>>
  void SetStatuses(StatusesT&& value) {
    m_statusesHasBeenSet = true;
    m_statuses = std::forward<StatusesT>(value);
  }
  template <typename StatusesT = Aws::Vector<ExecutionStatus>>
  ListDurableExecutionsByFunctionRequest& WithStatuses(StatusesT&& value) {
    SetStatuses(std::forward<StatusesT>(value));
    return *this;
  }
  inline ListDurableExecutionsByFunctionRequest& AddStatuses(ExecutionStatus value) {
    m_statusesHasBeenSet = true;
    m_statuses.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter executions that started after this timestamp (ISO 8601 format).</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAfter() const { return m_startedAfter; }
  inline bool StartedAfterHasBeenSet() const { return m_startedAfterHasBeenSet; }
  template <typename StartedAfterT = Aws::Utils::DateTime>
  void SetStartedAfter(StartedAfterT&& value) {
    m_startedAfterHasBeenSet = true;
    m_startedAfter = std::forward<StartedAfterT>(value);
  }
  template <typename StartedAfterT = Aws::Utils::DateTime>
  ListDurableExecutionsByFunctionRequest& WithStartedAfter(StartedAfterT&& value) {
    SetStartedAfter(std::forward<StartedAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter executions that started before this timestamp (ISO 8601 format).</p>
   */
  inline const Aws::Utils::DateTime& GetStartedBefore() const { return m_startedBefore; }
  inline bool StartedBeforeHasBeenSet() const { return m_startedBeforeHasBeenSet; }
  template <typename StartedBeforeT = Aws::Utils::DateTime>
  void SetStartedBefore(StartedBeforeT&& value) {
    m_startedBeforeHasBeenSet = true;
    m_startedBefore = std::forward<StartedBeforeT>(value);
  }
  template <typename StartedBeforeT = Aws::Utils::DateTime>
  ListDurableExecutionsByFunctionRequest& WithStartedBefore(StartedBeforeT&& value) {
    SetStartedBefore(std::forward<StartedBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to true to return results in reverse chronological order (newest first).
   * Default is false.</p>
   */
  inline bool GetReverseOrder() const { return m_reverseOrder; }
  inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }
  inline void SetReverseOrder(bool value) {
    m_reverseOrderHasBeenSet = true;
    m_reverseOrder = value;
  }
  inline ListDurableExecutionsByFunctionRequest& WithReverseOrder(bool value) {
    SetReverseOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token from a previous request to continue retrieving results.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  ListDurableExecutionsByFunctionRequest& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of executions to return (1-1000). Default is 100.</p>
   */
  inline int GetMaxItems() const { return m_maxItems; }
  inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
  inline void SetMaxItems(int value) {
    m_maxItemsHasBeenSet = true;
    m_maxItems = value;
  }
  inline ListDurableExecutionsByFunctionRequest& WithMaxItems(int value) {
    SetMaxItems(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionName;

  Aws::String m_qualifier;

  Aws::String m_durableExecutionName;

  Aws::Vector<ExecutionStatus> m_statuses;

  Aws::Utils::DateTime m_startedAfter{};

  Aws::Utils::DateTime m_startedBefore{};

  bool m_reverseOrder{false};

  Aws::String m_marker;

  int m_maxItems{0};
  bool m_functionNameHasBeenSet = false;
  bool m_qualifierHasBeenSet = false;
  bool m_durableExecutionNameHasBeenSet = false;
  bool m_statusesHasBeenSet = false;
  bool m_startedAfterHasBeenSet = false;
  bool m_startedBeforeHasBeenSet = false;
  bool m_reverseOrderHasBeenSet = false;
  bool m_markerHasBeenSet = false;
  bool m_maxItemsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
