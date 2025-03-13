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
    AWS_IVSREALTIME_API IngestConfiguration() = default;
    AWS_IVSREALTIME_API IngestConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API IngestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Ingest name</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    IngestConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ingest configuration ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    IngestConfiguration& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of ingest protocol that the user employs for broadcasting.</p>
     */
    inline IngestProtocol GetIngestProtocol() const { return m_ingestProtocol; }
    inline bool IngestProtocolHasBeenSet() const { return m_ingestProtocolHasBeenSet; }
    inline void SetIngestProtocol(IngestProtocol value) { m_ingestProtocolHasBeenSet = true; m_ingestProtocol = value; }
    inline IngestConfiguration& WithIngestProtocol(IngestProtocol value) { SetIngestProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ingest-key value for the RTMP(S) protocol.</p>
     */
    inline const Aws::String& GetStreamKey() const { return m_streamKey; }
    inline bool StreamKeyHasBeenSet() const { return m_streamKeyHasBeenSet; }
    template<typename StreamKeyT = Aws::String>
    void SetStreamKey(StreamKeyT&& value) { m_streamKeyHasBeenSet = true; m_streamKey = std::forward<StreamKeyT>(value); }
    template<typename StreamKeyT = Aws::String>
    IngestConfiguration& WithStreamKey(StreamKeyT&& value) { SetStreamKey(std::forward<StreamKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the stage with which the IngestConfiguration is associated.</p>
     */
    inline const Aws::String& GetStageArn() const { return m_stageArn; }
    inline bool StageArnHasBeenSet() const { return m_stageArnHasBeenSet; }
    template<typename StageArnT = Aws::String>
    void SetStageArn(StageArnT&& value) { m_stageArnHasBeenSet = true; m_stageArn = std::forward<StageArnT>(value); }
    template<typename StageArnT = Aws::String>
    IngestConfiguration& WithStageArn(StageArnT&& value) { SetStageArn(std::forward<StageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the participant within the stage.</p>
     */
    inline const Aws::String& GetParticipantId() const { return m_participantId; }
    inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
    template<typename ParticipantIdT = Aws::String>
    void SetParticipantId(ParticipantIdT&& value) { m_participantIdHasBeenSet = true; m_participantId = std::forward<ParticipantIdT>(value); }
    template<typename ParticipantIdT = Aws::String>
    IngestConfiguration& WithParticipantId(ParticipantIdT&& value) { SetParticipantId(std::forward<ParticipantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the ingest configuration. It is <code>ACTIVE</code> if a publisher
     * currently is publishing to the stage associated with the ingest
     * configuration.</p>
     */
    inline IngestConfigurationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(IngestConfigurationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline IngestConfiguration& WithState(IngestConfigurationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer-assigned name to help identify the participant using the
     * IngestConfiguration; this can be used to link a participant to a user in the
     * customer’s own systems. This can be any UTF-8 encoded text. <i>This field is
     * exposed to all stage participants and should not be used for personally
     * identifying, confidential, or sensitive information.</i> </p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    IngestConfiguration& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application-provided attributes to to store in the IngestConfiguration and
     * attach to a stage. Map keys and values can contain UTF-8 encoded text. The
     * maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    IngestConfiguration& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    IngestConfiguration& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    IngestConfiguration& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    IngestConfiguration& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    IngestProtocol m_ingestProtocol{IngestProtocol::NOT_SET};
    bool m_ingestProtocolHasBeenSet = false;

    Aws::String m_streamKey;
    bool m_streamKeyHasBeenSet = false;

    Aws::String m_stageArn;
    bool m_stageArnHasBeenSet = false;

    Aws::String m_participantId;
    bool m_participantIdHasBeenSet = false;

    IngestConfigurationState m_state{IngestConfigurationState::NOT_SET};
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
