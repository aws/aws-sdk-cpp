/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/BatchGetDiscoverableRegistryRecordError.h>
#include <aws/agent-registry/model/RegistryRecordSummary.h>
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
namespace AgentRegistry {
namespace Model {
class BatchGetDiscoverableRegistryRecordResult {
 public:
  AWS_AGENTREGISTRY_API BatchGetDiscoverableRegistryRecordResult() = default;
  AWS_AGENTREGISTRY_API BatchGetDiscoverableRegistryRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_AGENTREGISTRY_API BatchGetDiscoverableRegistryRecordResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The records that were successfully retrieved. Each record correlates to the
   * request by its <code>recordId</code>.</p>
   */
  inline const Aws::Vector<RegistryRecordSummary>& GetRegistryRecords() const { return m_registryRecords; }
  template <typename RegistryRecordsT = Aws::Vector<RegistryRecordSummary>>
  void SetRegistryRecords(RegistryRecordsT&& value) {
    m_registryRecordsHasBeenSet = true;
    m_registryRecords = std::forward<RegistryRecordsT>(value);
  }
  template <typename RegistryRecordsT = Aws::Vector<RegistryRecordSummary>>
  BatchGetDiscoverableRegistryRecordResult& WithRegistryRecords(RegistryRecordsT&& value) {
    SetRegistryRecords(std::forward<RegistryRecordsT>(value));
    return *this;
  }
  template <typename RegistryRecordsT = RegistryRecordSummary>
  BatchGetDiscoverableRegistryRecordResult& AddRegistryRecords(RegistryRecordsT&& value) {
    m_registryRecordsHasBeenSet = true;
    m_registryRecords.emplace_back(std::forward<RegistryRecordsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The per-record errors for records that could not be retrieved. This list is
   * empty when all requested records were returned.</p>
   */
  inline const Aws::Vector<BatchGetDiscoverableRegistryRecordError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchGetDiscoverableRegistryRecordError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchGetDiscoverableRegistryRecordError>>
  BatchGetDiscoverableRegistryRecordResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchGetDiscoverableRegistryRecordError>
  BatchGetDiscoverableRegistryRecordResult& AddErrors(ErrorsT&& value) {
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
  BatchGetDiscoverableRegistryRecordResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RegistryRecordSummary> m_registryRecords;

  Aws::Vector<BatchGetDiscoverableRegistryRecordError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_registryRecordsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
