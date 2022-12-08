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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTWireless
{
namespace Model
{
  class GetWirelessGatewayCertificateResult
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessGatewayCertificateResult();
    AWS_IOTWIRELESS_API GetWirelessGatewayCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessGatewayCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the certificate associated with the wireless gateway.</p>
     */
    inline const Aws::String& GetIotCertificateId() const{ return m_iotCertificateId; }

    /**
     * <p>The ID of the certificate associated with the wireless gateway.</p>
     */
    inline void SetIotCertificateId(const Aws::String& value) { m_iotCertificateId = value; }

    /**
     * <p>The ID of the certificate associated with the wireless gateway.</p>
     */
    inline void SetIotCertificateId(Aws::String&& value) { m_iotCertificateId = std::move(value); }

    /**
     * <p>The ID of the certificate associated with the wireless gateway.</p>
     */
    inline void SetIotCertificateId(const char* value) { m_iotCertificateId.assign(value); }

    /**
     * <p>The ID of the certificate associated with the wireless gateway.</p>
     */
    inline GetWirelessGatewayCertificateResult& WithIotCertificateId(const Aws::String& value) { SetIotCertificateId(value); return *this;}

    /**
     * <p>The ID of the certificate associated with the wireless gateway.</p>
     */
    inline GetWirelessGatewayCertificateResult& WithIotCertificateId(Aws::String&& value) { SetIotCertificateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the certificate associated with the wireless gateway.</p>
     */
    inline GetWirelessGatewayCertificateResult& WithIotCertificateId(const char* value) { SetIotCertificateId(value); return *this;}


    /**
     * <p>The ID of the certificate that is associated with the wireless gateway and
     * used for the LoRaWANNetworkServer endpoint.</p>
     */
    inline const Aws::String& GetLoRaWANNetworkServerCertificateId() const{ return m_loRaWANNetworkServerCertificateId; }

    /**
     * <p>The ID of the certificate that is associated with the wireless gateway and
     * used for the LoRaWANNetworkServer endpoint.</p>
     */
    inline void SetLoRaWANNetworkServerCertificateId(const Aws::String& value) { m_loRaWANNetworkServerCertificateId = value; }

    /**
     * <p>The ID of the certificate that is associated with the wireless gateway and
     * used for the LoRaWANNetworkServer endpoint.</p>
     */
    inline void SetLoRaWANNetworkServerCertificateId(Aws::String&& value) { m_loRaWANNetworkServerCertificateId = std::move(value); }

    /**
     * <p>The ID of the certificate that is associated with the wireless gateway and
     * used for the LoRaWANNetworkServer endpoint.</p>
     */
    inline void SetLoRaWANNetworkServerCertificateId(const char* value) { m_loRaWANNetworkServerCertificateId.assign(value); }

    /**
     * <p>The ID of the certificate that is associated with the wireless gateway and
     * used for the LoRaWANNetworkServer endpoint.</p>
     */
    inline GetWirelessGatewayCertificateResult& WithLoRaWANNetworkServerCertificateId(const Aws::String& value) { SetLoRaWANNetworkServerCertificateId(value); return *this;}

    /**
     * <p>The ID of the certificate that is associated with the wireless gateway and
     * used for the LoRaWANNetworkServer endpoint.</p>
     */
    inline GetWirelessGatewayCertificateResult& WithLoRaWANNetworkServerCertificateId(Aws::String&& value) { SetLoRaWANNetworkServerCertificateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the certificate that is associated with the wireless gateway and
     * used for the LoRaWANNetworkServer endpoint.</p>
     */
    inline GetWirelessGatewayCertificateResult& WithLoRaWANNetworkServerCertificateId(const char* value) { SetLoRaWANNetworkServerCertificateId(value); return *this;}

  private:

    Aws::String m_iotCertificateId;

    Aws::String m_loRaWANNetworkServerCertificateId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
