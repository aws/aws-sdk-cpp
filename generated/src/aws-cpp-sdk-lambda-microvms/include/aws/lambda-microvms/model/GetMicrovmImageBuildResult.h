/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/Architecture.h>
#include <aws/lambda-microvms/model/BuildState.h>
#include <aws/lambda-microvms/model/Chipset.h>
#include <aws/lambda-microvms/model/SnapshotBuild.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {
class GetMicrovmImageBuildResult {
 public:
  AWS_LAMBDAMICROVMS_API GetMicrovmImageBuildResult() = default;
  AWS_LAMBDAMICROVMS_API GetMicrovmImageBuildResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDAMICROVMS_API GetMicrovmImageBuildResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the MicroVM image.</p>
   */
  inline const Aws::String& GetImageArn() const { return m_imageArn; }
  template <typename ImageArnT = Aws::String>
  void SetImageArn(ImageArnT&& value) {
    m_imageArnHasBeenSet = true;
    m_imageArn = std::forward<ImageArnT>(value);
  }
  template <typename ImageArnT = Aws::String>
  GetMicrovmImageBuildResult& WithImageArn(ImageArnT&& value) {
    SetImageArn(std::forward<ImageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the MicroVM image.</p>
   */
  inline const Aws::String& GetImageVersion() const { return m_imageVersion; }
  template <typename ImageVersionT = Aws::String>
  void SetImageVersion(ImageVersionT&& value) {
    m_imageVersionHasBeenSet = true;
    m_imageVersion = std::forward<ImageVersionT>(value);
  }
  template <typename ImageVersionT = Aws::String>
  GetMicrovmImageBuildResult& WithImageVersion(ImageVersionT&& value) {
    SetImageVersion(std::forward<ImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The build request ID.</p>
   */
  inline const Aws::String& GetBuildId() const { return m_buildId; }
  template <typename BuildIdT = Aws::String>
  void SetBuildId(BuildIdT&& value) {
    m_buildIdHasBeenSet = true;
    m_buildId = std::forward<BuildIdT>(value);
  }
  template <typename BuildIdT = Aws::String>
  GetMicrovmImageBuildResult& WithBuildId(BuildIdT&& value) {
    SetBuildId(std::forward<BuildIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the build.</p>
   */
  inline BuildState GetBuildState() const { return m_buildState; }
  inline void SetBuildState(BuildState value) {
    m_buildStateHasBeenSet = true;
    m_buildState = value;
  }
  inline GetMicrovmImageBuildResult& WithBuildState(BuildState value) {
    SetBuildState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target CPU architecture for the build. Supported value: ARM_64.</p>
   */
  inline Architecture GetArchitecture() const { return m_architecture; }
  inline void SetArchitecture(Architecture value) {
    m_architectureHasBeenSet = true;
    m_architecture = value;
  }
  inline GetMicrovmImageBuildResult& WithArchitecture(Architecture value) {
    SetArchitecture(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target chipset for the build.</p>
   */
  inline Chipset GetChipset() const { return m_chipset; }
  inline void SetChipset(Chipset value) {
    m_chipsetHasBeenSet = true;
    m_chipset = value;
  }
  inline GetMicrovmImageBuildResult& WithChipset(Chipset value) {
    SetChipset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target chipset generation for the build.</p>
   */
  inline const Aws::String& GetChipsetGeneration() const { return m_chipsetGeneration; }
  template <typename ChipsetGenerationT = Aws::String>
  void SetChipsetGeneration(ChipsetGenerationT&& value) {
    m_chipsetGenerationHasBeenSet = true;
    m_chipsetGeneration = std::forward<ChipsetGenerationT>(value);
  }
  template <typename ChipsetGenerationT = Aws::String>
  GetMicrovmImageBuildResult& WithChipsetGeneration(ChipsetGenerationT&& value) {
    SetChipsetGeneration(std::forward<ChipsetGenerationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the build state, if applicable.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  GetMicrovmImageBuildResult& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the build was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetMicrovmImageBuildResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The snapshot build details, including memory and disk snapshot sizes.</p>
   */
  inline const SnapshotBuild& GetSnapshotBuild() const { return m_snapshotBuild; }
  template <typename SnapshotBuildT = SnapshotBuild>
  void SetSnapshotBuild(SnapshotBuildT&& value) {
    m_snapshotBuildHasBeenSet = true;
    m_snapshotBuild = std::forward<SnapshotBuildT>(value);
  }
  template <typename SnapshotBuildT = SnapshotBuild>
  GetMicrovmImageBuildResult& WithSnapshotBuild(SnapshotBuildT&& value) {
    SetSnapshotBuild(std::forward<SnapshotBuildT>(value));
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
  GetMicrovmImageBuildResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_imageArn;

  Aws::String m_imageVersion;

  Aws::String m_buildId;

  BuildState m_buildState{BuildState::NOT_SET};

  Architecture m_architecture{Architecture::NOT_SET};

  Chipset m_chipset{Chipset::NOT_SET};

  Aws::String m_chipsetGeneration;

  Aws::String m_stateReason;

  Aws::Utils::DateTime m_createdAt{};

  SnapshotBuild m_snapshotBuild;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_imageArnHasBeenSet = false;
  bool m_imageVersionHasBeenSet = false;
  bool m_buildIdHasBeenSet = false;
  bool m_buildStateHasBeenSet = false;
  bool m_architectureHasBeenSet = false;
  bool m_chipsetHasBeenSet = false;
  bool m_chipsetGenerationHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_snapshotBuildHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
