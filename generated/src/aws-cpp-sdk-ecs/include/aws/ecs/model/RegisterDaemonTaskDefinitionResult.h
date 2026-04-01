/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

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
class RegisterDaemonTaskDefinitionResult {
 public:
  AWS_ECS_API RegisterDaemonTaskDefinitionResult() = default;
  AWS_ECS_API RegisterDaemonTaskDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECS_API RegisterDaemonTaskDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The full Amazon Resource Name (ARN) of the registered daemon task
   * definition.</p>
   */
  inline const Aws::String& GetDaemonTaskDefinitionArn() const { return m_daemonTaskDefinitionArn; }
  template <typename DaemonTaskDefinitionArnT = Aws::String>
  void SetDaemonTaskDefinitionArn(DaemonTaskDefinitionArnT&& value) {
    m_daemonTaskDefinitionArnHasBeenSet = true;
    m_daemonTaskDefinitionArn = std::forward<DaemonTaskDefinitionArnT>(value);
  }
  template <typename DaemonTaskDefinitionArnT = Aws::String>
  RegisterDaemonTaskDefinitionResult& WithDaemonTaskDefinitionArn(DaemonTaskDefinitionArnT&& value) {
    SetDaemonTaskDefinitionArn(std::forward<DaemonTaskDefinitionArnT>(value));
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
  RegisterDaemonTaskDefinitionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_daemonTaskDefinitionArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_daemonTaskDefinitionArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
