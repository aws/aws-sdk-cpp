/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/ivs/model/DestinationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/model/RenditionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ivs/model/ThumbnailConfiguration.h>
#include <utility>

namespace Aws
{
namespace IVS
{
namespace Model
{

  /**
   */
  class CreateRecordingConfigurationRequest : public IVSRequest
  {
  public:
    AWS_IVS_API CreateRecordingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRecordingConfiguration"; }

    AWS_IVS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A complex type that contains a destination configuration for where recorded
     * video will be stored.</p>
     */
    inline const DestinationConfiguration& GetDestinationConfiguration() const{ return m_destinationConfiguration; }
    inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }
    inline void SetDestinationConfiguration(const DestinationConfiguration& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = value; }
    inline void SetDestinationConfiguration(DestinationConfiguration&& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = std::move(value); }
    inline CreateRecordingConfigurationRequest& WithDestinationConfiguration(const DestinationConfiguration& value) { SetDestinationConfiguration(value); return *this;}
    inline CreateRecordingConfigurationRequest& WithDestinationConfiguration(DestinationConfiguration&& value) { SetDestinationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recording-configuration name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateRecordingConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateRecordingConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateRecordingConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a broadcast disconnects and then reconnects within the specified interval,
     * the multiple streams will be considered a single broadcast and merged together.
     * Default: 0.</p>
     */
    inline int GetRecordingReconnectWindowSeconds() const{ return m_recordingReconnectWindowSeconds; }
    inline bool RecordingReconnectWindowSecondsHasBeenSet() const { return m_recordingReconnectWindowSecondsHasBeenSet; }
    inline void SetRecordingReconnectWindowSeconds(int value) { m_recordingReconnectWindowSecondsHasBeenSet = true; m_recordingReconnectWindowSeconds = value; }
    inline CreateRecordingConfigurationRequest& WithRecordingReconnectWindowSeconds(int value) { SetRecordingReconnectWindowSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object that describes which renditions should be recorded for a stream.</p>
     */
    inline const RenditionConfiguration& GetRenditionConfiguration() const{ return m_renditionConfiguration; }
    inline bool RenditionConfigurationHasBeenSet() const { return m_renditionConfigurationHasBeenSet; }
    inline void SetRenditionConfiguration(const RenditionConfiguration& value) { m_renditionConfigurationHasBeenSet = true; m_renditionConfiguration = value; }
    inline void SetRenditionConfiguration(RenditionConfiguration&& value) { m_renditionConfigurationHasBeenSet = true; m_renditionConfiguration = std::move(value); }
    inline CreateRecordingConfigurationRequest& WithRenditionConfiguration(const RenditionConfiguration& value) { SetRenditionConfiguration(value); return *this;}
    inline CreateRecordingConfigurationRequest& WithRenditionConfiguration(RenditionConfiguration&& value) { SetRenditionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
     * See <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/best-practices-and-strats.html">Best
     * practices and strategies</a> in <i>Tagging Amazon Web Services Resources and Tag
     * Editor</i> for details, including restrictions that apply to tags and "Tag
     * naming limits and requirements"; Amazon IVS has no service-specific constraints
     * beyond what is documented there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateRecordingConfigurationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateRecordingConfigurationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateRecordingConfigurationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateRecordingConfigurationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateRecordingConfigurationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateRecordingConfigurationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateRecordingConfigurationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateRecordingConfigurationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateRecordingConfigurationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A complex type that allows you to enable/disable the recording of thumbnails
     * for a live session and modify the interval at which thumbnails are generated for
     * the live session.</p>
     */
    inline const ThumbnailConfiguration& GetThumbnailConfiguration() const{ return m_thumbnailConfiguration; }
    inline bool ThumbnailConfigurationHasBeenSet() const { return m_thumbnailConfigurationHasBeenSet; }
    inline void SetThumbnailConfiguration(const ThumbnailConfiguration& value) { m_thumbnailConfigurationHasBeenSet = true; m_thumbnailConfiguration = value; }
    inline void SetThumbnailConfiguration(ThumbnailConfiguration&& value) { m_thumbnailConfigurationHasBeenSet = true; m_thumbnailConfiguration = std::move(value); }
    inline CreateRecordingConfigurationRequest& WithThumbnailConfiguration(const ThumbnailConfiguration& value) { SetThumbnailConfiguration(value); return *this;}
    inline CreateRecordingConfigurationRequest& WithThumbnailConfiguration(ThumbnailConfiguration&& value) { SetThumbnailConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    DestinationConfiguration m_destinationConfiguration;
    bool m_destinationConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_recordingReconnectWindowSeconds;
    bool m_recordingReconnectWindowSecondsHasBeenSet = false;

    RenditionConfiguration m_renditionConfiguration;
    bool m_renditionConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ThumbnailConfiguration m_thumbnailConfiguration;
    bool m_thumbnailConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
