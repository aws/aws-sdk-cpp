/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/IvsrealtimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ivs-realtime/model/ParticipantTokenConfiguration.h>
#include <utility>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

  /**
   */
  class CreateStageRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API CreateStageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStage"; }

    AWS_IVSREALTIME_API Aws::String SerializePayload() const override;


    /**
     * <p>Optional name that can be specified for the stage being created.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Optional name that can be specified for the stage being created.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Optional name that can be specified for the stage being created.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Optional name that can be specified for the stage being created.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Optional name that can be specified for the stage being created.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Optional name that can be specified for the stage being created.</p>
     */
    inline CreateStageRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Optional name that can be specified for the stage being created.</p>
     */
    inline CreateStageRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Optional name that can be specified for the stage being created.</p>
     */
    inline CreateStageRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Array of participant token configuration objects to attach to the new
     * stage.</p>
     */
    inline const Aws::Vector<ParticipantTokenConfiguration>& GetParticipantTokenConfigurations() const{ return m_participantTokenConfigurations; }

    /**
     * <p>Array of participant token configuration objects to attach to the new
     * stage.</p>
     */
    inline bool ParticipantTokenConfigurationsHasBeenSet() const { return m_participantTokenConfigurationsHasBeenSet; }

    /**
     * <p>Array of participant token configuration objects to attach to the new
     * stage.</p>
     */
    inline void SetParticipantTokenConfigurations(const Aws::Vector<ParticipantTokenConfiguration>& value) { m_participantTokenConfigurationsHasBeenSet = true; m_participantTokenConfigurations = value; }

    /**
     * <p>Array of participant token configuration objects to attach to the new
     * stage.</p>
     */
    inline void SetParticipantTokenConfigurations(Aws::Vector<ParticipantTokenConfiguration>&& value) { m_participantTokenConfigurationsHasBeenSet = true; m_participantTokenConfigurations = std::move(value); }

    /**
     * <p>Array of participant token configuration objects to attach to the new
     * stage.</p>
     */
    inline CreateStageRequest& WithParticipantTokenConfigurations(const Aws::Vector<ParticipantTokenConfiguration>& value) { SetParticipantTokenConfigurations(value); return *this;}

    /**
     * <p>Array of participant token configuration objects to attach to the new
     * stage.</p>
     */
    inline CreateStageRequest& WithParticipantTokenConfigurations(Aws::Vector<ParticipantTokenConfiguration>&& value) { SetParticipantTokenConfigurations(std::move(value)); return *this;}

    /**
     * <p>Array of participant token configuration objects to attach to the new
     * stage.</p>
     */
    inline CreateStageRequest& AddParticipantTokenConfigurations(const ParticipantTokenConfiguration& value) { m_participantTokenConfigurationsHasBeenSet = true; m_participantTokenConfigurations.push_back(value); return *this; }

    /**
     * <p>Array of participant token configuration objects to attach to the new
     * stage.</p>
     */
    inline CreateStageRequest& AddParticipantTokenConfigurations(ParticipantTokenConfiguration&& value) { m_participantTokenConfigurationsHasBeenSet = true; m_participantTokenConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there. </p>
     */
    inline CreateStageRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there. </p>
     */
    inline CreateStageRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there. </p>
     */
    inline CreateStageRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there. </p>
     */
    inline CreateStageRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there. </p>
     */
    inline CreateStageRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there. </p>
     */
    inline CreateStageRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there. </p>
     */
    inline CreateStageRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there. </p>
     */
    inline CreateStageRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there. </p>
     */
    inline CreateStageRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ParticipantTokenConfiguration> m_participantTokenConfigurations;
    bool m_participantTokenConfigurationsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
