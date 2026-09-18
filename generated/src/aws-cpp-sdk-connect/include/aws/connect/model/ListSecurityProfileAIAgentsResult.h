/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AIAgent.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
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
namespace Connect {
namespace Model {
class ListSecurityProfileAIAgentsResult {
 public:
  AWS_CONNECT_API ListSecurityProfileAIAgentsResult() = default;
  AWS_CONNECT_API ListSecurityProfileAIAgentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListSecurityProfileAIAgentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of the allowed AI agents and their types.</p>
   */
  inline const Aws::Vector<AIAgent>& GetAllowedAIAgents() const { return m_allowedAIAgents; }
  template <typename AllowedAIAgentsT = Aws::Vector<AIAgent>>
  void SetAllowedAIAgents(AllowedAIAgentsT&& value) {
    m_allowedAIAgentsHasBeenSet = true;
    m_allowedAIAgents = std::forward<AllowedAIAgentsT>(value);
  }
  template <typename AllowedAIAgentsT = Aws::Vector<AIAgent>>
  ListSecurityProfileAIAgentsResult& WithAllowedAIAgents(AllowedAIAgentsT&& value) {
    SetAllowedAIAgents(std::forward<AllowedAIAgentsT>(value));
    return *this;
  }
  template <typename AllowedAIAgentsT = AIAgent>
  ListSecurityProfileAIAgentsResult& AddAllowedAIAgents(AllowedAIAgentsT&& value) {
    m_allowedAIAgentsHasBeenSet = true;
    m_allowedAIAgents.emplace_back(std::forward<AllowedAIAgentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If there are additional results, this is the token for the next set of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSecurityProfileAIAgentsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this resource was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  ListSecurityProfileAIAgentsResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where this resource was last modified.</p>
   */
  inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
  template <typename LastModifiedRegionT = Aws::String>
  void SetLastModifiedRegion(LastModifiedRegionT&& value) {
    m_lastModifiedRegionHasBeenSet = true;
    m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value);
  }
  template <typename LastModifiedRegionT = Aws::String>
  ListSecurityProfileAIAgentsResult& WithLastModifiedRegion(LastModifiedRegionT&& value) {
    SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value));
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
  ListSecurityProfileAIAgentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AIAgent> m_allowedAIAgents;

  Aws::String m_nextToken;

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_lastModifiedRegion;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_allowedAIAgentsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_lastModifiedRegionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
