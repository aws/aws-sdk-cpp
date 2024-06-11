/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/ImageGenerationConfiguration.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class UpdateImageGenerationConfigurationRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API UpdateImageGenerationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateImageGenerationConfiguration"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the stream from which to update the image generation
     * configuration. You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }
    inline UpdateImageGenerationConfigurationRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}
    inline UpdateImageGenerationConfigurationRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}
    inline UpdateImageGenerationConfigurationRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis video stream from where you
     * want to update the image generation configuration. You must specify either the
     * <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }
    inline UpdateImageGenerationConfigurationRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}
    inline UpdateImageGenerationConfigurationRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}
    inline UpdateImageGenerationConfigurationRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure that contains the information required for the KVS images
     * delivery. If the structure is null, the configuration will be deleted from the
     * stream.</p>
     */
    inline const ImageGenerationConfiguration& GetImageGenerationConfiguration() const{ return m_imageGenerationConfiguration; }
    inline bool ImageGenerationConfigurationHasBeenSet() const { return m_imageGenerationConfigurationHasBeenSet; }
    inline void SetImageGenerationConfiguration(const ImageGenerationConfiguration& value) { m_imageGenerationConfigurationHasBeenSet = true; m_imageGenerationConfiguration = value; }
    inline void SetImageGenerationConfiguration(ImageGenerationConfiguration&& value) { m_imageGenerationConfigurationHasBeenSet = true; m_imageGenerationConfiguration = std::move(value); }
    inline UpdateImageGenerationConfigurationRequest& WithImageGenerationConfiguration(const ImageGenerationConfiguration& value) { SetImageGenerationConfiguration(value); return *this;}
    inline UpdateImageGenerationConfigurationRequest& WithImageGenerationConfiguration(ImageGenerationConfiguration&& value) { SetImageGenerationConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    ImageGenerationConfiguration m_imageGenerationConfiguration;
    bool m_imageGenerationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
