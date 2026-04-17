/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

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
 * <p>Controls Secure Boot and UEFI data settings for the resulting image during
 * ISO imports. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/uefi-secure-boot.html">UEFI
 * Secure Boot for Amazon EC2 instances</a> in the <i> <i>Amazon EC2 User Guide</i>
 * </i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/RegisterImageOptions">AWS
 * API Reference</a></p>
 */
class RegisterImageOptions {
 public:
  AWS_IMAGEBUILDER_API RegisterImageOptions() = default;
  AWS_IMAGEBUILDER_API RegisterImageOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API RegisterImageOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether Secure Boot is enabled for the output AMI. The default
   * value is <code>true</code>. To disable Secure Boot for custom unsigned drivers,
   * set this value to <code>false</code>.</p>
   */
  inline bool GetSecureBootEnabled() const { return m_secureBootEnabled; }
  inline bool SecureBootEnabledHasBeenSet() const { return m_secureBootEnabledHasBeenSet; }
  inline void SetSecureBootEnabled(bool value) {
    m_secureBootEnabledHasBeenSet = true;
    m_secureBootEnabled = value;
  }
  inline RegisterImageOptions& WithSecureBootEnabled(bool value) {
    SetSecureBootEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Base64-encoded representation of the non-volatile UEFI variable store. You
   * can specify this parameter only when <code>secureBootEnabled</code> is
   * <code>true</code> or unspecified. You can inspect and modify the UEFI data by
   * using the <a href="https://github.com/awslabs/python-uefivars">python-uefivars
   * tool on GitHub</a>.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/uefi-variables.html">UEFI
   * variables for Amazon EC2 instances</a>.</p>
   */
  inline const Aws::String& GetUefiData() const { return m_uefiData; }
  inline bool UefiDataHasBeenSet() const { return m_uefiDataHasBeenSet; }
  template <typename UefiDataT = Aws::String>
  void SetUefiData(UefiDataT&& value) {
    m_uefiDataHasBeenSet = true;
    m_uefiData = std::forward<UefiDataT>(value);
  }
  template <typename UefiDataT = Aws::String>
  RegisterImageOptions& WithUefiData(UefiDataT&& value) {
    SetUefiData(std::forward<UefiDataT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_secureBootEnabled{false};

  Aws::String m_uefiData;
  bool m_secureBootEnabledHasBeenSet = false;
  bool m_uefiDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
