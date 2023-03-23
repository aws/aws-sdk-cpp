/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/ParticipantRole.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>Defines an audio channel in a Kinesis video stream.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ChannelDefinition">AWS
   * API Reference</a></p>
   */
  class ChannelDefinition
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ChannelDefinition();
    AWS_CHIMESDKMEDIAPIPELINES_API ChannelDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API ChannelDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The channel ID.</p>
     */
    inline int GetChannelId() const{ return m_channelId; }

    /**
     * <p>The channel ID.</p>
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * <p>The channel ID.</p>
     */
    inline void SetChannelId(int value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * <p>The channel ID.</p>
     */
    inline ChannelDefinition& WithChannelId(int value) { SetChannelId(value); return *this;}


    /**
     * <p>Specifies whether the audio in a channel belongs to the <code>AGENT</code> or
     * <code>CUSTOMER</code>.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }

    /**
     * <p>Specifies whether the audio in a channel belongs to the <code>AGENT</code> or
     * <code>CUSTOMER</code>.</p>
     */
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }

    /**
     * <p>Specifies whether the audio in a channel belongs to the <code>AGENT</code> or
     * <code>CUSTOMER</code>.</p>
     */
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }

    /**
     * <p>Specifies whether the audio in a channel belongs to the <code>AGENT</code> or
     * <code>CUSTOMER</code>.</p>
     */
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }

    /**
     * <p>Specifies whether the audio in a channel belongs to the <code>AGENT</code> or
     * <code>CUSTOMER</code>.</p>
     */
    inline ChannelDefinition& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}

    /**
     * <p>Specifies whether the audio in a channel belongs to the <code>AGENT</code> or
     * <code>CUSTOMER</code>.</p>
     */
    inline ChannelDefinition& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}

  private:

    int m_channelId;
    bool m_channelIdHasBeenSet = false;

    ParticipantRole m_participantRole;
    bool m_participantRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
