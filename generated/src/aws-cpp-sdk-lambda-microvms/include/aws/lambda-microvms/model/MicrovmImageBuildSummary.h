/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/Architecture.h>
#include <aws/lambda-microvms/model/BuildState.h>
#include <aws/lambda-microvms/model/Chipset.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {

/**
 * <p>Contains summary information about a MicroVM image build.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/MicrovmImageBuildSummary">AWS
 * API Reference</a></p>
 */
class MicrovmImageBuildSummary {
 public:
  AWS_LAMBDAMICROVMS_API MicrovmImageBuildSummary() = default;
  AWS_LAMBDAMICROVMS_API MicrovmImageBuildSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API MicrovmImageBuildSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the MicroVM image.</p>
   */
  inline const Aws::String& GetImageArn() const { return m_imageArn; }
  inline bool ImageArnHasBeenSet() const { return m_imageArnHasBeenSet; }
  template <typename ImageArnT = Aws::String>
  void SetImageArn(ImageArnT&& value) {
    m_imageArnHasBeenSet = true;
    m_imageArn = std::forward<ImageArnT>(value);
  }
  template <typename ImageArnT = Aws::String>
  MicrovmImageBuildSummary& WithImageArn(ImageArnT&& value) {
    SetImageArn(std::forward<ImageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the MicroVM image.</p>
   */
  inline const Aws::String& GetImageVersion() const { return m_imageVersion; }
  inline bool ImageVersionHasBeenSet() const { return m_imageVersionHasBeenSet; }
  template <typename ImageVersionT = Aws::String>
  void SetImageVersion(ImageVersionT&& value) {
    m_imageVersionHasBeenSet = true;
    m_imageVersion = std::forward<ImageVersionT>(value);
  }
  template <typename ImageVersionT = Aws::String>
  MicrovmImageBuildSummary& WithImageVersion(ImageVersionT&& value) {
    SetImageVersion(std::forward<ImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The build request ID.</p>
   */
  inline const Aws::String& GetBuildId() const { return m_buildId; }
  inline bool BuildIdHasBeenSet() const { return m_buildIdHasBeenSet; }
  template <typename BuildIdT = Aws::String>
  void SetBuildId(BuildIdT&& value) {
    m_buildIdHasBeenSet = true;
    m_buildId = std::forward<BuildIdT>(value);
  }
  template <typename BuildIdT = Aws::String>
  MicrovmImageBuildSummary& WithBuildId(BuildIdT&& value) {
    SetBuildId(std::forward<BuildIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the build.</p>
   */
  inline BuildState GetBuildState() const { return m_buildState; }
  inline bool BuildStateHasBeenSet() const { return m_buildStateHasBeenSet; }
  inline void SetBuildState(BuildState value) {
    m_buildStateHasBeenSet = true;
    m_buildState = value;
  }
  inline MicrovmImageBuildSummary& WithBuildState(BuildState value) {
    SetBuildState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target CPU architecture for the build. Supported value: ARM_64.</p>
   */
  inline Architecture GetArchitecture() const { return m_architecture; }
  inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
  inline void SetArchitecture(Architecture value) {
    m_architectureHasBeenSet = true;
    m_architecture = value;
  }
  inline MicrovmImageBuildSummary& WithArchitecture(Architecture value) {
    SetArchitecture(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target chipset for the build.</p>
   */
  inline Chipset GetChipset() const { return m_chipset; }
  inline bool ChipsetHasBeenSet() const { return m_chipsetHasBeenSet; }
  inline void SetChipset(Chipset value) {
    m_chipsetHasBeenSet = true;
    m_chipset = value;
  }
  inline MicrovmImageBuildSummary& WithChipset(Chipset value) {
    SetChipset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target chipset generation for the build.</p>
   */
  inline const Aws::String& GetChipsetGeneration() const { return m_chipsetGeneration; }
  inline bool ChipsetGenerationHasBeenSet() const { return m_chipsetGenerationHasBeenSet; }
  template <typename ChipsetGenerationT = Aws::String>
  void SetChipsetGeneration(ChipsetGenerationT&& value) {
    m_chipsetGenerationHasBeenSet = true;
    m_chipsetGeneration = std::forward<ChipsetGenerationT>(value);
  }
  template <typename ChipsetGenerationT = Aws::String>
  MicrovmImageBuildSummary& WithChipsetGeneration(ChipsetGenerationT&& value) {
    SetChipsetGeneration(std::forward<ChipsetGenerationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the build state, if applicable.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  MicrovmImageBuildSummary& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the build was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  MicrovmImageBuildSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
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
  bool m_imageArnHasBeenSet = false;
  bool m_imageVersionHasBeenSet = false;
  bool m_buildIdHasBeenSet = false;
  bool m_buildStateHasBeenSet = false;
  bool m_architectureHasBeenSet = false;
  bool m_chipsetHasBeenSet = false;
  bool m_chipsetGenerationHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
