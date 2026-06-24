/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/MicrovmState.h>

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
 * <p>Contains summary information about a MicroVM instance.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/MicrovmItem">AWS
 * API Reference</a></p>
 */
class MicrovmItem {
 public:
  AWS_LAMBDAMICROVMS_API MicrovmItem() = default;
  AWS_LAMBDAMICROVMS_API MicrovmItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API MicrovmItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the MicroVM.</p>
   */
  inline const Aws::String& GetMicrovmId() const { return m_microvmId; }
  inline bool MicrovmIdHasBeenSet() const { return m_microvmIdHasBeenSet; }
  template <typename MicrovmIdT = Aws::String>
  void SetMicrovmId(MicrovmIdT&& value) {
    m_microvmIdHasBeenSet = true;
    m_microvmId = std::forward<MicrovmIdT>(value);
  }
  template <typename MicrovmIdT = Aws::String>
  MicrovmItem& WithMicrovmId(MicrovmIdT&& value) {
    SetMicrovmId(std::forward<MicrovmIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle state of the MicroVM.</p>
   */
  inline MicrovmState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(MicrovmState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline MicrovmItem& WithState(MicrovmState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the MicroVM image used to run this MicroVM.</p>
   */
  inline const Aws::String& GetImageArn() const { return m_imageArn; }
  inline bool ImageArnHasBeenSet() const { return m_imageArnHasBeenSet; }
  template <typename ImageArnT = Aws::String>
  void SetImageArn(ImageArnT&& value) {
    m_imageArnHasBeenSet = true;
    m_imageArn = std::forward<ImageArnT>(value);
  }
  template <typename ImageArnT = Aws::String>
  MicrovmItem& WithImageArn(ImageArnT&& value) {
    SetImageArn(std::forward<ImageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the MicroVM image used to run this MicroVM.</p>
   */
  inline const Aws::String& GetImageVersion() const { return m_imageVersion; }
  inline bool ImageVersionHasBeenSet() const { return m_imageVersionHasBeenSet; }
  template <typename ImageVersionT = Aws::String>
  void SetImageVersion(ImageVersionT&& value) {
    m_imageVersionHasBeenSet = true;
    m_imageVersion = std::forward<ImageVersionT>(value);
  }
  template <typename ImageVersionT = Aws::String>
  MicrovmItem& WithImageVersion(ImageVersionT&& value) {
    SetImageVersion(std::forward<ImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the MicroVM started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  MicrovmItem& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_microvmId;

  MicrovmState m_state{MicrovmState::NOT_SET};

  Aws::String m_imageArn;

  Aws::String m_imageVersion;

  Aws::Utils::DateTime m_startedAt{};
  bool m_microvmIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_imageArnHasBeenSet = false;
  bool m_imageVersionHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
