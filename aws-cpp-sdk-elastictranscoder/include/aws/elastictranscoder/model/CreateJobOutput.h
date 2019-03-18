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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastictranscoder/model/JobAlbumArt.h>
#include <aws/elastictranscoder/model/Captions.h>
#include <aws/elastictranscoder/model/JobWatermark.h>
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
   * <p>The <code>CreateJobOutput</code> structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreateJobOutput">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API CreateJobOutput
  {
  public:
    CreateJobOutput();
    CreateJobOutput(Aws::Utils::Json::JsonView jsonValue);
    CreateJobOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID. If a file with the specified name
     * already exists in the output bucket, the job fails. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID. If a file with the specified name
     * already exists in the output bucket, the job fails. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID. If a file with the specified name
     * already exists in the output bucket, the job fails. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID. If a file with the specified name
     * already exists in the output bucket, the job fails. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID. If a file with the specified name
     * already exists in the output bucket, the job fails. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID. If a file with the specified name
     * already exists in the output bucket, the job fails. </p>
     */
    inline CreateJobOutput& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID. If a file with the specified name
     * already exists in the output bucket, the job fails. </p>
     */
    inline CreateJobOutput& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID. If a file with the specified name
     * already exists in the output bucket, the job fails. </p>
     */
    inline CreateJobOutput& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Whether you want Elastic Transcoder to create thumbnails for your videos and,
     * if so, how you want Elastic Transcoder to name the files.</p> <p>If you don't
     * want Elastic Transcoder to create thumbnails, specify "".</p> <p>If you do want
     * Elastic Transcoder to create thumbnails, specify the information that you want
     * to include in the file name for each thumbnail. You can specify the following
     * values in any sequence:</p> <ul> <li> <p> <b> <code>{count}</code>
     * (Required)</b>: If you want to create thumbnails, you must include
     * <code>{count}</code> in the <code>ThumbnailPattern</code> object. Wherever you
     * specify <code>{count}</code>, Elastic Transcoder adds a five-digit sequence
     * number (beginning with <b>00001</b>) to thumbnail file names. The number
     * indicates where a given thumbnail appears in the sequence of thumbnails for a
     * transcoded file. </p> <important> <p>If you specify a literal value and/or
     * <code>{resolution}</code> but you omit <code>{count}</code>, Elastic Transcoder
     * returns a validation error and does not create the job.</p> </important> </li>
     * <li> <p> <b>Literal values (Optional)</b>: You can specify literal values
     * anywhere in the <code>ThumbnailPattern</code> object. For example, you can
     * include them as a file name prefix or as a delimiter between
     * <code>{resolution}</code> and <code>{count}</code>. </p> </li> <li> <p> <b>
     * <code>{resolution}</code> (Optional)</b>: If you want Elastic Transcoder to
     * include the resolution in the file name, include <code>{resolution}</code> in
     * the <code>ThumbnailPattern</code> object. </p> </li> </ul> <p>When creating
     * thumbnails, Elastic Transcoder automatically saves the files in the format (.jpg
     * or .png) that appears in the preset that you specified in the
     * <code>PresetID</code> value of <code>CreateJobOutput</code>. Elastic Transcoder
     * also appends the applicable file name extension.</p>
     */
    inline const Aws::String& GetThumbnailPattern() const{ return m_thumbnailPattern; }

    /**
     * <p>Whether you want Elastic Transcoder to create thumbnails for your videos and,
     * if so, how you want Elastic Transcoder to name the files.</p> <p>If you don't
     * want Elastic Transcoder to create thumbnails, specify "".</p> <p>If you do want
     * Elastic Transcoder to create thumbnails, specify the information that you want
     * to include in the file name for each thumbnail. You can specify the following
     * values in any sequence:</p> <ul> <li> <p> <b> <code>{count}</code>
     * (Required)</b>: If you want to create thumbnails, you must include
     * <code>{count}</code> in the <code>ThumbnailPattern</code> object. Wherever you
     * specify <code>{count}</code>, Elastic Transcoder adds a five-digit sequence
     * number (beginning with <b>00001</b>) to thumbnail file names. The number
     * indicates where a given thumbnail appears in the sequence of thumbnails for a
     * transcoded file. </p> <important> <p>If you specify a literal value and/or
     * <code>{resolution}</code> but you omit <code>{count}</code>, Elastic Transcoder
     * returns a validation error and does not create the job.</p> </important> </li>
     * <li> <p> <b>Literal values (Optional)</b>: You can specify literal values
     * anywhere in the <code>ThumbnailPattern</code> object. For example, you can
     * include them as a file name prefix or as a delimiter between
     * <code>{resolution}</code> and <code>{count}</code>. </p> </li> <li> <p> <b>
     * <code>{resolution}</code> (Optional)</b>: If you want Elastic Transcoder to
     * include the resolution in the file name, include <code>{resolution}</code> in
     * the <code>ThumbnailPattern</code> object. </p> </li> </ul> <p>When creating
     * thumbnails, Elastic Transcoder automatically saves the files in the format (.jpg
     * or .png) that appears in the preset that you specified in the
     * <code>PresetID</code> value of <code>CreateJobOutput</code>. Elastic Transcoder
     * also appends the applicable file name extension.</p>
     */
    inline bool ThumbnailPatternHasBeenSet() const { return m_thumbnailPatternHasBeenSet; }

    /**
     * <p>Whether you want Elastic Transcoder to create thumbnails for your videos and,
     * if so, how you want Elastic Transcoder to name the files.</p> <p>If you don't
     * want Elastic Transcoder to create thumbnails, specify "".</p> <p>If you do want
     * Elastic Transcoder to create thumbnails, specify the information that you want
     * to include in the file name for each thumbnail. You can specify the following
     * values in any sequence:</p> <ul> <li> <p> <b> <code>{count}</code>
     * (Required)</b>: If you want to create thumbnails, you must include
     * <code>{count}</code> in the <code>ThumbnailPattern</code> object. Wherever you
     * specify <code>{count}</code>, Elastic Transcoder adds a five-digit sequence
     * number (beginning with <b>00001</b>) to thumbnail file names. The number
     * indicates where a given thumbnail appears in the sequence of thumbnails for a
     * transcoded file. </p> <important> <p>If you specify a literal value and/or
     * <code>{resolution}</code> but you omit <code>{count}</code>, Elastic Transcoder
     * returns a validation error and does not create the job.</p> </important> </li>
     * <li> <p> <b>Literal values (Optional)</b>: You can specify literal values
     * anywhere in the <code>ThumbnailPattern</code> object. For example, you can
     * include them as a file name prefix or as a delimiter between
     * <code>{resolution}</code> and <code>{count}</code>. </p> </li> <li> <p> <b>
     * <code>{resolution}</code> (Optional)</b>: If you want Elastic Transcoder to
     * include the resolution in the file name, include <code>{resolution}</code> in
     * the <code>ThumbnailPattern</code> object. </p> </li> </ul> <p>When creating
     * thumbnails, Elastic Transcoder automatically saves the files in the format (.jpg
     * or .png) that appears in the preset that you specified in the
     * <code>PresetID</code> value of <code>CreateJobOutput</code>. Elastic Transcoder
     * also appends the applicable file name extension.</p>
     */
    inline void SetThumbnailPattern(const Aws::String& value) { m_thumbnailPatternHasBeenSet = true; m_thumbnailPattern = value; }

    /**
     * <p>Whether you want Elastic Transcoder to create thumbnails for your videos and,
     * if so, how you want Elastic Transcoder to name the files.</p> <p>If you don't
     * want Elastic Transcoder to create thumbnails, specify "".</p> <p>If you do want
     * Elastic Transcoder to create thumbnails, specify the information that you want
     * to include in the file name for each thumbnail. You can specify the following
     * values in any sequence:</p> <ul> <li> <p> <b> <code>{count}</code>
     * (Required)</b>: If you want to create thumbnails, you must include
     * <code>{count}</code> in the <code>ThumbnailPattern</code> object. Wherever you
     * specify <code>{count}</code>, Elastic Transcoder adds a five-digit sequence
     * number (beginning with <b>00001</b>) to thumbnail file names. The number
     * indicates where a given thumbnail appears in the sequence of thumbnails for a
     * transcoded file. </p> <important> <p>If you specify a literal value and/or
     * <code>{resolution}</code> but you omit <code>{count}</code>, Elastic Transcoder
     * returns a validation error and does not create the job.</p> </important> </li>
     * <li> <p> <b>Literal values (Optional)</b>: You can specify literal values
     * anywhere in the <code>ThumbnailPattern</code> object. For example, you can
     * include them as a file name prefix or as a delimiter between
     * <code>{resolution}</code> and <code>{count}</code>. </p> </li> <li> <p> <b>
     * <code>{resolution}</code> (Optional)</b>: If you want Elastic Transcoder to
     * include the resolution in the file name, include <code>{resolution}</code> in
     * the <code>ThumbnailPattern</code> object. </p> </li> </ul> <p>When creating
     * thumbnails, Elastic Transcoder automatically saves the files in the format (.jpg
     * or .png) that appears in the preset that you specified in the
     * <code>PresetID</code> value of <code>CreateJobOutput</code>. Elastic Transcoder
     * also appends the applicable file name extension.</p>
     */
    inline void SetThumbnailPattern(Aws::String&& value) { m_thumbnailPatternHasBeenSet = true; m_thumbnailPattern = std::move(value); }

    /**
     * <p>Whether you want Elastic Transcoder to create thumbnails for your videos and,
     * if so, how you want Elastic Transcoder to name the files.</p> <p>If you don't
     * want Elastic Transcoder to create thumbnails, specify "".</p> <p>If you do want
     * Elastic Transcoder to create thumbnails, specify the information that you want
     * to include in the file name for each thumbnail. You can specify the following
     * values in any sequence:</p> <ul> <li> <p> <b> <code>{count}</code>
     * (Required)</b>: If you want to create thumbnails, you must include
     * <code>{count}</code> in the <code>ThumbnailPattern</code> object. Wherever you
     * specify <code>{count}</code>, Elastic Transcoder adds a five-digit sequence
     * number (beginning with <b>00001</b>) to thumbnail file names. The number
     * indicates where a given thumbnail appears in the sequence of thumbnails for a
     * transcoded file. </p> <important> <p>If you specify a literal value and/or
     * <code>{resolution}</code> but you omit <code>{count}</code>, Elastic Transcoder
     * returns a validation error and does not create the job.</p> </important> </li>
     * <li> <p> <b>Literal values (Optional)</b>: You can specify literal values
     * anywhere in the <code>ThumbnailPattern</code> object. For example, you can
     * include them as a file name prefix or as a delimiter between
     * <code>{resolution}</code> and <code>{count}</code>. </p> </li> <li> <p> <b>
     * <code>{resolution}</code> (Optional)</b>: If you want Elastic Transcoder to
     * include the resolution in the file name, include <code>{resolution}</code> in
     * the <code>ThumbnailPattern</code> object. </p> </li> </ul> <p>When creating
     * thumbnails, Elastic Transcoder automatically saves the files in the format (.jpg
     * or .png) that appears in the preset that you specified in the
     * <code>PresetID</code> value of <code>CreateJobOutput</code>. Elastic Transcoder
     * also appends the applicable file name extension.</p>
     */
    inline void SetThumbnailPattern(const char* value) { m_thumbnailPatternHasBeenSet = true; m_thumbnailPattern.assign(value); }

    /**
     * <p>Whether you want Elastic Transcoder to create thumbnails for your videos and,
     * if so, how you want Elastic Transcoder to name the files.</p> <p>If you don't
     * want Elastic Transcoder to create thumbnails, specify "".</p> <p>If you do want
     * Elastic Transcoder to create thumbnails, specify the information that you want
     * to include in the file name for each thumbnail. You can specify the following
     * values in any sequence:</p> <ul> <li> <p> <b> <code>{count}</code>
     * (Required)</b>: If you want to create thumbnails, you must include
     * <code>{count}</code> in the <code>ThumbnailPattern</code> object. Wherever you
     * specify <code>{count}</code>, Elastic Transcoder adds a five-digit sequence
     * number (beginning with <b>00001</b>) to thumbnail file names. The number
     * indicates where a given thumbnail appears in the sequence of thumbnails for a
     * transcoded file. </p> <important> <p>If you specify a literal value and/or
     * <code>{resolution}</code> but you omit <code>{count}</code>, Elastic Transcoder
     * returns a validation error and does not create the job.</p> </important> </li>
     * <li> <p> <b>Literal values (Optional)</b>: You can specify literal values
     * anywhere in the <code>ThumbnailPattern</code> object. For example, you can
     * include them as a file name prefix or as a delimiter between
     * <code>{resolution}</code> and <code>{count}</code>. </p> </li> <li> <p> <b>
     * <code>{resolution}</code> (Optional)</b>: If you want Elastic Transcoder to
     * include the resolution in the file name, include <code>{resolution}</code> in
     * the <code>ThumbnailPattern</code> object. </p> </li> </ul> <p>When creating
     * thumbnails, Elastic Transcoder automatically saves the files in the format (.jpg
     * or .png) that appears in the preset that you specified in the
     * <code>PresetID</code> value of <code>CreateJobOutput</code>. Elastic Transcoder
     * also appends the applicable file name extension.</p>
     */
    inline CreateJobOutput& WithThumbnailPattern(const Aws::String& value) { SetThumbnailPattern(value); return *this;}

    /**
     * <p>Whether you want Elastic Transcoder to create thumbnails for your videos and,
     * if so, how you want Elastic Transcoder to name the files.</p> <p>If you don't
     * want Elastic Transcoder to create thumbnails, specify "".</p> <p>If you do want
     * Elastic Transcoder to create thumbnails, specify the information that you want
     * to include in the file name for each thumbnail. You can specify the following
     * values in any sequence:</p> <ul> <li> <p> <b> <code>{count}</code>
     * (Required)</b>: If you want to create thumbnails, you must include
     * <code>{count}</code> in the <code>ThumbnailPattern</code> object. Wherever you
     * specify <code>{count}</code>, Elastic Transcoder adds a five-digit sequence
     * number (beginning with <b>00001</b>) to thumbnail file names. The number
     * indicates where a given thumbnail appears in the sequence of thumbnails for a
     * transcoded file. </p> <important> <p>If you specify a literal value and/or
     * <code>{resolution}</code> but you omit <code>{count}</code>, Elastic Transcoder
     * returns a validation error and does not create the job.</p> </important> </li>
     * <li> <p> <b>Literal values (Optional)</b>: You can specify literal values
     * anywhere in the <code>ThumbnailPattern</code> object. For example, you can
     * include them as a file name prefix or as a delimiter between
     * <code>{resolution}</code> and <code>{count}</code>. </p> </li> <li> <p> <b>
     * <code>{resolution}</code> (Optional)</b>: If you want Elastic Transcoder to
     * include the resolution in the file name, include <code>{resolution}</code> in
     * the <code>ThumbnailPattern</code> object. </p> </li> </ul> <p>When creating
     * thumbnails, Elastic Transcoder automatically saves the files in the format (.jpg
     * or .png) that appears in the preset that you specified in the
     * <code>PresetID</code> value of <code>CreateJobOutput</code>. Elastic Transcoder
     * also appends the applicable file name extension.</p>
     */
    inline CreateJobOutput& WithThumbnailPattern(Aws::String&& value) { SetThumbnailPattern(std::move(value)); return *this;}

    /**
     * <p>Whether you want Elastic Transcoder to create thumbnails for your videos and,
     * if so, how you want Elastic Transcoder to name the files.</p> <p>If you don't
     * want Elastic Transcoder to create thumbnails, specify "".</p> <p>If you do want
     * Elastic Transcoder to create thumbnails, specify the information that you want
     * to include in the file name for each thumbnail. You can specify the following
     * values in any sequence:</p> <ul> <li> <p> <b> <code>{count}</code>
     * (Required)</b>: If you want to create thumbnails, you must include
     * <code>{count}</code> in the <code>ThumbnailPattern</code> object. Wherever you
     * specify <code>{count}</code>, Elastic Transcoder adds a five-digit sequence
     * number (beginning with <b>00001</b>) to thumbnail file names. The number
     * indicates where a given thumbnail appears in the sequence of thumbnails for a
     * transcoded file. </p> <important> <p>If you specify a literal value and/or
     * <code>{resolution}</code> but you omit <code>{count}</code>, Elastic Transcoder
     * returns a validation error and does not create the job.</p> </important> </li>
     * <li> <p> <b>Literal values (Optional)</b>: You can specify literal values
     * anywhere in the <code>ThumbnailPattern</code> object. For example, you can
     * include them as a file name prefix or as a delimiter between
     * <code>{resolution}</code> and <code>{count}</code>. </p> </li> <li> <p> <b>
     * <code>{resolution}</code> (Optional)</b>: If you want Elastic Transcoder to
     * include the resolution in the file name, include <code>{resolution}</code> in
     * the <code>ThumbnailPattern</code> object. </p> </li> </ul> <p>When creating
     * thumbnails, Elastic Transcoder automatically saves the files in the format (.jpg
     * or .png) that appears in the preset that you specified in the
     * <code>PresetID</code> value of <code>CreateJobOutput</code>. Elastic Transcoder
     * also appends the applicable file name extension.</p>
     */
    inline CreateJobOutput& WithThumbnailPattern(const char* value) { SetThumbnailPattern(value); return *this;}


    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your thumbnail.</p>
     */
    inline const Encryption& GetThumbnailEncryption() const{ return m_thumbnailEncryption; }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your thumbnail.</p>
     */
    inline bool ThumbnailEncryptionHasBeenSet() const { return m_thumbnailEncryptionHasBeenSet; }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your thumbnail.</p>
     */
    inline void SetThumbnailEncryption(const Encryption& value) { m_thumbnailEncryptionHasBeenSet = true; m_thumbnailEncryption = value; }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your thumbnail.</p>
     */
    inline void SetThumbnailEncryption(Encryption&& value) { m_thumbnailEncryptionHasBeenSet = true; m_thumbnailEncryption = std::move(value); }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your thumbnail.</p>
     */
    inline CreateJobOutput& WithThumbnailEncryption(const Encryption& value) { SetThumbnailEncryption(value); return *this;}

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your thumbnail.</p>
     */
    inline CreateJobOutput& WithThumbnailEncryption(Encryption&& value) { SetThumbnailEncryption(std::move(value)); return *this;}


    /**
     * <p> The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:
     * <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code>. The value <code>auto</code> generally works only if the file
     * that you're transcoding contains rotation metadata. </p>
     */
    inline const Aws::String& GetRotate() const{ return m_rotate; }

    /**
     * <p> The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:
     * <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code>. The value <code>auto</code> generally works only if the file
     * that you're transcoding contains rotation metadata. </p>
     */
    inline bool RotateHasBeenSet() const { return m_rotateHasBeenSet; }

    /**
     * <p> The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:
     * <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code>. The value <code>auto</code> generally works only if the file
     * that you're transcoding contains rotation metadata. </p>
     */
    inline void SetRotate(const Aws::String& value) { m_rotateHasBeenSet = true; m_rotate = value; }

    /**
     * <p> The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:
     * <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code>. The value <code>auto</code> generally works only if the file
     * that you're transcoding contains rotation metadata. </p>
     */
    inline void SetRotate(Aws::String&& value) { m_rotateHasBeenSet = true; m_rotate = std::move(value); }

    /**
     * <p> The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:
     * <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code>. The value <code>auto</code> generally works only if the file
     * that you're transcoding contains rotation metadata. </p>
     */
    inline void SetRotate(const char* value) { m_rotateHasBeenSet = true; m_rotate.assign(value); }

    /**
     * <p> The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:
     * <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code>. The value <code>auto</code> generally works only if the file
     * that you're transcoding contains rotation metadata. </p>
     */
    inline CreateJobOutput& WithRotate(const Aws::String& value) { SetRotate(value); return *this;}

    /**
     * <p> The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:
     * <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code>. The value <code>auto</code> generally works only if the file
     * that you're transcoding contains rotation metadata. </p>
     */
    inline CreateJobOutput& WithRotate(Aws::String&& value) { SetRotate(std::move(value)); return *this;}

    /**
     * <p> The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:
     * <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code>. The value <code>auto</code> generally works only if the file
     * that you're transcoding contains rotation metadata. </p>
     */
    inline CreateJobOutput& WithRotate(const char* value) { SetRotate(value); return *this;}


    /**
     * <p> The <code>Id</code> of the preset to use for this job. The preset determines
     * the audio, video, and thumbnail settings that Elastic Transcoder uses for
     * transcoding. </p>
     */
    inline const Aws::String& GetPresetId() const{ return m_presetId; }

    /**
     * <p> The <code>Id</code> of the preset to use for this job. The preset determines
     * the audio, video, and thumbnail settings that Elastic Transcoder uses for
     * transcoding. </p>
     */
    inline bool PresetIdHasBeenSet() const { return m_presetIdHasBeenSet; }

    /**
     * <p> The <code>Id</code> of the preset to use for this job. The preset determines
     * the audio, video, and thumbnail settings that Elastic Transcoder uses for
     * transcoding. </p>
     */
    inline void SetPresetId(const Aws::String& value) { m_presetIdHasBeenSet = true; m_presetId = value; }

    /**
     * <p> The <code>Id</code> of the preset to use for this job. The preset determines
     * the audio, video, and thumbnail settings that Elastic Transcoder uses for
     * transcoding. </p>
     */
    inline void SetPresetId(Aws::String&& value) { m_presetIdHasBeenSet = true; m_presetId = std::move(value); }

    /**
     * <p> The <code>Id</code> of the preset to use for this job. The preset determines
     * the audio, video, and thumbnail settings that Elastic Transcoder uses for
     * transcoding. </p>
     */
    inline void SetPresetId(const char* value) { m_presetIdHasBeenSet = true; m_presetId.assign(value); }

    /**
     * <p> The <code>Id</code> of the preset to use for this job. The preset determines
     * the audio, video, and thumbnail settings that Elastic Transcoder uses for
     * transcoding. </p>
     */
    inline CreateJobOutput& WithPresetId(const Aws::String& value) { SetPresetId(value); return *this;}

    /**
     * <p> The <code>Id</code> of the preset to use for this job. The preset determines
     * the audio, video, and thumbnail settings that Elastic Transcoder uses for
     * transcoding. </p>
     */
    inline CreateJobOutput& WithPresetId(Aws::String&& value) { SetPresetId(std::move(value)); return *this;}

    /**
     * <p> The <code>Id</code> of the preset to use for this job. The preset determines
     * the audio, video, and thumbnail settings that Elastic Transcoder uses for
     * transcoding. </p>
     */
    inline CreateJobOutput& WithPresetId(const char* value) { SetPresetId(value); return *this;}


    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code> and <code>Smooth</code> playlists, all media segments for an
     * output are stored in a single file. Each segment is approximately the length of
     * the <code>SegmentDuration</code>, though individual segments might be shorter or
     * longer.</p> <p>The range of valid values is 1 to 60 seconds. If the duration of
     * the video is not evenly divisible by <code>SegmentDuration</code>, the duration
     * of the last segment is the remainder of total length/SegmentDuration.</p>
     * <p>Elastic Transcoder creates an output-specific playlist for each output
     * <code>HLS</code> output that you specify in OutputKeys. To add an output to the
     * master playlist for this job, include it in the <code>OutputKeys</code> of the
     * associated playlist.</p>
     */
    inline const Aws::String& GetSegmentDuration() const{ return m_segmentDuration; }

    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code> and <code>Smooth</code> playlists, all media segments for an
     * output are stored in a single file. Each segment is approximately the length of
     * the <code>SegmentDuration</code>, though individual segments might be shorter or
     * longer.</p> <p>The range of valid values is 1 to 60 seconds. If the duration of
     * the video is not evenly divisible by <code>SegmentDuration</code>, the duration
     * of the last segment is the remainder of total length/SegmentDuration.</p>
     * <p>Elastic Transcoder creates an output-specific playlist for each output
     * <code>HLS</code> output that you specify in OutputKeys. To add an output to the
     * master playlist for this job, include it in the <code>OutputKeys</code> of the
     * associated playlist.</p>
     */
    inline bool SegmentDurationHasBeenSet() const { return m_segmentDurationHasBeenSet; }

    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code> and <code>Smooth</code> playlists, all media segments for an
     * output are stored in a single file. Each segment is approximately the length of
     * the <code>SegmentDuration</code>, though individual segments might be shorter or
     * longer.</p> <p>The range of valid values is 1 to 60 seconds. If the duration of
     * the video is not evenly divisible by <code>SegmentDuration</code>, the duration
     * of the last segment is the remainder of total length/SegmentDuration.</p>
     * <p>Elastic Transcoder creates an output-specific playlist for each output
     * <code>HLS</code> output that you specify in OutputKeys. To add an output to the
     * master playlist for this job, include it in the <code>OutputKeys</code> of the
     * associated playlist.</p>
     */
    inline void SetSegmentDuration(const Aws::String& value) { m_segmentDurationHasBeenSet = true; m_segmentDuration = value; }

    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code> and <code>Smooth</code> playlists, all media segments for an
     * output are stored in a single file. Each segment is approximately the length of
     * the <code>SegmentDuration</code>, though individual segments might be shorter or
     * longer.</p> <p>The range of valid values is 1 to 60 seconds. If the duration of
     * the video is not evenly divisible by <code>SegmentDuration</code>, the duration
     * of the last segment is the remainder of total length/SegmentDuration.</p>
     * <p>Elastic Transcoder creates an output-specific playlist for each output
     * <code>HLS</code> output that you specify in OutputKeys. To add an output to the
     * master playlist for this job, include it in the <code>OutputKeys</code> of the
     * associated playlist.</p>
     */
    inline void SetSegmentDuration(Aws::String&& value) { m_segmentDurationHasBeenSet = true; m_segmentDuration = std::move(value); }

    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code> and <code>Smooth</code> playlists, all media segments for an
     * output are stored in a single file. Each segment is approximately the length of
     * the <code>SegmentDuration</code>, though individual segments might be shorter or
     * longer.</p> <p>The range of valid values is 1 to 60 seconds. If the duration of
     * the video is not evenly divisible by <code>SegmentDuration</code>, the duration
     * of the last segment is the remainder of total length/SegmentDuration.</p>
     * <p>Elastic Transcoder creates an output-specific playlist for each output
     * <code>HLS</code> output that you specify in OutputKeys. To add an output to the
     * master playlist for this job, include it in the <code>OutputKeys</code> of the
     * associated playlist.</p>
     */
    inline void SetSegmentDuration(const char* value) { m_segmentDurationHasBeenSet = true; m_segmentDuration.assign(value); }

    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code> and <code>Smooth</code> playlists, all media segments for an
     * output are stored in a single file. Each segment is approximately the length of
     * the <code>SegmentDuration</code>, though individual segments might be shorter or
     * longer.</p> <p>The range of valid values is 1 to 60 seconds. If the duration of
     * the video is not evenly divisible by <code>SegmentDuration</code>, the duration
     * of the last segment is the remainder of total length/SegmentDuration.</p>
     * <p>Elastic Transcoder creates an output-specific playlist for each output
     * <code>HLS</code> output that you specify in OutputKeys. To add an output to the
     * master playlist for this job, include it in the <code>OutputKeys</code> of the
     * associated playlist.</p>
     */
    inline CreateJobOutput& WithSegmentDuration(const Aws::String& value) { SetSegmentDuration(value); return *this;}

    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code> and <code>Smooth</code> playlists, all media segments for an
     * output are stored in a single file. Each segment is approximately the length of
     * the <code>SegmentDuration</code>, though individual segments might be shorter or
     * longer.</p> <p>The range of valid values is 1 to 60 seconds. If the duration of
     * the video is not evenly divisible by <code>SegmentDuration</code>, the duration
     * of the last segment is the remainder of total length/SegmentDuration.</p>
     * <p>Elastic Transcoder creates an output-specific playlist for each output
     * <code>HLS</code> output that you specify in OutputKeys. To add an output to the
     * master playlist for this job, include it in the <code>OutputKeys</code> of the
     * associated playlist.</p>
     */
    inline CreateJobOutput& WithSegmentDuration(Aws::String&& value) { SetSegmentDuration(std::move(value)); return *this;}

    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code> and <code>Smooth</code> playlists, all media segments for an
     * output are stored in a single file. Each segment is approximately the length of
     * the <code>SegmentDuration</code>, though individual segments might be shorter or
     * longer.</p> <p>The range of valid values is 1 to 60 seconds. If the duration of
     * the video is not evenly divisible by <code>SegmentDuration</code>, the duration
     * of the last segment is the remainder of total length/SegmentDuration.</p>
     * <p>Elastic Transcoder creates an output-specific playlist for each output
     * <code>HLS</code> output that you specify in OutputKeys. To add an output to the
     * master playlist for this job, include it in the <code>OutputKeys</code> of the
     * associated playlist.</p>
     */
    inline CreateJobOutput& WithSegmentDuration(const char* value) { SetSegmentDuration(value); return *this;}


    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset for the
     * current output.</p>
     */
    inline const Aws::Vector<JobWatermark>& GetWatermarks() const{ return m_watermarks; }

    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset for the
     * current output.</p>
     */
    inline bool WatermarksHasBeenSet() const { return m_watermarksHasBeenSet; }

    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset for the
     * current output.</p>
     */
    inline void SetWatermarks(const Aws::Vector<JobWatermark>& value) { m_watermarksHasBeenSet = true; m_watermarks = value; }

    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset for the
     * current output.</p>
     */
    inline void SetWatermarks(Aws::Vector<JobWatermark>&& value) { m_watermarksHasBeenSet = true; m_watermarks = std::move(value); }

    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset for the
     * current output.</p>
     */
    inline CreateJobOutput& WithWatermarks(const Aws::Vector<JobWatermark>& value) { SetWatermarks(value); return *this;}

    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset for the
     * current output.</p>
     */
    inline CreateJobOutput& WithWatermarks(Aws::Vector<JobWatermark>&& value) { SetWatermarks(std::move(value)); return *this;}

    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset for the
     * current output.</p>
     */
    inline CreateJobOutput& AddWatermarks(const JobWatermark& value) { m_watermarksHasBeenSet = true; m_watermarks.push_back(value); return *this; }

    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset for the
     * current output.</p>
     */
    inline CreateJobOutput& AddWatermarks(JobWatermark&& value) { m_watermarksHasBeenSet = true; m_watermarks.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the album art that you want Elastic Transcoder to add to
     * the file during transcoding. You can specify up to twenty album artworks for
     * each output. Settings for each artwork must be defined in the job for the
     * current output.</p>
     */
    inline const JobAlbumArt& GetAlbumArt() const{ return m_albumArt; }

    /**
     * <p>Information about the album art that you want Elastic Transcoder to add to
     * the file during transcoding. You can specify up to twenty album artworks for
     * each output. Settings for each artwork must be defined in the job for the
     * current output.</p>
     */
    inline bool AlbumArtHasBeenSet() const { return m_albumArtHasBeenSet; }

    /**
     * <p>Information about the album art that you want Elastic Transcoder to add to
     * the file during transcoding. You can specify up to twenty album artworks for
     * each output. Settings for each artwork must be defined in the job for the
     * current output.</p>
     */
    inline void SetAlbumArt(const JobAlbumArt& value) { m_albumArtHasBeenSet = true; m_albumArt = value; }

    /**
     * <p>Information about the album art that you want Elastic Transcoder to add to
     * the file during transcoding. You can specify up to twenty album artworks for
     * each output. Settings for each artwork must be defined in the job for the
     * current output.</p>
     */
    inline void SetAlbumArt(JobAlbumArt&& value) { m_albumArtHasBeenSet = true; m_albumArt = std::move(value); }

    /**
     * <p>Information about the album art that you want Elastic Transcoder to add to
     * the file during transcoding. You can specify up to twenty album artworks for
     * each output. Settings for each artwork must be defined in the job for the
     * current output.</p>
     */
    inline CreateJobOutput& WithAlbumArt(const JobAlbumArt& value) { SetAlbumArt(value); return *this;}

    /**
     * <p>Information about the album art that you want Elastic Transcoder to add to
     * the file during transcoding. You can specify up to twenty album artworks for
     * each output. Settings for each artwork must be defined in the job for the
     * current output.</p>
     */
    inline CreateJobOutput& WithAlbumArt(JobAlbumArt&& value) { SetAlbumArt(std::move(value)); return *this;}


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
    inline const Captions& GetCaptions() const{ return m_captions; }

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
    inline bool CaptionsHasBeenSet() const { return m_captionsHasBeenSet; }

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
    inline void SetCaptions(const Captions& value) { m_captionsHasBeenSet = true; m_captions = value; }

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
    inline void SetCaptions(Captions&& value) { m_captionsHasBeenSet = true; m_captions = std::move(value); }

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
    inline CreateJobOutput& WithCaptions(const Captions& value) { SetCaptions(value); return *this;}

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
    inline CreateJobOutput& WithCaptions(Captions&& value) { SetCaptions(std::move(value)); return *this;}


    /**
     * <p>You can specify encryption settings for any output files that you want to use
     * for a transcoding job. This includes the output file and any watermarks,
     * thumbnails, album art, or captions that you want to use. You must specify
     * encryption settings for each file individually.</p>
     */
    inline const Encryption& GetEncryption() const{ return m_encryption; }

    /**
     * <p>You can specify encryption settings for any output files that you want to use
     * for a transcoding job. This includes the output file and any watermarks,
     * thumbnails, album art, or captions that you want to use. You must specify
     * encryption settings for each file individually.</p>
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * <p>You can specify encryption settings for any output files that you want to use
     * for a transcoding job. This includes the output file and any watermarks,
     * thumbnails, album art, or captions that you want to use. You must specify
     * encryption settings for each file individually.</p>
     */
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * <p>You can specify encryption settings for any output files that you want to use
     * for a transcoding job. This includes the output file and any watermarks,
     * thumbnails, album art, or captions that you want to use. You must specify
     * encryption settings for each file individually.</p>
     */
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * <p>You can specify encryption settings for any output files that you want to use
     * for a transcoding job. This includes the output file and any watermarks,
     * thumbnails, album art, or captions that you want to use. You must specify
     * encryption settings for each file individually.</p>
     */
    inline CreateJobOutput& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}

    /**
     * <p>You can specify encryption settings for any output files that you want to use
     * for a transcoding job. This includes the output file and any watermarks,
     * thumbnails, album art, or captions that you want to use. You must specify
     * encryption settings for each file individually.</p>
     */
    inline CreateJobOutput& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_thumbnailPattern;
    bool m_thumbnailPatternHasBeenSet;

    Encryption m_thumbnailEncryption;
    bool m_thumbnailEncryptionHasBeenSet;

    Aws::String m_rotate;
    bool m_rotateHasBeenSet;

    Aws::String m_presetId;
    bool m_presetIdHasBeenSet;

    Aws::String m_segmentDuration;
    bool m_segmentDurationHasBeenSet;

    Aws::Vector<JobWatermark> m_watermarks;
    bool m_watermarksHasBeenSet;

    JobAlbumArt m_albumArt;
    bool m_albumArtHasBeenSet;

    Captions m_captions;
    bool m_captionsHasBeenSet;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
