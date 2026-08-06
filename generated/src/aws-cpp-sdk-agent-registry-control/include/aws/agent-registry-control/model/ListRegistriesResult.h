/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/RegistrySummary.h>
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
namespace AgentRegistryControl {
namespace Model {
/**
 * <p>Response structure for listing registries</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/ListRegistriesResponse">AWS
 * API Reference</a></p>
 */
class ListRegistriesResult {
 public:
  AWS_AGENTREGISTRYCONTROL_API ListRegistriesResult() = default;
  AWS_AGENTREGISTRYCONTROL_API ListRegistriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_AGENTREGISTRYCONTROL_API ListRegistriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of registry summaries</p>
   */
  inline const Aws::Vector<RegistrySummary>& GetRegistries() const { return m_registries; }
  template <typename RegistriesT = Aws::Vector<RegistrySummary>>
  void SetRegistries(RegistriesT&& value) {
    m_registriesHasBeenSet = true;
    m_registries = std::forward<RegistriesT>(value);
  }
  template <typename RegistriesT = Aws::Vector<RegistrySummary>>
  ListRegistriesResult& WithRegistries(RegistriesT&& value) {
    SetRegistries(std::forward<RegistriesT>(value));
    return *this;
  }
  template <typename RegistriesT = RegistrySummary>
  ListRegistriesResult& AddRegistries(RegistriesT&& value) {
    m_registriesHasBeenSet = true;
    m_registries.emplace_back(std::forward<RegistriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for next page of results</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRegistriesResult& WithNextToken(NextTokenT&& value) {
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
  ListRegistriesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RegistrySummary> m_registries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_registriesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
