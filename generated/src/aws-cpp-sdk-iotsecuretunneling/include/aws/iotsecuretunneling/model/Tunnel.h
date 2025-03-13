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
    AWS_IOTSECURETUNNELING_API Tunnel() = default;
    AWS_IOTSECURETUNNELING_API Tunnel(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSECURETUNNELING_API Tunnel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSECURETUNNELING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique alpha-numeric ID that identifies a tunnel.</p>
     */
    inline const Aws::String& GetTunnelId() const { return m_tunnelId; }
    inline bool TunnelIdHasBeenSet() const { return m_tunnelIdHasBeenSet; }
    template<typename TunnelIdT = Aws::String>
    void SetTunnelId(TunnelIdT&& value) { m_tunnelIdHasBeenSet = true; m_tunnelId = std::forward<TunnelIdT>(value); }
    template<typename TunnelIdT = Aws::String>
    Tunnel& WithTunnelId(TunnelIdT&& value) { SetTunnelId(std::forward<TunnelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a tunnel.</p>
     */
    inline const Aws::String& GetTunnelArn() const { return m_tunnelArn; }
    inline bool TunnelArnHasBeenSet() const { return m_tunnelArnHasBeenSet; }
    template<typename TunnelArnT = Aws::String>
    void SetTunnelArn(TunnelArnT&& value) { m_tunnelArnHasBeenSet = true; m_tunnelArn = std::forward<TunnelArnT>(value); }
    template<typename TunnelArnT = Aws::String>
    Tunnel& WithTunnelArn(TunnelArnT&& value) { SetTunnelArn(std::forward<TunnelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a tunnel. Valid values are: Open and Closed.</p>
     */
    inline TunnelStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TunnelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Tunnel& WithStatus(TunnelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection state of the source application.</p>
     */
    inline const ConnectionState& GetSourceConnectionState() const { return m_sourceConnectionState; }
    inline bool SourceConnectionStateHasBeenSet() const { return m_sourceConnectionStateHasBeenSet; }
    template<typename SourceConnectionStateT = ConnectionState>
    void SetSourceConnectionState(SourceConnectionStateT&& value) { m_sourceConnectionStateHasBeenSet = true; m_sourceConnectionState = std::forward<SourceConnectionStateT>(value); }
    template<typename SourceConnectionStateT = ConnectionState>
    Tunnel& WithSourceConnectionState(SourceConnectionStateT&& value) { SetSourceConnectionState(std::forward<SourceConnectionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection state of the destination application.</p>
     */
    inline const ConnectionState& GetDestinationConnectionState() const { return m_destinationConnectionState; }
    inline bool DestinationConnectionStateHasBeenSet() const { return m_destinationConnectionStateHasBeenSet; }
    template<typename DestinationConnectionStateT = ConnectionState>
    void SetDestinationConnectionState(DestinationConnectionStateT&& value) { m_destinationConnectionStateHasBeenSet = true; m_destinationConnectionState = std::forward<DestinationConnectionStateT>(value); }
    template<typename DestinationConnectionStateT = ConnectionState>
    Tunnel& WithDestinationConnectionState(DestinationConnectionStateT&& value) { SetDestinationConnectionState(std::forward<DestinationConnectionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the tunnel.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Tunnel& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination configuration that specifies the thing name of the
     * destination device and a service name that the local proxy uses to connect to
     * the destination application.</p>
     */
    inline const DestinationConfig& GetDestinationConfig() const { return m_destinationConfig; }
    inline bool DestinationConfigHasBeenSet() const { return m_destinationConfigHasBeenSet; }
    template<typename DestinationConfigT = DestinationConfig>
    void SetDestinationConfig(DestinationConfigT&& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = std::forward<DestinationConfigT>(value); }
    template<typename DestinationConfigT = DestinationConfig>
    Tunnel& WithDestinationConfig(DestinationConfigT&& value) { SetDestinationConfig(std::forward<DestinationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timeout configuration for the tunnel.</p>
     */
    inline const TimeoutConfig& GetTimeoutConfig() const { return m_timeoutConfig; }
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }
    template<typename TimeoutConfigT = TimeoutConfig>
    void SetTimeoutConfig(TimeoutConfigT&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::forward<TimeoutConfigT>(value); }
    template<typename TimeoutConfigT = TimeoutConfig>
    Tunnel& WithTimeoutConfig(TimeoutConfigT&& value) { SetTimeoutConfig(std::forward<TimeoutConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag metadata associated with the secure tunnel.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Tunnel& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Tunnel& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when the tunnel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Tunnel& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the tunnel was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    Tunnel& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tunnelId;
    bool m_tunnelIdHasBeenSet = false;

    Aws::String m_tunnelArn;
    bool m_tunnelArnHasBeenSet = false;

    TunnelStatus m_status{TunnelStatus::NOT_SET};
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

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
