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
   * <p>The file to be used as album art. There can be multiple artworks associated
   * with an audio file, to a maximum of 20.</p> <p>To remove artwork or leave the
   * artwork empty, you can either set <code>Artwork</code> to null, or set the
   * <code>Merge Policy</code> to "Replace" and use an empty <code>Artwork</code>
   * array.</p> <p>To pass through existing artwork unchanged, set the <code>Merge
   * Policy</code> to "Prepend", "Append", or "Fallback", and use an empty
   * <code>Artwork</code> array.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/Artwork">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API Artwork
  {
  public:
    Artwork();
    Artwork(Aws::Utils::Json::JsonView jsonValue);
    Artwork& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the file to be used as album art. To determine which Amazon S3
     * bucket contains the specified file, Elastic Transcoder checks the pipeline
     * specified by <code>PipelineId</code>; the <code>InputBucket</code> object in
     * that pipeline identifies the bucket.</p> <p>If the file name includes a prefix,
     * for example, <code>cooking/pie.jpg</code>, include the prefix in the key. If the
     * file isn't in the specified bucket, Elastic Transcoder returns an error.</p>
     */
    inline const Aws::String& GetInputKey() const{ return m_inputKey; }

    /**
     * <p>The name of the file to be used as album art. To determine which Amazon S3
     * bucket contains the specified file, Elastic Transcoder checks the pipeline
     * specified by <code>PipelineId</code>; the <code>InputBucket</code> object in
     * that pipeline identifies the bucket.</p> <p>If the file name includes a prefix,
     * for example, <code>cooking/pie.jpg</code>, include the prefix in the key. If the
     * file isn't in the specified bucket, Elastic Transcoder returns an error.</p>
     */
    inline bool InputKeyHasBeenSet() const { return m_inputKeyHasBeenSet; }

    /**
     * <p>The name of the file to be used as album art. To determine which Amazon S3
     * bucket contains the specified file, Elastic Transcoder checks the pipeline
     * specified by <code>PipelineId</code>; the <code>InputBucket</code> object in
     * that pipeline identifies the bucket.</p> <p>If the file name includes a prefix,
     * for example, <code>cooking/pie.jpg</code>, include the prefix in the key. If the
     * file isn't in the specified bucket, Elastic Transcoder returns an error.</p>
     */
    inline void SetInputKey(const Aws::String& value) { m_inputKeyHasBeenSet = true; m_inputKey = value; }

    /**
     * <p>The name of the file to be used as album art. To determine which Amazon S3
     * bucket contains the specified file, Elastic Transcoder checks the pipeline
     * specified by <code>PipelineId</code>; the <code>InputBucket</code> object in
     * that pipeline identifies the bucket.</p> <p>If the file name includes a prefix,
     * for example, <code>cooking/pie.jpg</code>, include the prefix in the key. If the
     * file isn't in the specified bucket, Elastic Transcoder returns an error.</p>
     */
    inline void SetInputKey(Aws::String&& value) { m_inputKeyHasBeenSet = true; m_inputKey = std::move(value); }

    /**
     * <p>The name of the file to be used as album art. To determine which Amazon S3
     * bucket contains the specified file, Elastic Transcoder checks the pipeline
     * specified by <code>PipelineId</code>; the <code>InputBucket</code> object in
     * that pipeline identifies the bucket.</p> <p>If the file name includes a prefix,
     * for example, <code>cooking/pie.jpg</code>, include the prefix in the key. If the
     * file isn't in the specified bucket, Elastic Transcoder returns an error.</p>
     */
    inline void SetInputKey(const char* value) { m_inputKeyHasBeenSet = true; m_inputKey.assign(value); }

    /**
     * <p>The name of the file to be used as album art. To determine which Amazon S3
     * bucket contains the specified file, Elastic Transcoder checks the pipeline
     * specified by <code>PipelineId</code>; the <code>InputBucket</code> object in
     * that pipeline identifies the bucket.</p> <p>If the file name includes a prefix,
     * for example, <code>cooking/pie.jpg</code>, include the prefix in the key. If the
     * file isn't in the specified bucket, Elastic Transcoder returns an error.</p>
     */
    inline Artwork& WithInputKey(const Aws::String& value) { SetInputKey(value); return *this;}

    /**
     * <p>The name of the file to be used as album art. To determine which Amazon S3
     * bucket contains the specified file, Elastic Transcoder checks the pipeline
     * specified by <code>PipelineId</code>; the <code>InputBucket</code> object in
     * that pipeline identifies the bucket.</p> <p>If the file name includes a prefix,
     * for example, <code>cooking/pie.jpg</code>, include the prefix in the key. If the
     * file isn't in the specified bucket, Elastic Transcoder returns an error.</p>
     */
    inline Artwork& WithInputKey(Aws::String&& value) { SetInputKey(std::move(value)); return *this;}

    /**
     * <p>The name of the file to be used as album art. To determine which Amazon S3
     * bucket contains the specified file, Elastic Transcoder checks the pipeline
     * specified by <code>PipelineId</code>; the <code>InputBucket</code> object in
     * that pipeline identifies the bucket.</p> <p>If the file name includes a prefix,
     * for example, <code>cooking/pie.jpg</code>, include the prefix in the key. If the
     * file isn't in the specified bucket, Elastic Transcoder returns an error.</p>
     */
    inline Artwork& WithInputKey(const char* value) { SetInputKey(value); return *this;}


    /**
     * <p>The maximum width of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 4096,
     * inclusive.</p>
     */
    inline const Aws::String& GetMaxWidth() const{ return m_maxWidth; }

    /**
     * <p>The maximum width of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 4096,
     * inclusive.</p>
     */
    inline bool MaxWidthHasBeenSet() const { return m_maxWidthHasBeenSet; }

    /**
     * <p>The maximum width of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 4096,
     * inclusive.</p>
     */
    inline void SetMaxWidth(const Aws::String& value) { m_maxWidthHasBeenSet = true; m_maxWidth = value; }

    /**
     * <p>The maximum width of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 4096,
     * inclusive.</p>
     */
    inline void SetMaxWidth(Aws::String&& value) { m_maxWidthHasBeenSet = true; m_maxWidth = std::move(value); }

    /**
     * <p>The maximum width of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 4096,
     * inclusive.</p>
     */
    inline void SetMaxWidth(const char* value) { m_maxWidthHasBeenSet = true; m_maxWidth.assign(value); }

    /**
     * <p>The maximum width of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 4096,
     * inclusive.</p>
     */
    inline Artwork& WithMaxWidth(const Aws::String& value) { SetMaxWidth(value); return *this;}

    /**
     * <p>The maximum width of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 4096,
     * inclusive.</p>
     */
    inline Artwork& WithMaxWidth(Aws::String&& value) { SetMaxWidth(std::move(value)); return *this;}

    /**
     * <p>The maximum width of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 4096,
     * inclusive.</p>
     */
    inline Artwork& WithMaxWidth(const char* value) { SetMaxWidth(value); return *this;}


    /**
     * <p>The maximum height of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 3072,
     * inclusive.</p>
     */
    inline const Aws::String& GetMaxHeight() const{ return m_maxHeight; }

    /**
     * <p>The maximum height of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 3072,
     * inclusive.</p>
     */
    inline bool MaxHeightHasBeenSet() const { return m_maxHeightHasBeenSet; }

    /**
     * <p>The maximum height of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 3072,
     * inclusive.</p>
     */
    inline void SetMaxHeight(const Aws::String& value) { m_maxHeightHasBeenSet = true; m_maxHeight = value; }

    /**
     * <p>The maximum height of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 3072,
     * inclusive.</p>
     */
    inline void SetMaxHeight(Aws::String&& value) { m_maxHeightHasBeenSet = true; m_maxHeight = std::move(value); }

    /**
     * <p>The maximum height of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 3072,
     * inclusive.</p>
     */
    inline void SetMaxHeight(const char* value) { m_maxHeightHasBeenSet = true; m_maxHeight.assign(value); }

    /**
     * <p>The maximum height of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 3072,
     * inclusive.</p>
     */
    inline Artwork& WithMaxHeight(const Aws::String& value) { SetMaxHeight(value); return *this;}

    /**
     * <p>The maximum height of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 3072,
     * inclusive.</p>
     */
    inline Artwork& WithMaxHeight(Aws::String&& value) { SetMaxHeight(std::move(value)); return *this;}

    /**
     * <p>The maximum height of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 3072,
     * inclusive.</p>
     */
    inline Artwork& WithMaxHeight(const char* value) { SetMaxHeight(value); return *this;}


    /**
     * <p>Specify one of the following values to control scaling of the output album
     * art:</p> <ul> <li> <p> <code>Fit:</code> Elastic Transcoder scales the output
     * art so it matches the value that you specified in either <code>MaxWidth</code>
     * or <code>MaxHeight</code> without exceeding the other value.</p> </li> <li> <p>
     * <code>Fill:</code> Elastic Transcoder scales the output art so it matches the
     * value that you specified in either <code>MaxWidth</code> or
     * <code>MaxHeight</code> and matches or exceeds the other value. Elastic
     * Transcoder centers the output art and then crops it in the dimension (if any)
     * that exceeds the maximum value. </p> </li> <li> <p> <code>Stretch:</code>
     * Elastic Transcoder stretches the output art to match the values that you
     * specified for <code>MaxWidth</code> and <code>MaxHeight</code>. If the relative
     * proportions of the input art and the output art are different, the output art
     * will be distorted.</p> </li> <li> <p> <code>Keep:</code> Elastic Transcoder does
     * not scale the output art. If either dimension of the input art exceeds the
     * values that you specified for <code>MaxWidth</code> and <code>MaxHeight</code>,
     * Elastic Transcoder crops the output art.</p> </li> <li> <p>
     * <code>ShrinkToFit:</code> Elastic Transcoder scales the output art down so that
     * its dimensions match the values that you specified for at least one of
     * <code>MaxWidth</code> and <code>MaxHeight</code> without exceeding either value.
     * If you specify this option, Elastic Transcoder does not scale the art up.</p>
     * </li> <li> <p> <code>ShrinkToFill</code> Elastic Transcoder scales the output
     * art down so that its dimensions match the values that you specified for at least
     * one of <code>MaxWidth</code> and <code>MaxHeight</code> without dropping below
     * either value. If you specify this option, Elastic Transcoder does not scale the
     * art up.</p> </li> </ul>
     */
    inline const Aws::String& GetSizingPolicy() const{ return m_sizingPolicy; }

    /**
     * <p>Specify one of the following values to control scaling of the output album
     * art:</p> <ul> <li> <p> <code>Fit:</code> Elastic Transcoder scales the output
     * art so it matches the value that you specified in either <code>MaxWidth</code>
     * or <code>MaxHeight</code> without exceeding the other value.</p> </li> <li> <p>
     * <code>Fill:</code> Elastic Transcoder scales the output art so it matches the
     * value that you specified in either <code>MaxWidth</code> or
     * <code>MaxHeight</code> and matches or exceeds the other value. Elastic
     * Transcoder centers the output art and then crops it in the dimension (if any)
     * that exceeds the maximum value. </p> </li> <li> <p> <code>Stretch:</code>
     * Elastic Transcoder stretches the output art to match the values that you
     * specified for <code>MaxWidth</code> and <code>MaxHeight</code>. If the relative
     * proportions of the input art and the output art are different, the output art
     * will be distorted.</p> </li> <li> <p> <code>Keep:</code> Elastic Transcoder does
     * not scale the output art. If either dimension of the input art exceeds the
     * values that you specified for <code>MaxWidth</code> and <code>MaxHeight</code>,
     * Elastic Transcoder crops the output art.</p> </li> <li> <p>
     * <code>ShrinkToFit:</code> Elastic Transcoder scales the output art down so that
     * its dimensions match the values that you specified for at least one of
     * <code>MaxWidth</code> and <code>MaxHeight</code> without exceeding either value.
     * If you specify this option, Elastic Transcoder does not scale the art up.</p>
     * </li> <li> <p> <code>ShrinkToFill</code> Elastic Transcoder scales the output
     * art down so that its dimensions match the values that you specified for at least
     * one of <code>MaxWidth</code> and <code>MaxHeight</code> without dropping below
     * either value. If you specify this option, Elastic Transcoder does not scale the
     * art up.</p> </li> </ul>
     */
    inline bool SizingPolicyHasBeenSet() const { return m_sizingPolicyHasBeenSet; }

    /**
     * <p>Specify one of the following values to control scaling of the output album
     * art:</p> <ul> <li> <p> <code>Fit:</code> Elastic Transcoder scales the output
     * art so it matches the value that you specified in either <code>MaxWidth</code>
     * or <code>MaxHeight</code> without exceeding the other value.</p> </li> <li> <p>
     * <code>Fill:</code> Elastic Transcoder scales the output art so it matches the
     * value that you specified in either <code>MaxWidth</code> or
     * <code>MaxHeight</code> and matches or exceeds the other value. Elastic
     * Transcoder centers the output art and then crops it in the dimension (if any)
     * that exceeds the maximum value. </p> </li> <li> <p> <code>Stretch:</code>
     * Elastic Transcoder stretches the output art to match the values that you
     * specified for <code>MaxWidth</code> and <code>MaxHeight</code>. If the relative
     * proportions of the input art and the output art are different, the output art
     * will be distorted.</p> </li> <li> <p> <code>Keep:</code> Elastic Transcoder does
     * not scale the output art. If either dimension of the input art exceeds the
     * values that you specified for <code>MaxWidth</code> and <code>MaxHeight</code>,
     * Elastic Transcoder crops the output art.</p> </li> <li> <p>
     * <code>ShrinkToFit:</code> Elastic Transcoder scales the output art down so that
     * its dimensions match the values that you specified for at least one of
     * <code>MaxWidth</code> and <code>MaxHeight</code> without exceeding either value.
     * If you specify this option, Elastic Transcoder does not scale the art up.</p>
     * </li> <li> <p> <code>ShrinkToFill</code> Elastic Transcoder scales the output
     * art down so that its dimensions match the values that you specified for at least
     * one of <code>MaxWidth</code> and <code>MaxHeight</code> without dropping below
     * either value. If you specify this option, Elastic Transcoder does not scale the
     * art up.</p> </li> </ul>
     */
    inline void SetSizingPolicy(const Aws::String& value) { m_sizingPolicyHasBeenSet = true; m_sizingPolicy = value; }

    /**
     * <p>Specify one of the following values to control scaling of the output album
     * art:</p> <ul> <li> <p> <code>Fit:</code> Elastic Transcoder scales the output
     * art so it matches the value that you specified in either <code>MaxWidth</code>
     * or <code>MaxHeight</code> without exceeding the other value.</p> </li> <li> <p>
     * <code>Fill:</code> Elastic Transcoder scales the output art so it matches the
     * value that you specified in either <code>MaxWidth</code> or
     * <code>MaxHeight</code> and matches or exceeds the other value. Elastic
     * Transcoder centers the output art and then crops it in the dimension (if any)
     * that exceeds the maximum value. </p> </li> <li> <p> <code>Stretch:</code>
     * Elastic Transcoder stretches the output art to match the values that you
     * specified for <code>MaxWidth</code> and <code>MaxHeight</code>. If the relative
     * proportions of the input art and the output art are different, the output art
     * will be distorted.</p> </li> <li> <p> <code>Keep:</code> Elastic Transcoder does
     * not scale the output art. If either dimension of the input art exceeds the
     * values that you specified for <code>MaxWidth</code> and <code>MaxHeight</code>,
     * Elastic Transcoder crops the output art.</p> </li> <li> <p>
     * <code>ShrinkToFit:</code> Elastic Transcoder scales the output art down so that
     * its dimensions match the values that you specified for at least one of
     * <code>MaxWidth</code> and <code>MaxHeight</code> without exceeding either value.
     * If you specify this option, Elastic Transcoder does not scale the art up.</p>
     * </li> <li> <p> <code>ShrinkToFill</code> Elastic Transcoder scales the output
     * art down so that its dimensions match the values that you specified for at least
     * one of <code>MaxWidth</code> and <code>MaxHeight</code> without dropping below
     * either value. If you specify this option, Elastic Transcoder does not scale the
     * art up.</p> </li> </ul>
     */
    inline void SetSizingPolicy(Aws::String&& value) { m_sizingPolicyHasBeenSet = true; m_sizingPolicy = std::move(value); }

    /**
     * <p>Specify one of the following values to control scaling of the output album
     * art:</p> <ul> <li> <p> <code>Fit:</code> Elastic Transcoder scales the output
     * art so it matches the value that you specified in either <code>MaxWidth</code>
     * or <code>MaxHeight</code> without exceeding the other value.</p> </li> <li> <p>
     * <code>Fill:</code> Elastic Transcoder scales the output art so it matches the
     * value that you specified in either <code>MaxWidth</code> or
     * <code>MaxHeight</code> and matches or exceeds the other value. Elastic
     * Transcoder centers the output art and then crops it in the dimension (if any)
     * that exceeds the maximum value. </p> </li> <li> <p> <code>Stretch:</code>
     * Elastic Transcoder stretches the output art to match the values that you
     * specified for <code>MaxWidth</code> and <code>MaxHeight</code>. If the relative
     * proportions of the input art and the output art are different, the output art
     * will be distorted.</p> </li> <li> <p> <code>Keep:</code> Elastic Transcoder does
     * not scale the output art. If either dimension of the input art exceeds the
     * values that you specified for <code>MaxWidth</code> and <code>MaxHeight</code>,
     * Elastic Transcoder crops the output art.</p> </li> <li> <p>
     * <code>ShrinkToFit:</code> Elastic Transcoder scales the output art down so that
     * its dimensions match the values that you specified for at least one of
     * <code>MaxWidth</code> and <code>MaxHeight</code> without exceeding either value.
     * If you specify this option, Elastic Transcoder does not scale the art up.</p>
     * </li> <li> <p> <code>ShrinkToFill</code> Elastic Transcoder scales the output
     * art down so that its dimensions match the values that you specified for at least
     * one of <code>MaxWidth</code> and <code>MaxHeight</code> without dropping below
     * either value. If you specify this option, Elastic Transcoder does not scale the
     * art up.</p> </li> </ul>
     */
    inline void SetSizingPolicy(const char* value) { m_sizingPolicyHasBeenSet = true; m_sizingPolicy.assign(value); }

    /**
     * <p>Specify one of the following values to control scaling of the output album
     * art:</p> <ul> <li> <p> <code>Fit:</code> Elastic Transcoder scales the output
     * art so it matches the value that you specified in either <code>MaxWidth</code>
     * or <code>MaxHeight</code> without exceeding the other value.</p> </li> <li> <p>
     * <code>Fill:</code> Elastic Transcoder scales the output art so it matches the
     * value that you specified in either <code>MaxWidth</code> or
     * <code>MaxHeight</code> and matches or exceeds the other value. Elastic
     * Transcoder centers the output art and then crops it in the dimension (if any)
     * that exceeds the maximum value. </p> </li> <li> <p> <code>Stretch:</code>
     * Elastic Transcoder stretches the output art to match the values that you
     * specified for <code>MaxWidth</code> and <code>MaxHeight</code>. If the relative
     * proportions of the input art and the output art are different, the output art
     * will be distorted.</p> </li> <li> <p> <code>Keep:</code> Elastic Transcoder does
     * not scale the output art. If either dimension of the input art exceeds the
     * values that you specified for <code>MaxWidth</code> and <code>MaxHeight</code>,
     * Elastic Transcoder crops the output art.</p> </li> <li> <p>
     * <code>ShrinkToFit:</code> Elastic Transcoder scales the output art down so that
     * its dimensions match the values that you specified for at least one of
     * <code>MaxWidth</code> and <code>MaxHeight</code> without exceeding either value.
     * If you specify this option, Elastic Transcoder does not scale the art up.</p>
     * </li> <li> <p> <code>ShrinkToFill</code> Elastic Transcoder scales the output
     * art down so that its dimensions match the values that you specified for at least
     * one of <code>MaxWidth</code> and <code>MaxHeight</code> without dropping below
     * either value. If you specify this option, Elastic Transcoder does not scale the
     * art up.</p> </li> </ul>
     */
    inline Artwork& WithSizingPolicy(const Aws::String& value) { SetSizingPolicy(value); return *this;}

    /**
     * <p>Specify one of the following values to control scaling of the output album
     * art:</p> <ul> <li> <p> <code>Fit:</code> Elastic Transcoder scales the output
     * art so it matches the value that you specified in either <code>MaxWidth</code>
     * or <code>MaxHeight</code> without exceeding the other value.</p> </li> <li> <p>
     * <code>Fill:</code> Elastic Transcoder scales the output art so it matches the
     * value that you specified in either <code>MaxWidth</code> or
     * <code>MaxHeight</code> and matches or exceeds the other value. Elastic
     * Transcoder centers the output art and then crops it in the dimension (if any)
     * that exceeds the maximum value. </p> </li> <li> <p> <code>Stretch:</code>
     * Elastic Transcoder stretches the output art to match the values that you
     * specified for <code>MaxWidth</code> and <code>MaxHeight</code>. If the relative
     * proportions of the input art and the output art are different, the output art
     * will be distorted.</p> </li> <li> <p> <code>Keep:</code> Elastic Transcoder does
     * not scale the output art. If either dimension of the input art exceeds the
     * values that you specified for <code>MaxWidth</code> and <code>MaxHeight</code>,
     * Elastic Transcoder crops the output art.</p> </li> <li> <p>
     * <code>ShrinkToFit:</code> Elastic Transcoder scales the output art down so that
     * its dimensions match the values that you specified for at least one of
     * <code>MaxWidth</code> and <code>MaxHeight</code> without exceeding either value.
     * If you specify this option, Elastic Transcoder does not scale the art up.</p>
     * </li> <li> <p> <code>ShrinkToFill</code> Elastic Transcoder scales the output
     * art down so that its dimensions match the values that you specified for at least
     * one of <code>MaxWidth</code> and <code>MaxHeight</code> without dropping below
     * either value. If you specify this option, Elastic Transcoder does not scale the
     * art up.</p> </li> </ul>
     */
    inline Artwork& WithSizingPolicy(Aws::String&& value) { SetSizingPolicy(std::move(value)); return *this;}

    /**
     * <p>Specify one of the following values to control scaling of the output album
     * art:</p> <ul> <li> <p> <code>Fit:</code> Elastic Transcoder scales the output
     * art so it matches the value that you specified in either <code>MaxWidth</code>
     * or <code>MaxHeight</code> without exceeding the other value.</p> </li> <li> <p>
     * <code>Fill:</code> Elastic Transcoder scales the output art so it matches the
     * value that you specified in either <code>MaxWidth</code> or
     * <code>MaxHeight</code> and matches or exceeds the other value. Elastic
     * Transcoder centers the output art and then crops it in the dimension (if any)
     * that exceeds the maximum value. </p> </li> <li> <p> <code>Stretch:</code>
     * Elastic Transcoder stretches the output art to match the values that you
     * specified for <code>MaxWidth</code> and <code>MaxHeight</code>. If the relative
     * proportions of the input art and the output art are different, the output art
     * will be distorted.</p> </li> <li> <p> <code>Keep:</code> Elastic Transcoder does
     * not scale the output art. If either dimension of the input art exceeds the
     * values that you specified for <code>MaxWidth</code> and <code>MaxHeight</code>,
     * Elastic Transcoder crops the output art.</p> </li> <li> <p>
     * <code>ShrinkToFit:</code> Elastic Transcoder scales the output art down so that
     * its dimensions match the values that you specified for at least one of
     * <code>MaxWidth</code> and <code>MaxHeight</code> without exceeding either value.
     * If you specify this option, Elastic Transcoder does not scale the art up.</p>
     * </li> <li> <p> <code>ShrinkToFill</code> Elastic Transcoder scales the output
     * art down so that its dimensions match the values that you specified for at least
     * one of <code>MaxWidth</code> and <code>MaxHeight</code> without dropping below
     * either value. If you specify this option, Elastic Transcoder does not scale the
     * art up.</p> </li> </ul>
     */
    inline Artwork& WithSizingPolicy(const char* value) { SetSizingPolicy(value); return *this;}


    /**
     * <p>When you set <code>PaddingPolicy</code> to <code>Pad</code>, Elastic
     * Transcoder may add white bars to the top and bottom and/or left and right sides
     * of the output album art to make the total size of the output art match the
     * values that you specified for <code>MaxWidth</code> and
     * <code>MaxHeight</code>.</p>
     */
    inline const Aws::String& GetPaddingPolicy() const{ return m_paddingPolicy; }

    /**
     * <p>When you set <code>PaddingPolicy</code> to <code>Pad</code>, Elastic
     * Transcoder may add white bars to the top and bottom and/or left and right sides
     * of the output album art to make the total size of the output art match the
     * values that you specified for <code>MaxWidth</code> and
     * <code>MaxHeight</code>.</p>
     */
    inline bool PaddingPolicyHasBeenSet() const { return m_paddingPolicyHasBeenSet; }

    /**
     * <p>When you set <code>PaddingPolicy</code> to <code>Pad</code>, Elastic
     * Transcoder may add white bars to the top and bottom and/or left and right sides
     * of the output album art to make the total size of the output art match the
     * values that you specified for <code>MaxWidth</code> and
     * <code>MaxHeight</code>.</p>
     */
    inline void SetPaddingPolicy(const Aws::String& value) { m_paddingPolicyHasBeenSet = true; m_paddingPolicy = value; }

    /**
     * <p>When you set <code>PaddingPolicy</code> to <code>Pad</code>, Elastic
     * Transcoder may add white bars to the top and bottom and/or left and right sides
     * of the output album art to make the total size of the output art match the
     * values that you specified for <code>MaxWidth</code> and
     * <code>MaxHeight</code>.</p>
     */
    inline void SetPaddingPolicy(Aws::String&& value) { m_paddingPolicyHasBeenSet = true; m_paddingPolicy = std::move(value); }

    /**
     * <p>When you set <code>PaddingPolicy</code> to <code>Pad</code>, Elastic
     * Transcoder may add white bars to the top and bottom and/or left and right sides
     * of the output album art to make the total size of the output art match the
     * values that you specified for <code>MaxWidth</code> and
     * <code>MaxHeight</code>.</p>
     */
    inline void SetPaddingPolicy(const char* value) { m_paddingPolicyHasBeenSet = true; m_paddingPolicy.assign(value); }

    /**
     * <p>When you set <code>PaddingPolicy</code> to <code>Pad</code>, Elastic
     * Transcoder may add white bars to the top and bottom and/or left and right sides
     * of the output album art to make the total size of the output art match the
     * values that you specified for <code>MaxWidth</code> and
     * <code>MaxHeight</code>.</p>
     */
    inline Artwork& WithPaddingPolicy(const Aws::String& value) { SetPaddingPolicy(value); return *this;}

    /**
     * <p>When you set <code>PaddingPolicy</code> to <code>Pad</code>, Elastic
     * Transcoder may add white bars to the top and bottom and/or left and right sides
     * of the output album art to make the total size of the output art match the
     * values that you specified for <code>MaxWidth</code> and
     * <code>MaxHeight</code>.</p>
     */
    inline Artwork& WithPaddingPolicy(Aws::String&& value) { SetPaddingPolicy(std::move(value)); return *this;}

    /**
     * <p>When you set <code>PaddingPolicy</code> to <code>Pad</code>, Elastic
     * Transcoder may add white bars to the top and bottom and/or left and right sides
     * of the output album art to make the total size of the output art match the
     * values that you specified for <code>MaxWidth</code> and
     * <code>MaxHeight</code>.</p>
     */
    inline Artwork& WithPaddingPolicy(const char* value) { SetPaddingPolicy(value); return *this;}


    /**
     * <p>The format of album art, if any. Valid formats are <code>.jpg</code> and
     * <code>.png</code>.</p>
     */
    inline const Aws::String& GetAlbumArtFormat() const{ return m_albumArtFormat; }

    /**
     * <p>The format of album art, if any. Valid formats are <code>.jpg</code> and
     * <code>.png</code>.</p>
     */
    inline bool AlbumArtFormatHasBeenSet() const { return m_albumArtFormatHasBeenSet; }

    /**
     * <p>The format of album art, if any. Valid formats are <code>.jpg</code> and
     * <code>.png</code>.</p>
     */
    inline void SetAlbumArtFormat(const Aws::String& value) { m_albumArtFormatHasBeenSet = true; m_albumArtFormat = value; }

    /**
     * <p>The format of album art, if any. Valid formats are <code>.jpg</code> and
     * <code>.png</code>.</p>
     */
    inline void SetAlbumArtFormat(Aws::String&& value) { m_albumArtFormatHasBeenSet = true; m_albumArtFormat = std::move(value); }

    /**
     * <p>The format of album art, if any. Valid formats are <code>.jpg</code> and
     * <code>.png</code>.</p>
     */
    inline void SetAlbumArtFormat(const char* value) { m_albumArtFormatHasBeenSet = true; m_albumArtFormat.assign(value); }

    /**
     * <p>The format of album art, if any. Valid formats are <code>.jpg</code> and
     * <code>.png</code>.</p>
     */
    inline Artwork& WithAlbumArtFormat(const Aws::String& value) { SetAlbumArtFormat(value); return *this;}

    /**
     * <p>The format of album art, if any. Valid formats are <code>.jpg</code> and
     * <code>.png</code>.</p>
     */
    inline Artwork& WithAlbumArtFormat(Aws::String&& value) { SetAlbumArtFormat(std::move(value)); return *this;}

    /**
     * <p>The format of album art, if any. Valid formats are <code>.jpg</code> and
     * <code>.png</code>.</p>
     */
    inline Artwork& WithAlbumArtFormat(const char* value) { SetAlbumArtFormat(value); return *this;}


    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your artwork.</p>
     */
    inline const Encryption& GetEncryption() const{ return m_encryption; }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your artwork.</p>
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your artwork.</p>
     */
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your artwork.</p>
     */
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your artwork.</p>
     */
    inline Artwork& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your artwork.</p>
     */
    inline Artwork& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}

  private:

    Aws::String m_inputKey;
    bool m_inputKeyHasBeenSet;

    Aws::String m_maxWidth;
    bool m_maxWidthHasBeenSet;

    Aws::String m_maxHeight;
    bool m_maxHeightHasBeenSet;

    Aws::String m_sizingPolicy;
    bool m_sizingPolicyHasBeenSet;

    Aws::String m_paddingPolicy;
    bool m_paddingPolicyHasBeenSet;

    Aws::String m_albumArtFormat;
    bool m_albumArtFormatHasBeenSet;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
