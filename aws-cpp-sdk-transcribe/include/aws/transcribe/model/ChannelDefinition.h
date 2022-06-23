/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/ParticipantRole.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>For a call analytics job, an object that indicates the audio channel that
   * belongs to the agent and the audio channel that belongs to the
   * customer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ChannelDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API ChannelDefinition
  {
  public:
    ChannelDefinition();
    ChannelDefinition(Aws::Utils::Json::JsonView jsonValue);
    ChannelDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that indicates the audio channel.</p>
     */
    inline int GetChannelId() const{ return m_channelId; }

    /**
     * <p>A value that indicates the audio channel.</p>
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * <p>A value that indicates the audio channel.</p>
     */
    inline void SetChannelId(int value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * <p>A value that indicates the audio channel.</p>
     */
    inline ChannelDefinition& WithChannelId(int value) { SetChannelId(value); return *this;}


    /**
     * <p>Indicates whether the person speaking on the audio channel is the agent or
     * customer.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }

    /**
     * <p>Indicates whether the person speaking on the audio channel is the agent or
     * customer.</p>
     */
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }

    /**
     * <p>Indicates whether the person speaking on the audio channel is the agent or
     * customer.</p>
     */
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }

    /**
     * <p>Indicates whether the person speaking on the audio channel is the agent or
     * customer.</p>
     */
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }

    /**
     * <p>Indicates whether the person speaking on the audio channel is the agent or
     * customer.</p>
     */
    inline ChannelDefinition& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}

    /**
     * <p>Indicates whether the person speaking on the audio channel is the agent or
     * customer.</p>
     */
    inline ChannelDefinition& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}

  private:

    int m_channelId;
    bool m_channelIdHasBeenSet;

    ParticipantRole m_participantRole;
    bool m_participantRoleHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
