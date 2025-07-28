/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/GatewayPlatform.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class CreateGatewayRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API CreateGatewayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGateway"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique name for the gateway.</p>
     */
    inline const Aws::String& GetGatewayName() const { return m_gatewayName; }
    inline bool GatewayNameHasBeenSet() const { return m_gatewayNameHasBeenSet; }
    template<typename GatewayNameT = Aws::String>
    void SetGatewayName(GatewayNameT&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = std::forward<GatewayNameT>(value); }
    template<typename GatewayNameT = Aws::String>
    CreateGatewayRequest& WithGatewayName(GatewayNameT&& value) { SetGatewayName(std::forward<GatewayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gateway's platform. You can only specify one platform in a gateway.</p>
     */
    inline const GatewayPlatform& GetGatewayPlatform() const { return m_gatewayPlatform; }
    inline bool GatewayPlatformHasBeenSet() const { return m_gatewayPlatformHasBeenSet; }
    template<typename GatewayPlatformT = GatewayPlatform>
    void SetGatewayPlatform(GatewayPlatformT&& value) { m_gatewayPlatformHasBeenSet = true; m_gatewayPlatform = std::forward<GatewayPlatformT>(value); }
    template<typename GatewayPlatformT = GatewayPlatform>
    CreateGatewayRequest& WithGatewayPlatform(GatewayPlatformT&& value) { SetGatewayPlatform(std::forward<GatewayPlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the gateway to create. Specify <code>3</code> to create an
     * MQTT-enabled, V3 gateway and <code>2</code> to create a Classic streams, V2
     * gateway. If not specified, the default is <code>2</code> (Classic streams, V2
     * gateway).</p>  <p>When creating a V3 gateway
     * (<code>gatewayVersion=3</code>) with the <code>GreengrassV2</code> platform, you
     * must also specify the <code>coreDeviceOperatingSystem</code> parameter.</p>
     *  <p> We recommend creating an MQTT-enabled gateway for self-hosted
     * gateways and Siemens Industrial Edge gateways. For more information on gateway
     * versions, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/gateways.html">Use
     * Amazon Web Services IoT SiteWise Edge Edge gateways</a>.</p>
     */
    inline const Aws::String& GetGatewayVersion() const { return m_gatewayVersion; }
    inline bool GatewayVersionHasBeenSet() const { return m_gatewayVersionHasBeenSet; }
    template<typename GatewayVersionT = Aws::String>
    void SetGatewayVersion(GatewayVersionT&& value) { m_gatewayVersionHasBeenSet = true; m_gatewayVersion = std::forward<GatewayVersionT>(value); }
    template<typename GatewayVersionT = Aws::String>
    CreateGatewayRequest& WithGatewayVersion(GatewayVersionT&& value) { SetGatewayVersion(std::forward<GatewayVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that contain metadata for the gateway. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateGatewayRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateGatewayRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_gatewayName;
    bool m_gatewayNameHasBeenSet = false;

    GatewayPlatform m_gatewayPlatform;
    bool m_gatewayPlatformHasBeenSet = false;

    Aws::String m_gatewayVersion;
    bool m_gatewayVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
