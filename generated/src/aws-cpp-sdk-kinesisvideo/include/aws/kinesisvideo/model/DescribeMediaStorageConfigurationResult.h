/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/MediaStorageConfiguration.h>
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
  class DescribeMediaStorageConfigurationResult
  {
  public:
    AWS_KINESISVIDEO_API DescribeMediaStorageConfigurationResult();
    AWS_KINESISVIDEO_API DescribeMediaStorageConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API DescribeMediaStorageConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that encapsulates, or contains, the media storage configuration
     * properties.</p>
     */
    inline const MediaStorageConfiguration& GetMediaStorageConfiguration() const{ return m_mediaStorageConfiguration; }

    /**
     * <p>A structure that encapsulates, or contains, the media storage configuration
     * properties.</p>
     */
    inline void SetMediaStorageConfiguration(const MediaStorageConfiguration& value) { m_mediaStorageConfiguration = value; }

    /**
     * <p>A structure that encapsulates, or contains, the media storage configuration
     * properties.</p>
     */
    inline void SetMediaStorageConfiguration(MediaStorageConfiguration&& value) { m_mediaStorageConfiguration = std::move(value); }

    /**
     * <p>A structure that encapsulates, or contains, the media storage configuration
     * properties.</p>
     */
    inline DescribeMediaStorageConfigurationResult& WithMediaStorageConfiguration(const MediaStorageConfiguration& value) { SetMediaStorageConfiguration(value); return *this;}

    /**
     * <p>A structure that encapsulates, or contains, the media storage configuration
     * properties.</p>
     */
    inline DescribeMediaStorageConfigurationResult& WithMediaStorageConfiguration(MediaStorageConfiguration&& value) { SetMediaStorageConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeMediaStorageConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeMediaStorageConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeMediaStorageConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MediaStorageConfiguration m_mediaStorageConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
