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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Encryption.h>
#include <aws/elastictranscoder/model/TimeSpan.h>
#include <aws/elastictranscoder/model/InputCaptions.h>
#include <aws/elastictranscoder/model/DetectedProperties.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>Information about the file that you're transcoding.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/JobInput">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API JobInput
  {
  public:
    JobInput();
    JobInput(Aws::Utils::Json::JsonView jsonValue);
    JobInput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

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
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

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
    inline JobInput& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

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
    inline bool FrameRateHasBeenSet() const { return m_frameRateHasBeenSet; }

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
    inline void SetFrameRate(Aws::String&& value) { m_frameRateHasBeenSet = true; m_frameRate = std::move(value); }

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
    inline JobInput& WithFrameRate(Aws::String&& value) { SetFrameRate(std::move(value)); return *this;}

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
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }

    /**
     * <p>This value must be <code>auto</code>, which causes Elastic Transcoder to
     * automatically detect the resolution of the input file.</p>
     */
    inline void SetResolution(const Aws::String& value) { m_resolutionHasBeenSet = true; m_resolution = value; }

    /**
     * <p>This value must be <code>auto</code>, which causes Elastic Transcoder to
     * automatically detect the resolution of the input file.</p>
     */
    inline void SetResolution(Aws::String&& value) { m_resolutionHasBeenSet = true; m_resolution = std::move(value); }

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
    inline JobInput& WithResolution(Aws::String&& value) { SetResolution(std::move(value)); return *this;}

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
    inline bool AspectRatioHasBeenSet() const { return m_aspectRatioHasBeenSet; }

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
    inline void SetAspectRatio(Aws::String&& value) { m_aspectRatioHasBeenSet = true; m_aspectRatio = std::move(value); }

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
    inline JobInput& WithAspectRatio(Aws::String&& value) { SetAspectRatio(std::move(value)); return *this;}

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
     * enter one of the following values:</p> <p> <code>true</code>, <code>false</code>
     * </p> <p>If you specify a value other than <code>auto</code>, Elastic Transcoder
     * disables automatic detection of interlacing.</p>
     */
    inline const Aws::String& GetInterlaced() const{ return m_interlaced; }

    /**
     * <p>Whether the input file is interlaced. If you want Elastic Transcoder to
     * automatically detect whether the input file is interlaced, specify
     * <code>auto</code>. If you want to specify whether the input file is interlaced,
     * enter one of the following values:</p> <p> <code>true</code>, <code>false</code>
     * </p> <p>If you specify a value other than <code>auto</code>, Elastic Transcoder
     * disables automatic detection of interlacing.</p>
     */
    inline bool InterlacedHasBeenSet() const { return m_interlacedHasBeenSet; }

    /**
     * <p>Whether the input file is interlaced. If you want Elastic Transcoder to
     * automatically detect whether the input file is interlaced, specify
     * <code>auto</code>. If you want to specify whether the input file is interlaced,
     * enter one of the following values:</p> <p> <code>true</code>, <code>false</code>
     * </p> <p>If you specify a value other than <code>auto</code>, Elastic Transcoder
     * disables automatic detection of interlacing.</p>
     */
    inline void SetInterlaced(const Aws::String& value) { m_interlacedHasBeenSet = true; m_interlaced = value; }

    /**
     * <p>Whether the input file is interlaced. If you want Elastic Transcoder to
     * automatically detect whether the input file is interlaced, specify
     * <code>auto</code>. If you want to specify whether the input file is interlaced,
     * enter one of the following values:</p> <p> <code>true</code>, <code>false</code>
     * </p> <p>If you specify a value other than <code>auto</code>, Elastic Transcoder
     * disables automatic detection of interlacing.</p>
     */
    inline void SetInterlaced(Aws::String&& value) { m_interlacedHasBeenSet = true; m_interlaced = std::move(value); }

    /**
     * <p>Whether the input file is interlaced. If you want Elastic Transcoder to
     * automatically detect whether the input file is interlaced, specify
     * <code>auto</code>. If you want to specify whether the input file is interlaced,
     * enter one of the following values:</p> <p> <code>true</code>, <code>false</code>
     * </p> <p>If you specify a value other than <code>auto</code>, Elastic Transcoder
     * disables automatic detection of interlacing.</p>
     */
    inline void SetInterlaced(const char* value) { m_interlacedHasBeenSet = true; m_interlaced.assign(value); }

    /**
     * <p>Whether the input file is interlaced. If you want Elastic Transcoder to
     * automatically detect whether the input file is interlaced, specify
     * <code>auto</code>. If you want to specify whether the input file is interlaced,
     * enter one of the following values:</p> <p> <code>true</code>, <code>false</code>
     * </p> <p>If you specify a value other than <code>auto</code>, Elastic Transcoder
     * disables automatic detection of interlacing.</p>
     */
    inline JobInput& WithInterlaced(const Aws::String& value) { SetInterlaced(value); return *this;}

    /**
     * <p>Whether the input file is interlaced. If you want Elastic Transcoder to
     * automatically detect whether the input file is interlaced, specify
     * <code>auto</code>. If you want to specify whether the input file is interlaced,
     * enter one of the following values:</p> <p> <code>true</code>, <code>false</code>
     * </p> <p>If you specify a value other than <code>auto</code>, Elastic Transcoder
     * disables automatic detection of interlacing.</p>
     */
    inline JobInput& WithInterlaced(Aws::String&& value) { SetInterlaced(std::move(value)); return *this;}

    /**
     * <p>Whether the input file is interlaced. If you want Elastic Transcoder to
     * automatically detect whether the input file is interlaced, specify
     * <code>auto</code>. If you want to specify whether the input file is interlaced,
     * enter one of the following values:</p> <p> <code>true</code>, <code>false</code>
     * </p> <p>If you specify a value other than <code>auto</code>, Elastic Transcoder
     * disables automatic detection of interlacing.</p>
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
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }

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
    inline void SetContainer(Aws::String&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }

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
    inline JobInput& WithContainer(Aws::String&& value) { SetContainer(std::move(value)); return *this;}

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
     * Transcoder uses to decrypt your file.</p>
     */
    inline const Encryption& GetEncryption() const{ return m_encryption; }

    /**
     * <p>The encryption settings, if any, that are used for decrypting your input
     * files. If your input file is encrypted, you must specify the mode that Elastic
     * Transcoder uses to decrypt your file.</p>
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * <p>The encryption settings, if any, that are used for decrypting your input
     * files. If your input file is encrypted, you must specify the mode that Elastic
     * Transcoder uses to decrypt your file.</p>
     */
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * <p>The encryption settings, if any, that are used for decrypting your input
     * files. If your input file is encrypted, you must specify the mode that Elastic
     * Transcoder uses to decrypt your file.</p>
     */
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * <p>The encryption settings, if any, that are used for decrypting your input
     * files. If your input file is encrypted, you must specify the mode that Elastic
     * Transcoder uses to decrypt your file.</p>
     */
    inline JobInput& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}

    /**
     * <p>The encryption settings, if any, that are used for decrypting your input
     * files. If your input file is encrypted, you must specify the mode that Elastic
     * Transcoder uses to decrypt your file.</p>
     */
    inline JobInput& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * <p>Settings for clipping an input. Each input can have different clip
     * settings.</p>
     */
    inline const TimeSpan& GetTimeSpan() const{ return m_timeSpan; }

    /**
     * <p>Settings for clipping an input. Each input can have different clip
     * settings.</p>
     */
    inline bool TimeSpanHasBeenSet() const { return m_timeSpanHasBeenSet; }

    /**
     * <p>Settings for clipping an input. Each input can have different clip
     * settings.</p>
     */
    inline void SetTimeSpan(const TimeSpan& value) { m_timeSpanHasBeenSet = true; m_timeSpan = value; }

    /**
     * <p>Settings for clipping an input. Each input can have different clip
     * settings.</p>
     */
    inline void SetTimeSpan(TimeSpan&& value) { m_timeSpanHasBeenSet = true; m_timeSpan = std::move(value); }

    /**
     * <p>Settings for clipping an input. Each input can have different clip
     * settings.</p>
     */
    inline JobInput& WithTimeSpan(const TimeSpan& value) { SetTimeSpan(value); return *this;}

    /**
     * <p>Settings for clipping an input. Each input can have different clip
     * settings.</p>
     */
    inline JobInput& WithTimeSpan(TimeSpan&& value) { SetTimeSpan(std::move(value)); return *this;}


    /**
     * <p>You can configure Elastic Transcoder to transcode captions, or subtitles,
     * from one format to another. All captions must be in UTF-8. Elastic Transcoder
     * supports two types of captions:</p> <ul> <li> <p> <b>Embedded:</b> Embedded
     * captions are included in the same file as the audio and video. Elastic
     * Transcoder supports only one embedded caption per language, to a maximum of 300
     * embedded captions per file.</p> <p>Valid input values include: <code>CEA-608
     * (EIA-608</code>, first non-empty channel only), <code>CEA-708 (EIA-708</code>,
     * first non-empty channel only), and <code>mov-text</code> </p> <p>Valid outputs
     * include: <code>mov-text</code> </p> <p>Elastic Transcoder supports a maximum of
     * one embedded format per output.</p> </li> <li> <p> <b>Sidecar:</b> Sidecar
     * captions are kept in a separate metadata file from the audio and video data.
     * Sidecar captions require a player that is capable of understanding the
     * relationship between the video file and the sidecar file. Elastic Transcoder
     * supports only one sidecar caption per language, to a maximum of 20 sidecar
     * captions per file.</p> <p>Valid input values include: <code>dfxp</code> (first
     * div element only), <code>ebu-tt</code>, <code>scc</code>, <code>smpt</code>,
     * <code>srt</code>, <code>ttml</code> (first div element only), and
     * <code>webvtt</code> </p> <p>Valid outputs include: <code>dfxp</code> (first div
     * element only), <code>scc</code>, <code>srt</code>, and <code>webvtt</code>.</p>
     * </li> </ul> <p>If you want ttml or smpte-tt compatible captions, specify dfxp as
     * your output format.</p> <p>Elastic Transcoder does not support OCR (Optical
     * Character Recognition), does not accept pictures as a valid input for captions,
     * and is not available for audio-only transcoding. Elastic Transcoder does not
     * preserve text formatting (for example, italics) during the transcoding
     * process.</p> <p>To remove captions or leave the captions empty, set
     * <code>Captions</code> to null. To pass through existing captions unchanged, set
     * the <code>MergePolicy</code> to <code>MergeRetain</code>, and pass in a null
     * <code>CaptionSources</code> array.</p> <p>For more information on embedded
     * files, see the Subtitles Wikipedia page.</p> <p>For more information on sidecar
     * files, see the Extensible Metadata Platform and Sidecar file Wikipedia
     * pages.</p>
     */
    inline const InputCaptions& GetInputCaptions() const{ return m_inputCaptions; }

    /**
     * <p>You can configure Elastic Transcoder to transcode captions, or subtitles,
     * from one format to another. All captions must be in UTF-8. Elastic Transcoder
     * supports two types of captions:</p> <ul> <li> <p> <b>Embedded:</b> Embedded
     * captions are included in the same file as the audio and video. Elastic
     * Transcoder supports only one embedded caption per language, to a maximum of 300
     * embedded captions per file.</p> <p>Valid input values include: <code>CEA-608
     * (EIA-608</code>, first non-empty channel only), <code>CEA-708 (EIA-708</code>,
     * first non-empty channel only), and <code>mov-text</code> </p> <p>Valid outputs
     * include: <code>mov-text</code> </p> <p>Elastic Transcoder supports a maximum of
     * one embedded format per output.</p> </li> <li> <p> <b>Sidecar:</b> Sidecar
     * captions are kept in a separate metadata file from the audio and video data.
     * Sidecar captions require a player that is capable of understanding the
     * relationship between the video file and the sidecar file. Elastic Transcoder
     * supports only one sidecar caption per language, to a maximum of 20 sidecar
     * captions per file.</p> <p>Valid input values include: <code>dfxp</code> (first
     * div element only), <code>ebu-tt</code>, <code>scc</code>, <code>smpt</code>,
     * <code>srt</code>, <code>ttml</code> (first div element only), and
     * <code>webvtt</code> </p> <p>Valid outputs include: <code>dfxp</code> (first div
     * element only), <code>scc</code>, <code>srt</code>, and <code>webvtt</code>.</p>
     * </li> </ul> <p>If you want ttml or smpte-tt compatible captions, specify dfxp as
     * your output format.</p> <p>Elastic Transcoder does not support OCR (Optical
     * Character Recognition), does not accept pictures as a valid input for captions,
     * and is not available for audio-only transcoding. Elastic Transcoder does not
     * preserve text formatting (for example, italics) during the transcoding
     * process.</p> <p>To remove captions or leave the captions empty, set
     * <code>Captions</code> to null. To pass through existing captions unchanged, set
     * the <code>MergePolicy</code> to <code>MergeRetain</code>, and pass in a null
     * <code>CaptionSources</code> array.</p> <p>For more information on embedded
     * files, see the Subtitles Wikipedia page.</p> <p>For more information on sidecar
     * files, see the Extensible Metadata Platform and Sidecar file Wikipedia
     * pages.</p>
     */
    inline bool InputCaptionsHasBeenSet() const { return m_inputCaptionsHasBeenSet; }

    /**
     * <p>You can configure Elastic Transcoder to transcode captions, or subtitles,
     * from one format to another. All captions must be in UTF-8. Elastic Transcoder
     * supports two types of captions:</p> <ul> <li> <p> <b>Embedded:</b> Embedded
     * captions are included in the same file as the audio and video. Elastic
     * Transcoder supports only one embedded caption per language, to a maximum of 300
     * embedded captions per file.</p> <p>Valid input values include: <code>CEA-608
     * (EIA-608</code>, first non-empty channel only), <code>CEA-708 (EIA-708</code>,
     * first non-empty channel only), and <code>mov-text</code> </p> <p>Valid outputs
     * include: <code>mov-text</code> </p> <p>Elastic Transcoder supports a maximum of
     * one embedded format per output.</p> </li> <li> <p> <b>Sidecar:</b> Sidecar
     * captions are kept in a separate metadata file from the audio and video data.
     * Sidecar captions require a player that is capable of understanding the
     * relationship between the video file and the sidecar file. Elastic Transcoder
     * supports only one sidecar caption per language, to a maximum of 20 sidecar
     * captions per file.</p> <p>Valid input values include: <code>dfxp</code> (first
     * div element only), <code>ebu-tt</code>, <code>scc</code>, <code>smpt</code>,
     * <code>srt</code>, <code>ttml</code> (first div element only), and
     * <code>webvtt</code> </p> <p>Valid outputs include: <code>dfxp</code> (first div
     * element only), <code>scc</code>, <code>srt</code>, and <code>webvtt</code>.</p>
     * </li> </ul> <p>If you want ttml or smpte-tt compatible captions, specify dfxp as
     * your output format.</p> <p>Elastic Transcoder does not support OCR (Optical
     * Character Recognition), does not accept pictures as a valid input for captions,
     * and is not available for audio-only transcoding. Elastic Transcoder does not
     * preserve text formatting (for example, italics) during the transcoding
     * process.</p> <p>To remove captions or leave the captions empty, set
     * <code>Captions</code> to null. To pass through existing captions unchanged, set
     * the <code>MergePolicy</code> to <code>MergeRetain</code>, and pass in a null
     * <code>CaptionSources</code> array.</p> <p>For more information on embedded
     * files, see the Subtitles Wikipedia page.</p> <p>For more information on sidecar
     * files, see the Extensible Metadata Platform and Sidecar file Wikipedia
     * pages.</p>
     */
    inline void SetInputCaptions(const InputCaptions& value) { m_inputCaptionsHasBeenSet = true; m_inputCaptions = value; }

    /**
     * <p>You can configure Elastic Transcoder to transcode captions, or subtitles,
     * from one format to another. All captions must be in UTF-8. Elastic Transcoder
     * supports two types of captions:</p> <ul> <li> <p> <b>Embedded:</b> Embedded
     * captions are included in the same file as the audio and video. Elastic
     * Transcoder supports only one embedded caption per language, to a maximum of 300
     * embedded captions per file.</p> <p>Valid input values include: <code>CEA-608
     * (EIA-608</code>, first non-empty channel only), <code>CEA-708 (EIA-708</code>,
     * first non-empty channel only), and <code>mov-text</code> </p> <p>Valid outputs
     * include: <code>mov-text</code> </p> <p>Elastic Transcoder supports a maximum of
     * one embedded format per output.</p> </li> <li> <p> <b>Sidecar:</b> Sidecar
     * captions are kept in a separate metadata file from the audio and video data.
     * Sidecar captions require a player that is capable of understanding the
     * relationship between the video file and the sidecar file. Elastic Transcoder
     * supports only one sidecar caption per language, to a maximum of 20 sidecar
     * captions per file.</p> <p>Valid input values include: <code>dfxp</code> (first
     * div element only), <code>ebu-tt</code>, <code>scc</code>, <code>smpt</code>,
     * <code>srt</code>, <code>ttml</code> (first div element only), and
     * <code>webvtt</code> </p> <p>Valid outputs include: <code>dfxp</code> (first div
     * element only), <code>scc</code>, <code>srt</code>, and <code>webvtt</code>.</p>
     * </li> </ul> <p>If you want ttml or smpte-tt compatible captions, specify dfxp as
     * your output format.</p> <p>Elastic Transcoder does not support OCR (Optical
     * Character Recognition), does not accept pictures as a valid input for captions,
     * and is not available for audio-only transcoding. Elastic Transcoder does not
     * preserve text formatting (for example, italics) during the transcoding
     * process.</p> <p>To remove captions or leave the captions empty, set
     * <code>Captions</code> to null. To pass through existing captions unchanged, set
     * the <code>MergePolicy</code> to <code>MergeRetain</code>, and pass in a null
     * <code>CaptionSources</code> array.</p> <p>For more information on embedded
     * files, see the Subtitles Wikipedia page.</p> <p>For more information on sidecar
     * files, see the Extensible Metadata Platform and Sidecar file Wikipedia
     * pages.</p>
     */
    inline void SetInputCaptions(InputCaptions&& value) { m_inputCaptionsHasBeenSet = true; m_inputCaptions = std::move(value); }

    /**
     * <p>You can configure Elastic Transcoder to transcode captions, or subtitles,
     * from one format to another. All captions must be in UTF-8. Elastic Transcoder
     * supports two types of captions:</p> <ul> <li> <p> <b>Embedded:</b> Embedded
     * captions are included in the same file as the audio and video. Elastic
     * Transcoder supports only one embedded caption per language, to a maximum of 300
     * embedded captions per file.</p> <p>Valid input values include: <code>CEA-608
     * (EIA-608</code>, first non-empty channel only), <code>CEA-708 (EIA-708</code>,
     * first non-empty channel only), and <code>mov-text</code> </p> <p>Valid outputs
     * include: <code>mov-text</code> </p> <p>Elastic Transcoder supports a maximum of
     * one embedded format per output.</p> </li> <li> <p> <b>Sidecar:</b> Sidecar
     * captions are kept in a separate metadata file from the audio and video data.
     * Sidecar captions require a player that is capable of understanding the
     * relationship between the video file and the sidecar file. Elastic Transcoder
     * supports only one sidecar caption per language, to a maximum of 20 sidecar
     * captions per file.</p> <p>Valid input values include: <code>dfxp</code> (first
     * div element only), <code>ebu-tt</code>, <code>scc</code>, <code>smpt</code>,
     * <code>srt</code>, <code>ttml</code> (first div element only), and
     * <code>webvtt</code> </p> <p>Valid outputs include: <code>dfxp</code> (first div
     * element only), <code>scc</code>, <code>srt</code>, and <code>webvtt</code>.</p>
     * </li> </ul> <p>If you want ttml or smpte-tt compatible captions, specify dfxp as
     * your output format.</p> <p>Elastic Transcoder does not support OCR (Optical
     * Character Recognition), does not accept pictures as a valid input for captions,
     * and is not available for audio-only transcoding. Elastic Transcoder does not
     * preserve text formatting (for example, italics) during the transcoding
     * process.</p> <p>To remove captions or leave the captions empty, set
     * <code>Captions</code> to null. To pass through existing captions unchanged, set
     * the <code>MergePolicy</code> to <code>MergeRetain</code>, and pass in a null
     * <code>CaptionSources</code> array.</p> <p>For more information on embedded
     * files, see the Subtitles Wikipedia page.</p> <p>For more information on sidecar
     * files, see the Extensible Metadata Platform and Sidecar file Wikipedia
     * pages.</p>
     */
    inline JobInput& WithInputCaptions(const InputCaptions& value) { SetInputCaptions(value); return *this;}

    /**
     * <p>You can configure Elastic Transcoder to transcode captions, or subtitles,
     * from one format to another. All captions must be in UTF-8. Elastic Transcoder
     * supports two types of captions:</p> <ul> <li> <p> <b>Embedded:</b> Embedded
     * captions are included in the same file as the audio and video. Elastic
     * Transcoder supports only one embedded caption per language, to a maximum of 300
     * embedded captions per file.</p> <p>Valid input values include: <code>CEA-608
     * (EIA-608</code>, first non-empty channel only), <code>CEA-708 (EIA-708</code>,
     * first non-empty channel only), and <code>mov-text</code> </p> <p>Valid outputs
     * include: <code>mov-text</code> </p> <p>Elastic Transcoder supports a maximum of
     * one embedded format per output.</p> </li> <li> <p> <b>Sidecar:</b> Sidecar
     * captions are kept in a separate metadata file from the audio and video data.
     * Sidecar captions require a player that is capable of understanding the
     * relationship between the video file and the sidecar file. Elastic Transcoder
     * supports only one sidecar caption per language, to a maximum of 20 sidecar
     * captions per file.</p> <p>Valid input values include: <code>dfxp</code> (first
     * div element only), <code>ebu-tt</code>, <code>scc</code>, <code>smpt</code>,
     * <code>srt</code>, <code>ttml</code> (first div element only), and
     * <code>webvtt</code> </p> <p>Valid outputs include: <code>dfxp</code> (first div
     * element only), <code>scc</code>, <code>srt</code>, and <code>webvtt</code>.</p>
     * </li> </ul> <p>If you want ttml or smpte-tt compatible captions, specify dfxp as
     * your output format.</p> <p>Elastic Transcoder does not support OCR (Optical
     * Character Recognition), does not accept pictures as a valid input for captions,
     * and is not available for audio-only transcoding. Elastic Transcoder does not
     * preserve text formatting (for example, italics) during the transcoding
     * process.</p> <p>To remove captions or leave the captions empty, set
     * <code>Captions</code> to null. To pass through existing captions unchanged, set
     * the <code>MergePolicy</code> to <code>MergeRetain</code>, and pass in a null
     * <code>CaptionSources</code> array.</p> <p>For more information on embedded
     * files, see the Subtitles Wikipedia page.</p> <p>For more information on sidecar
     * files, see the Extensible Metadata Platform and Sidecar file Wikipedia
     * pages.</p>
     */
    inline JobInput& WithInputCaptions(InputCaptions&& value) { SetInputCaptions(std::move(value)); return *this;}


    /**
     * <p>The detected properties of the input file.</p>
     */
    inline const DetectedProperties& GetDetectedProperties() const{ return m_detectedProperties; }

    /**
     * <p>The detected properties of the input file.</p>
     */
    inline bool DetectedPropertiesHasBeenSet() const { return m_detectedPropertiesHasBeenSet; }

    /**
     * <p>The detected properties of the input file.</p>
     */
    inline void SetDetectedProperties(const DetectedProperties& value) { m_detectedPropertiesHasBeenSet = true; m_detectedProperties = value; }

    /**
     * <p>The detected properties of the input file.</p>
     */
    inline void SetDetectedProperties(DetectedProperties&& value) { m_detectedPropertiesHasBeenSet = true; m_detectedProperties = std::move(value); }

    /**
     * <p>The detected properties of the input file.</p>
     */
    inline JobInput& WithDetectedProperties(const DetectedProperties& value) { SetDetectedProperties(value); return *this;}

    /**
     * <p>The detected properties of the input file.</p>
     */
    inline JobInput& WithDetectedProperties(DetectedProperties&& value) { SetDetectedProperties(std::move(value)); return *this;}

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

    TimeSpan m_timeSpan;
    bool m_timeSpanHasBeenSet;

    InputCaptions m_inputCaptions;
    bool m_inputCaptionsHasBeenSet;

    DetectedProperties m_detectedProperties;
    bool m_detectedPropertiesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
