/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/RegistryRecordSummary.h>
#include <aws/agent-registry/model/SearchType.h>
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
class SearchDiscoverableRegistryRecordsResult {
 public:
  AWS_AGENTREGISTRY_API SearchDiscoverableRegistryRecordsResult() = default;
  AWS_AGENTREGISTRY_API SearchDiscoverableRegistryRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_AGENTREGISTRY_API SearchDiscoverableRegistryRecordsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The registry records that match the search query, ordered by relevance. A
   * page can contain fewer than <code>maxResults</code> records, or none, even when
   * the response includes a <code>nextToken</code>. To retrieve every result,
   * continue until the response has no <code>nextToken</code>.</p>
   */
  inline const Aws::Vector<RegistryRecordSummary>& GetRegistryRecords() const { return m_registryRecords; }
  template <typename RegistryRecordsT = Aws::Vector<RegistryRecordSummary>>
  void SetRegistryRecords(RegistryRecordsT&& value) {
    m_registryRecordsHasBeenSet = true;
    m_registryRecords = std::forward<RegistryRecordsT>(value);
  }
  template <typename RegistryRecordsT = Aws::Vector<RegistryRecordSummary>>
  SearchDiscoverableRegistryRecordsResult& WithRegistryRecords(RegistryRecordsT&& value) {
    SetRegistryRecords(std::forward<RegistryRecordsT>(value));
    return *this;
  }
  template <typename RegistryRecordsT = RegistryRecordSummary>
  SearchDiscoverableRegistryRecordsResult& AddRegistryRecords(RegistryRecordsT&& value) {
    m_registryRecordsHasBeenSet = true;
    m_registryRecords.emplace_back(std::forward<RegistryRecordsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Specifies the search type that the service used to rank the returned
   * records. If you omitted <code>searchType</code> in the request, this is the
   * default for the Amazon Web Services Region: <code>HYBRID</code> where semantic
   * search is supported, and <code>KEYWORD</code> elsewhere.</p>
   */
  inline SearchType GetSearchType() const { return m_searchType; }
  inline void SetSearchType(SearchType value) {
    m_searchTypeHasBeenSet = true;
    m_searchType = value;
  }
  inline SearchDiscoverableRegistryRecordsResult& WithSearchType(SearchType value) {
    SetSearchType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The pagination token to pass to a subsequent request to retrieve the next
   * page of results. This field is absent when there are no more results, or when
   * the search has returned the maximum number of results for its search type.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchDiscoverableRegistryRecordsResult& WithNextToken(NextTokenT&& value) {
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
  SearchDiscoverableRegistryRecordsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RegistryRecordSummary> m_registryRecords;

  SearchType m_searchType{SearchType::NOT_SET};

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_registryRecordsHasBeenSet = false;
  bool m_searchTypeHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
