/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>The device attestation key (DAK) information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DakCertificateMetadata">AWS
   * API Reference</a></p>
   */
  class DakCertificateMetadata
  {
  public:
    AWS_IOTWIRELESS_API DakCertificateMetadata() = default;
    AWS_IOTWIRELESS_API DakCertificateMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API DakCertificateMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The certificate ID for the DAK.</p>
     */
    inline const Aws::String& GetCertificateId() const { return m_certificateId; }
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }
    template<typename CertificateIdT = Aws::String>
    void SetCertificateId(CertificateIdT&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::forward<CertificateIdT>(value); }
    template<typename CertificateIdT = Aws::String>
    DakCertificateMetadata& WithCertificateId(CertificateIdT&& value) { SetCertificateId(std::forward<CertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of signatures that the DAK can sign. A value of
     * <code>-1</code> indicates that there's no device limit.</p>
     */
    inline int GetMaxAllowedSignature() const { return m_maxAllowedSignature; }
    inline bool MaxAllowedSignatureHasBeenSet() const { return m_maxAllowedSignatureHasBeenSet; }
    inline void SetMaxAllowedSignature(int value) { m_maxAllowedSignatureHasBeenSet = true; m_maxAllowedSignature = value; }
    inline DakCertificateMetadata& WithMaxAllowedSignature(int value) { SetMaxAllowedSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether factory support has been enabled.</p>
     */
    inline bool GetFactorySupport() const { return m_factorySupport; }
    inline bool FactorySupportHasBeenSet() const { return m_factorySupportHasBeenSet; }
    inline void SetFactorySupport(bool value) { m_factorySupportHasBeenSet = true; m_factorySupport = value; }
    inline DakCertificateMetadata& WithFactorySupport(bool value) { SetFactorySupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The advertised product ID (APID) that's used for pre-production and
     * production applications.</p>
     */
    inline const Aws::String& GetApId() const { return m_apId; }
    inline bool ApIdHasBeenSet() const { return m_apIdHasBeenSet; }
    template<typename ApIdT = Aws::String>
    void SetApId(ApIdT&& value) { m_apIdHasBeenSet = true; m_apId = std::forward<ApIdT>(value); }
    template<typename ApIdT = Aws::String>
    DakCertificateMetadata& WithApId(ApIdT&& value) { SetApId(std::forward<ApIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device type ID that's used for prototyping applications.</p>
     */
    inline const Aws::String& GetDeviceTypeId() const { return m_deviceTypeId; }
    inline bool DeviceTypeIdHasBeenSet() const { return m_deviceTypeIdHasBeenSet; }
    template<typename DeviceTypeIdT = Aws::String>
    void SetDeviceTypeId(DeviceTypeIdT&& value) { m_deviceTypeIdHasBeenSet = true; m_deviceTypeId = std::forward<DeviceTypeIdT>(value); }
    template<typename DeviceTypeIdT = Aws::String>
    DakCertificateMetadata& WithDeviceTypeId(DeviceTypeIdT&& value) { SetDeviceTypeId(std::forward<DeviceTypeIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    int m_maxAllowedSignature{0};
    bool m_maxAllowedSignatureHasBeenSet = false;

    bool m_factorySupport{false};
    bool m_factorySupportHasBeenSet = false;

    Aws::String m_apId;
    bool m_apIdHasBeenSet = false;

    Aws::String m_deviceTypeId;
    bool m_deviceTypeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
