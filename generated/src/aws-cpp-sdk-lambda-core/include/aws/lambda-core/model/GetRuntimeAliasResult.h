/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/Compatibility.h>
#include <aws/lambda-core/model/RuntimeAliasState.h>
#include <aws/lambda-core/model/RuntimeReleaseLifecycle.h>

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
class GetRuntimeAliasResult {
 public:
  AWS_LAMBDACORE_API GetRuntimeAliasResult() = default;
  AWS_LAMBDACORE_API GetRuntimeAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDACORE_API GetRuntimeAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the runtime alias.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetRuntimeAliasResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the runtime alias.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetRuntimeAliasResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the runtime version the alias points to.</p>
   */
  inline const Aws::String& GetRuntimeVersion() const { return m_runtimeVersion; }
  template <typename RuntimeVersionT = Aws::String>
  void SetRuntimeVersion(RuntimeVersionT&& value) {
    m_runtimeVersionHasBeenSet = true;
    m_runtimeVersion = std::forward<RuntimeVersionT>(value);
  }
  template <typename RuntimeVersionT = Aws::String>
  GetRuntimeAliasResult& WithRuntimeVersion(RuntimeVersionT&& value) {
    SetRuntimeVersion(std::forward<RuntimeVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the runtime version the alias points
   * to.</p>
   */
  inline const Aws::String& GetRuntimeVersionArn() const { return m_runtimeVersionArn; }
  template <typename RuntimeVersionArnT = Aws::String>
  void SetRuntimeVersionArn(RuntimeVersionArnT&& value) {
    m_runtimeVersionArnHasBeenSet = true;
    m_runtimeVersionArn = std::forward<RuntimeVersionArnT>(value);
  }
  template <typename RuntimeVersionArnT = Aws::String>
  GetRuntimeAliasResult& WithRuntimeVersionArn(RuntimeVersionArnT&& value) {
    SetRuntimeVersionArn(std::forward<RuntimeVersionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the runtime alias.</p>
   */
  inline RuntimeAliasState GetState() const { return m_state; }
  inline void SetState(RuntimeAliasState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GetRuntimeAliasResult& WithState(RuntimeAliasState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Present only when State is PENDING_DELETION. The date and time at which the
   * runtime alias will be permanently deleted.</p>
   */
  inline const Aws::String& GetPendingDeletionAt() const { return m_pendingDeletionAt; }
  template <typename PendingDeletionAtT = Aws::String>
  void SetPendingDeletionAt(PendingDeletionAtT&& value) {
    m_pendingDeletionAtHasBeenSet = true;
    m_pendingDeletionAt = std::forward<PendingDeletionAtT>(value);
  }
  template <typename PendingDeletionAtT = Aws::String>
  GetRuntimeAliasResult& WithPendingDeletionAt(PendingDeletionAtT&& value) {
    SetPendingDeletionAt(std::forward<PendingDeletionAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the runtime alias.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetRuntimeAliasResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compatibility matrix of the runtime version the alias points to.</p>
   */
  inline const Compatibility& GetCompatibility() const { return m_compatibility; }
  template <typename CompatibilityT = Compatibility>
  void SetCompatibility(CompatibilityT&& value) {
    m_compatibilityHasBeenSet = true;
    m_compatibility = std::forward<CompatibilityT>(value);
  }
  template <typename CompatibilityT = Compatibility>
  GetRuntimeAliasResult& WithCompatibility(CompatibilityT&& value) {
    SetCompatibility(std::forward<CompatibilityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The runtime lifecycle for the alias. By default, this is inherited from the
   * runtime lifecycle. Optionally, you can override the lifecycle information at the
   * alias level, if required.</p>
   */
  inline const RuntimeReleaseLifecycle& GetReleaseLifecycle() const { return m_releaseLifecycle; }
  template <typename ReleaseLifecycleT = RuntimeReleaseLifecycle>
  void SetReleaseLifecycle(ReleaseLifecycleT&& value) {
    m_releaseLifecycleHasBeenSet = true;
    m_releaseLifecycle = std::forward<ReleaseLifecycleT>(value);
  }
  template <typename ReleaseLifecycleT = RuntimeReleaseLifecycle>
  GetRuntimeAliasResult& WithReleaseLifecycle(ReleaseLifecycleT&& value) {
    SetReleaseLifecycle(std::forward<ReleaseLifecycleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the runtime alias was created.</p>
   */
  inline const Aws::String& GetCreated() const { return m_created; }
  template <typename CreatedT = Aws::String>
  void SetCreated(CreatedT&& value) {
    m_createdHasBeenSet = true;
    m_created = std::forward<CreatedT>(value);
  }
  template <typename CreatedT = Aws::String>
  GetRuntimeAliasResult& WithCreated(CreatedT&& value) {
    SetCreated(std::forward<CreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the runtime alias was last modified.</p>
   */
  inline const Aws::String& GetLastModified() const { return m_lastModified; }
  template <typename LastModifiedT = Aws::String>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::String>
  GetRuntimeAliasResult& WithLastModified(LastModifiedT&& value) {
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
  GetRuntimeAliasResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_name;

  Aws::String m_arn;

  Aws::String m_runtimeVersion;

  Aws::String m_runtimeVersionArn;

  RuntimeAliasState m_state{RuntimeAliasState::NOT_SET};

  Aws::String m_pendingDeletionAt;

  Aws::String m_description;

  Compatibility m_compatibility;

  RuntimeReleaseLifecycle m_releaseLifecycle;

  Aws::String m_created;

  Aws::String m_lastModified;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_runtimeVersionHasBeenSet = false;
  bool m_runtimeVersionArnHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_pendingDeletionAtHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_compatibilityHasBeenSet = false;
  bool m_releaseLifecycleHasBeenSet = false;
  bool m_createdHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
