/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/RegistryRecordSummary.h>
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
namespace BedrockAgentCoreControl {
namespace Model {
class ListRegistryRecordsResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListRegistryRecordsResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListRegistryRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListRegistryRecordsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of registry record summaries. For details about the fields in each
   * summary, see the <code>RegistryRecordSummary</code> data type.</p>
   */
  inline const Aws::Vector<RegistryRecordSummary>& GetRegistryRecords() const { return m_registryRecords; }
  template <typename RegistryRecordsT = Aws::Vector<RegistryRecordSummary>>
  void SetRegistryRecords(RegistryRecordsT&& value) {
    m_registryRecordsHasBeenSet = true;
    m_registryRecords = std::forward<RegistryRecordsT>(value);
  }
  template <typename RegistryRecordsT = Aws::Vector<RegistryRecordSummary>>
  ListRegistryRecordsResult& WithRegistryRecords(RegistryRecordsT&& value) {
    SetRegistryRecords(std::forward<RegistryRecordsT>(value));
    return *this;
  }
  template <typename RegistryRecordsT = RegistryRecordSummary>
  ListRegistryRecordsResult& AddRegistryRecords(RegistryRecordsT&& value) {
    m_registryRecordsHasBeenSet = true;
    m_registryRecords.emplace_back(std::forward<RegistryRecordsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the total number of results is greater than the <code>maxResults</code>
   * value provided in the request, use this token when making another request in the
   * <code>nextToken</code> field to return the next batch of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRegistryRecordsResult& WithNextToken(NextTokenT&& value) {
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
  ListRegistryRecordsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RegistryRecordSummary> m_registryRecords;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_registryRecordsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
