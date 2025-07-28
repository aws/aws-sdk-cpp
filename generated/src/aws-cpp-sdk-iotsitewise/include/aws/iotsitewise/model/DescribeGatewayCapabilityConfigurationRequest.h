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
  class DescribeGatewayCapabilityConfigurationRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API DescribeGatewayCapabilityConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGatewayCapabilityConfiguration"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the gateway that defines the capability configuration.</p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    DescribeGatewayCapabilityConfigurationRequest& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

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
    DescribeGatewayCapabilityConfigurationRequest& WithCapabilityNamespace(CapabilityNamespaceT&& value) { SetCapabilityNamespace(std::forward<CapabilityNamespaceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_capabilityNamespace;
    bool m_capabilityNamespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
