/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/CapabilitySyncStatus.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class DescribeGatewayCapabilityConfigurationResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeGatewayCapabilityConfigurationResult() = default;
    AWS_IOTSITEWISE_API DescribeGatewayCapabilityConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeGatewayCapabilityConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the gateway that defines the capability configuration.</p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    DescribeGatewayCapabilityConfigurationResult& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the gateway capability.</p>
     */
    inline const Aws::String& GetCapabilityNamespace() const { return m_capabilityNamespace; }
    template<typename CapabilityNamespaceT = Aws::String>
    void SetCapabilityNamespace(CapabilityNamespaceT&& value) { m_capabilityNamespaceHasBeenSet = true; m_capabilityNamespace = std::forward<CapabilityNamespaceT>(value); }
    template<typename CapabilityNamespaceT = Aws::String>
    DescribeGatewayCapabilityConfigurationResult& WithCapabilityNamespace(CapabilityNamespaceT&& value) { SetCapabilityNamespace(std::forward<CapabilityNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON document that defines the gateway capability's configuration. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/configure-sources.html#configure-source-cli">Configuring
     * data sources (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetCapabilityConfiguration() const { return m_capabilityConfiguration; }
    template<typename CapabilityConfigurationT = Aws::String>
    void SetCapabilityConfiguration(CapabilityConfigurationT&& value) { m_capabilityConfigurationHasBeenSet = true; m_capabilityConfiguration = std::forward<CapabilityConfigurationT>(value); }
    template<typename CapabilityConfigurationT = Aws::String>
    DescribeGatewayCapabilityConfigurationResult& WithCapabilityConfiguration(CapabilityConfigurationT&& value) { SetCapabilityConfiguration(std::forward<CapabilityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The synchronization status of the gateway capability configuration. The sync
     * status can be one of the following:</p> <ul> <li> <p> <code>IN_SYNC</code> - The
     * gateway is running with the latest configuration.</p> </li> <li> <p>
     * <code>OUT_OF_SYNC</code> - The gateway hasn't received the latest
     * configuration.</p> </li> <li> <p> <code>SYNC_FAILED</code> - The gateway
     * rejected the latest configuration.</p> </li> <li> <p> <code>UNKNOWN</code> - The
     * gateway hasn't reported its sync status.</p> </li> <li> <p>
     * <code>NOT_APPLICABLE</code> - The gateway doesn't support this capability. This
     * is most common when integrating partner data sources, because the data
     * integration is handled externally by the partner.</p> </li> </ul>
     */
    inline CapabilitySyncStatus GetCapabilitySyncStatus() const { return m_capabilitySyncStatus; }
    inline void SetCapabilitySyncStatus(CapabilitySyncStatus value) { m_capabilitySyncStatusHasBeenSet = true; m_capabilitySyncStatus = value; }
    inline DescribeGatewayCapabilityConfigurationResult& WithCapabilitySyncStatus(CapabilitySyncStatus value) { SetCapabilitySyncStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeGatewayCapabilityConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_capabilityNamespace;
    bool m_capabilityNamespaceHasBeenSet = false;

    Aws::String m_capabilityConfiguration;
    bool m_capabilityConfigurationHasBeenSet = false;

    CapabilitySyncStatus m_capabilitySyncStatus{CapabilitySyncStatus::NOT_SET};
    bool m_capabilitySyncStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
