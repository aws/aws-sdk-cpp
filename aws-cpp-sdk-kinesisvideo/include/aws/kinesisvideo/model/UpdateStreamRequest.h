/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class AWS_KINESISVIDEO_API UpdateStreamRequest : public KinesisVideoRequest
  {
  public:
    UpdateStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStream"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the stream whose metadata you want to update.</p> <p>The stream
     * name is an identifier for the stream, and must be unique for each account and
     * region.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream whose metadata you want to update.</p> <p>The stream
     * name is an identifier for the stream, and must be unique for each account and
     * region.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream whose metadata you want to update.</p> <p>The stream
     * name is an identifier for the stream, and must be unique for each account and
     * region.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream whose metadata you want to update.</p> <p>The stream
     * name is an identifier for the stream, and must be unique for each account and
     * region.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream whose metadata you want to update.</p> <p>The stream
     * name is an identifier for the stream, and must be unique for each account and
     * region.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream whose metadata you want to update.</p> <p>The stream
     * name is an identifier for the stream, and must be unique for each account and
     * region.</p>
     */
    inline UpdateStreamRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream whose metadata you want to update.</p> <p>The stream
     * name is an identifier for the stream, and must be unique for each account and
     * region.</p>
     */
    inline UpdateStreamRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream whose metadata you want to update.</p> <p>The stream
     * name is an identifier for the stream, and must be unique for each account and
     * region.</p>
     */
    inline UpdateStreamRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The ARN of the stream whose metadata you want to update.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The ARN of the stream whose metadata you want to update.</p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The ARN of the stream whose metadata you want to update.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The ARN of the stream whose metadata you want to update.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The ARN of the stream whose metadata you want to update.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The ARN of the stream whose metadata you want to update.</p>
     */
    inline UpdateStreamRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The ARN of the stream whose metadata you want to update.</p>
     */
    inline UpdateStreamRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the stream whose metadata you want to update.</p>
     */
    inline UpdateStreamRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>The version of the stream whose metadata you want to update.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p>The version of the stream whose metadata you want to update.</p>
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * <p>The version of the stream whose metadata you want to update.</p>
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * <p>The version of the stream whose metadata you want to update.</p>
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * <p>The version of the stream whose metadata you want to update.</p>
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * <p>The version of the stream whose metadata you want to update.</p>
     */
    inline UpdateStreamRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p>The version of the stream whose metadata you want to update.</p>
     */
    inline UpdateStreamRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the stream whose metadata you want to update.</p>
     */
    inline UpdateStreamRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p> In the
     * current implementation, Kinesis Video Streams does not use this name. </p>
     * </note>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p> In the
     * current implementation, Kinesis Video Streams does not use this name. </p>
     * </note>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p> In the
     * current implementation, Kinesis Video Streams does not use this name. </p>
     * </note>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p> In the
     * current implementation, Kinesis Video Streams does not use this name. </p>
     * </note>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p> In the
     * current implementation, Kinesis Video Streams does not use this name. </p>
     * </note>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p> In the
     * current implementation, Kinesis Video Streams does not use this name. </p>
     * </note>
     */
    inline UpdateStreamRequest& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p> In the
     * current implementation, Kinesis Video Streams does not use this name. </p>
     * </note>
     */
    inline UpdateStreamRequest& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p> In the
     * current implementation, Kinesis Video Streams does not use this name. </p>
     * </note>
     */
    inline UpdateStreamRequest& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The stream's media type. Use <code>MediaType</code> to specify the type of
     * content that the stream contains to the consumers of the stream. For more
     * information about media types, see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming
     * Requirements</a>.</p> <p>To play video on the console, you must specify the
     * correct video type. For example, if the video in the stream is H.264, specify
     * <code>video/h264</code> as the <code>MediaType</code>.</p>
     */
    inline const Aws::String& GetMediaType() const{ return m_mediaType; }

    /**
     * <p>The stream's media type. Use <code>MediaType</code> to specify the type of
     * content that the stream contains to the consumers of the stream. For more
     * information about media types, see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming
     * Requirements</a>.</p> <p>To play video on the console, you must specify the
     * correct video type. For example, if the video in the stream is H.264, specify
     * <code>video/h264</code> as the <code>MediaType</code>.</p>
     */
    inline bool MediaTypeHasBeenSet() const { return m_mediaTypeHasBeenSet; }

    /**
     * <p>The stream's media type. Use <code>MediaType</code> to specify the type of
     * content that the stream contains to the consumers of the stream. For more
     * information about media types, see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming
     * Requirements</a>.</p> <p>To play video on the console, you must specify the
     * correct video type. For example, if the video in the stream is H.264, specify
     * <code>video/h264</code> as the <code>MediaType</code>.</p>
     */
    inline void SetMediaType(const Aws::String& value) { m_mediaTypeHasBeenSet = true; m_mediaType = value; }

    /**
     * <p>The stream's media type. Use <code>MediaType</code> to specify the type of
     * content that the stream contains to the consumers of the stream. For more
     * information about media types, see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming
     * Requirements</a>.</p> <p>To play video on the console, you must specify the
     * correct video type. For example, if the video in the stream is H.264, specify
     * <code>video/h264</code> as the <code>MediaType</code>.</p>
     */
    inline void SetMediaType(Aws::String&& value) { m_mediaTypeHasBeenSet = true; m_mediaType = std::move(value); }

    /**
     * <p>The stream's media type. Use <code>MediaType</code> to specify the type of
     * content that the stream contains to the consumers of the stream. For more
     * information about media types, see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming
     * Requirements</a>.</p> <p>To play video on the console, you must specify the
     * correct video type. For example, if the video in the stream is H.264, specify
     * <code>video/h264</code> as the <code>MediaType</code>.</p>
     */
    inline void SetMediaType(const char* value) { m_mediaTypeHasBeenSet = true; m_mediaType.assign(value); }

    /**
     * <p>The stream's media type. Use <code>MediaType</code> to specify the type of
     * content that the stream contains to the consumers of the stream. For more
     * information about media types, see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming
     * Requirements</a>.</p> <p>To play video on the console, you must specify the
     * correct video type. For example, if the video in the stream is H.264, specify
     * <code>video/h264</code> as the <code>MediaType</code>.</p>
     */
    inline UpdateStreamRequest& WithMediaType(const Aws::String& value) { SetMediaType(value); return *this;}

    /**
     * <p>The stream's media type. Use <code>MediaType</code> to specify the type of
     * content that the stream contains to the consumers of the stream. For more
     * information about media types, see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming
     * Requirements</a>.</p> <p>To play video on the console, you must specify the
     * correct video type. For example, if the video in the stream is H.264, specify
     * <code>video/h264</code> as the <code>MediaType</code>.</p>
     */
    inline UpdateStreamRequest& WithMediaType(Aws::String&& value) { SetMediaType(std::move(value)); return *this;}

    /**
     * <p>The stream's media type. Use <code>MediaType</code> to specify the type of
     * content that the stream contains to the consumers of the stream. For more
     * information about media types, see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming
     * Requirements</a>.</p> <p>To play video on the console, you must specify the
     * correct video type. For example, if the video in the stream is H.264, specify
     * <code>video/h264</code> as the <code>MediaType</code>.</p>
     */
    inline UpdateStreamRequest& WithMediaType(const char* value) { SetMediaType(value); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet;

    Aws::String m_mediaType;
    bool m_mediaTypeHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
