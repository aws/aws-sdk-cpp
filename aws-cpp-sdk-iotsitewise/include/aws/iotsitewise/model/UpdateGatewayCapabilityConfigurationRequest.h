/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class UpdateGatewayCapabilityConfigurationRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API UpdateGatewayCapabilityConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGatewayCapabilityConfiguration"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the gateway to be updated.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The ID of the gateway to be updated.</p>
     */
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }

    /**
     * <p>The ID of the gateway to be updated.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The ID of the gateway to be updated.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }

    /**
     * <p>The ID of the gateway to be updated.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>The ID of the gateway to be updated.</p>
     */
    inline UpdateGatewayCapabilityConfigurationRequest& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of the gateway to be updated.</p>
     */
    inline UpdateGatewayCapabilityConfigurationRequest& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the gateway to be updated.</p>
     */
    inline UpdateGatewayCapabilityConfigurationRequest& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}


    /**
     * <p>The namespace of the gateway capability configuration to be updated. For
     * example, if you configure OPC-UA sources from the IoT SiteWise console, your
     * OPC-UA capability configuration has the namespace
     * <code>iotsitewise:opcuacollector:version</code>, where <code>version</code> is a
     * number such as <code>1</code>.</p>
     */
    inline const Aws::String& GetCapabilityNamespace() const{ return m_capabilityNamespace; }

    /**
     * <p>The namespace of the gateway capability configuration to be updated. For
     * example, if you configure OPC-UA sources from the IoT SiteWise console, your
     * OPC-UA capability configuration has the namespace
     * <code>iotsitewise:opcuacollector:version</code>, where <code>version</code> is a
     * number such as <code>1</code>.</p>
     */
    inline bool CapabilityNamespaceHasBeenSet() const { return m_capabilityNamespaceHasBeenSet; }

    /**
     * <p>The namespace of the gateway capability configuration to be updated. For
     * example, if you configure OPC-UA sources from the IoT SiteWise console, your
     * OPC-UA capability configuration has the namespace
     * <code>iotsitewise:opcuacollector:version</code>, where <code>version</code> is a
     * number such as <code>1</code>.</p>
     */
    inline void SetCapabilityNamespace(const Aws::String& value) { m_capabilityNamespaceHasBeenSet = true; m_capabilityNamespace = value; }

    /**
     * <p>The namespace of the gateway capability configuration to be updated. For
     * example, if you configure OPC-UA sources from the IoT SiteWise console, your
     * OPC-UA capability configuration has the namespace
     * <code>iotsitewise:opcuacollector:version</code>, where <code>version</code> is a
     * number such as <code>1</code>.</p>
     */
    inline void SetCapabilityNamespace(Aws::String&& value) { m_capabilityNamespaceHasBeenSet = true; m_capabilityNamespace = std::move(value); }

    /**
     * <p>The namespace of the gateway capability configuration to be updated. For
     * example, if you configure OPC-UA sources from the IoT SiteWise console, your
     * OPC-UA capability configuration has the namespace
     * <code>iotsitewise:opcuacollector:version</code>, where <code>version</code> is a
     * number such as <code>1</code>.</p>
     */
    inline void SetCapabilityNamespace(const char* value) { m_capabilityNamespaceHasBeenSet = true; m_capabilityNamespace.assign(value); }

    /**
     * <p>The namespace of the gateway capability configuration to be updated. For
     * example, if you configure OPC-UA sources from the IoT SiteWise console, your
     * OPC-UA capability configuration has the namespace
     * <code>iotsitewise:opcuacollector:version</code>, where <code>version</code> is a
     * number such as <code>1</code>.</p>
     */
    inline UpdateGatewayCapabilityConfigurationRequest& WithCapabilityNamespace(const Aws::String& value) { SetCapabilityNamespace(value); return *this;}

    /**
     * <p>The namespace of the gateway capability configuration to be updated. For
     * example, if you configure OPC-UA sources from the IoT SiteWise console, your
     * OPC-UA capability configuration has the namespace
     * <code>iotsitewise:opcuacollector:version</code>, where <code>version</code> is a
     * number such as <code>1</code>.</p>
     */
    inline UpdateGatewayCapabilityConfigurationRequest& WithCapabilityNamespace(Aws::String&& value) { SetCapabilityNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the gateway capability configuration to be updated. For
     * example, if you configure OPC-UA sources from the IoT SiteWise console, your
     * OPC-UA capability configuration has the namespace
     * <code>iotsitewise:opcuacollector:version</code>, where <code>version</code> is a
     * number such as <code>1</code>.</p>
     */
    inline UpdateGatewayCapabilityConfigurationRequest& WithCapabilityNamespace(const char* value) { SetCapabilityNamespace(value); return *this;}


    /**
     * <p>The JSON document that defines the configuration for the gateway capability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/configure-sources.html#configure-source-cli">Configuring
     * data sources (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetCapabilityConfiguration() const{ return m_capabilityConfiguration; }

    /**
     * <p>The JSON document that defines the configuration for the gateway capability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/configure-sources.html#configure-source-cli">Configuring
     * data sources (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool CapabilityConfigurationHasBeenSet() const { return m_capabilityConfigurationHasBeenSet; }

    /**
     * <p>The JSON document that defines the configuration for the gateway capability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/configure-sources.html#configure-source-cli">Configuring
     * data sources (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetCapabilityConfiguration(const Aws::String& value) { m_capabilityConfigurationHasBeenSet = true; m_capabilityConfiguration = value; }

    /**
     * <p>The JSON document that defines the configuration for the gateway capability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/configure-sources.html#configure-source-cli">Configuring
     * data sources (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetCapabilityConfiguration(Aws::String&& value) { m_capabilityConfigurationHasBeenSet = true; m_capabilityConfiguration = std::move(value); }

    /**
     * <p>The JSON document that defines the configuration for the gateway capability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/configure-sources.html#configure-source-cli">Configuring
     * data sources (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetCapabilityConfiguration(const char* value) { m_capabilityConfigurationHasBeenSet = true; m_capabilityConfiguration.assign(value); }

    /**
     * <p>The JSON document that defines the configuration for the gateway capability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/configure-sources.html#configure-source-cli">Configuring
     * data sources (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline UpdateGatewayCapabilityConfigurationRequest& WithCapabilityConfiguration(const Aws::String& value) { SetCapabilityConfiguration(value); return *this;}

    /**
     * <p>The JSON document that defines the configuration for the gateway capability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/configure-sources.html#configure-source-cli">Configuring
     * data sources (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline UpdateGatewayCapabilityConfigurationRequest& WithCapabilityConfiguration(Aws::String&& value) { SetCapabilityConfiguration(std::move(value)); return *this;}

    /**
     * <p>The JSON document that defines the configuration for the gateway capability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/configure-sources.html#configure-source-cli">Configuring
     * data sources (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline UpdateGatewayCapabilityConfigurationRequest& WithCapabilityConfiguration(const char* value) { SetCapabilityConfiguration(value); return *this;}

  private:

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_capabilityNamespace;
    bool m_capabilityNamespaceHasBeenSet = false;

    Aws::String m_capabilityConfiguration;
    bool m_capabilityConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
