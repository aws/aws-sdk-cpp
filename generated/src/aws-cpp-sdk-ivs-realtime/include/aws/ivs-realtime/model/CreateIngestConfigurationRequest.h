/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/IvsrealtimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ivs-realtime/model/IngestProtocol.h>
#include <utility>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

  /**
   */
  class CreateIngestConfigurationRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API CreateIngestConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIngestConfiguration"; }

    AWS_IVSREALTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Optional name that can be specified for the IngestConfiguration being
     * created.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateIngestConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateIngestConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateIngestConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline CreateIngestConfigurationRequest& WithStageArn(const Aws::String& value) { SetStageArn(value); return *this;}
    inline CreateIngestConfigurationRequest& WithStageArn(Aws::String&& value) { SetStageArn(std::move(value)); return *this;}
    inline CreateIngestConfigurationRequest& WithStageArn(const char* value) { SetStageArn(value); return *this;}
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
    inline CreateIngestConfigurationRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline CreateIngestConfigurationRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline CreateIngestConfigurationRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application-provided attributes to store in the IngestConfiguration and
     * attach to a stage. Map keys and values can contain UTF-8 encoded text. The
     * maximum length of this field is 1 KB total. <i>This field is exposed to all
     * stage participants and should not be used for personally identifying,
     * confidential, or sensitive information.</i> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline CreateIngestConfigurationRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline CreateIngestConfigurationRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline CreateIngestConfigurationRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline CreateIngestConfigurationRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline CreateIngestConfigurationRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline CreateIngestConfigurationRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateIngestConfigurationRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline CreateIngestConfigurationRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline CreateIngestConfigurationRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Type of ingest protocol that the user employs to broadcast. If this is set to
     * <code>RTMP</code>, <code>insecureIngest</code> must be set to
     * <code>true</code>.</p>
     */
    inline const IngestProtocol& GetIngestProtocol() const{ return m_ingestProtocol; }
    inline bool IngestProtocolHasBeenSet() const { return m_ingestProtocolHasBeenSet; }
    inline void SetIngestProtocol(const IngestProtocol& value) { m_ingestProtocolHasBeenSet = true; m_ingestProtocol = value; }
    inline void SetIngestProtocol(IngestProtocol&& value) { m_ingestProtocolHasBeenSet = true; m_ingestProtocol = std::move(value); }
    inline CreateIngestConfigurationRequest& WithIngestProtocol(const IngestProtocol& value) { SetIngestProtocol(value); return *this;}
    inline CreateIngestConfigurationRequest& WithIngestProtocol(IngestProtocol&& value) { SetIngestProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the stage allows insecure RTMP ingest. This must be set to
     * <code>true</code>, if <code>ingestProtocol</code> is set to <code>RTMP</code>.
     * Default: <code>false</code>. </p>
     */
    inline bool GetInsecureIngest() const{ return m_insecureIngest; }
    inline bool InsecureIngestHasBeenSet() const { return m_insecureIngestHasBeenSet; }
    inline void SetInsecureIngest(bool value) { m_insecureIngestHasBeenSet = true; m_insecureIngest = value; }
    inline CreateIngestConfigurationRequest& WithInsecureIngest(bool value) { SetInsecureIngest(value); return *this;}
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
    inline CreateIngestConfigurationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateIngestConfigurationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateIngestConfigurationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateIngestConfigurationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateIngestConfigurationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateIngestConfigurationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateIngestConfigurationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateIngestConfigurationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateIngestConfigurationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_stageArn;
    bool m_stageArnHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    IngestProtocol m_ingestProtocol;
    bool m_ingestProtocolHasBeenSet = false;

    bool m_insecureIngest;
    bool m_insecureIngestHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
