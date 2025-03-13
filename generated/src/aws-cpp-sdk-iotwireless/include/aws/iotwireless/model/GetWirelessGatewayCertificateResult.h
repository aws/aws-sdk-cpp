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
    AWS_IOTWIRELESS_API GetWirelessGatewayCertificateResult() = default;
    AWS_IOTWIRELESS_API GetWirelessGatewayCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessGatewayCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the certificate associated with the wireless gateway.</p>
     */
    inline const Aws::String& GetIotCertificateId() const { return m_iotCertificateId; }
    template<typename IotCertificateIdT = Aws::String>
    void SetIotCertificateId(IotCertificateIdT&& value) { m_iotCertificateIdHasBeenSet = true; m_iotCertificateId = std::forward<IotCertificateIdT>(value); }
    template<typename IotCertificateIdT = Aws::String>
    GetWirelessGatewayCertificateResult& WithIotCertificateId(IotCertificateIdT&& value) { SetIotCertificateId(std::forward<IotCertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the certificate that is associated with the wireless gateway and
     * used for the LoRaWANNetworkServer endpoint.</p>
     */
    inline const Aws::String& GetLoRaWANNetworkServerCertificateId() const { return m_loRaWANNetworkServerCertificateId; }
    template<typename LoRaWANNetworkServerCertificateIdT = Aws::String>
    void SetLoRaWANNetworkServerCertificateId(LoRaWANNetworkServerCertificateIdT&& value) { m_loRaWANNetworkServerCertificateIdHasBeenSet = true; m_loRaWANNetworkServerCertificateId = std::forward<LoRaWANNetworkServerCertificateIdT>(value); }
    template<typename LoRaWANNetworkServerCertificateIdT = Aws::String>
    GetWirelessGatewayCertificateResult& WithLoRaWANNetworkServerCertificateId(LoRaWANNetworkServerCertificateIdT&& value) { SetLoRaWANNetworkServerCertificateId(std::forward<LoRaWANNetworkServerCertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWirelessGatewayCertificateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_iotCertificateId;
    bool m_iotCertificateIdHasBeenSet = false;

    Aws::String m_loRaWANNetworkServerCertificateId;
    bool m_loRaWANNetworkServerCertificateIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
