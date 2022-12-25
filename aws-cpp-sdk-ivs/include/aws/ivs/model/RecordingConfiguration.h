/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/model/DestinationConfiguration.h>
#include <aws/ivs/model/RecordingConfigurationState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ivs/model/ThumbnailConfiguration.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>An object representing a configuration to record a channel
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/RecordingConfiguration">AWS
   * API Reference</a></p>
   */
  class RecordingConfiguration
  {
  public:
    AWS_IVS_API RecordingConfiguration();
    AWS_IVS_API RecordingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API RecordingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Recording-configuration ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Recording-configuration ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Recording-configuration ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Recording-configuration ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Recording-configuration ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Recording-configuration ARN.</p>
     */
    inline RecordingConfiguration& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Recording-configuration ARN.</p>
     */
    inline RecordingConfiguration& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Recording-configuration ARN.</p>
     */
    inline RecordingConfiguration& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A complex type that contains information about where recorded video will be
     * stored.</p>
     */
    inline const DestinationConfiguration& GetDestinationConfiguration() const{ return m_destinationConfiguration; }

    /**
     * <p>A complex type that contains information about where recorded video will be
     * stored.</p>
     */
    inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }

    /**
     * <p>A complex type that contains information about where recorded video will be
     * stored.</p>
     */
    inline void SetDestinationConfiguration(const DestinationConfiguration& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = value; }

    /**
     * <p>A complex type that contains information about where recorded video will be
     * stored.</p>
     */
    inline void SetDestinationConfiguration(DestinationConfiguration&& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = std::move(value); }

    /**
     * <p>A complex type that contains information about where recorded video will be
     * stored.</p>
     */
    inline RecordingConfiguration& WithDestinationConfiguration(const DestinationConfiguration& value) { SetDestinationConfiguration(value); return *this;}

    /**
     * <p>A complex type that contains information about where recorded video will be
     * stored.</p>
     */
    inline RecordingConfiguration& WithDestinationConfiguration(DestinationConfiguration&& value) { SetDestinationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Recording-configuration name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Recording-configuration name. The value does not need to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Recording-configuration name. The value does not need to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Recording-configuration name. The value does not need to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Recording-configuration name. The value does not need to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Recording-configuration name. The value does not need to be unique.</p>
     */
    inline RecordingConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Recording-configuration name. The value does not need to be unique.</p>
     */
    inline RecordingConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Recording-configuration name. The value does not need to be unique.</p>
     */
    inline RecordingConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If a broadcast disconnects and then reconnects within the specified interval,
     * the multiple streams will be considered a single broadcast and merged together.
     * Default: 0.</p>
     */
    inline int GetRecordingReconnectWindowSeconds() const{ return m_recordingReconnectWindowSeconds; }

    /**
     * <p>If a broadcast disconnects and then reconnects within the specified interval,
     * the multiple streams will be considered a single broadcast and merged together.
     * Default: 0.</p>
     */
    inline bool RecordingReconnectWindowSecondsHasBeenSet() const { return m_recordingReconnectWindowSecondsHasBeenSet; }

    /**
     * <p>If a broadcast disconnects and then reconnects within the specified interval,
     * the multiple streams will be considered a single broadcast and merged together.
     * Default: 0.</p>
     */
    inline void SetRecordingReconnectWindowSeconds(int value) { m_recordingReconnectWindowSecondsHasBeenSet = true; m_recordingReconnectWindowSeconds = value; }

    /**
     * <p>If a broadcast disconnects and then reconnects within the specified interval,
     * the multiple streams will be considered a single broadcast and merged together.
     * Default: 0.</p>
     */
    inline RecordingConfiguration& WithRecordingReconnectWindowSeconds(int value) { SetRecordingReconnectWindowSeconds(value); return *this;}


    /**
     * <p>Indicates the current state of the recording configuration. When the state is
     * <code>ACTIVE</code>, the configuration is ready for recording a channel
     * stream.</p>
     */
    inline const RecordingConfigurationState& GetState() const{ return m_state; }

    /**
     * <p>Indicates the current state of the recording configuration. When the state is
     * <code>ACTIVE</code>, the configuration is ready for recording a channel
     * stream.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Indicates the current state of the recording configuration. When the state is
     * <code>ACTIVE</code>, the configuration is ready for recording a channel
     * stream.</p>
     */
    inline void SetState(const RecordingConfigurationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Indicates the current state of the recording configuration. When the state is
     * <code>ACTIVE</code>, the configuration is ready for recording a channel
     * stream.</p>
     */
    inline void SetState(RecordingConfigurationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Indicates the current state of the recording configuration. When the state is
     * <code>ACTIVE</code>, the configuration is ready for recording a channel
     * stream.</p>
     */
    inline RecordingConfiguration& WithState(const RecordingConfigurationState& value) { SetState(value); return *this;}

    /**
     * <p>Indicates the current state of the recording configuration. When the state is
     * <code>ACTIVE</code>, the configuration is ready for recording a channel
     * stream.</p>
     */
    inline RecordingConfiguration& WithState(RecordingConfigurationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
     * See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
     * See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
     * See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
     * See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
     * See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline RecordingConfiguration& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
     * See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline RecordingConfiguration& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
     * See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline RecordingConfiguration& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
     * See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline RecordingConfiguration& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
     * See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline RecordingConfiguration& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
     * See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline RecordingConfiguration& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
     * See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline RecordingConfiguration& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
     * See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline RecordingConfiguration& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
     * See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline RecordingConfiguration& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A complex type that allows you to enable/disable the recording of thumbnails
     * for a live session and modify the interval at which thumbnails are generated for
     * the live session.</p>
     */
    inline const ThumbnailConfiguration& GetThumbnailConfiguration() const{ return m_thumbnailConfiguration; }

    /**
     * <p>A complex type that allows you to enable/disable the recording of thumbnails
     * for a live session and modify the interval at which thumbnails are generated for
     * the live session.</p>
     */
    inline bool ThumbnailConfigurationHasBeenSet() const { return m_thumbnailConfigurationHasBeenSet; }

    /**
     * <p>A complex type that allows you to enable/disable the recording of thumbnails
     * for a live session and modify the interval at which thumbnails are generated for
     * the live session.</p>
     */
    inline void SetThumbnailConfiguration(const ThumbnailConfiguration& value) { m_thumbnailConfigurationHasBeenSet = true; m_thumbnailConfiguration = value; }

    /**
     * <p>A complex type that allows you to enable/disable the recording of thumbnails
     * for a live session and modify the interval at which thumbnails are generated for
     * the live session.</p>
     */
    inline void SetThumbnailConfiguration(ThumbnailConfiguration&& value) { m_thumbnailConfigurationHasBeenSet = true; m_thumbnailConfiguration = std::move(value); }

    /**
     * <p>A complex type that allows you to enable/disable the recording of thumbnails
     * for a live session and modify the interval at which thumbnails are generated for
     * the live session.</p>
     */
    inline RecordingConfiguration& WithThumbnailConfiguration(const ThumbnailConfiguration& value) { SetThumbnailConfiguration(value); return *this;}

    /**
     * <p>A complex type that allows you to enable/disable the recording of thumbnails
     * for a live session and modify the interval at which thumbnails are generated for
     * the live session.</p>
     */
    inline RecordingConfiguration& WithThumbnailConfiguration(ThumbnailConfiguration&& value) { SetThumbnailConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DestinationConfiguration m_destinationConfiguration;
    bool m_destinationConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_recordingReconnectWindowSeconds;
    bool m_recordingReconnectWindowSecondsHasBeenSet = false;

    RecordingConfigurationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ThumbnailConfiguration m_thumbnailConfiguration;
    bool m_thumbnailConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
