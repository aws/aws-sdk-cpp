/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/DakCertificateMetadata.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Gets information about a Sidewalk device profile.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkGetDeviceProfile">AWS
   * API Reference</a></p>
   */
  class SidewalkGetDeviceProfile
  {
  public:
    AWS_IOTWIRELESS_API SidewalkGetDeviceProfile() = default;
    AWS_IOTWIRELESS_API SidewalkGetDeviceProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkGetDeviceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Sidewalk application server public key.</p>
     */
    inline const Aws::String& GetApplicationServerPublicKey() const { return m_applicationServerPublicKey; }
    inline bool ApplicationServerPublicKeyHasBeenSet() const { return m_applicationServerPublicKeyHasBeenSet; }
    template<typename ApplicationServerPublicKeyT = Aws::String>
    void SetApplicationServerPublicKey(ApplicationServerPublicKeyT&& value) { m_applicationServerPublicKeyHasBeenSet = true; m_applicationServerPublicKey = std::forward<ApplicationServerPublicKeyT>(value); }
    template<typename ApplicationServerPublicKeyT = Aws::String>
    SidewalkGetDeviceProfile& WithApplicationServerPublicKey(ApplicationServerPublicKeyT&& value) { SetApplicationServerPublicKey(std::forward<ApplicationServerPublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets information about the certification status of a Sidewalk device
     * profile.</p>
     */
    inline bool GetQualificationStatus() const { return m_qualificationStatus; }
    inline bool QualificationStatusHasBeenSet() const { return m_qualificationStatusHasBeenSet; }
    inline void SetQualificationStatus(bool value) { m_qualificationStatusHasBeenSet = true; m_qualificationStatus = value; }
    inline SidewalkGetDeviceProfile& WithQualificationStatus(bool value) { SetQualificationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DAK certificate information of the Sidewalk device profile.</p>
     */
    inline const Aws::Vector<DakCertificateMetadata>& GetDakCertificateMetadata() const { return m_dakCertificateMetadata; }
    inline bool DakCertificateMetadataHasBeenSet() const { return m_dakCertificateMetadataHasBeenSet; }
    template<typename DakCertificateMetadataT = Aws::Vector<DakCertificateMetadata>>
    void SetDakCertificateMetadata(DakCertificateMetadataT&& value) { m_dakCertificateMetadataHasBeenSet = true; m_dakCertificateMetadata = std::forward<DakCertificateMetadataT>(value); }
    template<typename DakCertificateMetadataT = Aws::Vector<DakCertificateMetadata>>
    SidewalkGetDeviceProfile& WithDakCertificateMetadata(DakCertificateMetadataT&& value) { SetDakCertificateMetadata(std::forward<DakCertificateMetadataT>(value)); return *this;}
    template<typename DakCertificateMetadataT = DakCertificateMetadata>
    SidewalkGetDeviceProfile& AddDakCertificateMetadata(DakCertificateMetadataT&& value) { m_dakCertificateMetadataHasBeenSet = true; m_dakCertificateMetadata.emplace_back(std::forward<DakCertificateMetadataT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationServerPublicKey;
    bool m_applicationServerPublicKeyHasBeenSet = false;

    bool m_qualificationStatus{false};
    bool m_qualificationStatusHasBeenSet = false;

    Aws::Vector<DakCertificateMetadata> m_dakCertificateMetadata;
    bool m_dakCertificateMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
