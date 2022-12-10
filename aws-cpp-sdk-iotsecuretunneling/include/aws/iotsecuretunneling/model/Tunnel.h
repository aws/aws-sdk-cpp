/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsecuretunneling/model/TunnelStatus.h>
#include <aws/iotsecuretunneling/model/ConnectionState.h>
#include <aws/iotsecuretunneling/model/DestinationConfig.h>
#include <aws/iotsecuretunneling/model/TimeoutConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsecuretunneling/model/Tag.h>
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
namespace IoTSecureTunneling
{
namespace Model
{

  /**
   * <p>A connection between a source computer and a destination
   * device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/Tunnel">AWS
   * API Reference</a></p>
   */
  class Tunnel
  {
  public:
    AWS_IOTSECURETUNNELING_API Tunnel();
    AWS_IOTSECURETUNNELING_API Tunnel(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSECURETUNNELING_API Tunnel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSECURETUNNELING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique alpha-numeric ID that identifies a tunnel.</p>
     */
    inline const Aws::String& GetTunnelId() const{ return m_tunnelId; }

    /**
     * <p>A unique alpha-numeric ID that identifies a tunnel.</p>
     */
    inline bool TunnelIdHasBeenSet() const { return m_tunnelIdHasBeenSet; }

    /**
     * <p>A unique alpha-numeric ID that identifies a tunnel.</p>
     */
    inline void SetTunnelId(const Aws::String& value) { m_tunnelIdHasBeenSet = true; m_tunnelId = value; }

    /**
     * <p>A unique alpha-numeric ID that identifies a tunnel.</p>
     */
    inline void SetTunnelId(Aws::String&& value) { m_tunnelIdHasBeenSet = true; m_tunnelId = std::move(value); }

    /**
     * <p>A unique alpha-numeric ID that identifies a tunnel.</p>
     */
    inline void SetTunnelId(const char* value) { m_tunnelIdHasBeenSet = true; m_tunnelId.assign(value); }

    /**
     * <p>A unique alpha-numeric ID that identifies a tunnel.</p>
     */
    inline Tunnel& WithTunnelId(const Aws::String& value) { SetTunnelId(value); return *this;}

    /**
     * <p>A unique alpha-numeric ID that identifies a tunnel.</p>
     */
    inline Tunnel& WithTunnelId(Aws::String&& value) { SetTunnelId(std::move(value)); return *this;}

    /**
     * <p>A unique alpha-numeric ID that identifies a tunnel.</p>
     */
    inline Tunnel& WithTunnelId(const char* value) { SetTunnelId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a tunnel.</p>
     */
    inline const Aws::String& GetTunnelArn() const{ return m_tunnelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a tunnel.</p>
     */
    inline bool TunnelArnHasBeenSet() const { return m_tunnelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a tunnel.</p>
     */
    inline void SetTunnelArn(const Aws::String& value) { m_tunnelArnHasBeenSet = true; m_tunnelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a tunnel.</p>
     */
    inline void SetTunnelArn(Aws::String&& value) { m_tunnelArnHasBeenSet = true; m_tunnelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a tunnel.</p>
     */
    inline void SetTunnelArn(const char* value) { m_tunnelArnHasBeenSet = true; m_tunnelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a tunnel.</p>
     */
    inline Tunnel& WithTunnelArn(const Aws::String& value) { SetTunnelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a tunnel.</p>
     */
    inline Tunnel& WithTunnelArn(Aws::String&& value) { SetTunnelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a tunnel.</p>
     */
    inline Tunnel& WithTunnelArn(const char* value) { SetTunnelArn(value); return *this;}


    /**
     * <p>The status of a tunnel. Valid values are: Open and Closed.</p>
     */
    inline const TunnelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a tunnel. Valid values are: Open and Closed.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a tunnel. Valid values are: Open and Closed.</p>
     */
    inline void SetStatus(const TunnelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a tunnel. Valid values are: Open and Closed.</p>
     */
    inline void SetStatus(TunnelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a tunnel. Valid values are: Open and Closed.</p>
     */
    inline Tunnel& WithStatus(const TunnelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a tunnel. Valid values are: Open and Closed.</p>
     */
    inline Tunnel& WithStatus(TunnelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The connection state of the source application.</p>
     */
    inline const ConnectionState& GetSourceConnectionState() const{ return m_sourceConnectionState; }

    /**
     * <p>The connection state of the source application.</p>
     */
    inline bool SourceConnectionStateHasBeenSet() const { return m_sourceConnectionStateHasBeenSet; }

    /**
     * <p>The connection state of the source application.</p>
     */
    inline void SetSourceConnectionState(const ConnectionState& value) { m_sourceConnectionStateHasBeenSet = true; m_sourceConnectionState = value; }

    /**
     * <p>The connection state of the source application.</p>
     */
    inline void SetSourceConnectionState(ConnectionState&& value) { m_sourceConnectionStateHasBeenSet = true; m_sourceConnectionState = std::move(value); }

    /**
     * <p>The connection state of the source application.</p>
     */
    inline Tunnel& WithSourceConnectionState(const ConnectionState& value) { SetSourceConnectionState(value); return *this;}

    /**
     * <p>The connection state of the source application.</p>
     */
    inline Tunnel& WithSourceConnectionState(ConnectionState&& value) { SetSourceConnectionState(std::move(value)); return *this;}


    /**
     * <p>The connection state of the destination application.</p>
     */
    inline const ConnectionState& GetDestinationConnectionState() const{ return m_destinationConnectionState; }

    /**
     * <p>The connection state of the destination application.</p>
     */
    inline bool DestinationConnectionStateHasBeenSet() const { return m_destinationConnectionStateHasBeenSet; }

    /**
     * <p>The connection state of the destination application.</p>
     */
    inline void SetDestinationConnectionState(const ConnectionState& value) { m_destinationConnectionStateHasBeenSet = true; m_destinationConnectionState = value; }

    /**
     * <p>The connection state of the destination application.</p>
     */
    inline void SetDestinationConnectionState(ConnectionState&& value) { m_destinationConnectionStateHasBeenSet = true; m_destinationConnectionState = std::move(value); }

    /**
     * <p>The connection state of the destination application.</p>
     */
    inline Tunnel& WithDestinationConnectionState(const ConnectionState& value) { SetDestinationConnectionState(value); return *this;}

    /**
     * <p>The connection state of the destination application.</p>
     */
    inline Tunnel& WithDestinationConnectionState(ConnectionState&& value) { SetDestinationConnectionState(std::move(value)); return *this;}


    /**
     * <p>A description of the tunnel.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the tunnel.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the tunnel.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the tunnel.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the tunnel.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the tunnel.</p>
     */
    inline Tunnel& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the tunnel.</p>
     */
    inline Tunnel& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the tunnel.</p>
     */
    inline Tunnel& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The destination configuration that specifies the thing name of the
     * destination device and a service name that the local proxy uses to connect to
     * the destination application.</p>
     */
    inline const DestinationConfig& GetDestinationConfig() const{ return m_destinationConfig; }

    /**
     * <p>The destination configuration that specifies the thing name of the
     * destination device and a service name that the local proxy uses to connect to
     * the destination application.</p>
     */
    inline bool DestinationConfigHasBeenSet() const { return m_destinationConfigHasBeenSet; }

    /**
     * <p>The destination configuration that specifies the thing name of the
     * destination device and a service name that the local proxy uses to connect to
     * the destination application.</p>
     */
    inline void SetDestinationConfig(const DestinationConfig& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = value; }

    /**
     * <p>The destination configuration that specifies the thing name of the
     * destination device and a service name that the local proxy uses to connect to
     * the destination application.</p>
     */
    inline void SetDestinationConfig(DestinationConfig&& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = std::move(value); }

    /**
     * <p>The destination configuration that specifies the thing name of the
     * destination device and a service name that the local proxy uses to connect to
     * the destination application.</p>
     */
    inline Tunnel& WithDestinationConfig(const DestinationConfig& value) { SetDestinationConfig(value); return *this;}

    /**
     * <p>The destination configuration that specifies the thing name of the
     * destination device and a service name that the local proxy uses to connect to
     * the destination application.</p>
     */
    inline Tunnel& WithDestinationConfig(DestinationConfig&& value) { SetDestinationConfig(std::move(value)); return *this;}


    /**
     * <p>Timeout configuration for the tunnel.</p>
     */
    inline const TimeoutConfig& GetTimeoutConfig() const{ return m_timeoutConfig; }

    /**
     * <p>Timeout configuration for the tunnel.</p>
     */
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }

    /**
     * <p>Timeout configuration for the tunnel.</p>
     */
    inline void SetTimeoutConfig(const TimeoutConfig& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = value; }

    /**
     * <p>Timeout configuration for the tunnel.</p>
     */
    inline void SetTimeoutConfig(TimeoutConfig&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::move(value); }

    /**
     * <p>Timeout configuration for the tunnel.</p>
     */
    inline Tunnel& WithTimeoutConfig(const TimeoutConfig& value) { SetTimeoutConfig(value); return *this;}

    /**
     * <p>Timeout configuration for the tunnel.</p>
     */
    inline Tunnel& WithTimeoutConfig(TimeoutConfig&& value) { SetTimeoutConfig(std::move(value)); return *this;}


    /**
     * <p>A list of tag metadata associated with the secure tunnel.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tag metadata associated with the secure tunnel.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tag metadata associated with the secure tunnel.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tag metadata associated with the secure tunnel.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tag metadata associated with the secure tunnel.</p>
     */
    inline Tunnel& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag metadata associated with the secure tunnel.</p>
     */
    inline Tunnel& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tag metadata associated with the secure tunnel.</p>
     */
    inline Tunnel& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tag metadata associated with the secure tunnel.</p>
     */
    inline Tunnel& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The time when the tunnel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the tunnel was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the tunnel was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the tunnel was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the tunnel was created.</p>
     */
    inline Tunnel& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the tunnel was created.</p>
     */
    inline Tunnel& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The last time the tunnel was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The last time the tunnel was updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The last time the tunnel was updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The last time the tunnel was updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The last time the tunnel was updated.</p>
     */
    inline Tunnel& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The last time the tunnel was updated.</p>
     */
    inline Tunnel& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_tunnelId;
    bool m_tunnelIdHasBeenSet = false;

    Aws::String m_tunnelArn;
    bool m_tunnelArnHasBeenSet = false;

    TunnelStatus m_status;
    bool m_statusHasBeenSet = false;

    ConnectionState m_sourceConnectionState;
    bool m_sourceConnectionStateHasBeenSet = false;

    ConnectionState m_destinationConnectionState;
    bool m_destinationConnectionStateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DestinationConfig m_destinationConfig;
    bool m_destinationConfigHasBeenSet = false;

    TimeoutConfig m_timeoutConfig;
    bool m_timeoutConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
