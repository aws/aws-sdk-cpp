/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/ImageConfigurationStep.h>
#include <aws/imagebuilder/model/RegionFailureStatus.h>

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
 * <p>Contains details about a distribution or image configuration failure for a
 * single Region.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/RegionFailure">AWS
 * API Reference</a></p>
 */
class RegionFailure {
 public:
  AWS_IMAGEBUILDER_API RegionFailure() = default;
  AWS_IMAGEBUILDER_API RegionFailure(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API RegionFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Region where the failure occurred.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  RegionFailure& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The failure status for the Region. Indicates whether the process failed, was
   * canceled, or timed out.</p>
   */
  inline RegionFailureStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RegionFailureStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RegionFailure& WithStatus(RegionFailureStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image configuration step where the failure occurred. Image Builder sets
   * this property when the failure happened during post-distribution configuration,
   * such as launch template updates or virtual machine (VM) export. This property
   * doesn't appear for failures that occurred while Image Builder copied the image
   * to the Region.</p>
   */
  inline ImageConfigurationStep GetImageConfigurationStep() const { return m_imageConfigurationStep; }
  inline bool ImageConfigurationStepHasBeenSet() const { return m_imageConfigurationStepHasBeenSet; }
  inline void SetImageConfigurationStep(ImageConfigurationStep value) {
    m_imageConfigurationStepHasBeenSet = true;
    m_imageConfigurationStep = value;
  }
  inline RegionFailure& WithImageConfigurationStep(ImageConfigurationStep value) {
    SetImageConfigurationStep(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message for the failure in the Region.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  RegionFailure& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID of the account that the image was distributed to in the
   * Region.</p>
   */
  inline const Aws::String& GetTargetAccountId() const { return m_targetAccountId; }
  inline bool TargetAccountIdHasBeenSet() const { return m_targetAccountIdHasBeenSet; }
  template <typename TargetAccountIdT = Aws::String>
  void SetTargetAccountId(TargetAccountIdT&& value) {
    m_targetAccountIdHasBeenSet = true;
    m_targetAccountId = std::forward<TargetAccountIdT>(value);
  }
  template <typename TargetAccountIdT = Aws::String>
  RegionFailure& WithTargetAccountId(TargetAccountIdT&& value) {
    SetTargetAccountId(std::forward<TargetAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_region;

  RegionFailureStatus m_status{RegionFailureStatus::NOT_SET};

  ImageConfigurationStep m_imageConfigurationStep{ImageConfigurationStep::NOT_SET};

  Aws::String m_errorMessage;

  Aws::String m_targetAccountId;
  bool m_regionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_imageConfigurationStepHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_targetAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
