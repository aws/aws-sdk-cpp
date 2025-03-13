/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/WirelessDeviceSidewalkStatus.h>
#include <aws/iotwireless/model/CertificateList.h>
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
   * <p>Sidewalk object used by list functions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkListDevice">AWS
   * API Reference</a></p>
   */
  class SidewalkListDevice
  {
  public:
    AWS_IOTWIRELESS_API SidewalkListDevice() = default;
    AWS_IOTWIRELESS_API SidewalkListDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkListDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline const Aws::String& GetAmazonId() const { return m_amazonId; }
    inline bool AmazonIdHasBeenSet() const { return m_amazonIdHasBeenSet; }
    template<typename AmazonIdT = Aws::String>
    void SetAmazonId(AmazonIdT&& value) { m_amazonIdHasBeenSet = true; m_amazonId = std::forward<AmazonIdT>(value); }
    template<typename AmazonIdT = Aws::String>
    SidewalkListDevice& WithAmazonId(AmazonIdT&& value) { SetAmazonId(std::forward<AmazonIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sidewalk device identification.</p>
     */
    inline const Aws::String& GetSidewalkId() const { return m_sidewalkId; }
    inline bool SidewalkIdHasBeenSet() const { return m_sidewalkIdHasBeenSet; }
    template<typename SidewalkIdT = Aws::String>
    void SetSidewalkId(SidewalkIdT&& value) { m_sidewalkIdHasBeenSet = true; m_sidewalkId = std::forward<SidewalkIdT>(value); }
    template<typename SidewalkIdT = Aws::String>
    SidewalkListDevice& WithSidewalkId(SidewalkIdT&& value) { SetSidewalkId(std::forward<SidewalkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Sidewalk manufacturing series number.</p>
     */
    inline const Aws::String& GetSidewalkManufacturingSn() const { return m_sidewalkManufacturingSn; }
    inline bool SidewalkManufacturingSnHasBeenSet() const { return m_sidewalkManufacturingSnHasBeenSet; }
    template<typename SidewalkManufacturingSnT = Aws::String>
    void SetSidewalkManufacturingSn(SidewalkManufacturingSnT&& value) { m_sidewalkManufacturingSnHasBeenSet = true; m_sidewalkManufacturingSn = std::forward<SidewalkManufacturingSnT>(value); }
    template<typename SidewalkManufacturingSnT = Aws::String>
    SidewalkListDevice& WithSidewalkManufacturingSn(SidewalkManufacturingSnT&& value) { SetSidewalkManufacturingSn(std::forward<SidewalkManufacturingSnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sidewalk device certificates for Ed25519 and P256r1.</p>
     */
    inline const Aws::Vector<CertificateList>& GetDeviceCertificates() const { return m_deviceCertificates; }
    inline bool DeviceCertificatesHasBeenSet() const { return m_deviceCertificatesHasBeenSet; }
    template<typename DeviceCertificatesT = Aws::Vector<CertificateList>>
    void SetDeviceCertificates(DeviceCertificatesT&& value) { m_deviceCertificatesHasBeenSet = true; m_deviceCertificates = std::forward<DeviceCertificatesT>(value); }
    template<typename DeviceCertificatesT = Aws::Vector<CertificateList>>
    SidewalkListDevice& WithDeviceCertificates(DeviceCertificatesT&& value) { SetDeviceCertificates(std::forward<DeviceCertificatesT>(value)); return *this;}
    template<typename DeviceCertificatesT = CertificateList>
    SidewalkListDevice& AddDeviceCertificates(DeviceCertificatesT&& value) { m_deviceCertificatesHasBeenSet = true; m_deviceCertificates.emplace_back(std::forward<DeviceCertificatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Sidewalk object used by list functions.</p>
     */
    inline const Aws::String& GetDeviceProfileId() const { return m_deviceProfileId; }
    inline bool DeviceProfileIdHasBeenSet() const { return m_deviceProfileIdHasBeenSet; }
    template<typename DeviceProfileIdT = Aws::String>
    void SetDeviceProfileId(DeviceProfileIdT&& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = std::forward<DeviceProfileIdT>(value); }
    template<typename DeviceProfileIdT = Aws::String>
    SidewalkListDevice& WithDeviceProfileId(DeviceProfileIdT&& value) { SetDeviceProfileId(std::forward<DeviceProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Sidewalk devices, such as provisioned or registered.</p>
     */
    inline WirelessDeviceSidewalkStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WirelessDeviceSidewalkStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SidewalkListDevice& WithStatus(WirelessDeviceSidewalkStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_amazonId;
    bool m_amazonIdHasBeenSet = false;

    Aws::String m_sidewalkId;
    bool m_sidewalkIdHasBeenSet = false;

    Aws::String m_sidewalkManufacturingSn;
    bool m_sidewalkManufacturingSnHasBeenSet = false;

    Aws::Vector<CertificateList> m_deviceCertificates;
    bool m_deviceCertificatesHasBeenSet = false;

    Aws::String m_deviceProfileId;
    bool m_deviceProfileIdHasBeenSet = false;

    WirelessDeviceSidewalkStatus m_status{WirelessDeviceSidewalkStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
