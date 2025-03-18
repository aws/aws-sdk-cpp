/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/ImageGenerationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_KINESISVIDEO_API DescribeImageGenerationConfigurationResult() = default;
    AWS_KINESISVIDEO_API DescribeImageGenerationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API DescribeImageGenerationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The structure that contains the information required for the Kinesis video
     * stream (KVS) images delivery. If this structure is null, the configuration will
     * be deleted from the stream.</p>
     */
    inline const ImageGenerationConfiguration& GetImageGenerationConfiguration() const { return m_imageGenerationConfiguration; }
    template<typename ImageGenerationConfigurationT = ImageGenerationConfiguration>
    void SetImageGenerationConfiguration(ImageGenerationConfigurationT&& value) { m_imageGenerationConfigurationHasBeenSet = true; m_imageGenerationConfiguration = std::forward<ImageGenerationConfigurationT>(value); }
    template<typename ImageGenerationConfigurationT = ImageGenerationConfiguration>
    DescribeImageGenerationConfigurationResult& WithImageGenerationConfiguration(ImageGenerationConfigurationT&& value) { SetImageGenerationConfiguration(std::forward<ImageGenerationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeImageGenerationConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ImageGenerationConfiguration m_imageGenerationConfiguration;
    bool m_imageGenerationConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
