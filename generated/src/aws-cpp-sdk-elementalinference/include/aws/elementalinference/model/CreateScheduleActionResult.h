/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/ScheduleActionError.h>
#include <aws/elementalinference/model/ScheduleActionOperation.h>
#include <aws/elementalinference/model/ScheduleActionStartConfiguration.h>
#include <aws/elementalinference/model/ScheduleActionStatus.h>

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
class CreateScheduleActionResult {
 public:
  AWS_ELEMENTALINFERENCE_API CreateScheduleActionResult() = default;
  AWS_ELEMENTALINFERENCE_API CreateScheduleActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ELEMENTALINFERENCE_API CreateScheduleActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name that you specified.</p>
   */
  inline const Aws::String& GetActionName() const { return m_actionName; }
  template <typename ActionNameT = Aws::String>
  void SetActionName(ActionNameT&& value) {
    m_actionNameHasBeenSet = true;
    m_actionName = std::forward<ActionNameT>(value);
  }
  template <typename ActionNameT = Aws::String>
  CreateScheduleActionResult& WithActionName(ActionNameT&& value) {
    SetActionName(std::forward<ActionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies when the action runs.</p>
   */
  inline const ScheduleActionStartConfiguration& GetStartConfiguration() const { return m_startConfiguration; }
  template <typename StartConfigurationT = ScheduleActionStartConfiguration>
  void SetStartConfiguration(StartConfigurationT&& value) {
    m_startConfigurationHasBeenSet = true;
    m_startConfiguration = std::forward<StartConfigurationT>(value);
  }
  template <typename StartConfigurationT = ScheduleActionStartConfiguration>
  CreateScheduleActionResult& WithStartConfiguration(StartConfigurationT&& value) {
    SetStartConfiguration(std::forward<StartConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration changes that the action makes to the feed.</p>
   */
  inline const Aws::Vector<ScheduleActionOperation>& GetOperations() const { return m_operations; }
  template <typename OperationsT = Aws::Vector<ScheduleActionOperation>>
  void SetOperations(OperationsT&& value) {
    m_operationsHasBeenSet = true;
    m_operations = std::forward<OperationsT>(value);
  }
  template <typename OperationsT = Aws::Vector<ScheduleActionOperation>>
  CreateScheduleActionResult& WithOperations(OperationsT&& value) {
    SetOperations(std::forward<OperationsT>(value));
    return *this;
  }
  template <typename OperationsT = ScheduleActionOperation>
  CreateScheduleActionResult& AddOperations(OperationsT&& value) {
    m_operationsHasBeenSet = true;
    m_operations.emplace_back(std::forward<OperationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the action. After you create the action successfully, Elemental
   * Inference sets the status to PENDING. </p>
   */
  inline ScheduleActionStatus GetStatus() const { return m_status; }
  inline void SetStatus(ScheduleActionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateScheduleActionResult& WithStatus(ScheduleActionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of why the action failed. Elemental Inference returns this
   * property only when the status is FAILED. </p>
   */
  inline const ScheduleActionError& GetError() const { return m_error; }
  template <typename ErrorT = ScheduleActionError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = ScheduleActionError>
  CreateScheduleActionResult& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
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
  CreateScheduleActionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_actionName;

  ScheduleActionStartConfiguration m_startConfiguration;

  Aws::Vector<ScheduleActionOperation> m_operations;

  ScheduleActionStatus m_status{ScheduleActionStatus::NOT_SET};

  ScheduleActionError m_error;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_actionNameHasBeenSet = false;
  bool m_startConfigurationHasBeenSet = false;
  bool m_operationsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
