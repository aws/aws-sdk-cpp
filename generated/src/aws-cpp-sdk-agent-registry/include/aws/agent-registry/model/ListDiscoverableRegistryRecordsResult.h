/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/DiscoverableRegistryRecordSummary.h>
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
class ListDiscoverableRegistryRecordsResult {
 public:
  AWS_AGENTREGISTRY_API ListDiscoverableRegistryRecordsResult() = default;
  AWS_AGENTREGISTRY_API ListDiscoverableRegistryRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_AGENTREGISTRY_API ListDiscoverableRegistryRecordsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The page of discoverable registry record summaries.</p>
   */
  inline const Aws::Vector<DiscoverableRegistryRecordSummary>& GetRegistryRecords() const { return m_registryRecords; }
  template <typename RegistryRecordsT = Aws::Vector<DiscoverableRegistryRecordSummary>>
  void SetRegistryRecords(RegistryRecordsT&& value) {
    m_registryRecordsHasBeenSet = true;
    m_registryRecords = std::forward<RegistryRecordsT>(value);
  }
  template <typename RegistryRecordsT = Aws::Vector<DiscoverableRegistryRecordSummary>>
  ListDiscoverableRegistryRecordsResult& WithRegistryRecords(RegistryRecordsT&& value) {
    SetRegistryRecords(std::forward<RegistryRecordsT>(value));
    return *this;
  }
  template <typename RegistryRecordsT = DiscoverableRegistryRecordSummary>
  ListDiscoverableRegistryRecordsResult& AddRegistryRecords(RegistryRecordsT&& value) {
    m_registryRecordsHasBeenSet = true;
    m_registryRecords.emplace_back(std::forward<RegistryRecordsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The pagination token to pass to a subsequent request to retrieve the next
   * page of results. This field is absent when there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDiscoverableRegistryRecordsResult& WithNextToken(NextTokenT&& value) {
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
  ListDiscoverableRegistryRecordsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DiscoverableRegistryRecordSummary> m_registryRecords;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_registryRecordsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
