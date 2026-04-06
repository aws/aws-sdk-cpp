/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/BatchGetStepError.h>
#include <aws/deadline/model/BatchGetStepItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {
class BatchGetStepResult {
 public:
  AWS_DEADLINE_API BatchGetStepResult() = default;
  AWS_DEADLINE_API BatchGetStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEADLINE_API BatchGetStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of steps that were successfully retrieved.</p>
   */
  inline const Aws::Vector<BatchGetStepItem>& GetSteps() const { return m_steps; }
  template <typename StepsT = Aws::Vector<BatchGetStepItem>>
  void SetSteps(StepsT&& value) {
    m_stepsHasBeenSet = true;
    m_steps = std::forward<StepsT>(value);
  }
  template <typename StepsT = Aws::Vector<BatchGetStepItem>>
  BatchGetStepResult& WithSteps(StepsT&& value) {
    SetSteps(std::forward<StepsT>(value));
    return *this;
  }
  template <typename StepsT = BatchGetStepItem>
  BatchGetStepResult& AddSteps(StepsT&& value) {
    m_stepsHasBeenSet = true;
    m_steps.emplace_back(std::forward<StepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of errors for steps that could not be retrieved.</p>
   */
  inline const Aws::Vector<BatchGetStepError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchGetStepError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchGetStepError>>
  BatchGetStepResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchGetStepError>
  BatchGetStepResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
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
  BatchGetStepResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchGetStepItem> m_steps;

  Aws::Vector<BatchGetStepError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_stepsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
