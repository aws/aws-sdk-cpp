/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs-realtime/model/RecordingConfiguration.h>
#include <aws/ivs-realtime/model/CompositionThumbnailConfiguration.h>
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
   * <p>A complex type that describes an S3 location where recorded videos will be
   * stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/S3DestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class S3DestinationConfiguration
  {
  public:
    AWS_IVSREALTIME_API S3DestinationConfiguration() = default;
    AWS_IVSREALTIME_API S3DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API S3DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the <a>StorageConfiguration</a> where recorded videos will be
     * stored.</p>
     */
    inline const Aws::String& GetStorageConfigurationArn() const { return m_storageConfigurationArn; }
    inline bool StorageConfigurationArnHasBeenSet() const { return m_storageConfigurationArnHasBeenSet; }
    template<typename StorageConfigurationArnT = Aws::String>
    void SetStorageConfigurationArn(StorageConfigurationArnT&& value) { m_storageConfigurationArnHasBeenSet = true; m_storageConfigurationArn = std::forward<StorageConfigurationArnT>(value); }
    template<typename StorageConfigurationArnT = Aws::String>
    S3DestinationConfiguration& WithStorageConfigurationArn(StorageConfigurationArnT&& value) { SetStorageConfigurationArn(std::forward<StorageConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARNs of the <a>EncoderConfiguration</a> resource. The encoder configuration
     * and stage resources must be in the same AWS account and region. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEncoderConfigurationArns() const { return m_encoderConfigurationArns; }
    inline bool EncoderConfigurationArnsHasBeenSet() const { return m_encoderConfigurationArnsHasBeenSet; }
    template<typename EncoderConfigurationArnsT = Aws::Vector<Aws::String>>
    void SetEncoderConfigurationArns(EncoderConfigurationArnsT&& value) { m_encoderConfigurationArnsHasBeenSet = true; m_encoderConfigurationArns = std::forward<EncoderConfigurationArnsT>(value); }
    template<typename EncoderConfigurationArnsT = Aws::Vector<Aws::String>>
    S3DestinationConfiguration& WithEncoderConfigurationArns(EncoderConfigurationArnsT&& value) { SetEncoderConfigurationArns(std::forward<EncoderConfigurationArnsT>(value)); return *this;}
    template<typename EncoderConfigurationArnsT = Aws::String>
    S3DestinationConfiguration& AddEncoderConfigurationArns(EncoderConfigurationArnsT&& value) { m_encoderConfigurationArnsHasBeenSet = true; m_encoderConfigurationArns.emplace_back(std::forward<EncoderConfigurationArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Array of maps, each of the form <code>string:string (key:value)</code>. This
     * is an optional customer specification, currently used only to specify the
     * recording format for storing a recording in Amazon S3.</p>
     */
    inline const RecordingConfiguration& GetRecordingConfiguration() const { return m_recordingConfiguration; }
    inline bool RecordingConfigurationHasBeenSet() const { return m_recordingConfigurationHasBeenSet; }
    template<typename RecordingConfigurationT = RecordingConfiguration>
    void SetRecordingConfiguration(RecordingConfigurationT&& value) { m_recordingConfigurationHasBeenSet = true; m_recordingConfiguration = std::forward<RecordingConfigurationT>(value); }
    template<typename RecordingConfigurationT = RecordingConfiguration>
    S3DestinationConfiguration& WithRecordingConfiguration(RecordingConfigurationT&& value) { SetRecordingConfiguration(std::forward<RecordingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that allows you to enable/disable the recording of thumbnails
     * for a <a>Composition</a> and modify the interval at which thumbnails are
     * generated for the live session.</p>
     */
    inline const Aws::Vector<CompositionThumbnailConfiguration>& GetThumbnailConfigurations() const { return m_thumbnailConfigurations; }
    inline bool ThumbnailConfigurationsHasBeenSet() const { return m_thumbnailConfigurationsHasBeenSet; }
    template<typename ThumbnailConfigurationsT = Aws::Vector<CompositionThumbnailConfiguration>>
    void SetThumbnailConfigurations(ThumbnailConfigurationsT&& value) { m_thumbnailConfigurationsHasBeenSet = true; m_thumbnailConfigurations = std::forward<ThumbnailConfigurationsT>(value); }
    template<typename ThumbnailConfigurationsT = Aws::Vector<CompositionThumbnailConfiguration>>
    S3DestinationConfiguration& WithThumbnailConfigurations(ThumbnailConfigurationsT&& value) { SetThumbnailConfigurations(std::forward<ThumbnailConfigurationsT>(value)); return *this;}
    template<typename ThumbnailConfigurationsT = CompositionThumbnailConfiguration>
    S3DestinationConfiguration& AddThumbnailConfigurations(ThumbnailConfigurationsT&& value) { m_thumbnailConfigurationsHasBeenSet = true; m_thumbnailConfigurations.emplace_back(std::forward<ThumbnailConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_storageConfigurationArn;
    bool m_storageConfigurationArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_encoderConfigurationArns;
    bool m_encoderConfigurationArnsHasBeenSet = false;

    RecordingConfiguration m_recordingConfiguration;
    bool m_recordingConfigurationHasBeenSet = false;

    Aws::Vector<CompositionThumbnailConfiguration> m_thumbnailConfigurations;
    bool m_thumbnailConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
