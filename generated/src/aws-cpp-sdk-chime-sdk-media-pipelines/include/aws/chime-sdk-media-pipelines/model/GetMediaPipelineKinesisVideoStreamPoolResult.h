/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamPoolConfiguration.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{
  class GetMediaPipelineKinesisVideoStreamPoolResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaPipelineKinesisVideoStreamPoolResult() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaPipelineKinesisVideoStreamPoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaPipelineKinesisVideoStreamPoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The video stream pool configuration object.</p>
     */
    inline const KinesisVideoStreamPoolConfiguration& GetKinesisVideoStreamPoolConfiguration() const { return m_kinesisVideoStreamPoolConfiguration; }
    template<typename KinesisVideoStreamPoolConfigurationT = KinesisVideoStreamPoolConfiguration>
    void SetKinesisVideoStreamPoolConfiguration(KinesisVideoStreamPoolConfigurationT&& value) { m_kinesisVideoStreamPoolConfigurationHasBeenSet = true; m_kinesisVideoStreamPoolConfiguration = std::forward<KinesisVideoStreamPoolConfigurationT>(value); }
    template<typename KinesisVideoStreamPoolConfigurationT = KinesisVideoStreamPoolConfiguration>
    GetMediaPipelineKinesisVideoStreamPoolResult& WithKinesisVideoStreamPoolConfiguration(KinesisVideoStreamPoolConfigurationT&& value) { SetKinesisVideoStreamPoolConfiguration(std::forward<KinesisVideoStreamPoolConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMediaPipelineKinesisVideoStreamPoolResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    KinesisVideoStreamPoolConfiguration m_kinesisVideoStreamPoolConfiguration;
    bool m_kinesisVideoStreamPoolConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
