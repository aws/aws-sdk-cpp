/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/ResourcePolicySummary.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {
/**
 * <p>Summaries only (policy name and revision ID). Use GetResourcePolicy to
 * retrieve a policy document.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/ListResourcePoliciesResponse">AWS
 * API Reference</a></p>
 */
class ListResourcePoliciesResult {
 public:
  AWS_EVENTBRIDGEV2_API ListResourcePoliciesResult() = default;
  AWS_EVENTBRIDGEV2_API ListResourcePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_EVENTBRIDGEV2_API ListResourcePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{

  inline const Aws::Vector<ResourcePolicySummary>& GetPolicySummaries() const { return m_policySummaries; }
  template <typename PolicySummariesT = Aws::Vector<ResourcePolicySummary>>
  void SetPolicySummaries(PolicySummariesT&& value) {
    m_policySummariesHasBeenSet = true;
    m_policySummaries = std::forward<PolicySummariesT>(value);
  }
  template <typename PolicySummariesT = Aws::Vector<ResourcePolicySummary>>
  ListResourcePoliciesResult& WithPolicySummaries(PolicySummariesT&& value) {
    SetPolicySummaries(std::forward<PolicySummariesT>(value));
    return *this;
  }
  template <typename PolicySummariesT = ResourcePolicySummary>
  ListResourcePoliciesResult& AddPolicySummaries(PolicySummariesT&& value) {
    m_policySummariesHasBeenSet = true;
    m_policySummaries.emplace_back(std::forward<PolicySummariesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListResourcePoliciesResult& WithNextToken(NextTokenT&& value) {
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
  ListResourcePoliciesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ResourcePolicySummary> m_policySummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_policySummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
