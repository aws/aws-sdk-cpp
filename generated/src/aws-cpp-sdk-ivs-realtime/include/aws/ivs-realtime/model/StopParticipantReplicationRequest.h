/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/IvsrealtimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

  /**
   */
  class StopParticipantReplicationRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API StopParticipantReplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopParticipantReplication"; }

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
    StopParticipantReplicationRequest& WithSourceStageArn(SourceStageArnT&& value) { SetSourceStageArn(std::forward<SourceStageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the stage where the participant has been replicated.</p>
     */
    inline const Aws::String& GetDestinationStageArn() const { return m_destinationStageArn; }
    inline bool DestinationStageArnHasBeenSet() const { return m_destinationStageArnHasBeenSet; }
    template<typename DestinationStageArnT = Aws::String>
    void SetDestinationStageArn(DestinationStageArnT&& value) { m_destinationStageArnHasBeenSet = true; m_destinationStageArn = std::forward<DestinationStageArnT>(value); }
    template<typename DestinationStageArnT = Aws::String>
    StopParticipantReplicationRequest& WithDestinationStageArn(DestinationStageArnT&& value) { SetDestinationStageArn(std::forward<DestinationStageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Participant ID of the publisher that has been replicated. This is assigned by
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
    StopParticipantReplicationRequest& WithParticipantId(ParticipantIdT&& value) { SetParticipantId(std::forward<ParticipantIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceStageArn;
    bool m_sourceStageArnHasBeenSet = false;

    Aws::String m_destinationStageArn;
    bool m_destinationStageArnHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
