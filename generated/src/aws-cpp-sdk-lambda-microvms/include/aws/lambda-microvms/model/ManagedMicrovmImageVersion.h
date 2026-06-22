/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

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
 * <p>Contains version information for a managed MicroVM image.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/ManagedMicrovmImageVersion">AWS
 * API Reference</a></p>
 */
class ManagedMicrovmImageVersion {
 public:
  AWS_LAMBDAMICROVMS_API ManagedMicrovmImageVersion() = default;
  AWS_LAMBDAMICROVMS_API ManagedMicrovmImageVersion(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API ManagedMicrovmImageVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the managed MicroVM image.</p>
   */
  inline const Aws::String& GetImageArn() const { return m_imageArn; }
  inline bool ImageArnHasBeenSet() const { return m_imageArnHasBeenSet; }
  template <typename ImageArnT = Aws::String>
  void SetImageArn(ImageArnT&& value) {
    m_imageArnHasBeenSet = true;
    m_imageArn = std::forward<ImageArnT>(value);
  }
  template <typename ImageArnT = Aws::String>
  ManagedMicrovmImageVersion& WithImageArn(ImageArnT&& value) {
    SetImageArn(std::forward<ImageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the managed MicroVM image.</p>
   */
  inline const Aws::String& GetImageVersion() const { return m_imageVersion; }
  inline bool ImageVersionHasBeenSet() const { return m_imageVersionHasBeenSet; }
  template <typename ImageVersionT = Aws::String>
  void SetImageVersion(ImageVersionT&& value) {
    m_imageVersionHasBeenSet = true;
    m_imageVersion = std::forward<ImageVersionT>(value);
  }
  template <typename ImageVersionT = Aws::String>
  ManagedMicrovmImageVersion& WithImageVersion(ImageVersionT&& value) {
    SetImageVersion(std::forward<ImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the version was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ManagedMicrovmImageVersion& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the version was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ManagedMicrovmImageVersion& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_imageArn;

  Aws::String m_imageVersion;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_imageArnHasBeenSet = false;
  bool m_imageVersionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
