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
   * <important> <p>Outputs recommended instead.</p> </important> <p>If you specified
   * one output for a job, information about that output. If you specified multiple
   * outputs for a job, the <code>Output</code> object lists information about the
   * first output. This duplicates the information that is listed for the first
   * output in the <code>Outputs</code> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/JobOutput">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API JobOutput
  {
  public:
    JobOutput();
    JobOutput(Aws::Utils::Json::JsonView jsonValue);
    JobOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A sequential counter, starting with 1, that identifies an output among the
     * outputs from the current job. In the Output syntax, this value is always 1.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A sequential counter, starting with 1, that identifies an output among the
     * outputs from the current job. In the Output syntax, this value is always 1.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A sequential counter, starting with 1, that identifies an output among the
     * outputs from the current job. In the Output syntax, this value is always 1.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A sequential counter, starting with 1, that identifies an output among the
     * outputs from the current job. In the Output syntax, this value is always 1.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A sequential counter, starting with 1, that identifies an output among the
     * outputs from the current job. In the Output syntax, this value is always 1.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A sequential counter, starting with 1, that identifies an output among the
     * outputs from the current job. In the Output syntax, this value is always 1.</p>
     */
    inline JobOutput& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A sequential counter, starting with 1, that identifies an output among the
     * outputs from the current job. In the Output syntax, this value is always 1.</p>
     */
    inline JobOutput& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A sequential counter, starting with 1, that identifies an output among the
     * outputs from the current job. In the Output syntax, this value is always 1.</p>
     */
    inline JobOutput& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID.</p>
     */
    inline JobOutput& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID.</p>
     */
    inline JobOutput& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID.</p>
     */
    inline JobOutput& WithKey(const char* value) { SetKey(value); return *this;}


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
    inline JobOutput& WithThumbnailPattern(const Aws::String& value) { SetThumbnailPattern(value); return *this;}

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
    inline JobOutput& WithThumbnailPattern(Aws::String&& value) { SetThumbnailPattern(std::move(value)); return *this;}

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
    inline JobOutput& WithThumbnailPattern(const char* value) { SetThumbnailPattern(value); return *this;}


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
    inline JobOutput& WithThumbnailEncryption(const Encryption& value) { SetThumbnailEncryption(value); return *this;}

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your thumbnail.</p>
     */
    inline JobOutput& WithThumbnailEncryption(Encryption&& value) { SetThumbnailEncryption(std::move(value)); return *this;}


    /**
     * <p>The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:</p>
     * <p> <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code> </p> <p> The value <code>auto</code> generally works only if
     * the file that you're transcoding contains rotation metadata.</p>
     */
    inline const Aws::String& GetRotate() const{ return m_rotate; }

    /**
     * <p>The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:</p>
     * <p> <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code> </p> <p> The value <code>auto</code> generally works only if
     * the file that you're transcoding contains rotation metadata.</p>
     */
    inline bool RotateHasBeenSet() const { return m_rotateHasBeenSet; }

    /**
     * <p>The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:</p>
     * <p> <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code> </p> <p> The value <code>auto</code> generally works only if
     * the file that you're transcoding contains rotation metadata.</p>
     */
    inline void SetRotate(const Aws::String& value) { m_rotateHasBeenSet = true; m_rotate = value; }

    /**
     * <p>The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:</p>
     * <p> <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code> </p> <p> The value <code>auto</code> generally works only if
     * the file that you're transcoding contains rotation metadata.</p>
     */
    inline void SetRotate(Aws::String&& value) { m_rotateHasBeenSet = true; m_rotate = std::move(value); }

    /**
     * <p>The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:</p>
     * <p> <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code> </p> <p> The value <code>auto</code> generally works only if
     * the file that you're transcoding contains rotation metadata.</p>
     */
    inline void SetRotate(const char* value) { m_rotateHasBeenSet = true; m_rotate.assign(value); }

    /**
     * <p>The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:</p>
     * <p> <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code> </p> <p> The value <code>auto</code> generally works only if
     * the file that you're transcoding contains rotation metadata.</p>
     */
    inline JobOutput& WithRotate(const Aws::String& value) { SetRotate(value); return *this;}

    /**
     * <p>The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:</p>
     * <p> <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code> </p> <p> The value <code>auto</code> generally works only if
     * the file that you're transcoding contains rotation metadata.</p>
     */
    inline JobOutput& WithRotate(Aws::String&& value) { SetRotate(std::move(value)); return *this;}

    /**
     * <p>The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:</p>
     * <p> <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code> </p> <p> The value <code>auto</code> generally works only if
     * the file that you're transcoding contains rotation metadata.</p>
     */
    inline JobOutput& WithRotate(const char* value) { SetRotate(value); return *this;}


    /**
     * <p>The value of the <code>Id</code> object for the preset that you want to use
     * for this job. The preset determines the audio, video, and thumbnail settings
     * that Elastic Transcoder uses for transcoding. To use a preset that you created,
     * specify the preset ID that Elastic Transcoder returned in the response when you
     * created the preset. You can also use the Elastic Transcoder system presets,
     * which you can get with <code>ListPresets</code>.</p>
     */
    inline const Aws::String& GetPresetId() const{ return m_presetId; }

    /**
     * <p>The value of the <code>Id</code> object for the preset that you want to use
     * for this job. The preset determines the audio, video, and thumbnail settings
     * that Elastic Transcoder uses for transcoding. To use a preset that you created,
     * specify the preset ID that Elastic Transcoder returned in the response when you
     * created the preset. You can also use the Elastic Transcoder system presets,
     * which you can get with <code>ListPresets</code>.</p>
     */
    inline bool PresetIdHasBeenSet() const { return m_presetIdHasBeenSet; }

    /**
     * <p>The value of the <code>Id</code> object for the preset that you want to use
     * for this job. The preset determines the audio, video, and thumbnail settings
     * that Elastic Transcoder uses for transcoding. To use a preset that you created,
     * specify the preset ID that Elastic Transcoder returned in the response when you
     * created the preset. You can also use the Elastic Transcoder system presets,
     * which you can get with <code>ListPresets</code>.</p>
     */
    inline void SetPresetId(const Aws::String& value) { m_presetIdHasBeenSet = true; m_presetId = value; }

    /**
     * <p>The value of the <code>Id</code> object for the preset that you want to use
     * for this job. The preset determines the audio, video, and thumbnail settings
     * that Elastic Transcoder uses for transcoding. To use a preset that you created,
     * specify the preset ID that Elastic Transcoder returned in the response when you
     * created the preset. You can also use the Elastic Transcoder system presets,
     * which you can get with <code>ListPresets</code>.</p>
     */
    inline void SetPresetId(Aws::String&& value) { m_presetIdHasBeenSet = true; m_presetId = std::move(value); }

    /**
     * <p>The value of the <code>Id</code> object for the preset that you want to use
     * for this job. The preset determines the audio, video, and thumbnail settings
     * that Elastic Transcoder uses for transcoding. To use a preset that you created,
     * specify the preset ID that Elastic Transcoder returned in the response when you
     * created the preset. You can also use the Elastic Transcoder system presets,
     * which you can get with <code>ListPresets</code>.</p>
     */
    inline void SetPresetId(const char* value) { m_presetIdHasBeenSet = true; m_presetId.assign(value); }

    /**
     * <p>The value of the <code>Id</code> object for the preset that you want to use
     * for this job. The preset determines the audio, video, and thumbnail settings
     * that Elastic Transcoder uses for transcoding. To use a preset that you created,
     * specify the preset ID that Elastic Transcoder returned in the response when you
     * created the preset. You can also use the Elastic Transcoder system presets,
     * which you can get with <code>ListPresets</code>.</p>
     */
    inline JobOutput& WithPresetId(const Aws::String& value) { SetPresetId(value); return *this;}

    /**
     * <p>The value of the <code>Id</code> object for the preset that you want to use
     * for this job. The preset determines the audio, video, and thumbnail settings
     * that Elastic Transcoder uses for transcoding. To use a preset that you created,
     * specify the preset ID that Elastic Transcoder returned in the response when you
     * created the preset. You can also use the Elastic Transcoder system presets,
     * which you can get with <code>ListPresets</code>.</p>
     */
    inline JobOutput& WithPresetId(Aws::String&& value) { SetPresetId(std::move(value)); return *this;}

    /**
     * <p>The value of the <code>Id</code> object for the preset that you want to use
     * for this job. The preset determines the audio, video, and thumbnail settings
     * that Elastic Transcoder uses for transcoding. To use a preset that you created,
     * specify the preset ID that Elastic Transcoder returned in the response when you
     * created the preset. You can also use the Elastic Transcoder system presets,
     * which you can get with <code>ListPresets</code>.</p>
     */
    inline JobOutput& WithPresetId(const char* value) { SetPresetId(value); return *this;}


    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code>, <code>MPEG-DASH</code>, and <code>Smooth</code> playlists,
     * all media segments for an output are stored in a single file. Each segment is
     * approximately the length of the <code>SegmentDuration</code>, though individual
     * segments might be shorter or longer.</p> <p>The range of valid values is 1 to 60
     * seconds. If the duration of the video is not evenly divisible by
     * <code>SegmentDuration</code>, the duration of the last segment is the remainder
     * of total length/SegmentDuration.</p> <p>Elastic Transcoder creates an
     * output-specific playlist for each output <code>HLS</code> output that you
     * specify in OutputKeys. To add an output to the master playlist for this job,
     * include it in the <code>OutputKeys</code> of the associated playlist.</p>
     */
    inline const Aws::String& GetSegmentDuration() const{ return m_segmentDuration; }

    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code>, <code>MPEG-DASH</code>, and <code>Smooth</code> playlists,
     * all media segments for an output are stored in a single file. Each segment is
     * approximately the length of the <code>SegmentDuration</code>, though individual
     * segments might be shorter or longer.</p> <p>The range of valid values is 1 to 60
     * seconds. If the duration of the video is not evenly divisible by
     * <code>SegmentDuration</code>, the duration of the last segment is the remainder
     * of total length/SegmentDuration.</p> <p>Elastic Transcoder creates an
     * output-specific playlist for each output <code>HLS</code> output that you
     * specify in OutputKeys. To add an output to the master playlist for this job,
     * include it in the <code>OutputKeys</code> of the associated playlist.</p>
     */
    inline bool SegmentDurationHasBeenSet() const { return m_segmentDurationHasBeenSet; }

    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code>, <code>MPEG-DASH</code>, and <code>Smooth</code> playlists,
     * all media segments for an output are stored in a single file. Each segment is
     * approximately the length of the <code>SegmentDuration</code>, though individual
     * segments might be shorter or longer.</p> <p>The range of valid values is 1 to 60
     * seconds. If the duration of the video is not evenly divisible by
     * <code>SegmentDuration</code>, the duration of the last segment is the remainder
     * of total length/SegmentDuration.</p> <p>Elastic Transcoder creates an
     * output-specific playlist for each output <code>HLS</code> output that you
     * specify in OutputKeys. To add an output to the master playlist for this job,
     * include it in the <code>OutputKeys</code> of the associated playlist.</p>
     */
    inline void SetSegmentDuration(const Aws::String& value) { m_segmentDurationHasBeenSet = true; m_segmentDuration = value; }

    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code>, <code>MPEG-DASH</code>, and <code>Smooth</code> playlists,
     * all media segments for an output are stored in a single file. Each segment is
     * approximately the length of the <code>SegmentDuration</code>, though individual
     * segments might be shorter or longer.</p> <p>The range of valid values is 1 to 60
     * seconds. If the duration of the video is not evenly divisible by
     * <code>SegmentDuration</code>, the duration of the last segment is the remainder
     * of total length/SegmentDuration.</p> <p>Elastic Transcoder creates an
     * output-specific playlist for each output <code>HLS</code> output that you
     * specify in OutputKeys. To add an output to the master playlist for this job,
     * include it in the <code>OutputKeys</code> of the associated playlist.</p>
     */
    inline void SetSegmentDuration(Aws::String&& value) { m_segmentDurationHasBeenSet = true; m_segmentDuration = std::move(value); }

    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code>, <code>MPEG-DASH</code>, and <code>Smooth</code> playlists,
     * all media segments for an output are stored in a single file. Each segment is
     * approximately the length of the <code>SegmentDuration</code>, though individual
     * segments might be shorter or longer.</p> <p>The range of valid values is 1 to 60
     * seconds. If the duration of the video is not evenly divisible by
     * <code>SegmentDuration</code>, the duration of the last segment is the remainder
     * of total length/SegmentDuration.</p> <p>Elastic Transcoder creates an
     * output-specific playlist for each output <code>HLS</code> output that you
     * specify in OutputKeys. To add an output to the master playlist for this job,
     * include it in the <code>OutputKeys</code> of the associated playlist.</p>
     */
    inline void SetSegmentDuration(const char* value) { m_segmentDurationHasBeenSet = true; m_segmentDuration.assign(value); }

    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code>, <code>MPEG-DASH</code>, and <code>Smooth</code> playlists,
     * all media segments for an output are stored in a single file. Each segment is
     * approximately the length of the <code>SegmentDuration</code>, though individual
     * segments might be shorter or longer.</p> <p>The range of valid values is 1 to 60
     * seconds. If the duration of the video is not evenly divisible by
     * <code>SegmentDuration</code>, the duration of the last segment is the remainder
     * of total length/SegmentDuration.</p> <p>Elastic Transcoder creates an
     * output-specific playlist for each output <code>HLS</code> output that you
     * specify in OutputKeys. To add an output to the master playlist for this job,
     * include it in the <code>OutputKeys</code> of the associated playlist.</p>
     */
    inline JobOutput& WithSegmentDuration(const Aws::String& value) { SetSegmentDuration(value); return *this;}

    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code>, <code>MPEG-DASH</code>, and <code>Smooth</code> playlists,
     * all media segments for an output are stored in a single file. Each segment is
     * approximately the length of the <code>SegmentDuration</code>, though individual
     * segments might be shorter or longer.</p> <p>The range of valid values is 1 to 60
     * seconds. If the duration of the video is not evenly divisible by
     * <code>SegmentDuration</code>, the duration of the last segment is the remainder
     * of total length/SegmentDuration.</p> <p>Elastic Transcoder creates an
     * output-specific playlist for each output <code>HLS</code> output that you
     * specify in OutputKeys. To add an output to the master playlist for this job,
     * include it in the <code>OutputKeys</code> of the associated playlist.</p>
     */
    inline JobOutput& WithSegmentDuration(Aws::String&& value) { SetSegmentDuration(std::move(value)); return *this;}

    /**
     * <important> <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     * </important> <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code>, <code>MPEG-DASH</code>, and <code>Smooth</code> playlists,
     * all media segments for an output are stored in a single file. Each segment is
     * approximately the length of the <code>SegmentDuration</code>, though individual
     * segments might be shorter or longer.</p> <p>The range of valid values is 1 to 60
     * seconds. If the duration of the video is not evenly divisible by
     * <code>SegmentDuration</code>, the duration of the last segment is the remainder
     * of total length/SegmentDuration.</p> <p>Elastic Transcoder creates an
     * output-specific playlist for each output <code>HLS</code> output that you
     * specify in OutputKeys. To add an output to the master playlist for this job,
     * include it in the <code>OutputKeys</code> of the associated playlist.</p>
     */
    inline JobOutput& WithSegmentDuration(const char* value) { SetSegmentDuration(value); return *this;}


    /**
     * <p> The status of one output in a job. If you specified only one output for the
     * job, <code>Outputs:Status</code> is always the same as <code>Job:Status</code>.
     * If you specified more than one output: </p> <ul> <li> <p>
     * <code>Job:Status</code> and <code>Outputs:Status</code> for all of the outputs
     * is Submitted until Elastic Transcoder starts to process the first output.</p>
     * </li> <li> <p>When Elastic Transcoder starts to process the first output,
     * <code>Outputs:Status</code> for that output and <code>Job:Status</code> both
     * change to Progressing. For each output, the value of <code>Outputs:Status</code>
     * remains Submitted until Elastic Transcoder starts to process the output.</p>
     * </li> <li> <p>Job:Status remains Progressing until all of the outputs reach a
     * terminal status, either Complete or Error.</p> </li> <li> <p>When all of the
     * outputs reach a terminal status, <code>Job:Status</code> changes to Complete
     * only if <code>Outputs:Status</code> for all of the outputs is
     * <code>Complete</code>. If <code>Outputs:Status</code> for one or more outputs is
     * <code>Error</code>, the terminal status for <code>Job:Status</code> is also
     * <code>Error</code>.</p> </li> </ul> <p>The value of <code>Status</code> is one
     * of the following: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> The status of one output in a job. If you specified only one output for the
     * job, <code>Outputs:Status</code> is always the same as <code>Job:Status</code>.
     * If you specified more than one output: </p> <ul> <li> <p>
     * <code>Job:Status</code> and <code>Outputs:Status</code> for all of the outputs
     * is Submitted until Elastic Transcoder starts to process the first output.</p>
     * </li> <li> <p>When Elastic Transcoder starts to process the first output,
     * <code>Outputs:Status</code> for that output and <code>Job:Status</code> both
     * change to Progressing. For each output, the value of <code>Outputs:Status</code>
     * remains Submitted until Elastic Transcoder starts to process the output.</p>
     * </li> <li> <p>Job:Status remains Progressing until all of the outputs reach a
     * terminal status, either Complete or Error.</p> </li> <li> <p>When all of the
     * outputs reach a terminal status, <code>Job:Status</code> changes to Complete
     * only if <code>Outputs:Status</code> for all of the outputs is
     * <code>Complete</code>. If <code>Outputs:Status</code> for one or more outputs is
     * <code>Error</code>, the terminal status for <code>Job:Status</code> is also
     * <code>Error</code>.</p> </li> </ul> <p>The value of <code>Status</code> is one
     * of the following: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of one output in a job. If you specified only one output for the
     * job, <code>Outputs:Status</code> is always the same as <code>Job:Status</code>.
     * If you specified more than one output: </p> <ul> <li> <p>
     * <code>Job:Status</code> and <code>Outputs:Status</code> for all of the outputs
     * is Submitted until Elastic Transcoder starts to process the first output.</p>
     * </li> <li> <p>When Elastic Transcoder starts to process the first output,
     * <code>Outputs:Status</code> for that output and <code>Job:Status</code> both
     * change to Progressing. For each output, the value of <code>Outputs:Status</code>
     * remains Submitted until Elastic Transcoder starts to process the output.</p>
     * </li> <li> <p>Job:Status remains Progressing until all of the outputs reach a
     * terminal status, either Complete or Error.</p> </li> <li> <p>When all of the
     * outputs reach a terminal status, <code>Job:Status</code> changes to Complete
     * only if <code>Outputs:Status</code> for all of the outputs is
     * <code>Complete</code>. If <code>Outputs:Status</code> for one or more outputs is
     * <code>Error</code>, the terminal status for <code>Job:Status</code> is also
     * <code>Error</code>.</p> </li> </ul> <p>The value of <code>Status</code> is one
     * of the following: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of one output in a job. If you specified only one output for the
     * job, <code>Outputs:Status</code> is always the same as <code>Job:Status</code>.
     * If you specified more than one output: </p> <ul> <li> <p>
     * <code>Job:Status</code> and <code>Outputs:Status</code> for all of the outputs
     * is Submitted until Elastic Transcoder starts to process the first output.</p>
     * </li> <li> <p>When Elastic Transcoder starts to process the first output,
     * <code>Outputs:Status</code> for that output and <code>Job:Status</code> both
     * change to Progressing. For each output, the value of <code>Outputs:Status</code>
     * remains Submitted until Elastic Transcoder starts to process the output.</p>
     * </li> <li> <p>Job:Status remains Progressing until all of the outputs reach a
     * terminal status, either Complete or Error.</p> </li> <li> <p>When all of the
     * outputs reach a terminal status, <code>Job:Status</code> changes to Complete
     * only if <code>Outputs:Status</code> for all of the outputs is
     * <code>Complete</code>. If <code>Outputs:Status</code> for one or more outputs is
     * <code>Error</code>, the terminal status for <code>Job:Status</code> is also
     * <code>Error</code>.</p> </li> </ul> <p>The value of <code>Status</code> is one
     * of the following: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of one output in a job. If you specified only one output for the
     * job, <code>Outputs:Status</code> is always the same as <code>Job:Status</code>.
     * If you specified more than one output: </p> <ul> <li> <p>
     * <code>Job:Status</code> and <code>Outputs:Status</code> for all of the outputs
     * is Submitted until Elastic Transcoder starts to process the first output.</p>
     * </li> <li> <p>When Elastic Transcoder starts to process the first output,
     * <code>Outputs:Status</code> for that output and <code>Job:Status</code> both
     * change to Progressing. For each output, the value of <code>Outputs:Status</code>
     * remains Submitted until Elastic Transcoder starts to process the output.</p>
     * </li> <li> <p>Job:Status remains Progressing until all of the outputs reach a
     * terminal status, either Complete or Error.</p> </li> <li> <p>When all of the
     * outputs reach a terminal status, <code>Job:Status</code> changes to Complete
     * only if <code>Outputs:Status</code> for all of the outputs is
     * <code>Complete</code>. If <code>Outputs:Status</code> for one or more outputs is
     * <code>Error</code>, the terminal status for <code>Job:Status</code> is also
     * <code>Error</code>.</p> </li> </ul> <p>The value of <code>Status</code> is one
     * of the following: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> The status of one output in a job. If you specified only one output for the
     * job, <code>Outputs:Status</code> is always the same as <code>Job:Status</code>.
     * If you specified more than one output: </p> <ul> <li> <p>
     * <code>Job:Status</code> and <code>Outputs:Status</code> for all of the outputs
     * is Submitted until Elastic Transcoder starts to process the first output.</p>
     * </li> <li> <p>When Elastic Transcoder starts to process the first output,
     * <code>Outputs:Status</code> for that output and <code>Job:Status</code> both
     * change to Progressing. For each output, the value of <code>Outputs:Status</code>
     * remains Submitted until Elastic Transcoder starts to process the output.</p>
     * </li> <li> <p>Job:Status remains Progressing until all of the outputs reach a
     * terminal status, either Complete or Error.</p> </li> <li> <p>When all of the
     * outputs reach a terminal status, <code>Job:Status</code> changes to Complete
     * only if <code>Outputs:Status</code> for all of the outputs is
     * <code>Complete</code>. If <code>Outputs:Status</code> for one or more outputs is
     * <code>Error</code>, the terminal status for <code>Job:Status</code> is also
     * <code>Error</code>.</p> </li> </ul> <p>The value of <code>Status</code> is one
     * of the following: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline JobOutput& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of one output in a job. If you specified only one output for the
     * job, <code>Outputs:Status</code> is always the same as <code>Job:Status</code>.
     * If you specified more than one output: </p> <ul> <li> <p>
     * <code>Job:Status</code> and <code>Outputs:Status</code> for all of the outputs
     * is Submitted until Elastic Transcoder starts to process the first output.</p>
     * </li> <li> <p>When Elastic Transcoder starts to process the first output,
     * <code>Outputs:Status</code> for that output and <code>Job:Status</code> both
     * change to Progressing. For each output, the value of <code>Outputs:Status</code>
     * remains Submitted until Elastic Transcoder starts to process the output.</p>
     * </li> <li> <p>Job:Status remains Progressing until all of the outputs reach a
     * terminal status, either Complete or Error.</p> </li> <li> <p>When all of the
     * outputs reach a terminal status, <code>Job:Status</code> changes to Complete
     * only if <code>Outputs:Status</code> for all of the outputs is
     * <code>Complete</code>. If <code>Outputs:Status</code> for one or more outputs is
     * <code>Error</code>, the terminal status for <code>Job:Status</code> is also
     * <code>Error</code>.</p> </li> </ul> <p>The value of <code>Status</code> is one
     * of the following: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline JobOutput& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> The status of one output in a job. If you specified only one output for the
     * job, <code>Outputs:Status</code> is always the same as <code>Job:Status</code>.
     * If you specified more than one output: </p> <ul> <li> <p>
     * <code>Job:Status</code> and <code>Outputs:Status</code> for all of the outputs
     * is Submitted until Elastic Transcoder starts to process the first output.</p>
     * </li> <li> <p>When Elastic Transcoder starts to process the first output,
     * <code>Outputs:Status</code> for that output and <code>Job:Status</code> both
     * change to Progressing. For each output, the value of <code>Outputs:Status</code>
     * remains Submitted until Elastic Transcoder starts to process the output.</p>
     * </li> <li> <p>Job:Status remains Progressing until all of the outputs reach a
     * terminal status, either Complete or Error.</p> </li> <li> <p>When all of the
     * outputs reach a terminal status, <code>Job:Status</code> changes to Complete
     * only if <code>Outputs:Status</code> for all of the outputs is
     * <code>Complete</code>. If <code>Outputs:Status</code> for one or more outputs is
     * <code>Error</code>, the terminal status for <code>Job:Status</code> is also
     * <code>Error</code>.</p> </li> </ul> <p>The value of <code>Status</code> is one
     * of the following: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline JobOutput& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Information that further explains <code>Status</code>.</p>
     */
    inline const Aws::String& GetStatusDetail() const{ return m_statusDetail; }

    /**
     * <p>Information that further explains <code>Status</code>.</p>
     */
    inline bool StatusDetailHasBeenSet() const { return m_statusDetailHasBeenSet; }

    /**
     * <p>Information that further explains <code>Status</code>.</p>
     */
    inline void SetStatusDetail(const Aws::String& value) { m_statusDetailHasBeenSet = true; m_statusDetail = value; }

    /**
     * <p>Information that further explains <code>Status</code>.</p>
     */
    inline void SetStatusDetail(Aws::String&& value) { m_statusDetailHasBeenSet = true; m_statusDetail = std::move(value); }

    /**
     * <p>Information that further explains <code>Status</code>.</p>
     */
    inline void SetStatusDetail(const char* value) { m_statusDetailHasBeenSet = true; m_statusDetail.assign(value); }

    /**
     * <p>Information that further explains <code>Status</code>.</p>
     */
    inline JobOutput& WithStatusDetail(const Aws::String& value) { SetStatusDetail(value); return *this;}

    /**
     * <p>Information that further explains <code>Status</code>.</p>
     */
    inline JobOutput& WithStatusDetail(Aws::String&& value) { SetStatusDetail(std::move(value)); return *this;}

    /**
     * <p>Information that further explains <code>Status</code>.</p>
     */
    inline JobOutput& WithStatusDetail(const char* value) { SetStatusDetail(value); return *this;}


    /**
     * <p>Duration of the output file, in seconds.</p>
     */
    inline long long GetDuration() const{ return m_duration; }

    /**
     * <p>Duration of the output file, in seconds.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>Duration of the output file, in seconds.</p>
     */
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>Duration of the output file, in seconds.</p>
     */
    inline JobOutput& WithDuration(long long value) { SetDuration(value); return *this;}


    /**
     * <p>Specifies the width of the output file in pixels.</p>
     */
    inline int GetWidth() const{ return m_width; }

    /**
     * <p>Specifies the width of the output file in pixels.</p>
     */
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

    /**
     * <p>Specifies the width of the output file in pixels.</p>
     */
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * <p>Specifies the width of the output file in pixels.</p>
     */
    inline JobOutput& WithWidth(int value) { SetWidth(value); return *this;}


    /**
     * <p>Height of the output file, in pixels.</p>
     */
    inline int GetHeight() const{ return m_height; }

    /**
     * <p>Height of the output file, in pixels.</p>
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * <p>Height of the output file, in pixels.</p>
     */
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * <p>Height of the output file, in pixels.</p>
     */
    inline JobOutput& WithHeight(int value) { SetHeight(value); return *this;}


    /**
     * <p>Frame rate of the output file, in frames per second.</p>
     */
    inline const Aws::String& GetFrameRate() const{ return m_frameRate; }

    /**
     * <p>Frame rate of the output file, in frames per second.</p>
     */
    inline bool FrameRateHasBeenSet() const { return m_frameRateHasBeenSet; }

    /**
     * <p>Frame rate of the output file, in frames per second.</p>
     */
    inline void SetFrameRate(const Aws::String& value) { m_frameRateHasBeenSet = true; m_frameRate = value; }

    /**
     * <p>Frame rate of the output file, in frames per second.</p>
     */
    inline void SetFrameRate(Aws::String&& value) { m_frameRateHasBeenSet = true; m_frameRate = std::move(value); }

    /**
     * <p>Frame rate of the output file, in frames per second.</p>
     */
    inline void SetFrameRate(const char* value) { m_frameRateHasBeenSet = true; m_frameRate.assign(value); }

    /**
     * <p>Frame rate of the output file, in frames per second.</p>
     */
    inline JobOutput& WithFrameRate(const Aws::String& value) { SetFrameRate(value); return *this;}

    /**
     * <p>Frame rate of the output file, in frames per second.</p>
     */
    inline JobOutput& WithFrameRate(Aws::String&& value) { SetFrameRate(std::move(value)); return *this;}

    /**
     * <p>Frame rate of the output file, in frames per second.</p>
     */
    inline JobOutput& WithFrameRate(const char* value) { SetFrameRate(value); return *this;}


    /**
     * <p>File size of the output file, in bytes.</p>
     */
    inline long long GetFileSize() const{ return m_fileSize; }

    /**
     * <p>File size of the output file, in bytes.</p>
     */
    inline bool FileSizeHasBeenSet() const { return m_fileSizeHasBeenSet; }

    /**
     * <p>File size of the output file, in bytes.</p>
     */
    inline void SetFileSize(long long value) { m_fileSizeHasBeenSet = true; m_fileSize = value; }

    /**
     * <p>File size of the output file, in bytes.</p>
     */
    inline JobOutput& WithFileSize(long long value) { SetFileSize(value); return *this;}


    /**
     * <p>Duration of the output file, in milliseconds.</p>
     */
    inline long long GetDurationMillis() const{ return m_durationMillis; }

    /**
     * <p>Duration of the output file, in milliseconds.</p>
     */
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }

    /**
     * <p>Duration of the output file, in milliseconds.</p>
     */
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }

    /**
     * <p>Duration of the output file, in milliseconds.</p>
     */
    inline JobOutput& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}


    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset that you
     * specify in <code>Preset</code> for the current output.</p> <p>Watermarks are
     * added to the output video in the sequence in which you list them in the job
     * output—the first watermark in the list is added to the output video first, the
     * second watermark in the list is added next, and so on. As a result, if the
     * settings in a preset cause Elastic Transcoder to place all watermarks in the
     * same location, the second watermark that you add covers the first one, the third
     * one covers the second, and the fourth one covers the third.</p>
     */
    inline const Aws::Vector<JobWatermark>& GetWatermarks() const{ return m_watermarks; }

    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset that you
     * specify in <code>Preset</code> for the current output.</p> <p>Watermarks are
     * added to the output video in the sequence in which you list them in the job
     * output—the first watermark in the list is added to the output video first, the
     * second watermark in the list is added next, and so on. As a result, if the
     * settings in a preset cause Elastic Transcoder to place all watermarks in the
     * same location, the second watermark that you add covers the first one, the third
     * one covers the second, and the fourth one covers the third.</p>
     */
    inline bool WatermarksHasBeenSet() const { return m_watermarksHasBeenSet; }

    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset that you
     * specify in <code>Preset</code> for the current output.</p> <p>Watermarks are
     * added to the output video in the sequence in which you list them in the job
     * output—the first watermark in the list is added to the output video first, the
     * second watermark in the list is added next, and so on. As a result, if the
     * settings in a preset cause Elastic Transcoder to place all watermarks in the
     * same location, the second watermark that you add covers the first one, the third
     * one covers the second, and the fourth one covers the third.</p>
     */
    inline void SetWatermarks(const Aws::Vector<JobWatermark>& value) { m_watermarksHasBeenSet = true; m_watermarks = value; }

    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset that you
     * specify in <code>Preset</code> for the current output.</p> <p>Watermarks are
     * added to the output video in the sequence in which you list them in the job
     * output—the first watermark in the list is added to the output video first, the
     * second watermark in the list is added next, and so on. As a result, if the
     * settings in a preset cause Elastic Transcoder to place all watermarks in the
     * same location, the second watermark that you add covers the first one, the third
     * one covers the second, and the fourth one covers the third.</p>
     */
    inline void SetWatermarks(Aws::Vector<JobWatermark>&& value) { m_watermarksHasBeenSet = true; m_watermarks = std::move(value); }

    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset that you
     * specify in <code>Preset</code> for the current output.</p> <p>Watermarks are
     * added to the output video in the sequence in which you list them in the job
     * output—the first watermark in the list is added to the output video first, the
     * second watermark in the list is added next, and so on. As a result, if the
     * settings in a preset cause Elastic Transcoder to place all watermarks in the
     * same location, the second watermark that you add covers the first one, the third
     * one covers the second, and the fourth one covers the third.</p>
     */
    inline JobOutput& WithWatermarks(const Aws::Vector<JobWatermark>& value) { SetWatermarks(value); return *this;}

    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset that you
     * specify in <code>Preset</code> for the current output.</p> <p>Watermarks are
     * added to the output video in the sequence in which you list them in the job
     * output—the first watermark in the list is added to the output video first, the
     * second watermark in the list is added next, and so on. As a result, if the
     * settings in a preset cause Elastic Transcoder to place all watermarks in the
     * same location, the second watermark that you add covers the first one, the third
     * one covers the second, and the fourth one covers the third.</p>
     */
    inline JobOutput& WithWatermarks(Aws::Vector<JobWatermark>&& value) { SetWatermarks(std::move(value)); return *this;}

    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset that you
     * specify in <code>Preset</code> for the current output.</p> <p>Watermarks are
     * added to the output video in the sequence in which you list them in the job
     * output—the first watermark in the list is added to the output video first, the
     * second watermark in the list is added next, and so on. As a result, if the
     * settings in a preset cause Elastic Transcoder to place all watermarks in the
     * same location, the second watermark that you add covers the first one, the third
     * one covers the second, and the fourth one covers the third.</p>
     */
    inline JobOutput& AddWatermarks(const JobWatermark& value) { m_watermarksHasBeenSet = true; m_watermarks.push_back(value); return *this; }

    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset that you
     * specify in <code>Preset</code> for the current output.</p> <p>Watermarks are
     * added to the output video in the sequence in which you list them in the job
     * output—the first watermark in the list is added to the output video first, the
     * second watermark in the list is added next, and so on. As a result, if the
     * settings in a preset cause Elastic Transcoder to place all watermarks in the
     * same location, the second watermark that you add covers the first one, the third
     * one covers the second, and the fourth one covers the third.</p>
     */
    inline JobOutput& AddWatermarks(JobWatermark&& value) { m_watermarksHasBeenSet = true; m_watermarks.push_back(std::move(value)); return *this; }


    /**
     * <p>The album art to be associated with the output file, if any.</p>
     */
    inline const JobAlbumArt& GetAlbumArt() const{ return m_albumArt; }

    /**
     * <p>The album art to be associated with the output file, if any.</p>
     */
    inline bool AlbumArtHasBeenSet() const { return m_albumArtHasBeenSet; }

    /**
     * <p>The album art to be associated with the output file, if any.</p>
     */
    inline void SetAlbumArt(const JobAlbumArt& value) { m_albumArtHasBeenSet = true; m_albumArt = value; }

    /**
     * <p>The album art to be associated with the output file, if any.</p>
     */
    inline void SetAlbumArt(JobAlbumArt&& value) { m_albumArtHasBeenSet = true; m_albumArt = std::move(value); }

    /**
     * <p>The album art to be associated with the output file, if any.</p>
     */
    inline JobOutput& WithAlbumArt(const JobAlbumArt& value) { SetAlbumArt(value); return *this;}

    /**
     * <p>The album art to be associated with the output file, if any.</p>
     */
    inline JobOutput& WithAlbumArt(JobAlbumArt&& value) { SetAlbumArt(std::move(value)); return *this;}


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
    inline JobOutput& WithCaptions(const Captions& value) { SetCaptions(value); return *this;}

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
    inline JobOutput& WithCaptions(Captions&& value) { SetCaptions(std::move(value)); return *this;}


    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your output files. If you choose to use encryption, you must specify a mode to
     * use. If you choose not to use encryption, Elastic Transcoder writes an
     * unencrypted file to your Amazon S3 bucket.</p>
     */
    inline const Encryption& GetEncryption() const{ return m_encryption; }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your output files. If you choose to use encryption, you must specify a mode to
     * use. If you choose not to use encryption, Elastic Transcoder writes an
     * unencrypted file to your Amazon S3 bucket.</p>
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your output files. If you choose to use encryption, you must specify a mode to
     * use. If you choose not to use encryption, Elastic Transcoder writes an
     * unencrypted file to your Amazon S3 bucket.</p>
     */
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your output files. If you choose to use encryption, you must specify a mode to
     * use. If you choose not to use encryption, Elastic Transcoder writes an
     * unencrypted file to your Amazon S3 bucket.</p>
     */
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your output files. If you choose to use encryption, you must specify a mode to
     * use. If you choose not to use encryption, Elastic Transcoder writes an
     * unencrypted file to your Amazon S3 bucket.</p>
     */
    inline JobOutput& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your output files. If you choose to use encryption, you must specify a mode to
     * use. If you choose not to use encryption, Elastic Transcoder writes an
     * unencrypted file to your Amazon S3 bucket.</p>
     */
    inline JobOutput& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * <p>If Elastic Transcoder used a preset with a
     * <code>ColorSpaceConversionMode</code> to transcode the output file, the
     * <code>AppliedColorSpaceConversion</code> parameter shows the conversion used. If
     * no <code>ColorSpaceConversionMode</code> was defined in the preset, this
     * parameter is not be included in the job response.</p>
     */
    inline const Aws::String& GetAppliedColorSpaceConversion() const{ return m_appliedColorSpaceConversion; }

    /**
     * <p>If Elastic Transcoder used a preset with a
     * <code>ColorSpaceConversionMode</code> to transcode the output file, the
     * <code>AppliedColorSpaceConversion</code> parameter shows the conversion used. If
     * no <code>ColorSpaceConversionMode</code> was defined in the preset, this
     * parameter is not be included in the job response.</p>
     */
    inline bool AppliedColorSpaceConversionHasBeenSet() const { return m_appliedColorSpaceConversionHasBeenSet; }

    /**
     * <p>If Elastic Transcoder used a preset with a
     * <code>ColorSpaceConversionMode</code> to transcode the output file, the
     * <code>AppliedColorSpaceConversion</code> parameter shows the conversion used. If
     * no <code>ColorSpaceConversionMode</code> was defined in the preset, this
     * parameter is not be included in the job response.</p>
     */
    inline void SetAppliedColorSpaceConversion(const Aws::String& value) { m_appliedColorSpaceConversionHasBeenSet = true; m_appliedColorSpaceConversion = value; }

    /**
     * <p>If Elastic Transcoder used a preset with a
     * <code>ColorSpaceConversionMode</code> to transcode the output file, the
     * <code>AppliedColorSpaceConversion</code> parameter shows the conversion used. If
     * no <code>ColorSpaceConversionMode</code> was defined in the preset, this
     * parameter is not be included in the job response.</p>
     */
    inline void SetAppliedColorSpaceConversion(Aws::String&& value) { m_appliedColorSpaceConversionHasBeenSet = true; m_appliedColorSpaceConversion = std::move(value); }

    /**
     * <p>If Elastic Transcoder used a preset with a
     * <code>ColorSpaceConversionMode</code> to transcode the output file, the
     * <code>AppliedColorSpaceConversion</code> parameter shows the conversion used. If
     * no <code>ColorSpaceConversionMode</code> was defined in the preset, this
     * parameter is not be included in the job response.</p>
     */
    inline void SetAppliedColorSpaceConversion(const char* value) { m_appliedColorSpaceConversionHasBeenSet = true; m_appliedColorSpaceConversion.assign(value); }

    /**
     * <p>If Elastic Transcoder used a preset with a
     * <code>ColorSpaceConversionMode</code> to transcode the output file, the
     * <code>AppliedColorSpaceConversion</code> parameter shows the conversion used. If
     * no <code>ColorSpaceConversionMode</code> was defined in the preset, this
     * parameter is not be included in the job response.</p>
     */
    inline JobOutput& WithAppliedColorSpaceConversion(const Aws::String& value) { SetAppliedColorSpaceConversion(value); return *this;}

    /**
     * <p>If Elastic Transcoder used a preset with a
     * <code>ColorSpaceConversionMode</code> to transcode the output file, the
     * <code>AppliedColorSpaceConversion</code> parameter shows the conversion used. If
     * no <code>ColorSpaceConversionMode</code> was defined in the preset, this
     * parameter is not be included in the job response.</p>
     */
    inline JobOutput& WithAppliedColorSpaceConversion(Aws::String&& value) { SetAppliedColorSpaceConversion(std::move(value)); return *this;}

    /**
     * <p>If Elastic Transcoder used a preset with a
     * <code>ColorSpaceConversionMode</code> to transcode the output file, the
     * <code>AppliedColorSpaceConversion</code> parameter shows the conversion used. If
     * no <code>ColorSpaceConversionMode</code> was defined in the preset, this
     * parameter is not be included in the job response.</p>
     */
    inline JobOutput& WithAppliedColorSpaceConversion(const char* value) { SetAppliedColorSpaceConversion(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

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

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusDetail;
    bool m_statusDetailHasBeenSet;

    long long m_duration;
    bool m_durationHasBeenSet;

    int m_width;
    bool m_widthHasBeenSet;

    int m_height;
    bool m_heightHasBeenSet;

    Aws::String m_frameRate;
    bool m_frameRateHasBeenSet;

    long long m_fileSize;
    bool m_fileSizeHasBeenSet;

    long long m_durationMillis;
    bool m_durationMillisHasBeenSet;

    Aws::Vector<JobWatermark> m_watermarks;
    bool m_watermarksHasBeenSet;

    JobAlbumArt m_albumArt;
    bool m_albumArtHasBeenSet;

    Captions m_captions;
    bool m_captionsHasBeenSet;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet;

    Aws::String m_appliedColorSpaceConversion;
    bool m_appliedColorSpaceConversionHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
