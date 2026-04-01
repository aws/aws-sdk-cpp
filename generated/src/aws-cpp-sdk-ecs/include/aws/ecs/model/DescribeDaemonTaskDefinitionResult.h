/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonTaskDefinition.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {
class DescribeDaemonTaskDefinitionResult {
 public:
  AWS_ECS_API DescribeDaemonTaskDefinitionResult() = default;
  AWS_ECS_API DescribeDaemonTaskDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECS_API DescribeDaemonTaskDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The full daemon task definition description.</p>
   */
  inline const DaemonTaskDefinition& GetDaemonTaskDefinition() const { return m_daemonTaskDefinition; }
  template <typename DaemonTaskDefinitionT = DaemonTaskDefinition>
  void SetDaemonTaskDefinition(DaemonTaskDefinitionT&& value) {
    m_daemonTaskDefinitionHasBeenSet = true;
    m_daemonTaskDefinition = std::forward<DaemonTaskDefinitionT>(value);
  }
  template <typename DaemonTaskDefinitionT = DaemonTaskDefinition>
  DescribeDaemonTaskDefinitionResult& WithDaemonTaskDefinition(DaemonTaskDefinitionT&& value) {
    SetDaemonTaskDefinition(std::forward<DaemonTaskDefinitionT>(value));
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
  DescribeDaemonTaskDefinitionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  DaemonTaskDefinition m_daemonTaskDefinition;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_daemonTaskDefinitionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
