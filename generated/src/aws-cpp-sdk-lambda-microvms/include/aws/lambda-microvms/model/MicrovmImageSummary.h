/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/MicrovmImageState.h>

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
 * <p>Contains summary information about a MicroVM image.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/MicrovmImageSummary">AWS
 * API Reference</a></p>
 */
class MicrovmImageSummary {
 public:
  AWS_LAMBDAMICROVMS_API MicrovmImageSummary() = default;
  AWS_LAMBDAMICROVMS_API MicrovmImageSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API MicrovmImageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  MicrovmImageSummary& WithImageArn(ImageArnT&& value) {
    SetImageArn(std::forward<ImageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the MicroVM image.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MicrovmImageSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the MicroVM image.</p>
   */
  inline MicrovmImageState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(MicrovmImageState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline MicrovmImageSummary& WithState(MicrovmImageState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest active version of the MicroVM image.</p>
   */
  inline const Aws::String& GetLatestActiveImageVersion() const { return m_latestActiveImageVersion; }
  inline bool LatestActiveImageVersionHasBeenSet() const { return m_latestActiveImageVersionHasBeenSet; }
  template <typename LatestActiveImageVersionT = Aws::String>
  void SetLatestActiveImageVersion(LatestActiveImageVersionT&& value) {
    m_latestActiveImageVersionHasBeenSet = true;
    m_latestActiveImageVersion = std::forward<LatestActiveImageVersionT>(value);
  }
  template <typename LatestActiveImageVersionT = Aws::String>
  MicrovmImageSummary& WithLatestActiveImageVersion(LatestActiveImageVersionT&& value) {
    SetLatestActiveImageVersion(std::forward<LatestActiveImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest failed version of the MicroVM image, if any.</p>
   */
  inline const Aws::String& GetLatestFailedImageVersion() const { return m_latestFailedImageVersion; }
  inline bool LatestFailedImageVersionHasBeenSet() const { return m_latestFailedImageVersionHasBeenSet; }
  template <typename LatestFailedImageVersionT = Aws::String>
  void SetLatestFailedImageVersion(LatestFailedImageVersionT&& value) {
    m_latestFailedImageVersionHasBeenSet = true;
    m_latestFailedImageVersion = std::forward<LatestFailedImageVersionT>(value);
  }
  template <typename LatestFailedImageVersionT = Aws::String>
  MicrovmImageSummary& WithLatestFailedImageVersion(LatestFailedImageVersionT&& value) {
    SetLatestFailedImageVersion(std::forward<LatestFailedImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the MicroVM image was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  MicrovmImageSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_imageArn;

  Aws::String m_name;

  MicrovmImageState m_state{MicrovmImageState::NOT_SET};

  Aws::String m_latestActiveImageVersion;

  Aws::String m_latestFailedImageVersion;

  Aws::Utils::DateTime m_createdAt{};
  bool m_imageArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_latestActiveImageVersionHasBeenSet = false;
  bool m_latestFailedImageVersionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
