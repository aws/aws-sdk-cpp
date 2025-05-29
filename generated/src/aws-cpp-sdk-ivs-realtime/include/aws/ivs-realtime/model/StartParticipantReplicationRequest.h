/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/IvsrealtimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

  /**
   */
  class StartParticipantReplicationRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API StartParticipantReplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartParticipantReplication"; }

    AWS_IVSREALTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ARN of the stage where the participant is publishing.</p>
     */
    inline const Aws::String& GetSourceStageArn() const { return m_sourceStageArn; }
    inline bool SourceStageArnHasBeenSet() const { return m_sourceStageArnHasBeenSet; }
    template<typename SourceStageArnT = Aws::String>
    void SetSourceStageArn(SourceStageArnT&& value) { m_sourceStageArnHasBeenSet = true; m_sourceStageArn = std::forward<SourceStageArnT>(value); }
    template<typename SourceStageArnT = Aws::String>
    StartParticipantReplicationRequest& WithSourceStageArn(SourceStageArnT&& value) { SetSourceStageArn(std::forward<SourceStageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the stage to which the participant will be replicated.</p>
     */
    inline const Aws::String& GetDestinationStageArn() const { return m_destinationStageArn; }
    inline bool DestinationStageArnHasBeenSet() const { return m_destinationStageArnHasBeenSet; }
    template<typename DestinationStageArnT = Aws::String>
    void SetDestinationStageArn(DestinationStageArnT&& value) { m_destinationStageArnHasBeenSet = true; m_destinationStageArn = std::forward<DestinationStageArnT>(value); }
    template<typename DestinationStageArnT = Aws::String>
    StartParticipantReplicationRequest& WithDestinationStageArn(DestinationStageArnT&& value) { SetDestinationStageArn(std::forward<DestinationStageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Participant ID of the publisher that will be replicated. This is assigned by
     * IVS and returned by <a>CreateParticipantToken</a> or the <code>jti</code> (JWT
     * ID) used to <a
     * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/getting-started-distribute-tokens.html#getting-started-distribute-tokens-self-signed">create
     * a self signed token</a>. </p>
     */
    inline const Aws::String& GetParticipantId() const { return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    template<typename ParticipantIdT = Aws::String>
    void SetParticipantId(ParticipantIdT&& value) { m_participantIdHasBeenSet = true; m_participantId = std::forward<ParticipantIdT>(value); }
    template<typename ParticipantIdT = Aws::String>
    StartParticipantReplicationRequest& WithParticipantId(ParticipantIdT&& value) { SetParticipantId(std::forward<ParticipantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the participant disconnects and then reconnects within the specified
     * interval, replication will continue to be <code>ACTIVE</code>. Default: 0.</p>
     */
    inline int GetReconnectWindowSeconds() const { return m_reconnectWindowSeconds; }
    inline bool ReconnectWindowSecondsHasBeenSet() const { return m_reconnectWindowSecondsHasBeenSet; }
    inline void SetReconnectWindowSeconds(int value) { m_reconnectWindowSecondsHasBeenSet = true; m_reconnectWindowSeconds = value; }
    inline StartParticipantReplicationRequest& WithReconnectWindowSeconds(int value) { SetReconnectWindowSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application-provided attributes to set on the replicated participant in the
     * destination stage. Map keys and values can contain UTF-8 encoded text. The
     * maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p> <p>These attributes are merged
     * with any attributes set for this participant when creating the token. If there
     * is overlap in keys, the values in these attributes are replaced.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    StartParticipantReplicationRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    StartParticipantReplicationRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_sourceStageArn;
    bool m_sourceStageArnHasBeenSet = false;

    Aws::String m_destinationStageArn;
    bool m_destinationStageArnHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    int m_reconnectWindowSeconds{0};
    bool m_reconnectWindowSecondsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
