/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LocationService
{
namespace Model
{

  /**
   * <p>Unique identifying information for an Android app. Consists of a package name
   * and a 20 byte SHA-1 certificate fingerprint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/AndroidApp">AWS
   * API Reference</a></p>
   */
  class AndroidApp
  {
  public:
    AWS_LOCATIONSERVICE_API AndroidApp() = default;
    AWS_LOCATIONSERVICE_API AndroidApp(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API AndroidApp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique package name for an Android app.</p>
     */
    inline const Aws::String& GetPackage() const { return m_package; }
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }
    template<typename PackageT = Aws::String>
    void SetPackage(PackageT&& value) { m_packageHasBeenSet = true; m_package = std::forward<PackageT>(value); }
    template<typename PackageT = Aws::String>
    AndroidApp& WithPackage(PackageT&& value) { SetPackage(std::forward<PackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>20 byte SHA-1 certificate fingerprint associated with the Android app signing
     * certificate.</p>
     */
    inline const Aws::String& GetCertificateFingerprint() const { return m_certificateFingerprint; }
    inline bool CertificateFingerprintHasBeenSet() const { return m_certificateFingerprintHasBeenSet; }
    template<typename CertificateFingerprintT = Aws::String>
    void SetCertificateFingerprint(CertificateFingerprintT&& value) { m_certificateFingerprintHasBeenSet = true; m_certificateFingerprint = std::forward<CertificateFingerprintT>(value); }
    template<typename CertificateFingerprintT = Aws::String>
    AndroidApp& WithCertificateFingerprint(CertificateFingerprintT&& value) { SetCertificateFingerprint(std::forward<CertificateFingerprintT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_package;
    bool m_packageHasBeenSet = false;

    Aws::String m_certificateFingerprint;
    bool m_certificateFingerprintHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
