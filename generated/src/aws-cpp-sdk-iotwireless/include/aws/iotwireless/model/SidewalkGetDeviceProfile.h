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
    AWS_IOTWIRELESS_API SidewalkGetDeviceProfile();
    AWS_IOTWIRELESS_API SidewalkGetDeviceProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkGetDeviceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Sidewalk application server public key.</p>
     */
    inline const Aws::String& GetApplicationServerPublicKey() const{ return m_applicationServerPublicKey; }

    /**
     * <p>The Sidewalk application server public key.</p>
     */
    inline bool ApplicationServerPublicKeyHasBeenSet() const { return m_applicationServerPublicKeyHasBeenSet; }

    /**
     * <p>The Sidewalk application server public key.</p>
     */
    inline void SetApplicationServerPublicKey(const Aws::String& value) { m_applicationServerPublicKeyHasBeenSet = true; m_applicationServerPublicKey = value; }

    /**
     * <p>The Sidewalk application server public key.</p>
     */
    inline void SetApplicationServerPublicKey(Aws::String&& value) { m_applicationServerPublicKeyHasBeenSet = true; m_applicationServerPublicKey = std::move(value); }

    /**
     * <p>The Sidewalk application server public key.</p>
     */
    inline void SetApplicationServerPublicKey(const char* value) { m_applicationServerPublicKeyHasBeenSet = true; m_applicationServerPublicKey.assign(value); }

    /**
     * <p>The Sidewalk application server public key.</p>
     */
    inline SidewalkGetDeviceProfile& WithApplicationServerPublicKey(const Aws::String& value) { SetApplicationServerPublicKey(value); return *this;}

    /**
     * <p>The Sidewalk application server public key.</p>
     */
    inline SidewalkGetDeviceProfile& WithApplicationServerPublicKey(Aws::String&& value) { SetApplicationServerPublicKey(std::move(value)); return *this;}

    /**
     * <p>The Sidewalk application server public key.</p>
     */
    inline SidewalkGetDeviceProfile& WithApplicationServerPublicKey(const char* value) { SetApplicationServerPublicKey(value); return *this;}


    /**
     * <p>Gets information about the certification status of a Sidewalk device
     * profile.</p>
     */
    inline bool GetQualificationStatus() const{ return m_qualificationStatus; }

    /**
     * <p>Gets information about the certification status of a Sidewalk device
     * profile.</p>
     */
    inline bool QualificationStatusHasBeenSet() const { return m_qualificationStatusHasBeenSet; }

    /**
     * <p>Gets information about the certification status of a Sidewalk device
     * profile.</p>
     */
    inline void SetQualificationStatus(bool value) { m_qualificationStatusHasBeenSet = true; m_qualificationStatus = value; }

    /**
     * <p>Gets information about the certification status of a Sidewalk device
     * profile.</p>
     */
    inline SidewalkGetDeviceProfile& WithQualificationStatus(bool value) { SetQualificationStatus(value); return *this;}


    /**
     * <p>The DAK certificate information of the Sidewalk device profile.</p>
     */
    inline const Aws::Vector<DakCertificateMetadata>& GetDakCertificateMetadata() const{ return m_dakCertificateMetadata; }

    /**
     * <p>The DAK certificate information of the Sidewalk device profile.</p>
     */
    inline bool DakCertificateMetadataHasBeenSet() const { return m_dakCertificateMetadataHasBeenSet; }

    /**
     * <p>The DAK certificate information of the Sidewalk device profile.</p>
     */
    inline void SetDakCertificateMetadata(const Aws::Vector<DakCertificateMetadata>& value) { m_dakCertificateMetadataHasBeenSet = true; m_dakCertificateMetadata = value; }

    /**
     * <p>The DAK certificate information of the Sidewalk device profile.</p>
     */
    inline void SetDakCertificateMetadata(Aws::Vector<DakCertificateMetadata>&& value) { m_dakCertificateMetadataHasBeenSet = true; m_dakCertificateMetadata = std::move(value); }

    /**
     * <p>The DAK certificate information of the Sidewalk device profile.</p>
     */
    inline SidewalkGetDeviceProfile& WithDakCertificateMetadata(const Aws::Vector<DakCertificateMetadata>& value) { SetDakCertificateMetadata(value); return *this;}

    /**
     * <p>The DAK certificate information of the Sidewalk device profile.</p>
     */
    inline SidewalkGetDeviceProfile& WithDakCertificateMetadata(Aws::Vector<DakCertificateMetadata>&& value) { SetDakCertificateMetadata(std::move(value)); return *this;}

    /**
     * <p>The DAK certificate information of the Sidewalk device profile.</p>
     */
    inline SidewalkGetDeviceProfile& AddDakCertificateMetadata(const DakCertificateMetadata& value) { m_dakCertificateMetadataHasBeenSet = true; m_dakCertificateMetadata.push_back(value); return *this; }

    /**
     * <p>The DAK certificate information of the Sidewalk device profile.</p>
     */
    inline SidewalkGetDeviceProfile& AddDakCertificateMetadata(DakCertificateMetadata&& value) { m_dakCertificateMetadataHasBeenSet = true; m_dakCertificateMetadata.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationServerPublicKey;
    bool m_applicationServerPublicKeyHasBeenSet = false;

    bool m_qualificationStatus;
    bool m_qualificationStatusHasBeenSet = false;

    Aws::Vector<DakCertificateMetadata> m_dakCertificateMetadata;
    bool m_dakCertificateMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
