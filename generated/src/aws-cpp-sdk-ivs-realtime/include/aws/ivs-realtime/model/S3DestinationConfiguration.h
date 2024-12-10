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
    AWS_IVSREALTIME_API S3DestinationConfiguration();
    AWS_IVSREALTIME_API S3DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API S3DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the <a>StorageConfiguration</a> where recorded videos will be
     * stored.</p>
     */
    inline const Aws::String& GetStorageConfigurationArn() const{ return m_storageConfigurationArn; }
    inline bool StorageConfigurationArnHasBeenSet() const { return m_storageConfigurationArnHasBeenSet; }
    inline void SetStorageConfigurationArn(const Aws::String& value) { m_storageConfigurationArnHasBeenSet = true; m_storageConfigurationArn = value; }
    inline void SetStorageConfigurationArn(Aws::String&& value) { m_storageConfigurationArnHasBeenSet = true; m_storageConfigurationArn = std::move(value); }
    inline void SetStorageConfigurationArn(const char* value) { m_storageConfigurationArnHasBeenSet = true; m_storageConfigurationArn.assign(value); }
    inline S3DestinationConfiguration& WithStorageConfigurationArn(const Aws::String& value) { SetStorageConfigurationArn(value); return *this;}
    inline S3DestinationConfiguration& WithStorageConfigurationArn(Aws::String&& value) { SetStorageConfigurationArn(std::move(value)); return *this;}
    inline S3DestinationConfiguration& WithStorageConfigurationArn(const char* value) { SetStorageConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARNs of the <a>EncoderConfiguration</a> resource. The encoder configuration
     * and stage resources must be in the same AWS account and region. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEncoderConfigurationArns() const{ return m_encoderConfigurationArns; }
    inline bool EncoderConfigurationArnsHasBeenSet() const { return m_encoderConfigurationArnsHasBeenSet; }
    inline void SetEncoderConfigurationArns(const Aws::Vector<Aws::String>& value) { m_encoderConfigurationArnsHasBeenSet = true; m_encoderConfigurationArns = value; }
    inline void SetEncoderConfigurationArns(Aws::Vector<Aws::String>&& value) { m_encoderConfigurationArnsHasBeenSet = true; m_encoderConfigurationArns = std::move(value); }
    inline S3DestinationConfiguration& WithEncoderConfigurationArns(const Aws::Vector<Aws::String>& value) { SetEncoderConfigurationArns(value); return *this;}
    inline S3DestinationConfiguration& WithEncoderConfigurationArns(Aws::Vector<Aws::String>&& value) { SetEncoderConfigurationArns(std::move(value)); return *this;}
    inline S3DestinationConfiguration& AddEncoderConfigurationArns(const Aws::String& value) { m_encoderConfigurationArnsHasBeenSet = true; m_encoderConfigurationArns.push_back(value); return *this; }
    inline S3DestinationConfiguration& AddEncoderConfigurationArns(Aws::String&& value) { m_encoderConfigurationArnsHasBeenSet = true; m_encoderConfigurationArns.push_back(std::move(value)); return *this; }
    inline S3DestinationConfiguration& AddEncoderConfigurationArns(const char* value) { m_encoderConfigurationArnsHasBeenSet = true; m_encoderConfigurationArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Array of maps, each of the form <code>string:string (key:value)</code>. This
     * is an optional customer specification, currently used only to specify the
     * recording format for storing a recording in Amazon S3.</p>
     */
    inline const RecordingConfiguration& GetRecordingConfiguration() const{ return m_recordingConfiguration; }
    inline bool RecordingConfigurationHasBeenSet() const { return m_recordingConfigurationHasBeenSet; }
    inline void SetRecordingConfiguration(const RecordingConfiguration& value) { m_recordingConfigurationHasBeenSet = true; m_recordingConfiguration = value; }
    inline void SetRecordingConfiguration(RecordingConfiguration&& value) { m_recordingConfigurationHasBeenSet = true; m_recordingConfiguration = std::move(value); }
    inline S3DestinationConfiguration& WithRecordingConfiguration(const RecordingConfiguration& value) { SetRecordingConfiguration(value); return *this;}
    inline S3DestinationConfiguration& WithRecordingConfiguration(RecordingConfiguration&& value) { SetRecordingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that allows you to enable/disable the recording of thumbnails
     * for a <a>Composition</a> and modify the interval at which thumbnails are
     * generated for the live session.</p>
     */
    inline const Aws::Vector<CompositionThumbnailConfiguration>& GetThumbnailConfigurations() const{ return m_thumbnailConfigurations; }
    inline bool ThumbnailConfigurationsHasBeenSet() const { return m_thumbnailConfigurationsHasBeenSet; }
    inline void SetThumbnailConfigurations(const Aws::Vector<CompositionThumbnailConfiguration>& value) { m_thumbnailConfigurationsHasBeenSet = true; m_thumbnailConfigurations = value; }
    inline void SetThumbnailConfigurations(Aws::Vector<CompositionThumbnailConfiguration>&& value) { m_thumbnailConfigurationsHasBeenSet = true; m_thumbnailConfigurations = std::move(value); }
    inline S3DestinationConfiguration& WithThumbnailConfigurations(const Aws::Vector<CompositionThumbnailConfiguration>& value) { SetThumbnailConfigurations(value); return *this;}
    inline S3DestinationConfiguration& WithThumbnailConfigurations(Aws::Vector<CompositionThumbnailConfiguration>&& value) { SetThumbnailConfigurations(std::move(value)); return *this;}
    inline S3DestinationConfiguration& AddThumbnailConfigurations(const CompositionThumbnailConfiguration& value) { m_thumbnailConfigurationsHasBeenSet = true; m_thumbnailConfigurations.push_back(value); return *this; }
    inline S3DestinationConfiguration& AddThumbnailConfigurations(CompositionThumbnailConfiguration&& value) { m_thumbnailConfigurationsHasBeenSet = true; m_thumbnailConfigurations.push_back(std::move(value)); return *this; }
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
