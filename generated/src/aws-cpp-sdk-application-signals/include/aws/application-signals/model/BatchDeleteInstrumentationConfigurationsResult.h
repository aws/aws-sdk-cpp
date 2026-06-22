/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/BatchDeleteError.h>
#include <aws/application-signals/model/BatchDeleteSuccessfulDeletion.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {
class BatchDeleteInstrumentationConfigurationsResult {
 public:
  AWS_APPLICATIONSIGNALS_API BatchDeleteInstrumentationConfigurationsResult() = default;
  AWS_APPLICATIONSIGNALS_API BatchDeleteInstrumentationConfigurationsResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APPLICATIONSIGNALS_API BatchDeleteInstrumentationConfigurationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Number of configurations successfully deleted. When deleting by scope, this
   * is the total count of deleted items. When deleting by ARN list, this equals the
   * length of SuccessfulDeletions.</p>
   */
  inline int GetDeletedCount() const { return m_deletedCount; }
  inline void SetDeletedCount(int value) {
    m_deletedCountHasBeenSet = true;
    m_deletedCount = value;
  }
  inline BatchDeleteInstrumentationConfigurationsResult& WithDeletedCount(int value) {
    SetDeletedCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of successfully deleted configurations. Deleting by scope populates
   * SignalType and LocationHash per item. Deleting by ARN list populates ResourceArn
   * per item.</p>
   */
  inline const Aws::Vector<BatchDeleteSuccessfulDeletion>& GetSuccessfulDeletions() const { return m_successfulDeletions; }
  template <typename SuccessfulDeletionsT = Aws::Vector<BatchDeleteSuccessfulDeletion>>
  void SetSuccessfulDeletions(SuccessfulDeletionsT&& value) {
    m_successfulDeletionsHasBeenSet = true;
    m_successfulDeletions = std::forward<SuccessfulDeletionsT>(value);
  }
  template <typename SuccessfulDeletionsT = Aws::Vector<BatchDeleteSuccessfulDeletion>>
  BatchDeleteInstrumentationConfigurationsResult& WithSuccessfulDeletions(SuccessfulDeletionsT&& value) {
    SetSuccessfulDeletions(std::forward<SuccessfulDeletionsT>(value));
    return *this;
  }
  template <typename SuccessfulDeletionsT = BatchDeleteSuccessfulDeletion>
  BatchDeleteInstrumentationConfigurationsResult& AddSuccessfulDeletions(SuccessfulDeletionsT&& value) {
    m_successfulDeletionsHasBeenSet = true;
    m_successfulDeletions.emplace_back(std::forward<SuccessfulDeletionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of configurations that failed to delete.</p>
   */
  inline const Aws::Vector<BatchDeleteError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchDeleteError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchDeleteError>>
  BatchDeleteInstrumentationConfigurationsResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchDeleteError>
  BatchDeleteInstrumentationConfigurationsResult& AddErrors(ErrorsT&& value) {
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
  BatchDeleteInstrumentationConfigurationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  int m_deletedCount{0};

  Aws::Vector<BatchDeleteSuccessfulDeletion> m_successfulDeletions;

  Aws::Vector<BatchDeleteError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_deletedCountHasBeenSet = false;
  bool m_successfulDeletionsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
