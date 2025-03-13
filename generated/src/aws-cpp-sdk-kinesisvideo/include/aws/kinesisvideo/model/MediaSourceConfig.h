/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/MediaUriType.h>
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
namespace KinesisVideo
{
namespace Model
{

  /**
   * <p>The configuration details that consist of the credentials required
   * (<code>MediaUriSecretArn</code> and <code>MediaUriType</code>) to access the
   * media files that are streamed to the camera.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/MediaSourceConfig">AWS
   * API Reference</a></p>
   */
  class MediaSourceConfig
  {
  public:
    AWS_KINESISVIDEO_API MediaSourceConfig() = default;
    AWS_KINESISVIDEO_API MediaSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API MediaSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Secrets Manager ARN for the username and password of
     * the camera, or a local media file location.</p>
     */
    inline const Aws::String& GetMediaUriSecretArn() const { return m_mediaUriSecretArn; }
    inline bool MediaUriSecretArnHasBeenSet() const { return m_mediaUriSecretArnHasBeenSet; }
    template<typename MediaUriSecretArnT = Aws::String>
    void SetMediaUriSecretArn(MediaUriSecretArnT&& value) { m_mediaUriSecretArnHasBeenSet = true; m_mediaUriSecretArn = std::forward<MediaUriSecretArnT>(value); }
    template<typename MediaUriSecretArnT = Aws::String>
    MediaSourceConfig& WithMediaUriSecretArn(MediaUriSecretArnT&& value) { SetMediaUriSecretArn(std::forward<MediaUriSecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Uniform Resource Identifier (URI) type. The <code>FILE_URI</code> value
     * can be used to stream local media files.</p>  <p>Preview only supports the
     * <code>RTSP_URI</code> media source URI format .</p> 
     */
    inline MediaUriType GetMediaUriType() const { return m_mediaUriType; }
    inline bool MediaUriTypeHasBeenSet() const { return m_mediaUriTypeHasBeenSet; }
    inline void SetMediaUriType(MediaUriType value) { m_mediaUriTypeHasBeenSet = true; m_mediaUriType = value; }
    inline MediaSourceConfig& WithMediaUriType(MediaUriType value) { SetMediaUriType(value); return *this;}
    ///@}
  private:

    Aws::String m_mediaUriSecretArn;
    bool m_mediaUriSecretArnHasBeenSet = false;

    MediaUriType m_mediaUriType{MediaUriType::NOT_SET};
    bool m_mediaUriTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
