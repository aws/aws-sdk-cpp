/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/ReplicationState.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>Information about the replicated destination stage for a
   * participant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ParticipantReplica">AWS
   * API Reference</a></p>
   */
  class ParticipantReplica
  {
  public:
    AWS_IVSREALTIME_API ParticipantReplica() = default;
    AWS_IVSREALTIME_API ParticipantReplica(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API ParticipantReplica& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the stage from which this participant is replicated.</p>
     */
    inline const Aws::String& GetSourceStageArn() const { return m_sourceStageArn; }
    inline bool SourceStageArnHasBeenSet() const { return m_sourceStageArnHasBeenSet; }
    template<typename SourceStageArnT = Aws::String>
    void SetSourceStageArn(SourceStageArnT&& value) { m_sourceStageArnHasBeenSet = true; m_sourceStageArn = std::forward<SourceStageArnT>(value); }
    template<typename SourceStageArnT = Aws::String>
    ParticipantReplica& WithSourceStageArn(SourceStageArnT&& value) { SetSourceStageArn(std::forward<SourceStageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Participant ID of the publisher that will be replicated. This is assigned by
     * IVS and returned by <a>CreateParticipantToken</a> or the <code>jti</code> (JWT
     * ID) used to <a
     * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/getting-started-distribute-tokens.html#getting-started-distribute-tokens-self-signed">
     * create a self signed token</a>.</p>
     */
    inline const Aws::String& GetParticipantId() const { return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    template<typename ParticipantIdT = Aws::String>
    void SetParticipantId(ParticipantIdT&& value) { m_participantIdHasBeenSet = true; m_participantId = std::forward<ParticipantIdT>(value); }
    template<typename ParticipantIdT = Aws::String>
    ParticipantReplica& WithParticipantId(ParticipantIdT&& value) { SetParticipantId(std::forward<ParticipantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the session within the source stage.</p>
     */
    inline const Aws::String& GetSourceSessionId() const { return m_sourceSessionId; }
    inline bool SourceSessionIdHasBeenSet() const { return m_sourceSessionIdHasBeenSet; }
    template<typename SourceSessionIdT = Aws::String>
    void SetSourceSessionId(SourceSessionIdT&& value) { m_sourceSessionIdHasBeenSet = true; m_sourceSessionId = std::forward<SourceSessionIdT>(value); }
    template<typename SourceSessionIdT = Aws::String>
    ParticipantReplica& WithSourceSessionId(SourceSessionIdT&& value) { SetSourceSessionId(std::forward<SourceSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the stage where the participant is replicated.</p>
     */
    inline const Aws::String& GetDestinationStageArn() const { return m_destinationStageArn; }
    inline bool DestinationStageArnHasBeenSet() const { return m_destinationStageArnHasBeenSet; }
    template<typename DestinationStageArnT = Aws::String>
    void SetDestinationStageArn(DestinationStageArnT&& value) { m_destinationStageArnHasBeenSet = true; m_destinationStageArn = std::forward<DestinationStageArnT>(value); }
    template<typename DestinationStageArnT = Aws::String>
    ParticipantReplica& WithDestinationStageArn(DestinationStageArnT&& value) { SetDestinationStageArn(std::forward<DestinationStageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the session within the destination stage.</p>
     */
    inline const Aws::String& GetDestinationSessionId() const { return m_destinationSessionId; }
    inline bool DestinationSessionIdHasBeenSet() const { return m_destinationSessionIdHasBeenSet; }
    template<typename DestinationSessionIdT = Aws::String>
    void SetDestinationSessionId(DestinationSessionIdT&& value) { m_destinationSessionIdHasBeenSet = true; m_destinationSessionId = std::forward<DestinationSessionIdT>(value); }
    template<typename DestinationSessionIdT = Aws::String>
    ParticipantReplica& WithDestinationSessionId(DestinationSessionIdT&& value) { SetDestinationSessionId(std::forward<DestinationSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replica’s current replication state.</p>
     */
    inline ReplicationState GetReplicationState() const { return m_replicationState; }
    inline bool ReplicationStateHasBeenSet() const { return m_replicationStateHasBeenSet; }
    inline void SetReplicationState(ReplicationState value) { m_replicationStateHasBeenSet = true; m_replicationState = value; }
    inline ParticipantReplica& WithReplicationState(ReplicationState value) { SetReplicationState(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceStageArn;
    bool m_sourceStageArnHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    Aws::String m_sourceSessionId;
    bool m_sourceSessionIdHasBeenSet = false;

    Aws::String m_destinationStageArn;
    bool m_destinationStageArnHasBeenSet = false;

    Aws::String m_destinationSessionId;
    bool m_destinationSessionIdHasBeenSet = false;

    ReplicationState m_replicationState{ReplicationState::NOT_SET};
    bool m_replicationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
