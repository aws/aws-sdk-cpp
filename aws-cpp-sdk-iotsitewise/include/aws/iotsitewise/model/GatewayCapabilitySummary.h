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
    AWS_IOTSITEWISE_API GatewayCapabilitySummary();
    AWS_IOTSITEWISE_API GatewayCapabilitySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API GatewayCapabilitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The namespace of the capability configuration. For example, if you configure
     * OPC-UA sources from the IoT SiteWise console, your OPC-UA capability
     * configuration has the namespace <code>iotsitewise:opcuacollector:version</code>,
     * where <code>version</code> is a number such as <code>1</code>.</p>
     */
    inline const Aws::String& GetCapabilityNamespace() const{ return m_capabilityNamespace; }

    /**
     * <p>The namespace of the capability configuration. For example, if you configure
     * OPC-UA sources from the IoT SiteWise console, your OPC-UA capability
     * configuration has the namespace <code>iotsitewise:opcuacollector:version</code>,
     * where <code>version</code> is a number such as <code>1</code>.</p>
     */
    inline bool CapabilityNamespaceHasBeenSet() const { return m_capabilityNamespaceHasBeenSet; }

    /**
     * <p>The namespace of the capability configuration. For example, if you configure
     * OPC-UA sources from the IoT SiteWise console, your OPC-UA capability
     * configuration has the namespace <code>iotsitewise:opcuacollector:version</code>,
     * where <code>version</code> is a number such as <code>1</code>.</p>
     */
    inline void SetCapabilityNamespace(const Aws::String& value) { m_capabilityNamespaceHasBeenSet = true; m_capabilityNamespace = value; }

    /**
     * <p>The namespace of the capability configuration. For example, if you configure
     * OPC-UA sources from the IoT SiteWise console, your OPC-UA capability
     * configuration has the namespace <code>iotsitewise:opcuacollector:version</code>,
     * where <code>version</code> is a number such as <code>1</code>.</p>
     */
    inline void SetCapabilityNamespace(Aws::String&& value) { m_capabilityNamespaceHasBeenSet = true; m_capabilityNamespace = std::move(value); }

    /**
     * <p>The namespace of the capability configuration. For example, if you configure
     * OPC-UA sources from the IoT SiteWise console, your OPC-UA capability
     * configuration has the namespace <code>iotsitewise:opcuacollector:version</code>,
     * where <code>version</code> is a number such as <code>1</code>.</p>
     */
    inline void SetCapabilityNamespace(const char* value) { m_capabilityNamespaceHasBeenSet = true; m_capabilityNamespace.assign(value); }

    /**
     * <p>The namespace of the capability configuration. For example, if you configure
     * OPC-UA sources from the IoT SiteWise console, your OPC-UA capability
     * configuration has the namespace <code>iotsitewise:opcuacollector:version</code>,
     * where <code>version</code> is a number such as <code>1</code>.</p>
     */
    inline GatewayCapabilitySummary& WithCapabilityNamespace(const Aws::String& value) { SetCapabilityNamespace(value); return *this;}

    /**
     * <p>The namespace of the capability configuration. For example, if you configure
     * OPC-UA sources from the IoT SiteWise console, your OPC-UA capability
     * configuration has the namespace <code>iotsitewise:opcuacollector:version</code>,
     * where <code>version</code> is a number such as <code>1</code>.</p>
     */
    inline GatewayCapabilitySummary& WithCapabilityNamespace(Aws::String&& value) { SetCapabilityNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the capability configuration. For example, if you configure
     * OPC-UA sources from the IoT SiteWise console, your OPC-UA capability
     * configuration has the namespace <code>iotsitewise:opcuacollector:version</code>,
     * where <code>version</code> is a number such as <code>1</code>.</p>
     */
    inline GatewayCapabilitySummary& WithCapabilityNamespace(const char* value) { SetCapabilityNamespace(value); return *this;}


    /**
     * <p>The synchronization status of the capability configuration. The sync status
     * can be one of the following:</p> <ul> <li> <p> <code>IN_SYNC</code> – The
     * gateway is running the capability configuration.</p> </li> <li> <p>
     * <code>OUT_OF_SYNC</code> – The gateway hasn't received the capability
     * configuration.</p> </li> <li> <p> <code>SYNC_FAILED</code> – The gateway
     * rejected the capability configuration.</p> </li> </ul>
     */
    inline const CapabilitySyncStatus& GetCapabilitySyncStatus() const{ return m_capabilitySyncStatus; }

    /**
     * <p>The synchronization status of the capability configuration. The sync status
     * can be one of the following:</p> <ul> <li> <p> <code>IN_SYNC</code> – The
     * gateway is running the capability configuration.</p> </li> <li> <p>
     * <code>OUT_OF_SYNC</code> – The gateway hasn't received the capability
     * configuration.</p> </li> <li> <p> <code>SYNC_FAILED</code> – The gateway
     * rejected the capability configuration.</p> </li> </ul>
     */
    inline bool CapabilitySyncStatusHasBeenSet() const { return m_capabilitySyncStatusHasBeenSet; }

    /**
     * <p>The synchronization status of the capability configuration. The sync status
     * can be one of the following:</p> <ul> <li> <p> <code>IN_SYNC</code> – The
     * gateway is running the capability configuration.</p> </li> <li> <p>
     * <code>OUT_OF_SYNC</code> – The gateway hasn't received the capability
     * configuration.</p> </li> <li> <p> <code>SYNC_FAILED</code> – The gateway
     * rejected the capability configuration.</p> </li> </ul>
     */
    inline void SetCapabilitySyncStatus(const CapabilitySyncStatus& value) { m_capabilitySyncStatusHasBeenSet = true; m_capabilitySyncStatus = value; }

    /**
     * <p>The synchronization status of the capability configuration. The sync status
     * can be one of the following:</p> <ul> <li> <p> <code>IN_SYNC</code> – The
     * gateway is running the capability configuration.</p> </li> <li> <p>
     * <code>OUT_OF_SYNC</code> – The gateway hasn't received the capability
     * configuration.</p> </li> <li> <p> <code>SYNC_FAILED</code> – The gateway
     * rejected the capability configuration.</p> </li> </ul>
     */
    inline void SetCapabilitySyncStatus(CapabilitySyncStatus&& value) { m_capabilitySyncStatusHasBeenSet = true; m_capabilitySyncStatus = std::move(value); }

    /**
     * <p>The synchronization status of the capability configuration. The sync status
     * can be one of the following:</p> <ul> <li> <p> <code>IN_SYNC</code> – The
     * gateway is running the capability configuration.</p> </li> <li> <p>
     * <code>OUT_OF_SYNC</code> – The gateway hasn't received the capability
     * configuration.</p> </li> <li> <p> <code>SYNC_FAILED</code> – The gateway
     * rejected the capability configuration.</p> </li> </ul>
     */
    inline GatewayCapabilitySummary& WithCapabilitySyncStatus(const CapabilitySyncStatus& value) { SetCapabilitySyncStatus(value); return *this;}

    /**
     * <p>The synchronization status of the capability configuration. The sync status
     * can be one of the following:</p> <ul> <li> <p> <code>IN_SYNC</code> – The
     * gateway is running the capability configuration.</p> </li> <li> <p>
     * <code>OUT_OF_SYNC</code> – The gateway hasn't received the capability
     * configuration.</p> </li> <li> <p> <code>SYNC_FAILED</code> – The gateway
     * rejected the capability configuration.</p> </li> </ul>
     */
    inline GatewayCapabilitySummary& WithCapabilitySyncStatus(CapabilitySyncStatus&& value) { SetCapabilitySyncStatus(std::move(value)); return *this;}

  private:

    Aws::String m_capabilityNamespace;
    bool m_capabilityNamespaceHasBeenSet = false;

    CapabilitySyncStatus m_capabilitySyncStatus;
    bool m_capabilitySyncStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
