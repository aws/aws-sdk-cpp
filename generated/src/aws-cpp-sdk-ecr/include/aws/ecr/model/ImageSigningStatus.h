/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/SigningStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECR {
namespace Model {

/**
 * <p>The signing status for an image. Each status corresponds to a signing
 * profile.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ImageSigningStatus">AWS
 * API Reference</a></p>
 */
class ImageSigningStatus {
 public:
  AWS_ECR_API ImageSigningStatus() = default;
  AWS_ECR_API ImageSigningStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API ImageSigningStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Amazon Web Services Signer signing profile used to sign the
   * image.</p>
   */
  inline const Aws::String& GetSigningProfileArn() const { return m_signingProfileArn; }
  inline bool SigningProfileArnHasBeenSet() const { return m_signingProfileArnHasBeenSet; }
  template <typename SigningProfileArnT = Aws::String>
  void SetSigningProfileArn(SigningProfileArnT&& value) {
    m_signingProfileArnHasBeenSet = true;
    m_signingProfileArn = std::forward<SigningProfileArnT>(value);
  }
  template <typename SigningProfileArnT = Aws::String>
  ImageSigningStatus& WithSigningProfileArn(SigningProfileArnT&& value) {
    SetSigningProfileArn(std::forward<SigningProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The failure code, which is only present if <code>status</code> is
   * <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetFailureCode() const { return m_failureCode; }
  inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
  template <typename FailureCodeT = Aws::String>
  void SetFailureCode(FailureCodeT&& value) {
    m_failureCodeHasBeenSet = true;
    m_failureCode = std::forward<FailureCodeT>(value);
  }
  template <typename FailureCodeT = Aws::String>
  ImageSigningStatus& WithFailureCode(FailureCodeT&& value) {
    SetFailureCode(std::forward<FailureCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of why signing the image failed. This field is only present if
   * <code>status</code> is <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  ImageSigningStatus& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image's signing status. Possible values are:</p> <ul> <li> <p>
   * <code>IN_PROGRESS</code> - Signing is currently in progress.</p> </li> <li> <p>
   * <code>COMPLETE</code> - The signature was successfully generated.</p> </li> <li>
   * <p> <code>FAILED</code> - Signing failed. See <code>failureCode</code> and
   * <code>failureReason</code> for details.</p> </li> </ul>
   */
  inline SigningStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SigningStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ImageSigningStatus& WithStatus(SigningStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_signingProfileArn;

  Aws::String m_failureCode;

  Aws::String m_failureReason;

  SigningStatus m_status{SigningStatus::NOT_SET};
  bool m_signingProfileArnHasBeenSet = false;
  bool m_failureCodeHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
