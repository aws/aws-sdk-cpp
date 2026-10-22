/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/ScheduleAction.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {
class ListScheduleActionsResult {
 public:
  AWS_ELEMENTALINFERENCE_API ListScheduleActionsResult() = default;
  AWS_ELEMENTALINFERENCE_API ListScheduleActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ELEMENTALINFERENCE_API ListScheduleActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of the schedule actions on the feed.</p>
   */
  inline const Aws::Vector<ScheduleAction>& GetScheduleActions() const { return m_scheduleActions; }
  template <typename ScheduleActionsT = Aws::Vector<ScheduleAction>>
  void SetScheduleActions(ScheduleActionsT&& value) {
    m_scheduleActionsHasBeenSet = true;
    m_scheduleActions = std::forward<ScheduleActionsT>(value);
  }
  template <typename ScheduleActionsT = Aws::Vector<ScheduleAction>>
  ListScheduleActionsResult& WithScheduleActions(ScheduleActionsT&& value) {
    SetScheduleActions(std::forward<ScheduleActionsT>(value));
    return *this;
  }
  template <typename ScheduleActionsT = ScheduleAction>
  ListScheduleActionsResult& AddScheduleActions(ScheduleActionsT&& value) {
    m_scheduleActionsHasBeenSet = true;
    m_scheduleActions.emplace_back(std::forward<ScheduleActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token that identifies the next batch of results. Elemental Inference
   * returns it only when more results are available. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListScheduleActionsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListScheduleActionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ScheduleAction> m_scheduleActions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_scheduleActionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
