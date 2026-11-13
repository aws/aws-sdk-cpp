/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/RuntimeState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LambdaCore {
namespace Model {
class RestoreRuntimeResult {
 public:
  AWS_LAMBDACORE_API RestoreRuntimeResult() = default;
  AWS_LAMBDACORE_API RestoreRuntimeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDACORE_API RestoreRuntimeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name or ARN of the runtime.</p>
   */
  inline const Aws::String& GetRuntimeName() const { return m_runtimeName; }
  template <typename RuntimeNameT = Aws::String>
  void SetRuntimeName(RuntimeNameT&& value) {
    m_runtimeNameHasBeenSet = true;
    m_runtimeName = std::forward<RuntimeNameT>(value);
  }
  template <typename RuntimeNameT = Aws::String>
  RestoreRuntimeResult& WithRuntimeName(RuntimeNameT&& value) {
    SetRuntimeName(std::forward<RuntimeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Echoed back only when the request supplied a RuntimeVersion qualifier.</p>
   */
  inline const Aws::String& GetRuntimeVersion() const { return m_runtimeVersion; }
  template <typename RuntimeVersionT = Aws::String>
  void SetRuntimeVersion(RuntimeVersionT&& value) {
    m_runtimeVersionHasBeenSet = true;
    m_runtimeVersion = std::forward<RuntimeVersionT>(value);
  }
  template <typename RuntimeVersionT = Aws::String>
  RestoreRuntimeResult& WithRuntimeVersion(RuntimeVersionT&& value) {
    SetRuntimeVersion(std::forward<RuntimeVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Echoed back only when the request supplied a RuntimeAlias qualifier.</p>
   */
  inline const Aws::String& GetRuntimeAlias() const { return m_runtimeAlias; }
  template <typename RuntimeAliasT = Aws::String>
  void SetRuntimeAlias(RuntimeAliasT&& value) {
    m_runtimeAliasHasBeenSet = true;
    m_runtimeAlias = std::forward<RuntimeAliasT>(value);
  }
  template <typename RuntimeAliasT = Aws::String>
  RestoreRuntimeResult& WithRuntimeAlias(RuntimeAliasT&& value) {
    SetRuntimeAlias(std::forward<RuntimeAliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fully qualified ARN of the resource that was restored (runtime, version,
   * or alias).</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  RestoreRuntimeResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the restored resource, ACTIVE on success.</p>
   */
  inline RuntimeState GetState() const { return m_state; }
  inline void SetState(RuntimeState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline RestoreRuntimeResult& WithState(RuntimeState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the restored resource was last modified.</p>
   */
  inline const Aws::String& GetLastModified() const { return m_lastModified; }
  template <typename LastModifiedT = Aws::String>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::String>
  RestoreRuntimeResult& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
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
  RestoreRuntimeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_runtimeName;

  Aws::String m_runtimeVersion;

  Aws::String m_runtimeAlias;

  Aws::String m_arn;

  RuntimeState m_state{RuntimeState::NOT_SET};

  Aws::String m_lastModified;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_runtimeNameHasBeenSet = false;
  bool m_runtimeVersionHasBeenSet = false;
  bool m_runtimeAliasHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
