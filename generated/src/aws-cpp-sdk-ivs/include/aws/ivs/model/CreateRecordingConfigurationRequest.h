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
    AWS_IVS_API CreateRecordingConfigurationRequest() = default;

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
    inline const DestinationConfiguration& GetDestinationConfiguration() const { return m_destinationConfiguration; }
    inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }
    template<typename DestinationConfigurationT = DestinationConfiguration>
    void SetDestinationConfiguration(DestinationConfigurationT&& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = std::forward<DestinationConfigurationT>(value); }
    template<typename DestinationConfigurationT = DestinationConfiguration>
    CreateRecordingConfigurationRequest& WithDestinationConfiguration(DestinationConfigurationT&& value) { SetDestinationConfiguration(std::forward<DestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recording-configuration name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateRecordingConfigurationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a broadcast disconnects and then reconnects within the specified interval,
     * the multiple streams will be considered a single broadcast and merged together.
     * Default: 0.</p>
     */
    inline int GetRecordingReconnectWindowSeconds() const { return m_recordingReconnectWindowSeconds; }
    inline bool RecordingReconnectWindowSecondsHasBeenSet() const { return m_recordingReconnectWindowSecondsHasBeenSet; }
    inline void SetRecordingReconnectWindowSeconds(int value) { m_recordingReconnectWindowSecondsHasBeenSet = true; m_recordingReconnectWindowSeconds = value; }
    inline CreateRecordingConfigurationRequest& WithRecordingReconnectWindowSeconds(int value) { SetRecordingReconnectWindowSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object that describes which renditions should be recorded for a stream.</p>
     */
    inline const RenditionConfiguration& GetRenditionConfiguration() const { return m_renditionConfiguration; }
    inline bool RenditionConfigurationHasBeenSet() const { return m_renditionConfigurationHasBeenSet; }
    template<typename RenditionConfigurationT = RenditionConfiguration>
    void SetRenditionConfiguration(RenditionConfigurationT&& value) { m_renditionConfigurationHasBeenSet = true; m_renditionConfiguration = std::forward<RenditionConfigurationT>(value); }
    template<typename RenditionConfigurationT = RenditionConfiguration>
    CreateRecordingConfigurationRequest& WithRenditionConfiguration(RenditionConfigurationT&& value) { SetRenditionConfiguration(std::forward<RenditionConfigurationT>(value)); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateRecordingConfigurationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateRecordingConfigurationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A complex type that allows you to enable/disable the recording of thumbnails
     * for a live session and modify the interval at which thumbnails are generated for
     * the live session.</p>
     */
    inline const ThumbnailConfiguration& GetThumbnailConfiguration() const { return m_thumbnailConfiguration; }
    inline bool ThumbnailConfigurationHasBeenSet() const { return m_thumbnailConfigurationHasBeenSet; }
    template<typename ThumbnailConfigurationT = ThumbnailConfiguration>
    void SetThumbnailConfiguration(ThumbnailConfigurationT&& value) { m_thumbnailConfigurationHasBeenSet = true; m_thumbnailConfiguration = std::forward<ThumbnailConfigurationT>(value); }
    template<typename ThumbnailConfigurationT = ThumbnailConfiguration>
    CreateRecordingConfigurationRequest& WithThumbnailConfiguration(ThumbnailConfigurationT&& value) { SetThumbnailConfiguration(std::forward<ThumbnailConfigurationT>(value)); return *this;}
    ///@}
  private:

    DestinationConfiguration m_destinationConfiguration;
    bool m_destinationConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_recordingReconnectWindowSeconds{0};
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
