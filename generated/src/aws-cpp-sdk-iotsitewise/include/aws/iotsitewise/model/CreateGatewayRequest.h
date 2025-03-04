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
    AWS_IOTSITEWISE_API CreateGatewayRequest();

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
    inline const Aws::String& GetGatewayName() const{ return m_gatewayName; }
    inline bool GatewayNameHasBeenSet() const { return m_gatewayNameHasBeenSet; }
    inline void SetGatewayName(const Aws::String& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = value; }
    inline void SetGatewayName(Aws::String&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = std::move(value); }
    inline void SetGatewayName(const char* value) { m_gatewayNameHasBeenSet = true; m_gatewayName.assign(value); }
    inline CreateGatewayRequest& WithGatewayName(const Aws::String& value) { SetGatewayName(value); return *this;}
    inline CreateGatewayRequest& WithGatewayName(Aws::String&& value) { SetGatewayName(std::move(value)); return *this;}
    inline CreateGatewayRequest& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gateway's platform. You can only specify one platform in a gateway.</p>
     */
    inline const GatewayPlatform& GetGatewayPlatform() const{ return m_gatewayPlatform; }
    inline bool GatewayPlatformHasBeenSet() const { return m_gatewayPlatformHasBeenSet; }
    inline void SetGatewayPlatform(const GatewayPlatform& value) { m_gatewayPlatformHasBeenSet = true; m_gatewayPlatform = value; }
    inline void SetGatewayPlatform(GatewayPlatform&& value) { m_gatewayPlatformHasBeenSet = true; m_gatewayPlatform = std::move(value); }
    inline CreateGatewayRequest& WithGatewayPlatform(const GatewayPlatform& value) { SetGatewayPlatform(value); return *this;}
    inline CreateGatewayRequest& WithGatewayPlatform(GatewayPlatform&& value) { SetGatewayPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the gateway to create. Specify <code>3</code> to create an
     * MQTT-enabled, V3 gateway and <code>2</code> To create a Classic streams, V2
     * gateway. If the version isn't specified, a Classic streams, V2 gateway is
     * created by default.</p> <p> We recommend creating an MQTT-enabled, V3 gateway
     * for self-hosted gateways. SiteWise Edge gateways on Siemens Industrial Edge
     * should use gateway version <code>2</code>. For more information on gateway
     * versions, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/gw-self-host-gg2.html">
     * Self-host a SiteWise Edge gateway with IoT Greengrass V2</a>.</p>
     */
    inline const Aws::String& GetGatewayVersion() const{ return m_gatewayVersion; }
    inline bool GatewayVersionHasBeenSet() const { return m_gatewayVersionHasBeenSet; }
    inline void SetGatewayVersion(const Aws::String& value) { m_gatewayVersionHasBeenSet = true; m_gatewayVersion = value; }
    inline void SetGatewayVersion(Aws::String&& value) { m_gatewayVersionHasBeenSet = true; m_gatewayVersion = std::move(value); }
    inline void SetGatewayVersion(const char* value) { m_gatewayVersionHasBeenSet = true; m_gatewayVersion.assign(value); }
    inline CreateGatewayRequest& WithGatewayVersion(const Aws::String& value) { SetGatewayVersion(value); return *this;}
    inline CreateGatewayRequest& WithGatewayVersion(Aws::String&& value) { SetGatewayVersion(std::move(value)); return *this;}
    inline CreateGatewayRequest& WithGatewayVersion(const char* value) { SetGatewayVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that contain metadata for the gateway. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateGatewayRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateGatewayRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateGatewayRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateGatewayRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateGatewayRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateGatewayRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateGatewayRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateGatewayRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateGatewayRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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
