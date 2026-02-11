/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/BrowserProfileSummary.h>
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
class ListBrowserProfilesResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListBrowserProfilesResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListBrowserProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListBrowserProfilesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of browser profile summaries.</p>
   */
  inline const Aws::Vector<BrowserProfileSummary>& GetProfileSummaries() const { return m_profileSummaries; }
  template <typename ProfileSummariesT = Aws::Vector<BrowserProfileSummary>>
  void SetProfileSummaries(ProfileSummariesT&& value) {
    m_profileSummariesHasBeenSet = true;
    m_profileSummaries = std::forward<ProfileSummariesT>(value);
  }
  template <typename ProfileSummariesT = Aws::Vector<BrowserProfileSummary>>
  ListBrowserProfilesResult& WithProfileSummaries(ProfileSummariesT&& value) {
    SetProfileSummaries(std::forward<ProfileSummariesT>(value));
    return *this;
  }
  template <typename ProfileSummariesT = BrowserProfileSummary>
  ListBrowserProfilesResult& AddProfileSummaries(ProfileSummariesT&& value) {
    m_profileSummariesHasBeenSet = true;
    m_profileSummaries.emplace_back(std::forward<ProfileSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBrowserProfilesResult& WithNextToken(NextTokenT&& value) {
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
  ListBrowserProfilesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetResponseCode() const { return m_responseCode; }

 private:
  Aws::Vector<BrowserProfileSummary> m_profileSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_responseCode;
  bool m_profileSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
