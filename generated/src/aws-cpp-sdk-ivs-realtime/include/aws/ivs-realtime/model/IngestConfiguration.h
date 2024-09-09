/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/IngestProtocol.h>
#include <aws/ivs-realtime/model/IngestConfigurationState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Object specifying an ingest configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/IngestConfiguration">AWS
   * API Reference</a></p>
   */
  class IngestConfiguration
  {
  public:
    AWS_IVSREALTIME_API IngestConfiguration();
    AWS_IVSREALTIME_API IngestConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API IngestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Ingest name</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline IngestConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline IngestConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline IngestConfiguration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ingest configuration ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline IngestConfiguration& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline IngestConfiguration& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline IngestConfiguration& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of ingest protocol that the user employs for broadcasting.</p>
     */
    inline const IngestProtocol& GetIngestProtocol() const{ return m_ingestProtocol; }
    inline bool IngestProtocolHasBeenSet() const { return m_ingestProtocolHasBeenSet; }
    inline void SetIngestProtocol(const IngestProtocol& value) { m_ingestProtocolHasBeenSet = true; m_ingestProtocol = value; }
    inline void SetIngestProtocol(IngestProtocol&& value) { m_ingestProtocolHasBeenSet = true; m_ingestProtocol = std::move(value); }
    inline IngestConfiguration& WithIngestProtocol(const IngestProtocol& value) { SetIngestProtocol(value); return *this;}
    inline IngestConfiguration& WithIngestProtocol(IngestProtocol&& value) { SetIngestProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ingest-key value for the RTMP(S) protocol.</p>
     */
    inline const Aws::String& GetStreamKey() const{ return m_streamKey; }
    inline bool StreamKeyHasBeenSet() const { return m_streamKeyHasBeenSet; }
    inline void SetStreamKey(const Aws::String& value) { m_streamKeyHasBeenSet = true; m_streamKey = value; }
    inline void SetStreamKey(Aws::String&& value) { m_streamKeyHasBeenSet = true; m_streamKey = std::move(value); }
    inline void SetStreamKey(const char* value) { m_streamKeyHasBeenSet = true; m_streamKey.assign(value); }
    inline IngestConfiguration& WithStreamKey(const Aws::String& value) { SetStreamKey(value); return *this;}
    inline IngestConfiguration& WithStreamKey(Aws::String&& value) { SetStreamKey(std::move(value)); return *this;}
    inline IngestConfiguration& WithStreamKey(const char* value) { SetStreamKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the stage with which the IngestConfiguration is associated.</p>
     */
    inline const Aws::String& GetStageArn() const{ return m_stageArn; }
    inline bool StageArnHasBeenSet() const { return m_stageArnHasBeenSet; }
    inline void SetStageArn(const Aws::String& value) { m_stageArnHasBeenSet = true; m_stageArn = value; }
    inline void SetStageArn(Aws::String&& value) { m_stageArnHasBeenSet = true; m_stageArn = std::move(value); }
    inline void SetStageArn(const char* value) { m_stageArnHasBeenSet = true; m_stageArn.assign(value); }
    inline IngestConfiguration& WithStageArn(const Aws::String& value) { SetStageArn(value); return *this;}
    inline IngestConfiguration& WithStageArn(Aws::String&& value) { SetStageArn(std::move(value)); return *this;}
    inline IngestConfiguration& WithStageArn(const char* value) { SetStageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the participant within the stage.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    inline void SetParticipantId(const Aws::String& value) { m_participantIdHasBeenSet = true; m_participantId = value; }
    inline void SetParticipantId(Aws::String&& value) { m_participantIdHasBeenSet = true; m_participantId = std::move(value); }
    inline void SetParticipantId(const char* value) { m_participantIdHasBeenSet = true; m_participantId.assign(value); }
    inline IngestConfiguration& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}
    inline IngestConfiguration& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}
    inline IngestConfiguration& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the ingest configuration. It is <code>ACTIVE</code> if a publisher
     * currently is publishing to the stage associated with the ingest
     * configuration.</p>
     */
    inline const IngestConfigurationState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const IngestConfigurationState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(IngestConfigurationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline IngestConfiguration& WithState(const IngestConfigurationState& value) { SetState(value); return *this;}
    inline IngestConfiguration& WithState(IngestConfigurationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer-assigned name to help identify the participant using the
     * IngestConfiguration; this can be used to link a participant to a user in the
     * customer’s own systems. This can be any UTF-8 encoded text. <i>This field is
     * exposed to all stage participants and should not be used for personally
     * identifying, confidential, or sensitive information.</i> </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline IngestConfiguration& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline IngestConfiguration& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline IngestConfiguration& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application-provided attributes to to store in the IngestConfiguration and
     * attach to a stage. Map keys and values can contain UTF-8 encoded text. The
     * maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline IngestConfiguration& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline IngestConfiguration& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline IngestConfiguration& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline IngestConfiguration& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline IngestConfiguration& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline IngestConfiguration& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline IngestConfiguration& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline IngestConfiguration& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline IngestConfiguration& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/best-practices-and-strats.html">Best
     * practices and strategies</a> in <i>Tagging AWS Resources and Tag Editor</i> for
     * details, including restrictions that apply to tags and "Tag naming limits and
     * requirements"; Amazon IVS has no constraints on tags beyond what is documented
     * there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline IngestConfiguration& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline IngestConfiguration& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline IngestConfiguration& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline IngestConfiguration& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline IngestConfiguration& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline IngestConfiguration& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline IngestConfiguration& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline IngestConfiguration& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline IngestConfiguration& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    IngestProtocol m_ingestProtocol;
    bool m_ingestProtocolHasBeenSet = false;

    Aws::String m_streamKey;
    bool m_streamKeyHasBeenSet = false;

    Aws::String m_stageArn;
    bool m_stageArnHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    IngestConfigurationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
