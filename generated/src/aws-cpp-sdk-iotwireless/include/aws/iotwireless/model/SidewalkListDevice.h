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
    AWS_IOTWIRELESS_API SidewalkListDevice();
    AWS_IOTWIRELESS_API SidewalkListDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkListDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline const Aws::String& GetAmazonId() const{ return m_amazonId; }

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline bool AmazonIdHasBeenSet() const { return m_amazonIdHasBeenSet; }

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline void SetAmazonId(const Aws::String& value) { m_amazonIdHasBeenSet = true; m_amazonId = value; }

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline void SetAmazonId(Aws::String&& value) { m_amazonIdHasBeenSet = true; m_amazonId = std::move(value); }

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline void SetAmazonId(const char* value) { m_amazonIdHasBeenSet = true; m_amazonId.assign(value); }

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline SidewalkListDevice& WithAmazonId(const Aws::String& value) { SetAmazonId(value); return *this;}

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline SidewalkListDevice& WithAmazonId(Aws::String&& value) { SetAmazonId(std::move(value)); return *this;}

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline SidewalkListDevice& WithAmazonId(const char* value) { SetAmazonId(value); return *this;}


    /**
     * <p>The sidewalk device identification.</p>
     */
    inline const Aws::String& GetSidewalkId() const{ return m_sidewalkId; }

    /**
     * <p>The sidewalk device identification.</p>
     */
    inline bool SidewalkIdHasBeenSet() const { return m_sidewalkIdHasBeenSet; }

    /**
     * <p>The sidewalk device identification.</p>
     */
    inline void SetSidewalkId(const Aws::String& value) { m_sidewalkIdHasBeenSet = true; m_sidewalkId = value; }

    /**
     * <p>The sidewalk device identification.</p>
     */
    inline void SetSidewalkId(Aws::String&& value) { m_sidewalkIdHasBeenSet = true; m_sidewalkId = std::move(value); }

    /**
     * <p>The sidewalk device identification.</p>
     */
    inline void SetSidewalkId(const char* value) { m_sidewalkIdHasBeenSet = true; m_sidewalkId.assign(value); }

    /**
     * <p>The sidewalk device identification.</p>
     */
    inline SidewalkListDevice& WithSidewalkId(const Aws::String& value) { SetSidewalkId(value); return *this;}

    /**
     * <p>The sidewalk device identification.</p>
     */
    inline SidewalkListDevice& WithSidewalkId(Aws::String&& value) { SetSidewalkId(std::move(value)); return *this;}

    /**
     * <p>The sidewalk device identification.</p>
     */
    inline SidewalkListDevice& WithSidewalkId(const char* value) { SetSidewalkId(value); return *this;}


    /**
     * <p>The Sidewalk manufacturing series number.</p>
     */
    inline const Aws::String& GetSidewalkManufacturingSn() const{ return m_sidewalkManufacturingSn; }

    /**
     * <p>The Sidewalk manufacturing series number.</p>
     */
    inline bool SidewalkManufacturingSnHasBeenSet() const { return m_sidewalkManufacturingSnHasBeenSet; }

    /**
     * <p>The Sidewalk manufacturing series number.</p>
     */
    inline void SetSidewalkManufacturingSn(const Aws::String& value) { m_sidewalkManufacturingSnHasBeenSet = true; m_sidewalkManufacturingSn = value; }

    /**
     * <p>The Sidewalk manufacturing series number.</p>
     */
    inline void SetSidewalkManufacturingSn(Aws::String&& value) { m_sidewalkManufacturingSnHasBeenSet = true; m_sidewalkManufacturingSn = std::move(value); }

    /**
     * <p>The Sidewalk manufacturing series number.</p>
     */
    inline void SetSidewalkManufacturingSn(const char* value) { m_sidewalkManufacturingSnHasBeenSet = true; m_sidewalkManufacturingSn.assign(value); }

    /**
     * <p>The Sidewalk manufacturing series number.</p>
     */
    inline SidewalkListDevice& WithSidewalkManufacturingSn(const Aws::String& value) { SetSidewalkManufacturingSn(value); return *this;}

    /**
     * <p>The Sidewalk manufacturing series number.</p>
     */
    inline SidewalkListDevice& WithSidewalkManufacturingSn(Aws::String&& value) { SetSidewalkManufacturingSn(std::move(value)); return *this;}

    /**
     * <p>The Sidewalk manufacturing series number.</p>
     */
    inline SidewalkListDevice& WithSidewalkManufacturingSn(const char* value) { SetSidewalkManufacturingSn(value); return *this;}


    /**
     * <p>The sidewalk device certificates for Ed25519 and P256r1.</p>
     */
    inline const Aws::Vector<CertificateList>& GetDeviceCertificates() const{ return m_deviceCertificates; }

    /**
     * <p>The sidewalk device certificates for Ed25519 and P256r1.</p>
     */
    inline bool DeviceCertificatesHasBeenSet() const { return m_deviceCertificatesHasBeenSet; }

    /**
     * <p>The sidewalk device certificates for Ed25519 and P256r1.</p>
     */
    inline void SetDeviceCertificates(const Aws::Vector<CertificateList>& value) { m_deviceCertificatesHasBeenSet = true; m_deviceCertificates = value; }

    /**
     * <p>The sidewalk device certificates for Ed25519 and P256r1.</p>
     */
    inline void SetDeviceCertificates(Aws::Vector<CertificateList>&& value) { m_deviceCertificatesHasBeenSet = true; m_deviceCertificates = std::move(value); }

    /**
     * <p>The sidewalk device certificates for Ed25519 and P256r1.</p>
     */
    inline SidewalkListDevice& WithDeviceCertificates(const Aws::Vector<CertificateList>& value) { SetDeviceCertificates(value); return *this;}

    /**
     * <p>The sidewalk device certificates for Ed25519 and P256r1.</p>
     */
    inline SidewalkListDevice& WithDeviceCertificates(Aws::Vector<CertificateList>&& value) { SetDeviceCertificates(std::move(value)); return *this;}

    /**
     * <p>The sidewalk device certificates for Ed25519 and P256r1.</p>
     */
    inline SidewalkListDevice& AddDeviceCertificates(const CertificateList& value) { m_deviceCertificatesHasBeenSet = true; m_deviceCertificates.push_back(value); return *this; }

    /**
     * <p>The sidewalk device certificates for Ed25519 and P256r1.</p>
     */
    inline SidewalkListDevice& AddDeviceCertificates(CertificateList&& value) { m_deviceCertificatesHasBeenSet = true; m_deviceCertificates.push_back(std::move(value)); return *this; }


    /**
     * <p>Sidewalk object used by list functions.</p>
     */
    inline const Aws::String& GetDeviceProfileId() const{ return m_deviceProfileId; }

    /**
     * <p>Sidewalk object used by list functions.</p>
     */
    inline bool DeviceProfileIdHasBeenSet() const { return m_deviceProfileIdHasBeenSet; }

    /**
     * <p>Sidewalk object used by list functions.</p>
     */
    inline void SetDeviceProfileId(const Aws::String& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = value; }

    /**
     * <p>Sidewalk object used by list functions.</p>
     */
    inline void SetDeviceProfileId(Aws::String&& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = std::move(value); }

    /**
     * <p>Sidewalk object used by list functions.</p>
     */
    inline void SetDeviceProfileId(const char* value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId.assign(value); }

    /**
     * <p>Sidewalk object used by list functions.</p>
     */
    inline SidewalkListDevice& WithDeviceProfileId(const Aws::String& value) { SetDeviceProfileId(value); return *this;}

    /**
     * <p>Sidewalk object used by list functions.</p>
     */
    inline SidewalkListDevice& WithDeviceProfileId(Aws::String&& value) { SetDeviceProfileId(std::move(value)); return *this;}

    /**
     * <p>Sidewalk object used by list functions.</p>
     */
    inline SidewalkListDevice& WithDeviceProfileId(const char* value) { SetDeviceProfileId(value); return *this;}


    /**
     * <p>The status of the Sidewalk devices, such as provisioned or registered.</p>
     */
    inline const WirelessDeviceSidewalkStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Sidewalk devices, such as provisioned or registered.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Sidewalk devices, such as provisioned or registered.</p>
     */
    inline void SetStatus(const WirelessDeviceSidewalkStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Sidewalk devices, such as provisioned or registered.</p>
     */
    inline void SetStatus(WirelessDeviceSidewalkStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Sidewalk devices, such as provisioned or registered.</p>
     */
    inline SidewalkListDevice& WithStatus(const WirelessDeviceSidewalkStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Sidewalk devices, such as provisioned or registered.</p>
     */
    inline SidewalkListDevice& WithStatus(WirelessDeviceSidewalkStatus&& value) { SetStatus(std::move(value)); return *this;}

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

    WirelessDeviceSidewalkStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
