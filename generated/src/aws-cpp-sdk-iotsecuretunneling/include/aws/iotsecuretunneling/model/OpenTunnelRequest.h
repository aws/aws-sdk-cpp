/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsecuretunneling/model/DestinationConfig.h>
#include <aws/iotsecuretunneling/model/TimeoutConfig.h>
#include <aws/iotsecuretunneling/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoTSecureTunneling
{
namespace Model
{

  /**
   */
  class OpenTunnelRequest : public IoTSecureTunnelingRequest
  {
  public:
    AWS_IOTSECURETUNNELING_API OpenTunnelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "OpenTunnel"; }

    AWS_IOTSECURETUNNELING_API Aws::String SerializePayload() const override;

    AWS_IOTSECURETUNNELING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A short text description of the tunnel. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A short text description of the tunnel. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A short text description of the tunnel. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A short text description of the tunnel. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A short text description of the tunnel. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A short text description of the tunnel. </p>
     */
    inline OpenTunnelRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A short text description of the tunnel. </p>
     */
    inline OpenTunnelRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A short text description of the tunnel. </p>
     */
    inline OpenTunnelRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A collection of tag metadata.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of tag metadata.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A collection of tag metadata.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of tag metadata.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A collection of tag metadata.</p>
     */
    inline OpenTunnelRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of tag metadata.</p>
     */
    inline OpenTunnelRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A collection of tag metadata.</p>
     */
    inline OpenTunnelRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A collection of tag metadata.</p>
     */
    inline OpenTunnelRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The destination configuration for the OpenTunnel request.</p>
     */
    inline const DestinationConfig& GetDestinationConfig() const{ return m_destinationConfig; }

    /**
     * <p>The destination configuration for the OpenTunnel request.</p>
     */
    inline bool DestinationConfigHasBeenSet() const { return m_destinationConfigHasBeenSet; }

    /**
     * <p>The destination configuration for the OpenTunnel request.</p>
     */
    inline void SetDestinationConfig(const DestinationConfig& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = value; }

    /**
     * <p>The destination configuration for the OpenTunnel request.</p>
     */
    inline void SetDestinationConfig(DestinationConfig&& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = std::move(value); }

    /**
     * <p>The destination configuration for the OpenTunnel request.</p>
     */
    inline OpenTunnelRequest& WithDestinationConfig(const DestinationConfig& value) { SetDestinationConfig(value); return *this;}

    /**
     * <p>The destination configuration for the OpenTunnel request.</p>
     */
    inline OpenTunnelRequest& WithDestinationConfig(DestinationConfig&& value) { SetDestinationConfig(std::move(value)); return *this;}


    /**
     * <p>Timeout configuration for a tunnel.</p>
     */
    inline const TimeoutConfig& GetTimeoutConfig() const{ return m_timeoutConfig; }

    /**
     * <p>Timeout configuration for a tunnel.</p>
     */
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }

    /**
     * <p>Timeout configuration for a tunnel.</p>
     */
    inline void SetTimeoutConfig(const TimeoutConfig& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = value; }

    /**
     * <p>Timeout configuration for a tunnel.</p>
     */
    inline void SetTimeoutConfig(TimeoutConfig&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::move(value); }

    /**
     * <p>Timeout configuration for a tunnel.</p>
     */
    inline OpenTunnelRequest& WithTimeoutConfig(const TimeoutConfig& value) { SetTimeoutConfig(value); return *this;}

    /**
     * <p>Timeout configuration for a tunnel.</p>
     */
    inline OpenTunnelRequest& WithTimeoutConfig(TimeoutConfig&& value) { SetTimeoutConfig(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    DestinationConfig m_destinationConfig;
    bool m_destinationConfigHasBeenSet = false;

    TimeoutConfig m_timeoutConfig;
    bool m_timeoutConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
