/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/FlowModule.h>
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
class ListSecurityProfileFlowModulesResult {
 public:
  AWS_CONNECT_API ListSecurityProfileFlowModulesResult() = default;
  AWS_CONNECT_API ListSecurityProfileFlowModulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListSecurityProfileFlowModulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> A list of Flow Modules an AI Agent can invoke as a tool. </p>
   */
  inline const Aws::Vector<FlowModule>& GetAllowedFlowModules() const { return m_allowedFlowModules; }
  template <typename AllowedFlowModulesT = Aws::Vector<FlowModule>>
  void SetAllowedFlowModules(AllowedFlowModulesT&& value) {
    m_allowedFlowModulesHasBeenSet = true;
    m_allowedFlowModules = std::forward<AllowedFlowModulesT>(value);
  }
  template <typename AllowedFlowModulesT = Aws::Vector<FlowModule>>
  ListSecurityProfileFlowModulesResult& WithAllowedFlowModules(AllowedFlowModulesT&& value) {
    SetAllowedFlowModules(std::forward<AllowedFlowModulesT>(value));
    return *this;
  }
  template <typename AllowedFlowModulesT = FlowModule>
  ListSecurityProfileFlowModulesResult& AddAllowedFlowModules(AllowedFlowModulesT&& value) {
    m_allowedFlowModulesHasBeenSet = true;
    m_allowedFlowModules.emplace_back(std::forward<AllowedFlowModulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The token for the next set of results. Use the value returned in the
   * previous response in the next request to retrieve the next set of results. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSecurityProfileFlowModulesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The time the flow module was last modified. </p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  ListSecurityProfileFlowModulesResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Region that flow module was last modified in. </p>
   */
  inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
  template <typename LastModifiedRegionT = Aws::String>
  void SetLastModifiedRegion(LastModifiedRegionT&& value) {
    m_lastModifiedRegionHasBeenSet = true;
    m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value);
  }
  template <typename LastModifiedRegionT = Aws::String>
  ListSecurityProfileFlowModulesResult& WithLastModifiedRegion(LastModifiedRegionT&& value) {
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
  ListSecurityProfileFlowModulesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FlowModule> m_allowedFlowModules;

  Aws::String m_nextToken;

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_lastModifiedRegion;

  Aws::String m_requestId;
  bool m_allowedFlowModulesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_lastModifiedRegionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
