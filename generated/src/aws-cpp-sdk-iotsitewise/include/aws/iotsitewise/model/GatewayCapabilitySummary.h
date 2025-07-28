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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains a summary of a gateway capability configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GatewayCapabilitySummary">AWS
   * API Reference</a></p>
   */
  class GatewayCapabilitySummary
  {
  public:
    AWS_IOTSITEWISE_API GatewayCapabilitySummary() = default;
    AWS_IOTSITEWISE_API GatewayCapabilitySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API GatewayCapabilitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The namespace of the capability configuration. For example, if you configure
     * OPC UA sources for an MQTT-enabled gateway, your OPC-UA capability configuration
     * has the namespace <code>iotsitewise:opcuacollector:3</code>.</p>
     */
    inline const Aws::String& GetCapabilityNamespace() const { return m_capabilityNamespace; }
    inline bool CapabilityNamespaceHasBeenSet() const { return m_capabilityNamespaceHasBeenSet; }
    template<typename CapabilityNamespaceT = Aws::String>
    void SetCapabilityNamespace(CapabilityNamespaceT&& value) { m_capabilityNamespaceHasBeenSet = true; m_capabilityNamespace = std::forward<CapabilityNamespaceT>(value); }
    template<typename CapabilityNamespaceT = Aws::String>
    GatewayCapabilitySummary& WithCapabilityNamespace(CapabilityNamespaceT&& value) { SetCapabilityNamespace(std::forward<CapabilityNamespaceT>(value)); return *this;}
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
    inline bool CapabilitySyncStatusHasBeenSet() const { return m_capabilitySyncStatusHasBeenSet; }
    inline void SetCapabilitySyncStatus(CapabilitySyncStatus value) { m_capabilitySyncStatusHasBeenSet = true; m_capabilitySyncStatus = value; }
    inline GatewayCapabilitySummary& WithCapabilitySyncStatus(CapabilitySyncStatus value) { SetCapabilitySyncStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_capabilityNamespace;
    bool m_capabilityNamespaceHasBeenSet = false;

    CapabilitySyncStatus m_capabilitySyncStatus{CapabilitySyncStatus::NOT_SET};
    bool m_capabilitySyncStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
