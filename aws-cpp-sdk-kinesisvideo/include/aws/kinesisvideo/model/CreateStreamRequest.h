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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class AWS_KINESISVIDEO_API CreateStreamRequest : public KinesisVideoRequest
  {
  public:
    CreateStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStream"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p>In the
     * current implementation, Kinesis Video Streams does not use this name.</p>
     * </note>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p>In the
     * current implementation, Kinesis Video Streams does not use this name.</p>
     * </note>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p>In the
     * current implementation, Kinesis Video Streams does not use this name.</p>
     * </note>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p>In the
     * current implementation, Kinesis Video Streams does not use this name.</p>
     * </note>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p>In the
     * current implementation, Kinesis Video Streams does not use this name.</p>
     * </note>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p>In the
     * current implementation, Kinesis Video Streams does not use this name.</p>
     * </note>
     */
    inline CreateStreamRequest& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p>In the
     * current implementation, Kinesis Video Streams does not use this name.</p>
     * </note>
     */
    inline CreateStreamRequest& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The name of the device that is writing to the stream. </p> <note> <p>In the
     * current implementation, Kinesis Video Streams does not use this name.</p>
     * </note>
     */
    inline CreateStreamRequest& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>A name for the stream that you are creating.</p> <p>The stream name is an
     * identifier for the stream, and must be unique for each account and region.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>A name for the stream that you are creating.</p> <p>The stream name is an
     * identifier for the stream, and must be unique for each account and region.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>A name for the stream that you are creating.</p> <p>The stream name is an
     * identifier for the stream, and must be unique for each account and region.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>A name for the stream that you are creating.</p> <p>The stream name is an
     * identifier for the stream, and must be unique for each account and region.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>A name for the stream that you are creating.</p> <p>The stream name is an
     * identifier for the stream, and must be unique for each account and region.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>A name for the stream that you are creating.</p> <p>The stream name is an
     * identifier for the stream, and must be unique for each account and region.</p>
     */
    inline CreateStreamRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>A name for the stream that you are creating.</p> <p>The stream name is an
     * identifier for the stream, and must be unique for each account and region.</p>
     */
    inline CreateStreamRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>A name for the stream that you are creating.</p> <p>The stream name is an
     * identifier for the stream, and must be unique for each account and region.</p>
     */
    inline CreateStreamRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The media type of the stream. Consumers of the stream can use this
     * information when processing the stream. For more information about media types,
     * see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming Requirements</a>
     * for guidelines.</p> <p>This parameter is optional; the default value is
     * <code>null</code> (or empty in JSON).</p>
     */
    inline const Aws::String& GetMediaType() const{ return m_mediaType; }

    /**
     * <p>The media type of the stream. Consumers of the stream can use this
     * information when processing the stream. For more information about media types,
     * see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming Requirements</a>
     * for guidelines.</p> <p>This parameter is optional; the default value is
     * <code>null</code> (or empty in JSON).</p>
     */
    inline bool MediaTypeHasBeenSet() const { return m_mediaTypeHasBeenSet; }

    /**
     * <p>The media type of the stream. Consumers of the stream can use this
     * information when processing the stream. For more information about media types,
     * see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming Requirements</a>
     * for guidelines.</p> <p>This parameter is optional; the default value is
     * <code>null</code> (or empty in JSON).</p>
     */
    inline void SetMediaType(const Aws::String& value) { m_mediaTypeHasBeenSet = true; m_mediaType = value; }

    /**
     * <p>The media type of the stream. Consumers of the stream can use this
     * information when processing the stream. For more information about media types,
     * see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming Requirements</a>
     * for guidelines.</p> <p>This parameter is optional; the default value is
     * <code>null</code> (or empty in JSON).</p>
     */
    inline void SetMediaType(Aws::String&& value) { m_mediaTypeHasBeenSet = true; m_mediaType = std::move(value); }

    /**
     * <p>The media type of the stream. Consumers of the stream can use this
     * information when processing the stream. For more information about media types,
     * see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming Requirements</a>
     * for guidelines.</p> <p>This parameter is optional; the default value is
     * <code>null</code> (or empty in JSON).</p>
     */
    inline void SetMediaType(const char* value) { m_mediaTypeHasBeenSet = true; m_mediaType.assign(value); }

    /**
     * <p>The media type of the stream. Consumers of the stream can use this
     * information when processing the stream. For more information about media types,
     * see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming Requirements</a>
     * for guidelines.</p> <p>This parameter is optional; the default value is
     * <code>null</code> (or empty in JSON).</p>
     */
    inline CreateStreamRequest& WithMediaType(const Aws::String& value) { SetMediaType(value); return *this;}

    /**
     * <p>The media type of the stream. Consumers of the stream can use this
     * information when processing the stream. For more information about media types,
     * see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming Requirements</a>
     * for guidelines.</p> <p>This parameter is optional; the default value is
     * <code>null</code> (or empty in JSON).</p>
     */
    inline CreateStreamRequest& WithMediaType(Aws::String&& value) { SetMediaType(std::move(value)); return *this;}

    /**
     * <p>The media type of the stream. Consumers of the stream can use this
     * information when processing the stream. For more information about media types,
     * see <a
     * href="http://www.iana.org/assignments/media-types/media-types.xhtml">Media
     * Types</a>. If you choose to specify the <code>MediaType</code>, see <a
     * href="https://tools.ietf.org/html/rfc6838#section-4.2">Naming Requirements</a>
     * for guidelines.</p> <p>This parameter is optional; the default value is
     * <code>null</code> (or empty in JSON).</p>
     */
    inline CreateStreamRequest& WithMediaType(const char* value) { SetMediaType(value); return *this;}


    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key that you want Kinesis
     * Video Streams to use to encrypt stream data.</p> <p>If no key ID is specified,
     * the default, Kinesis Video-managed key (<code>aws/kinesisvideo</code>) is
     * used.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">DescribeKey</a>.
     * </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key that you want Kinesis
     * Video Streams to use to encrypt stream data.</p> <p>If no key ID is specified,
     * the default, Kinesis Video-managed key (<code>aws/kinesisvideo</code>) is
     * used.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">DescribeKey</a>.
     * </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key that you want Kinesis
     * Video Streams to use to encrypt stream data.</p> <p>If no key ID is specified,
     * the default, Kinesis Video-managed key (<code>aws/kinesisvideo</code>) is
     * used.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">DescribeKey</a>.
     * </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key that you want Kinesis
     * Video Streams to use to encrypt stream data.</p> <p>If no key ID is specified,
     * the default, Kinesis Video-managed key (<code>aws/kinesisvideo</code>) is
     * used.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">DescribeKey</a>.
     * </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key that you want Kinesis
     * Video Streams to use to encrypt stream data.</p> <p>If no key ID is specified,
     * the default, Kinesis Video-managed key (<code>aws/kinesisvideo</code>) is
     * used.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">DescribeKey</a>.
     * </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key that you want Kinesis
     * Video Streams to use to encrypt stream data.</p> <p>If no key ID is specified,
     * the default, Kinesis Video-managed key (<code>aws/kinesisvideo</code>) is
     * used.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">DescribeKey</a>.
     * </p>
     */
    inline CreateStreamRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key that you want Kinesis
     * Video Streams to use to encrypt stream data.</p> <p>If no key ID is specified,
     * the default, Kinesis Video-managed key (<code>aws/kinesisvideo</code>) is
     * used.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">DescribeKey</a>.
     * </p>
     */
    inline CreateStreamRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS Key Management Service (AWS KMS) key that you want Kinesis
     * Video Streams to use to encrypt stream data.</p> <p>If no key ID is specified,
     * the default, Kinesis Video-managed key (<code>aws/kinesisvideo</code>) is
     * used.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">DescribeKey</a>.
     * </p>
     */
    inline CreateStreamRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The number of hours that you want to retain the data in the stream. Kinesis
     * Video Streams retains the data in a data store that is associated with the
     * stream.</p> <p>The default value is 0, indicating that the stream does not
     * persist data.</p> <p>When the <code>DataRetentionInHours</code> value is 0,
     * consumers can still consume the fragments that remain in the service host
     * buffer, which has a retention time limit of 5 minutes and a retention memory
     * limit of 200 MB. Fragments are removed from the buffer when either limit is
     * reached.</p>
     */
    inline int GetDataRetentionInHours() const{ return m_dataRetentionInHours; }

    /**
     * <p>The number of hours that you want to retain the data in the stream. Kinesis
     * Video Streams retains the data in a data store that is associated with the
     * stream.</p> <p>The default value is 0, indicating that the stream does not
     * persist data.</p> <p>When the <code>DataRetentionInHours</code> value is 0,
     * consumers can still consume the fragments that remain in the service host
     * buffer, which has a retention time limit of 5 minutes and a retention memory
     * limit of 200 MB. Fragments are removed from the buffer when either limit is
     * reached.</p>
     */
    inline bool DataRetentionInHoursHasBeenSet() const { return m_dataRetentionInHoursHasBeenSet; }

    /**
     * <p>The number of hours that you want to retain the data in the stream. Kinesis
     * Video Streams retains the data in a data store that is associated with the
     * stream.</p> <p>The default value is 0, indicating that the stream does not
     * persist data.</p> <p>When the <code>DataRetentionInHours</code> value is 0,
     * consumers can still consume the fragments that remain in the service host
     * buffer, which has a retention time limit of 5 minutes and a retention memory
     * limit of 200 MB. Fragments are removed from the buffer when either limit is
     * reached.</p>
     */
    inline void SetDataRetentionInHours(int value) { m_dataRetentionInHoursHasBeenSet = true; m_dataRetentionInHours = value; }

    /**
     * <p>The number of hours that you want to retain the data in the stream. Kinesis
     * Video Streams retains the data in a data store that is associated with the
     * stream.</p> <p>The default value is 0, indicating that the stream does not
     * persist data.</p> <p>When the <code>DataRetentionInHours</code> value is 0,
     * consumers can still consume the fragments that remain in the service host
     * buffer, which has a retention time limit of 5 minutes and a retention memory
     * limit of 200 MB. Fragments are removed from the buffer when either limit is
     * reached.</p>
     */
    inline CreateStreamRequest& WithDataRetentionInHours(int value) { SetDataRetentionInHours(value); return *this;}


    /**
     * <p>A list of tags to associate with the specified stream. Each tag is a
     * key-value pair (the value is optional).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to associate with the specified stream. Each tag is a
     * key-value pair (the value is optional).</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to associate with the specified stream. Each tag is a
     * key-value pair (the value is optional).</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to associate with the specified stream. Each tag is a
     * key-value pair (the value is optional).</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to associate with the specified stream. Each tag is a
     * key-value pair (the value is optional).</p>
     */
    inline CreateStreamRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to associate with the specified stream. Each tag is a
     * key-value pair (the value is optional).</p>
     */
    inline CreateStreamRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to associate with the specified stream. Each tag is a
     * key-value pair (the value is optional).</p>
     */
    inline CreateStreamRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags to associate with the specified stream. Each tag is a
     * key-value pair (the value is optional).</p>
     */
    inline CreateStreamRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to associate with the specified stream. Each tag is a
     * key-value pair (the value is optional).</p>
     */
    inline CreateStreamRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to associate with the specified stream. Each tag is a
     * key-value pair (the value is optional).</p>
     */
    inline CreateStreamRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags to associate with the specified stream. Each tag is a
     * key-value pair (the value is optional).</p>
     */
    inline CreateStreamRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to associate with the specified stream. Each tag is a
     * key-value pair (the value is optional).</p>
     */
    inline CreateStreamRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to associate with the specified stream. Each tag is a
     * key-value pair (the value is optional).</p>
     */
    inline CreateStreamRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;

    Aws::String m_mediaType;
    bool m_mediaTypeHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    int m_dataRetentionInHours;
    bool m_dataRetentionInHoursHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
