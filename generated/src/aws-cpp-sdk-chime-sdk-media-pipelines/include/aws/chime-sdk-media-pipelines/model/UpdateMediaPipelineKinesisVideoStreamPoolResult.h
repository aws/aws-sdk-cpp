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
  class UpdateMediaPipelineKinesisVideoStreamPoolResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API UpdateMediaPipelineKinesisVideoStreamPoolResult();
    AWS_CHIMESDKMEDIAPIPELINES_API UpdateMediaPipelineKinesisVideoStreamPoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API UpdateMediaPipelineKinesisVideoStreamPoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The video stream pool configuration object.</p>
     */
    inline const KinesisVideoStreamPoolConfiguration& GetKinesisVideoStreamPoolConfiguration() const{ return m_kinesisVideoStreamPoolConfiguration; }

    /**
     * <p>The video stream pool configuration object.</p>
     */
    inline void SetKinesisVideoStreamPoolConfiguration(const KinesisVideoStreamPoolConfiguration& value) { m_kinesisVideoStreamPoolConfiguration = value; }

    /**
     * <p>The video stream pool configuration object.</p>
     */
    inline void SetKinesisVideoStreamPoolConfiguration(KinesisVideoStreamPoolConfiguration&& value) { m_kinesisVideoStreamPoolConfiguration = std::move(value); }

    /**
     * <p>The video stream pool configuration object.</p>
     */
    inline UpdateMediaPipelineKinesisVideoStreamPoolResult& WithKinesisVideoStreamPoolConfiguration(const KinesisVideoStreamPoolConfiguration& value) { SetKinesisVideoStreamPoolConfiguration(value); return *this;}

    /**
     * <p>The video stream pool configuration object.</p>
     */
    inline UpdateMediaPipelineKinesisVideoStreamPoolResult& WithKinesisVideoStreamPoolConfiguration(KinesisVideoStreamPoolConfiguration&& value) { SetKinesisVideoStreamPoolConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateMediaPipelineKinesisVideoStreamPoolResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateMediaPipelineKinesisVideoStreamPoolResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateMediaPipelineKinesisVideoStreamPoolResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    KinesisVideoStreamPoolConfiguration m_kinesisVideoStreamPoolConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
