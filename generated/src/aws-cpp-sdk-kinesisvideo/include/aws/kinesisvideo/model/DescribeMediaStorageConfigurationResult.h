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
    AWS_KINESISVIDEO_API DescribeMediaStorageConfigurationResult() = default;
    AWS_KINESISVIDEO_API DescribeMediaStorageConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API DescribeMediaStorageConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that encapsulates, or contains, the media storage configuration
     * properties.</p>
     */
    inline const MediaStorageConfiguration& GetMediaStorageConfiguration() const { return m_mediaStorageConfiguration; }
    template<typename MediaStorageConfigurationT = MediaStorageConfiguration>
    void SetMediaStorageConfiguration(MediaStorageConfigurationT&& value) { m_mediaStorageConfigurationHasBeenSet = true; m_mediaStorageConfiguration = std::forward<MediaStorageConfigurationT>(value); }
    template<typename MediaStorageConfigurationT = MediaStorageConfiguration>
    DescribeMediaStorageConfigurationResult& WithMediaStorageConfiguration(MediaStorageConfigurationT&& value) { SetMediaStorageConfiguration(std::forward<MediaStorageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMediaStorageConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MediaStorageConfiguration m_mediaStorageConfiguration;
    bool m_mediaStorageConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
