/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ConsentPortalSummary.h>
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
class ListConsentPortalsResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListConsentPortalsResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListConsentPortalsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListConsentPortalsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of consent portals.</p>
   */
  inline const Aws::Vector<ConsentPortalSummary>& GetConsentPortals() const { return m_consentPortals; }
  template <typename ConsentPortalsT = Aws::Vector<ConsentPortalSummary>>
  void SetConsentPortals(ConsentPortalsT&& value) {
    m_consentPortalsHasBeenSet = true;
    m_consentPortals = std::forward<ConsentPortalsT>(value);
  }
  template <typename ConsentPortalsT = Aws::Vector<ConsentPortalSummary>>
  ListConsentPortalsResult& WithConsentPortals(ConsentPortalsT&& value) {
    SetConsentPortals(std::forward<ConsentPortalsT>(value));
    return *this;
  }
  template <typename ConsentPortalsT = ConsentPortalSummary>
  ListConsentPortalsResult& AddConsentPortals(ConsentPortalsT&& value) {
    m_consentPortalsHasBeenSet = true;
    m_consentPortals.emplace_back(std::forward<ConsentPortalsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use in a subsequent request to retrieve the next page of
   * results. This value is null when there are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListConsentPortalsResult& WithNextToken(NextTokenT&& value) {
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
  ListConsentPortalsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ConsentPortalSummary> m_consentPortals;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_consentPortalsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
