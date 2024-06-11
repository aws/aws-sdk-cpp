/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ParticipantRole.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/RealTimeContactAnalysisTimeData.h>
#include <aws/connect/model/RealTimeContactAnalysisAttachment.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Segment containing list of attachments.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisSegmentAttachments">AWS
   * API Reference</a></p>
   */
  class RealTimeContactAnalysisSegmentAttachments
  {
  public:
    AWS_CONNECT_API RealTimeContactAnalysisSegmentAttachments();
    AWS_CONNECT_API RealTimeContactAnalysisSegmentAttachments(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisSegmentAttachments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the segment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline RealTimeContactAnalysisSegmentAttachments& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RealTimeContactAnalysisSegmentAttachments& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RealTimeContactAnalysisSegmentAttachments& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the participant.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    inline void SetParticipantId(const Aws::String& value) { m_participantIdHasBeenSet = true; m_participantId = value; }
    inline void SetParticipantId(Aws::String&& value) { m_participantIdHasBeenSet = true; m_participantId = std::move(value); }
    inline void SetParticipantId(const char* value) { m_participantIdHasBeenSet = true; m_participantId.assign(value); }
    inline RealTimeContactAnalysisSegmentAttachments& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}
    inline RealTimeContactAnalysisSegmentAttachments& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}
    inline RealTimeContactAnalysisSegmentAttachments& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the participant. For example, is it a customer, agent, or
     * system.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }
    inline RealTimeContactAnalysisSegmentAttachments& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}
    inline RealTimeContactAnalysisSegmentAttachments& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the participant. Can be redacted. </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline RealTimeContactAnalysisSegmentAttachments& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline RealTimeContactAnalysisSegmentAttachments& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline RealTimeContactAnalysisSegmentAttachments& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of objects describing an individual attachment.</p>
     */
    inline const Aws::Vector<RealTimeContactAnalysisAttachment>& GetAttachments() const{ return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    inline void SetAttachments(const Aws::Vector<RealTimeContactAnalysisAttachment>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }
    inline void SetAttachments(Aws::Vector<RealTimeContactAnalysisAttachment>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }
    inline RealTimeContactAnalysisSegmentAttachments& WithAttachments(const Aws::Vector<RealTimeContactAnalysisAttachment>& value) { SetAttachments(value); return *this;}
    inline RealTimeContactAnalysisSegmentAttachments& WithAttachments(Aws::Vector<RealTimeContactAnalysisAttachment>&& value) { SetAttachments(std::move(value)); return *this;}
    inline RealTimeContactAnalysisSegmentAttachments& AddAttachments(const RealTimeContactAnalysisAttachment& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }
    inline RealTimeContactAnalysisSegmentAttachments& AddAttachments(RealTimeContactAnalysisAttachment&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Field describing the time of the event. It can have different representations
     * of time.</p>
     */
    inline const RealTimeContactAnalysisTimeData& GetTime() const{ return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    inline void SetTime(const RealTimeContactAnalysisTimeData& value) { m_timeHasBeenSet = true; m_time = value; }
    inline void SetTime(RealTimeContactAnalysisTimeData&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }
    inline RealTimeContactAnalysisSegmentAttachments& WithTime(const RealTimeContactAnalysisTimeData& value) { SetTime(value); return *this;}
    inline RealTimeContactAnalysisSegmentAttachments& WithTime(RealTimeContactAnalysisTimeData&& value) { SetTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    ParticipantRole m_participantRole;
    bool m_participantRoleHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Vector<RealTimeContactAnalysisAttachment> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    RealTimeContactAnalysisTimeData m_time;
    bool m_timeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
