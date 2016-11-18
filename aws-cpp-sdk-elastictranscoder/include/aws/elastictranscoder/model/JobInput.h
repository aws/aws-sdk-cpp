/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Encryption.h>
#include <aws/elastictranscoder/model/DetectedProperties.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>Information about the file that you're transcoding.</p>
   */
  class AWS_ELASTICTRANSCODER_API JobInput
  {
  public:
    JobInput();
    JobInput(const Aws::Utils::Json::JsonValue& jsonValue);
    JobInput& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p> The name of the file to transcode. Elsewhere in the body of the JSON block
     * is the the ID of the pipeline to use for processing the job. The
     * <code>InputBucket</code> object in that pipeline tells Elastic Transcoder which
     * Amazon S3 bucket to get the file from. </p> <p>If the file name includes a
     * prefix, such as <code>cooking/lasagna.mpg</code>, include the prefix in the key.
     * If the file isn't in the specified bucket, Elastic Transcoder returns an
     * error.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p> The name of the file to transcode. Elsewhere in the body of the JSON block
     * is the the ID of the pipeline to use for processing the job. The
     * <code>InputBucket</code> object in that pipeline tells Elastic Transcoder which
     * Amazon S3 bucket to get the file from. </p> <p>If the file name includes a
     * prefix, such as <code>cooking/lasagna.mpg</code>, include the prefix in the key.
     * If the file isn't in the specified bucket, Elastic Transcoder returns an
     * error.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p> The name of the file to transcode. Elsewhere in the body of the JSON block
     * is the the ID of the pipeline to use for processing the job. The
     * <code>InputBucket</code> object in that pipeline tells Elastic Transcoder which
     * Amazon S3 bucket to get the file from. </p> <p>If the file name includes a
     * prefix, such as <code>cooking/lasagna.mpg</code>, include the prefix in the key.
     * If the file isn't in the specified bucket, Elastic Transcoder returns an
     * error.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p> The name of the file to transcode. Elsewhere in the body of the JSON block
     * is the the ID of the pipeline to use for processing the job. The
     * <code>InputBucket</code> object in that pipeline tells Elastic Transcoder which
     * Amazon S3 bucket to get the file from. </p> <p>If the file name includes a
     * prefix, such as <code>cooking/lasagna.mpg</code>, include the prefix in the key.
     * If the file isn't in the specified bucket, Elastic Transcoder returns an
     * error.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p> The name of the file to transcode. Elsewhere in the body of the JSON block
     * is the the ID of the pipeline to use for processing the job. The
     * <code>InputBucket</code> object in that pipeline tells Elastic Transcoder which
     * Amazon S3 bucket to get the file from. </p> <p>If the file name includes a
     * prefix, such as <code>cooking/lasagna.mpg</code>, include the prefix in the key.
     * If the file isn't in the specified bucket, Elastic Transcoder returns an
     * error.</p>
     */
    inline JobInput& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p> The name of the file to transcode. Elsewhere in the body of the JSON block
     * is the the ID of the pipeline to use for processing the job. The
     * <code>InputBucket</code> object in that pipeline tells Elastic Transcoder which
     * Amazon S3 bucket to get the file from. </p> <p>If the file name includes a
     * prefix, such as <code>cooking/lasagna.mpg</code>, include the prefix in the key.
     * If the file isn't in the specified bucket, Elastic Transcoder returns an
     * error.</p>
     */
    inline JobInput& WithKey(Aws::String&& value) { SetKey(value); return *this;}

    /**
     * <p> The name of the file to transcode. Elsewhere in the body of the JSON block
     * is the the ID of the pipeline to use for processing the job. The
     * <code>InputBucket</code> object in that pipeline tells Elastic Transcoder which
     * Amazon S3 bucket to get the file from. </p> <p>If the file name includes a
     * prefix, such as <code>cooking/lasagna.mpg</code>, include the prefix in the key.
     * If the file isn't in the specified bucket, Elastic Transcoder returns an
     * error.</p>
     */
    inline JobInput& WithKey(const char* value) { SetKey(value); return *this;}

    /**
     * <p>The frame rate of the input file. If you want Elastic Transcoder to
     * automatically detect the frame rate of the input file, specify
     * <code>auto</code>. If you want to specify the frame rate for the input file,
     * enter one of the following values: </p> <p> <code>10</code>, <code>15</code>,
     * <code>23.97</code>, <code>24</code>, <code>25</code>, <code>29.97</code>,
     * <code>30</code>, <code>60</code> </p> <p>If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the frame
     * rate.</p>
     */
    inline const Aws::String& GetFrameRate() const{ return m_frameRate; }

    /**
     * <p>The frame rate of the input file. If you want Elastic Transcoder to
     * automatically detect the frame rate of the input file, specify
     * <code>auto</code>. If you want to specify the frame rate for the input file,
     * enter one of the following values: </p> <p> <code>10</code>, <code>15</code>,
     * <code>23.97</code>, <code>24</code>, <code>25</code>, <code>29.97</code>,
     * <code>30</code>, <code>60</code> </p> <p>If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the frame
     * rate.</p>
     */
    inline void SetFrameRate(const Aws::String& value) { m_frameRateHasBeenSet = true; m_frameRate = value; }

    /**
     * <p>The frame rate of the input file. If you want Elastic Transcoder to
     * automatically detect the frame rate of the input file, specify
     * <code>auto</code>. If you want to specify the frame rate for the input file,
     * enter one of the following values: </p> <p> <code>10</code>, <code>15</code>,
     * <code>23.97</code>, <code>24</code>, <code>25</code>, <code>29.97</code>,
     * <code>30</code>, <code>60</code> </p> <p>If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the frame
     * rate.</p>
     */
    inline void SetFrameRate(Aws::String&& value) { m_frameRateHasBeenSet = true; m_frameRate = value; }

    /**
     * <p>The frame rate of the input file. If you want Elastic Transcoder to
     * automatically detect the frame rate of the input file, specify
     * <code>auto</code>. If you want to specify the frame rate for the input file,
     * enter one of the following values: </p> <p> <code>10</code>, <code>15</code>,
     * <code>23.97</code>, <code>24</code>, <code>25</code>, <code>29.97</code>,
     * <code>30</code>, <code>60</code> </p> <p>If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the frame
     * rate.</p>
     */
    inline void SetFrameRate(const char* value) { m_frameRateHasBeenSet = true; m_frameRate.assign(value); }

    /**
     * <p>The frame rate of the input file. If you want Elastic Transcoder to
     * automatically detect the frame rate of the input file, specify
     * <code>auto</code>. If you want to specify the frame rate for the input file,
     * enter one of the following values: </p> <p> <code>10</code>, <code>15</code>,
     * <code>23.97</code>, <code>24</code>, <code>25</code>, <code>29.97</code>,
     * <code>30</code>, <code>60</code> </p> <p>If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the frame
     * rate.</p>
     */
    inline JobInput& WithFrameRate(const Aws::String& value) { SetFrameRate(value); return *this;}

    /**
     * <p>The frame rate of the input file. If you want Elastic Transcoder to
     * automatically detect the frame rate of the input file, specify
     * <code>auto</code>. If you want to specify the frame rate for the input file,
     * enter one of the following values: </p> <p> <code>10</code>, <code>15</code>,
     * <code>23.97</code>, <code>24</code>, <code>25</code>, <code>29.97</code>,
     * <code>30</code>, <code>60</code> </p> <p>If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the frame
     * rate.</p>
     */
    inline JobInput& WithFrameRate(Aws::String&& value) { SetFrameRate(value); return *this;}

    /**
     * <p>The frame rate of the input file. If you want Elastic Transcoder to
     * automatically detect the frame rate of the input file, specify
     * <code>auto</code>. If you want to specify the frame rate for the input file,
     * enter one of the following values: </p> <p> <code>10</code>, <code>15</code>,
     * <code>23.97</code>, <code>24</code>, <code>25</code>, <code>29.97</code>,
     * <code>30</code>, <code>60</code> </p> <p>If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the frame
     * rate.</p>
     */
    inline JobInput& WithFrameRate(const char* value) { SetFrameRate(value); return *this;}

    /**
     * <p>This value must be <code>auto</code>, which causes Elastic Transcoder to
     * automatically detect the resolution of the input file.</p>
     */
    inline const Aws::String& GetResolution() const{ return m_resolution; }

    /**
     * <p>This value must be <code>auto</code>, which causes Elastic Transcoder to
     * automatically detect the resolution of the input file.</p>
     */
    inline void SetResolution(const Aws::String& value) { m_resolutionHasBeenSet = true; m_resolution = value; }

    /**
     * <p>This value must be <code>auto</code>, which causes Elastic Transcoder to
     * automatically detect the resolution of the input file.</p>
     */
    inline void SetResolution(Aws::String&& value) { m_resolutionHasBeenSet = true; m_resolution = value; }

    /**
     * <p>This value must be <code>auto</code>, which causes Elastic Transcoder to
     * automatically detect the resolution of the input file.</p>
     */
    inline void SetResolution(const char* value) { m_resolutionHasBeenSet = true; m_resolution.assign(value); }

    /**
     * <p>This value must be <code>auto</code>, which causes Elastic Transcoder to
     * automatically detect the resolution of the input file.</p>
     */
    inline JobInput& WithResolution(const Aws::String& value) { SetResolution(value); return *this;}

    /**
     * <p>This value must be <code>auto</code>, which causes Elastic Transcoder to
     * automatically detect the resolution of the input file.</p>
     */
    inline JobInput& WithResolution(Aws::String&& value) { SetResolution(value); return *this;}

    /**
     * <p>This value must be <code>auto</code>, which causes Elastic Transcoder to
     * automatically detect the resolution of the input file.</p>
     */
    inline JobInput& WithResolution(const char* value) { SetResolution(value); return *this;}

    /**
     * <p> The aspect ratio of the input file. If you want Elastic Transcoder to
     * automatically detect the aspect ratio of the input file, specify
     * <code>auto</code>. If you want to specify the aspect ratio for the output file,
     * enter one of the following values: </p> <p> <code>1:1</code>, <code>4:3</code>,
     * <code>3:2</code>, <code>16:9</code> </p> <p> If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the aspect
     * ratio. </p>
     */
    inline const Aws::String& GetAspectRatio() const{ return m_aspectRatio; }

    /**
     * <p> The aspect ratio of the input file. If you want Elastic Transcoder to
     * automatically detect the aspect ratio of the input file, specify
     * <code>auto</code>. If you want to specify the aspect ratio for the output file,
     * enter one of the following values: </p> <p> <code>1:1</code>, <code>4:3</code>,
     * <code>3:2</code>, <code>16:9</code> </p> <p> If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the aspect
     * ratio. </p>
     */
    inline void SetAspectRatio(const Aws::String& value) { m_aspectRatioHasBeenSet = true; m_aspectRatio = value; }

    /**
     * <p> The aspect ratio of the input file. If you want Elastic Transcoder to
     * automatically detect the aspect ratio of the input file, specify
     * <code>auto</code>. If you want to specify the aspect ratio for the output file,
     * enter one of the following values: </p> <p> <code>1:1</code>, <code>4:3</code>,
     * <code>3:2</code>, <code>16:9</code> </p> <p> If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the aspect
     * ratio. </p>
     */
    inline void SetAspectRatio(Aws::String&& value) { m_aspectRatioHasBeenSet = true; m_aspectRatio = value; }

    /**
     * <p> The aspect ratio of the input file. If you want Elastic Transcoder to
     * automatically detect the aspect ratio of the input file, specify
     * <code>auto</code>. If you want to specify the aspect ratio for the output file,
     * enter one of the following values: </p> <p> <code>1:1</code>, <code>4:3</code>,
     * <code>3:2</code>, <code>16:9</code> </p> <p> If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the aspect
     * ratio. </p>
     */
    inline void SetAspectRatio(const char* value) { m_aspectRatioHasBeenSet = true; m_aspectRatio.assign(value); }

    /**
     * <p> The aspect ratio of the input file. If you want Elastic Transcoder to
     * automatically detect the aspect ratio of the input file, specify
     * <code>auto</code>. If you want to specify the aspect ratio for the output file,
     * enter one of the following values: </p> <p> <code>1:1</code>, <code>4:3</code>,
     * <code>3:2</code>, <code>16:9</code> </p> <p> If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the aspect
     * ratio. </p>
     */
    inline JobInput& WithAspectRatio(const Aws::String& value) { SetAspectRatio(value); return *this;}

    /**
     * <p> The aspect ratio of the input file. If you want Elastic Transcoder to
     * automatically detect the aspect ratio of the input file, specify
     * <code>auto</code>. If you want to specify the aspect ratio for the output file,
     * enter one of the following values: </p> <p> <code>1:1</code>, <code>4:3</code>,
     * <code>3:2</code>, <code>16:9</code> </p> <p> If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the aspect
     * ratio. </p>
     */
    inline JobInput& WithAspectRatio(Aws::String&& value) { SetAspectRatio(value); return *this;}

    /**
     * <p> The aspect ratio of the input file. If you want Elastic Transcoder to
     * automatically detect the aspect ratio of the input file, specify
     * <code>auto</code>. If you want to specify the aspect ratio for the output file,
     * enter one of the following values: </p> <p> <code>1:1</code>, <code>4:3</code>,
     * <code>3:2</code>, <code>16:9</code> </p> <p> If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the aspect
     * ratio. </p>
     */
    inline JobInput& WithAspectRatio(const char* value) { SetAspectRatio(value); return *this;}

    /**
     * <p>Whether the input file is interlaced. If you want Elastic Transcoder to
     * automatically detect whether the input file is interlaced, specify
     * <code>auto</code>. If you want to specify whether the input file is interlaced,
     * enter one of the following values:</p> <p><code>true</code>,
     * <code>false</code></p> <p>If you specify a value other than <code>auto</code>,
     * Elastic Transcoder disables automatic detection of interlacing.</p>
     */
    inline const Aws::String& GetInterlaced() const{ return m_interlaced; }

    /**
     * <p>Whether the input file is interlaced. If you want Elastic Transcoder to
     * automatically detect whether the input file is interlaced, specify
     * <code>auto</code>. If you want to specify whether the input file is interlaced,
     * enter one of the following values:</p> <p><code>true</code>,
     * <code>false</code></p> <p>If you specify a value other than <code>auto</code>,
     * Elastic Transcoder disables automatic detection of interlacing.</p>
     */
    inline void SetInterlaced(const Aws::String& value) { m_interlacedHasBeenSet = true; m_interlaced = value; }

    /**
     * <p>Whether the input file is interlaced. If you want Elastic Transcoder to
     * automatically detect whether the input file is interlaced, specify
     * <code>auto</code>. If you want to specify whether the input file is interlaced,
     * enter one of the following values:</p> <p><code>true</code>,
     * <code>false</code></p> <p>If you specify a value other than <code>auto</code>,
     * Elastic Transcoder disables automatic detection of interlacing.</p>
     */
    inline void SetInterlaced(Aws::String&& value) { m_interlacedHasBeenSet = true; m_interlaced = value; }

    /**
     * <p>Whether the input file is interlaced. If you want Elastic Transcoder to
     * automatically detect whether the input file is interlaced, specify
     * <code>auto</code>. If you want to specify whether the input file is interlaced,
     * enter one of the following values:</p> <p><code>true</code>,
     * <code>false</code></p> <p>If you specify a value other than <code>auto</code>,
     * Elastic Transcoder disables automatic detection of interlacing.</p>
     */
    inline void SetInterlaced(const char* value) { m_interlacedHasBeenSet = true; m_interlaced.assign(value); }

    /**
     * <p>Whether the input file is interlaced. If you want Elastic Transcoder to
     * automatically detect whether the input file is interlaced, specify
     * <code>auto</code>. If you want to specify whether the input file is interlaced,
     * enter one of the following values:</p> <p><code>true</code>,
     * <code>false</code></p> <p>If you specify a value other than <code>auto</code>,
     * Elastic Transcoder disables automatic detection of interlacing.</p>
     */
    inline JobInput& WithInterlaced(const Aws::String& value) { SetInterlaced(value); return *this;}

    /**
     * <p>Whether the input file is interlaced. If you want Elastic Transcoder to
     * automatically detect whether the input file is interlaced, specify
     * <code>auto</code>. If you want to specify whether the input file is interlaced,
     * enter one of the following values:</p> <p><code>true</code>,
     * <code>false</code></p> <p>If you specify a value other than <code>auto</code>,
     * Elastic Transcoder disables automatic detection of interlacing.</p>
     */
    inline JobInput& WithInterlaced(Aws::String&& value) { SetInterlaced(value); return *this;}

    /**
     * <p>Whether the input file is interlaced. If you want Elastic Transcoder to
     * automatically detect whether the input file is interlaced, specify
     * <code>auto</code>. If you want to specify whether the input file is interlaced,
     * enter one of the following values:</p> <p><code>true</code>,
     * <code>false</code></p> <p>If you specify a value other than <code>auto</code>,
     * Elastic Transcoder disables automatic detection of interlacing.</p>
     */
    inline JobInput& WithInterlaced(const char* value) { SetInterlaced(value); return *this;}

    /**
     * <p>The container type for the input file. If you want Elastic Transcoder to
     * automatically detect the container type of the input file, specify
     * <code>auto</code>. If you want to specify the container type for the input file,
     * enter one of the following values: </p> <p> <code>3gp</code>, <code>aac</code>,
     * <code>asf</code>, <code>avi</code>, <code>divx</code>, <code>flv</code>,
     * <code>m4a</code>, <code>mkv</code>, <code>mov</code>, <code>mp3</code>,
     * <code>mp4</code>, <code>mpeg</code>, <code>mpeg-ps</code>, <code>mpeg-ts</code>,
     * <code>mxf</code>, <code>ogg</code>, <code>vob</code>, <code>wav</code>,
     * <code>webm</code> </p>
     */
    inline const Aws::String& GetContainer() const{ return m_container; }

    /**
     * <p>The container type for the input file. If you want Elastic Transcoder to
     * automatically detect the container type of the input file, specify
     * <code>auto</code>. If you want to specify the container type for the input file,
     * enter one of the following values: </p> <p> <code>3gp</code>, <code>aac</code>,
     * <code>asf</code>, <code>avi</code>, <code>divx</code>, <code>flv</code>,
     * <code>m4a</code>, <code>mkv</code>, <code>mov</code>, <code>mp3</code>,
     * <code>mp4</code>, <code>mpeg</code>, <code>mpeg-ps</code>, <code>mpeg-ts</code>,
     * <code>mxf</code>, <code>ogg</code>, <code>vob</code>, <code>wav</code>,
     * <code>webm</code> </p>
     */
    inline void SetContainer(const Aws::String& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>The container type for the input file. If you want Elastic Transcoder to
     * automatically detect the container type of the input file, specify
     * <code>auto</code>. If you want to specify the container type for the input file,
     * enter one of the following values: </p> <p> <code>3gp</code>, <code>aac</code>,
     * <code>asf</code>, <code>avi</code>, <code>divx</code>, <code>flv</code>,
     * <code>m4a</code>, <code>mkv</code>, <code>mov</code>, <code>mp3</code>,
     * <code>mp4</code>, <code>mpeg</code>, <code>mpeg-ps</code>, <code>mpeg-ts</code>,
     * <code>mxf</code>, <code>ogg</code>, <code>vob</code>, <code>wav</code>,
     * <code>webm</code> </p>
     */
    inline void SetContainer(Aws::String&& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>The container type for the input file. If you want Elastic Transcoder to
     * automatically detect the container type of the input file, specify
     * <code>auto</code>. If you want to specify the container type for the input file,
     * enter one of the following values: </p> <p> <code>3gp</code>, <code>aac</code>,
     * <code>asf</code>, <code>avi</code>, <code>divx</code>, <code>flv</code>,
     * <code>m4a</code>, <code>mkv</code>, <code>mov</code>, <code>mp3</code>,
     * <code>mp4</code>, <code>mpeg</code>, <code>mpeg-ps</code>, <code>mpeg-ts</code>,
     * <code>mxf</code>, <code>ogg</code>, <code>vob</code>, <code>wav</code>,
     * <code>webm</code> </p>
     */
    inline void SetContainer(const char* value) { m_containerHasBeenSet = true; m_container.assign(value); }

    /**
     * <p>The container type for the input file. If you want Elastic Transcoder to
     * automatically detect the container type of the input file, specify
     * <code>auto</code>. If you want to specify the container type for the input file,
     * enter one of the following values: </p> <p> <code>3gp</code>, <code>aac</code>,
     * <code>asf</code>, <code>avi</code>, <code>divx</code>, <code>flv</code>,
     * <code>m4a</code>, <code>mkv</code>, <code>mov</code>, <code>mp3</code>,
     * <code>mp4</code>, <code>mpeg</code>, <code>mpeg-ps</code>, <code>mpeg-ts</code>,
     * <code>mxf</code>, <code>ogg</code>, <code>vob</code>, <code>wav</code>,
     * <code>webm</code> </p>
     */
    inline JobInput& WithContainer(const Aws::String& value) { SetContainer(value); return *this;}

    /**
     * <p>The container type for the input file. If you want Elastic Transcoder to
     * automatically detect the container type of the input file, specify
     * <code>auto</code>. If you want to specify the container type for the input file,
     * enter one of the following values: </p> <p> <code>3gp</code>, <code>aac</code>,
     * <code>asf</code>, <code>avi</code>, <code>divx</code>, <code>flv</code>,
     * <code>m4a</code>, <code>mkv</code>, <code>mov</code>, <code>mp3</code>,
     * <code>mp4</code>, <code>mpeg</code>, <code>mpeg-ps</code>, <code>mpeg-ts</code>,
     * <code>mxf</code>, <code>ogg</code>, <code>vob</code>, <code>wav</code>,
     * <code>webm</code> </p>
     */
    inline JobInput& WithContainer(Aws::String&& value) { SetContainer(value); return *this;}

    /**
     * <p>The container type for the input file. If you want Elastic Transcoder to
     * automatically detect the container type of the input file, specify
     * <code>auto</code>. If you want to specify the container type for the input file,
     * enter one of the following values: </p> <p> <code>3gp</code>, <code>aac</code>,
     * <code>asf</code>, <code>avi</code>, <code>divx</code>, <code>flv</code>,
     * <code>m4a</code>, <code>mkv</code>, <code>mov</code>, <code>mp3</code>,
     * <code>mp4</code>, <code>mpeg</code>, <code>mpeg-ps</code>, <code>mpeg-ts</code>,
     * <code>mxf</code>, <code>ogg</code>, <code>vob</code>, <code>wav</code>,
     * <code>webm</code> </p>
     */
    inline JobInput& WithContainer(const char* value) { SetContainer(value); return *this;}

    /**
     * <p>The encryption settings, if any, that are used for decrypting your input
     * files. If your input file is encrypted, you must specify the mode that Elastic
     * Transcoder will use to decrypt your file.</p>
     */
    inline const Encryption& GetEncryption() const{ return m_encryption; }

    /**
     * <p>The encryption settings, if any, that are used for decrypting your input
     * files. If your input file is encrypted, you must specify the mode that Elastic
     * Transcoder will use to decrypt your file.</p>
     */
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * <p>The encryption settings, if any, that are used for decrypting your input
     * files. If your input file is encrypted, you must specify the mode that Elastic
     * Transcoder will use to decrypt your file.</p>
     */
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * <p>The encryption settings, if any, that are used for decrypting your input
     * files. If your input file is encrypted, you must specify the mode that Elastic
     * Transcoder will use to decrypt your file.</p>
     */
    inline JobInput& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}

    /**
     * <p>The encryption settings, if any, that are used for decrypting your input
     * files. If your input file is encrypted, you must specify the mode that Elastic
     * Transcoder will use to decrypt your file.</p>
     */
    inline JobInput& WithEncryption(Encryption&& value) { SetEncryption(value); return *this;}

    /**
     * <p>The detected properties of the input file.</p>
     */
    inline const DetectedProperties& GetDetectedProperties() const{ return m_detectedProperties; }

    /**
     * <p>The detected properties of the input file.</p>
     */
    inline void SetDetectedProperties(const DetectedProperties& value) { m_detectedPropertiesHasBeenSet = true; m_detectedProperties = value; }

    /**
     * <p>The detected properties of the input file.</p>
     */
    inline void SetDetectedProperties(DetectedProperties&& value) { m_detectedPropertiesHasBeenSet = true; m_detectedProperties = value; }

    /**
     * <p>The detected properties of the input file.</p>
     */
    inline JobInput& WithDetectedProperties(const DetectedProperties& value) { SetDetectedProperties(value); return *this;}

    /**
     * <p>The detected properties of the input file.</p>
     */
    inline JobInput& WithDetectedProperties(DetectedProperties&& value) { SetDetectedProperties(value); return *this;}

  private:
    Aws::String m_key;
    bool m_keyHasBeenSet;
    Aws::String m_frameRate;
    bool m_frameRateHasBeenSet;
    Aws::String m_resolution;
    bool m_resolutionHasBeenSet;
    Aws::String m_aspectRatio;
    bool m_aspectRatioHasBeenSet;
    Aws::String m_interlaced;
    bool m_interlacedHasBeenSet;
    Aws::String m_container;
    bool m_containerHasBeenSet;
    Encryption m_encryption;
    bool m_encryptionHasBeenSet;
    DetectedProperties m_detectedProperties;
    bool m_detectedPropertiesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
