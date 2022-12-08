/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/ImageGenerationConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisVideo
{
namespace Model
{
  class DescribeImageGenerationConfigurationResult
  {
  public:
    AWS_KINESISVIDEO_API DescribeImageGenerationConfigurationResult();
    AWS_KINESISVIDEO_API DescribeImageGenerationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API DescribeImageGenerationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The structure that contains the information required for the Kinesis video
     * stream (KVS) images delivery. If this structure is null, the configuration will
     * be deleted from the stream.</p>
     */
    inline const ImageGenerationConfiguration& GetImageGenerationConfiguration() const{ return m_imageGenerationConfiguration; }

    /**
     * <p>The structure that contains the information required for the Kinesis video
     * stream (KVS) images delivery. If this structure is null, the configuration will
     * be deleted from the stream.</p>
     */
    inline void SetImageGenerationConfiguration(const ImageGenerationConfiguration& value) { m_imageGenerationConfiguration = value; }

    /**
     * <p>The structure that contains the information required for the Kinesis video
     * stream (KVS) images delivery. If this structure is null, the configuration will
     * be deleted from the stream.</p>
     */
    inline void SetImageGenerationConfiguration(ImageGenerationConfiguration&& value) { m_imageGenerationConfiguration = std::move(value); }

    /**
     * <p>The structure that contains the information required for the Kinesis video
     * stream (KVS) images delivery. If this structure is null, the configuration will
     * be deleted from the stream.</p>
     */
    inline DescribeImageGenerationConfigurationResult& WithImageGenerationConfiguration(const ImageGenerationConfiguration& value) { SetImageGenerationConfiguration(value); return *this;}

    /**
     * <p>The structure that contains the information required for the Kinesis video
     * stream (KVS) images delivery. If this structure is null, the configuration will
     * be deleted from the stream.</p>
     */
    inline DescribeImageGenerationConfigurationResult& WithImageGenerationConfiguration(ImageGenerationConfiguration&& value) { SetImageGenerationConfiguration(std::move(value)); return *this;}

  private:

    ImageGenerationConfiguration m_imageGenerationConfiguration;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
