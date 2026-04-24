/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoT {
namespace Model {

/**
 * <p>Describes the code-signing profile.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SigningProfileParameter">AWS
 * API Reference</a></p>
 */
class SigningProfileParameter {
 public:
  AWS_IOT_API SigningProfileParameter() = default;
  AWS_IOT_API SigningProfileParameter(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API SigningProfileParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Certificate ARN.</p>
   */
  inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
  inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
  template <typename CertificateArnT = Aws::String>
  void SetCertificateArn(CertificateArnT&& value) {
    m_certificateArnHasBeenSet = true;
    m_certificateArn = std::forward<CertificateArnT>(value);
  }
  template <typename CertificateArnT = Aws::String>
  SigningProfileParameter& WithCertificateArn(CertificateArnT&& value) {
    SetCertificateArn(std::forward<CertificateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hardware platform of your device.</p>
   */
  inline const Aws::String& GetPlatform() const { return m_platform; }
  inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
  template <typename PlatformT = Aws::String>
  void SetPlatform(PlatformT&& value) {
    m_platformHasBeenSet = true;
    m_platform = std::forward<PlatformT>(value);
  }
  template <typename PlatformT = Aws::String>
  SigningProfileParameter& WithPlatform(PlatformT&& value) {
    SetPlatform(std::forward<PlatformT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location of the code-signing certificate on your device.</p>
   */
  inline const Aws::String& GetCertificatePathOnDevice() const { return m_certificatePathOnDevice; }
  inline bool CertificatePathOnDeviceHasBeenSet() const { return m_certificatePathOnDeviceHasBeenSet; }
  template <typename CertificatePathOnDeviceT = Aws::String>
  void SetCertificatePathOnDevice(CertificatePathOnDeviceT&& value) {
    m_certificatePathOnDeviceHasBeenSet = true;
    m_certificatePathOnDevice = std::forward<CertificatePathOnDeviceT>(value);
  }
  template <typename CertificatePathOnDeviceT = Aws::String>
  SigningProfileParameter& WithCertificatePathOnDevice(CertificatePathOnDeviceT&& value) {
    SetCertificatePathOnDevice(std::forward<CertificatePathOnDeviceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_certificateArn;

  Aws::String m_platform;

  Aws::String m_certificatePathOnDevice;
  bool m_certificateArnHasBeenSet = false;
  bool m_platformHasBeenSet = false;
  bool m_certificatePathOnDeviceHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
