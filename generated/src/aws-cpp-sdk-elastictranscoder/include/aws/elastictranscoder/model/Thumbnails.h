﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Thumbnails for videos.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/Thumbnails">AWS
   * API Reference</a></p>
   */
  class Thumbnails
  {
  public:
    AWS_ELASTICTRANSCODER_API Thumbnails();
    AWS_ELASTICTRANSCODER_API Thumbnails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Thumbnails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format of thumbnails, if any. Valid values are <code>jpg</code> and
     * <code>png</code>. </p> <p>You specify whether you want Elastic Transcoder to
     * create thumbnails when you create a job.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }
    inline Thumbnails& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline Thumbnails& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline Thumbnails& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate number of seconds between thumbnails. Specify an integer
     * value.</p>
     */
    inline const Aws::String& GetInterval() const{ return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    inline void SetInterval(const Aws::String& value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline void SetInterval(Aws::String&& value) { m_intervalHasBeenSet = true; m_interval = std::move(value); }
    inline void SetInterval(const char* value) { m_intervalHasBeenSet = true; m_interval.assign(value); }
    inline Thumbnails& WithInterval(const Aws::String& value) { SetInterval(value); return *this;}
    inline Thumbnails& WithInterval(Aws::String&& value) { SetInterval(std::move(value)); return *this;}
    inline Thumbnails& WithInterval(const char* value) { SetInterval(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>To better control resolution and aspect ratio of thumbnails, we
     * recommend that you use the values <code>MaxWidth</code>, <code>MaxHeight</code>,
     * <code>SizingPolicy</code>, and <code>PaddingPolicy</code> instead of
     * <code>Resolution</code> and <code>AspectRatio</code>. The two groups of settings
     * are mutually exclusive. Do not use them together.</p>  <p>The width
     * and height of thumbnail files in pixels. Specify a value in the format <code>
     * <i>width</i> </code> x <code> <i>height</i> </code> where both values are even
     * integers. The values cannot exceed the width and height that you specified in
     * the <code>Video:Resolution</code> object.</p>
     */
    inline const Aws::String& GetResolution() const{ return m_resolution; }
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }
    inline void SetResolution(const Aws::String& value) { m_resolutionHasBeenSet = true; m_resolution = value; }
    inline void SetResolution(Aws::String&& value) { m_resolutionHasBeenSet = true; m_resolution = std::move(value); }
    inline void SetResolution(const char* value) { m_resolutionHasBeenSet = true; m_resolution.assign(value); }
    inline Thumbnails& WithResolution(const Aws::String& value) { SetResolution(value); return *this;}
    inline Thumbnails& WithResolution(Aws::String&& value) { SetResolution(std::move(value)); return *this;}
    inline Thumbnails& WithResolution(const char* value) { SetResolution(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>To better control resolution and aspect ratio of thumbnails, we
     * recommend that you use the values <code>MaxWidth</code>, <code>MaxHeight</code>,
     * <code>SizingPolicy</code>, and <code>PaddingPolicy</code> instead of
     * <code>Resolution</code> and <code>AspectRatio</code>. The two groups of settings
     * are mutually exclusive. Do not use them together.</p>  <p>The aspect
     * ratio of thumbnails. Valid values include:</p> <p> <code>auto</code>,
     * <code>1:1</code>, <code>4:3</code>, <code>3:2</code>, <code>16:9</code> </p>
     * <p>If you specify <code>auto</code>, Elastic Transcoder tries to preserve the
     * aspect ratio of the video in the output file.</p>
     */
    inline const Aws::String& GetAspectRatio() const{ return m_aspectRatio; }
    inline bool AspectRatioHasBeenSet() const { return m_aspectRatioHasBeenSet; }
    inline void SetAspectRatio(const Aws::String& value) { m_aspectRatioHasBeenSet = true; m_aspectRatio = value; }
    inline void SetAspectRatio(Aws::String&& value) { m_aspectRatioHasBeenSet = true; m_aspectRatio = std::move(value); }
    inline void SetAspectRatio(const char* value) { m_aspectRatioHasBeenSet = true; m_aspectRatio.assign(value); }
    inline Thumbnails& WithAspectRatio(const Aws::String& value) { SetAspectRatio(value); return *this;}
    inline Thumbnails& WithAspectRatio(Aws::String&& value) { SetAspectRatio(std::move(value)); return *this;}
    inline Thumbnails& WithAspectRatio(const char* value) { SetAspectRatio(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum width of thumbnails in pixels. If you specify auto, Elastic
     * Transcoder uses 1920 (Full HD) as the default value. If you specify a numeric
     * value, enter an even integer between 32 and 4096.</p>
     */
    inline const Aws::String& GetMaxWidth() const{ return m_maxWidth; }
    inline bool MaxWidthHasBeenSet() const { return m_maxWidthHasBeenSet; }
    inline void SetMaxWidth(const Aws::String& value) { m_maxWidthHasBeenSet = true; m_maxWidth = value; }
    inline void SetMaxWidth(Aws::String&& value) { m_maxWidthHasBeenSet = true; m_maxWidth = std::move(value); }
    inline void SetMaxWidth(const char* value) { m_maxWidthHasBeenSet = true; m_maxWidth.assign(value); }
    inline Thumbnails& WithMaxWidth(const Aws::String& value) { SetMaxWidth(value); return *this;}
    inline Thumbnails& WithMaxWidth(Aws::String&& value) { SetMaxWidth(std::move(value)); return *this;}
    inline Thumbnails& WithMaxWidth(const char* value) { SetMaxWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum height of thumbnails in pixels. If you specify auto, Elastic
     * Transcoder uses 1080 (Full HD) as the default value. If you specify a numeric
     * value, enter an even integer between 32 and 3072.</p>
     */
    inline const Aws::String& GetMaxHeight() const{ return m_maxHeight; }
    inline bool MaxHeightHasBeenSet() const { return m_maxHeightHasBeenSet; }
    inline void SetMaxHeight(const Aws::String& value) { m_maxHeightHasBeenSet = true; m_maxHeight = value; }
    inline void SetMaxHeight(Aws::String&& value) { m_maxHeightHasBeenSet = true; m_maxHeight = std::move(value); }
    inline void SetMaxHeight(const char* value) { m_maxHeightHasBeenSet = true; m_maxHeight.assign(value); }
    inline Thumbnails& WithMaxHeight(const Aws::String& value) { SetMaxHeight(value); return *this;}
    inline Thumbnails& WithMaxHeight(Aws::String&& value) { SetMaxHeight(std::move(value)); return *this;}
    inline Thumbnails& WithMaxHeight(const char* value) { SetMaxHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify one of the following values to control scaling of thumbnails:</p>
     * <ul> <li> <p> <code>Fit</code>: Elastic Transcoder scales thumbnails so they
     * match the value that you specified in thumbnail MaxWidth or MaxHeight settings
     * without exceeding the other value. </p> </li> <li> <p> <code>Fill</code>:
     * Elastic Transcoder scales thumbnails so they match the value that you specified
     * in thumbnail <code>MaxWidth</code> or <code>MaxHeight</code> settings and
     * matches or exceeds the other value. Elastic Transcoder centers the image in
     * thumbnails and then crops in the dimension (if any) that exceeds the maximum
     * value.</p> </li> <li> <p> <code>Stretch</code>: Elastic Transcoder stretches
     * thumbnails to match the values that you specified for thumbnail
     * <code>MaxWidth</code> and <code>MaxHeight</code> settings. If the relative
     * proportions of the input video and thumbnails are different, the thumbnails will
     * be distorted.</p> </li> <li> <p> <code>Keep</code>: Elastic Transcoder does not
     * scale thumbnails. If either dimension of the input video exceeds the values that
     * you specified for thumbnail <code>MaxWidth</code> and <code>MaxHeight</code>
     * settings, Elastic Transcoder crops the thumbnails.</p> </li> <li> <p>
     * <code>ShrinkToFit</code>: Elastic Transcoder scales thumbnails down so that
     * their dimensions match the values that you specified for at least one of
     * thumbnail <code>MaxWidth</code> and <code>MaxHeight</code> without exceeding
     * either value. If you specify this option, Elastic Transcoder does not scale
     * thumbnails up.</p> </li> <li> <p> <code>ShrinkToFill</code>: Elastic Transcoder
     * scales thumbnails down so that their dimensions match the values that you
     * specified for at least one of <code>MaxWidth</code> and <code>MaxHeight</code>
     * without dropping below either value. If you specify this option, Elastic
     * Transcoder does not scale thumbnails up.</p> </li> </ul>
     */
    inline const Aws::String& GetSizingPolicy() const{ return m_sizingPolicy; }
    inline bool SizingPolicyHasBeenSet() const { return m_sizingPolicyHasBeenSet; }
    inline void SetSizingPolicy(const Aws::String& value) { m_sizingPolicyHasBeenSet = true; m_sizingPolicy = value; }
    inline void SetSizingPolicy(Aws::String&& value) { m_sizingPolicyHasBeenSet = true; m_sizingPolicy = std::move(value); }
    inline void SetSizingPolicy(const char* value) { m_sizingPolicyHasBeenSet = true; m_sizingPolicy.assign(value); }
    inline Thumbnails& WithSizingPolicy(const Aws::String& value) { SetSizingPolicy(value); return *this;}
    inline Thumbnails& WithSizingPolicy(Aws::String&& value) { SetSizingPolicy(std::move(value)); return *this;}
    inline Thumbnails& WithSizingPolicy(const char* value) { SetSizingPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you set <code>PaddingPolicy</code> to <code>Pad</code>, Elastic
     * Transcoder may add black bars to the top and bottom and/or left and right sides
     * of thumbnails to make the total size of the thumbnails match the values that you
     * specified for thumbnail <code>MaxWidth</code> and <code>MaxHeight</code>
     * settings.</p>
     */
    inline const Aws::String& GetPaddingPolicy() const{ return m_paddingPolicy; }
    inline bool PaddingPolicyHasBeenSet() const { return m_paddingPolicyHasBeenSet; }
    inline void SetPaddingPolicy(const Aws::String& value) { m_paddingPolicyHasBeenSet = true; m_paddingPolicy = value; }
    inline void SetPaddingPolicy(Aws::String&& value) { m_paddingPolicyHasBeenSet = true; m_paddingPolicy = std::move(value); }
    inline void SetPaddingPolicy(const char* value) { m_paddingPolicyHasBeenSet = true; m_paddingPolicy.assign(value); }
    inline Thumbnails& WithPaddingPolicy(const Aws::String& value) { SetPaddingPolicy(value); return *this;}
    inline Thumbnails& WithPaddingPolicy(Aws::String&& value) { SetPaddingPolicy(std::move(value)); return *this;}
    inline Thumbnails& WithPaddingPolicy(const char* value) { SetPaddingPolicy(value); return *this;}
    ///@}
  private:

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_interval;
    bool m_intervalHasBeenSet = false;

    Aws::String m_resolution;
    bool m_resolutionHasBeenSet = false;

    Aws::String m_aspectRatio;
    bool m_aspectRatioHasBeenSet = false;

    Aws::String m_maxWidth;
    bool m_maxWidthHasBeenSet = false;

    Aws::String m_maxHeight;
    bool m_maxHeightHasBeenSet = false;

    Aws::String m_sizingPolicy;
    bool m_sizingPolicyHasBeenSet = false;

    Aws::String m_paddingPolicy;
    bool m_paddingPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
