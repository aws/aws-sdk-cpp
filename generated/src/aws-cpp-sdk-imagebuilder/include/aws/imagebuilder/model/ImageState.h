/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/ImageFailureContext.h>
#include <aws/imagebuilder/model/ImageStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace imagebuilder {
namespace Model {

/**
 * <p>Image status and the reason for that status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImageState">AWS
 * API Reference</a></p>
 */
class ImageState {
 public:
  AWS_IMAGEBUILDER_API ImageState() = default;
  AWS_IMAGEBUILDER_API ImageState(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API ImageState& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the image.</p>
   */
  inline ImageStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ImageStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ImageState& WithStatus(ImageStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the status of the image.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  ImageState& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details about the failure, for images that failed to complete. Image
   * Builder only sets this property when the image status is
   * <code>FAILED</code>.</p>
   */
  inline const ImageFailureContext& GetFailureContext() const { return m_failureContext; }
  inline bool FailureContextHasBeenSet() const { return m_failureContextHasBeenSet; }
  template <typename FailureContextT = ImageFailureContext>
  void SetFailureContext(FailureContextT&& value) {
    m_failureContextHasBeenSet = true;
    m_failureContext = std::forward<FailureContextT>(value);
  }
  template <typename FailureContextT = ImageFailureContext>
  ImageState& WithFailureContext(FailureContextT&& value) {
    SetFailureContext(std::forward<FailureContextT>(value));
    return *this;
  }
  ///@}
 private:
  ImageStatus m_status{ImageStatus::NOT_SET};

  Aws::String m_reason;

  ImageFailureContext m_failureContext;
  bool m_statusHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
  bool m_failureContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
