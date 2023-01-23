/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/LoRaWANGatewayCurrentVersion.h>
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
  class GetWirelessGatewayFirmwareInformationResult
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessGatewayFirmwareInformationResult();
    AWS_IOTWIRELESS_API GetWirelessGatewayFirmwareInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessGatewayFirmwareInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the wireless gateway's firmware.</p>
     */
    inline const LoRaWANGatewayCurrentVersion& GetLoRaWAN() const{ return m_loRaWAN; }

    /**
     * <p>Information about the wireless gateway's firmware.</p>
     */
    inline void SetLoRaWAN(const LoRaWANGatewayCurrentVersion& value) { m_loRaWAN = value; }

    /**
     * <p>Information about the wireless gateway's firmware.</p>
     */
    inline void SetLoRaWAN(LoRaWANGatewayCurrentVersion&& value) { m_loRaWAN = std::move(value); }

    /**
     * <p>Information about the wireless gateway's firmware.</p>
     */
    inline GetWirelessGatewayFirmwareInformationResult& WithLoRaWAN(const LoRaWANGatewayCurrentVersion& value) { SetLoRaWAN(value); return *this;}

    /**
     * <p>Information about the wireless gateway's firmware.</p>
     */
    inline GetWirelessGatewayFirmwareInformationResult& WithLoRaWAN(LoRaWANGatewayCurrentVersion&& value) { SetLoRaWAN(std::move(value)); return *this;}

  private:

    LoRaWANGatewayCurrentVersion m_loRaWAN;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
