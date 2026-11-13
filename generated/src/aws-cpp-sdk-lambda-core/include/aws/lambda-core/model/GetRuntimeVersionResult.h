/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/Compatibility.h>
#include <aws/lambda-core/model/Platform.h>
#include <aws/lambda-core/model/RuntimeVersionState.h>

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
class GetRuntimeVersionResult {
 public:
  AWS_LAMBDACORE_API GetRuntimeVersionResult() = default;
  AWS_LAMBDACORE_API GetRuntimeVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDACORE_API GetRuntimeVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the runtime version.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetRuntimeVersionResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the runtime version.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetRuntimeVersionResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resolved image URI of the runtime version.</p>
   */
  inline const Aws::String& GetResolvedUri() const { return m_resolvedUri; }
  template <typename ResolvedUriT = Aws::String>
  void SetResolvedUri(ResolvedUriT&& value) {
    m_resolvedUriHasBeenSet = true;
    m_resolvedUri = std::forward<ResolvedUriT>(value);
  }
  template <typename ResolvedUriT = Aws::String>
  GetRuntimeVersionResult& WithResolvedUri(ResolvedUriT&& value) {
    SetResolvedUri(std::forward<ResolvedUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the runtime version.</p>
   */
  inline RuntimeVersionState GetState() const { return m_state; }
  inline void SetState(RuntimeVersionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GetRuntimeVersionResult& WithState(RuntimeVersionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Present only when State is PENDING_DELETION. The date and time at which the
   * runtime version will be permanently deleted.</p>
   */
  inline const Aws::String& GetPendingDeletionAt() const { return m_pendingDeletionAt; }
  template <typename PendingDeletionAtT = Aws::String>
  void SetPendingDeletionAt(PendingDeletionAtT&& value) {
    m_pendingDeletionAtHasBeenSet = true;
    m_pendingDeletionAt = std::forward<PendingDeletionAtT>(value);
  }
  template <typename PendingDeletionAtT = Aws::String>
  GetRuntimeVersionResult& WithPendingDeletionAt(PendingDeletionAtT&& value) {
    SetPendingDeletionAt(std::forward<PendingDeletionAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The release notes associated with the runtime version.</p>
   */
  inline const Aws::String& GetReleaseNotes() const { return m_releaseNotes; }
  template <typename ReleaseNotesT = Aws::String>
  void SetReleaseNotes(ReleaseNotesT&& value) {
    m_releaseNotesHasBeenSet = true;
    m_releaseNotes = std::forward<ReleaseNotesT>(value);
  }
  template <typename ReleaseNotesT = Aws::String>
  GetRuntimeVersionResult& WithReleaseNotes(ReleaseNotesT&& value) {
    SetReleaseNotes(std::forward<ReleaseNotesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The platforms (architecture and OS combinations) available for the runtime
   * version.</p>
   */
  inline const Aws::Vector<Platform>& GetPlatforms() const { return m_platforms; }
  template <typename PlatformsT = Aws::Vector<Platform>>
  void SetPlatforms(PlatformsT&& value) {
    m_platformsHasBeenSet = true;
    m_platforms = std::forward<PlatformsT>(value);
  }
  template <typename PlatformsT = Aws::Vector<Platform>>
  GetRuntimeVersionResult& WithPlatforms(PlatformsT&& value) {
    SetPlatforms(std::forward<PlatformsT>(value));
    return *this;
  }
  template <typename PlatformsT = Platform>
  GetRuntimeVersionResult& AddPlatforms(PlatformsT&& value) {
    m_platformsHasBeenSet = true;
    m_platforms.emplace_back(std::forward<PlatformsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compatibility matrix of the runtime version.</p>
   */
  inline const Compatibility& GetCompatibility() const { return m_compatibility; }
  template <typename CompatibilityT = Compatibility>
  void SetCompatibility(CompatibilityT&& value) {
    m_compatibilityHasBeenSet = true;
    m_compatibility = std::forward<CompatibilityT>(value);
  }
  template <typename CompatibilityT = Compatibility>
  GetRuntimeVersionResult& WithCompatibility(CompatibilityT&& value) {
    SetCompatibility(std::forward<CompatibilityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the runtime version was created.</p>
   */
  inline const Aws::String& GetCreated() const { return m_created; }
  template <typename CreatedT = Aws::String>
  void SetCreated(CreatedT&& value) {
    m_createdHasBeenSet = true;
    m_created = std::forward<CreatedT>(value);
  }
  template <typename CreatedT = Aws::String>
  GetRuntimeVersionResult& WithCreated(CreatedT&& value) {
    SetCreated(std::forward<CreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the runtime version was last modified.</p>
   */
  inline const Aws::String& GetLastModified() const { return m_lastModified; }
  template <typename LastModifiedT = Aws::String>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::String>
  GetRuntimeVersionResult& WithLastModified(LastModifiedT&& value) {
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
  GetRuntimeVersionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_name;

  Aws::String m_arn;

  Aws::String m_resolvedUri;

  RuntimeVersionState m_state{RuntimeVersionState::NOT_SET};

  Aws::String m_pendingDeletionAt;

  Aws::String m_releaseNotes;

  Aws::Vector<Platform> m_platforms;

  Compatibility m_compatibility;

  Aws::String m_created;

  Aws::String m_lastModified;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_resolvedUriHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_pendingDeletionAtHasBeenSet = false;
  bool m_releaseNotesHasBeenSet = false;
  bool m_platformsHasBeenSet = false;
  bool m_compatibilityHasBeenSet = false;
  bool m_createdHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
