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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastictranscoder/model/CaptionSource.h>
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
   * <p>The captions to be created, if any.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/InputCaptions">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API InputCaptions
  {
  public:
    InputCaptions();
    InputCaptions(Aws::Utils::Json::JsonView jsonValue);
    InputCaptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A policy that determines how Elastic Transcoder handles the existence of
     * multiple captions.</p> <ul> <li> <p> <b>MergeOverride:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the sidecar captions and ignores the embedded captions
     * for that language.</p> </li> <li> <p> <b>MergeRetain:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the embedded captions and ignores the sidecar captions
     * for that language. If <code>CaptionSources</code> is empty, Elastic Transcoder
     * omits all sidecar captions from the output files.</p> </li> <li> <p>
     * <b>Override:</b> Elastic Transcoder transcodes only the sidecar captions that
     * you specify in <code>CaptionSources</code>.</p> </li> </ul> <p>
     * <code>MergePolicy</code> cannot be null.</p>
     */
    inline const Aws::String& GetMergePolicy() const{ return m_mergePolicy; }

    /**
     * <p>A policy that determines how Elastic Transcoder handles the existence of
     * multiple captions.</p> <ul> <li> <p> <b>MergeOverride:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the sidecar captions and ignores the embedded captions
     * for that language.</p> </li> <li> <p> <b>MergeRetain:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the embedded captions and ignores the sidecar captions
     * for that language. If <code>CaptionSources</code> is empty, Elastic Transcoder
     * omits all sidecar captions from the output files.</p> </li> <li> <p>
     * <b>Override:</b> Elastic Transcoder transcodes only the sidecar captions that
     * you specify in <code>CaptionSources</code>.</p> </li> </ul> <p>
     * <code>MergePolicy</code> cannot be null.</p>
     */
    inline bool MergePolicyHasBeenSet() const { return m_mergePolicyHasBeenSet; }

    /**
     * <p>A policy that determines how Elastic Transcoder handles the existence of
     * multiple captions.</p> <ul> <li> <p> <b>MergeOverride:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the sidecar captions and ignores the embedded captions
     * for that language.</p> </li> <li> <p> <b>MergeRetain:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the embedded captions and ignores the sidecar captions
     * for that language. If <code>CaptionSources</code> is empty, Elastic Transcoder
     * omits all sidecar captions from the output files.</p> </li> <li> <p>
     * <b>Override:</b> Elastic Transcoder transcodes only the sidecar captions that
     * you specify in <code>CaptionSources</code>.</p> </li> </ul> <p>
     * <code>MergePolicy</code> cannot be null.</p>
     */
    inline void SetMergePolicy(const Aws::String& value) { m_mergePolicyHasBeenSet = true; m_mergePolicy = value; }

    /**
     * <p>A policy that determines how Elastic Transcoder handles the existence of
     * multiple captions.</p> <ul> <li> <p> <b>MergeOverride:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the sidecar captions and ignores the embedded captions
     * for that language.</p> </li> <li> <p> <b>MergeRetain:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the embedded captions and ignores the sidecar captions
     * for that language. If <code>CaptionSources</code> is empty, Elastic Transcoder
     * omits all sidecar captions from the output files.</p> </li> <li> <p>
     * <b>Override:</b> Elastic Transcoder transcodes only the sidecar captions that
     * you specify in <code>CaptionSources</code>.</p> </li> </ul> <p>
     * <code>MergePolicy</code> cannot be null.</p>
     */
    inline void SetMergePolicy(Aws::String&& value) { m_mergePolicyHasBeenSet = true; m_mergePolicy = std::move(value); }

    /**
     * <p>A policy that determines how Elastic Transcoder handles the existence of
     * multiple captions.</p> <ul> <li> <p> <b>MergeOverride:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the sidecar captions and ignores the embedded captions
     * for that language.</p> </li> <li> <p> <b>MergeRetain:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the embedded captions and ignores the sidecar captions
     * for that language. If <code>CaptionSources</code> is empty, Elastic Transcoder
     * omits all sidecar captions from the output files.</p> </li> <li> <p>
     * <b>Override:</b> Elastic Transcoder transcodes only the sidecar captions that
     * you specify in <code>CaptionSources</code>.</p> </li> </ul> <p>
     * <code>MergePolicy</code> cannot be null.</p>
     */
    inline void SetMergePolicy(const char* value) { m_mergePolicyHasBeenSet = true; m_mergePolicy.assign(value); }

    /**
     * <p>A policy that determines how Elastic Transcoder handles the existence of
     * multiple captions.</p> <ul> <li> <p> <b>MergeOverride:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the sidecar captions and ignores the embedded captions
     * for that language.</p> </li> <li> <p> <b>MergeRetain:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the embedded captions and ignores the sidecar captions
     * for that language. If <code>CaptionSources</code> is empty, Elastic Transcoder
     * omits all sidecar captions from the output files.</p> </li> <li> <p>
     * <b>Override:</b> Elastic Transcoder transcodes only the sidecar captions that
     * you specify in <code>CaptionSources</code>.</p> </li> </ul> <p>
     * <code>MergePolicy</code> cannot be null.</p>
     */
    inline InputCaptions& WithMergePolicy(const Aws::String& value) { SetMergePolicy(value); return *this;}

    /**
     * <p>A policy that determines how Elastic Transcoder handles the existence of
     * multiple captions.</p> <ul> <li> <p> <b>MergeOverride:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the sidecar captions and ignores the embedded captions
     * for that language.</p> </li> <li> <p> <b>MergeRetain:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the embedded captions and ignores the sidecar captions
     * for that language. If <code>CaptionSources</code> is empty, Elastic Transcoder
     * omits all sidecar captions from the output files.</p> </li> <li> <p>
     * <b>Override:</b> Elastic Transcoder transcodes only the sidecar captions that
     * you specify in <code>CaptionSources</code>.</p> </li> </ul> <p>
     * <code>MergePolicy</code> cannot be null.</p>
     */
    inline InputCaptions& WithMergePolicy(Aws::String&& value) { SetMergePolicy(std::move(value)); return *this;}

    /**
     * <p>A policy that determines how Elastic Transcoder handles the existence of
     * multiple captions.</p> <ul> <li> <p> <b>MergeOverride:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the sidecar captions and ignores the embedded captions
     * for that language.</p> </li> <li> <p> <b>MergeRetain:</b> Elastic Transcoder
     * transcodes both embedded and sidecar captions into outputs. If captions for a
     * language are embedded in the input file and also appear in a sidecar file,
     * Elastic Transcoder uses the embedded captions and ignores the sidecar captions
     * for that language. If <code>CaptionSources</code> is empty, Elastic Transcoder
     * omits all sidecar captions from the output files.</p> </li> <li> <p>
     * <b>Override:</b> Elastic Transcoder transcodes only the sidecar captions that
     * you specify in <code>CaptionSources</code>.</p> </li> </ul> <p>
     * <code>MergePolicy</code> cannot be null.</p>
     */
    inline InputCaptions& WithMergePolicy(const char* value) { SetMergePolicy(value); return *this;}


    /**
     * <p>Source files for the input sidecar captions used during the transcoding
     * process. To omit all sidecar captions, leave <code>CaptionSources</code>
     * blank.</p>
     */
    inline const Aws::Vector<CaptionSource>& GetCaptionSources() const{ return m_captionSources; }

    /**
     * <p>Source files for the input sidecar captions used during the transcoding
     * process. To omit all sidecar captions, leave <code>CaptionSources</code>
     * blank.</p>
     */
    inline bool CaptionSourcesHasBeenSet() const { return m_captionSourcesHasBeenSet; }

    /**
     * <p>Source files for the input sidecar captions used during the transcoding
     * process. To omit all sidecar captions, leave <code>CaptionSources</code>
     * blank.</p>
     */
    inline void SetCaptionSources(const Aws::Vector<CaptionSource>& value) { m_captionSourcesHasBeenSet = true; m_captionSources = value; }

    /**
     * <p>Source files for the input sidecar captions used during the transcoding
     * process. To omit all sidecar captions, leave <code>CaptionSources</code>
     * blank.</p>
     */
    inline void SetCaptionSources(Aws::Vector<CaptionSource>&& value) { m_captionSourcesHasBeenSet = true; m_captionSources = std::move(value); }

    /**
     * <p>Source files for the input sidecar captions used during the transcoding
     * process. To omit all sidecar captions, leave <code>CaptionSources</code>
     * blank.</p>
     */
    inline InputCaptions& WithCaptionSources(const Aws::Vector<CaptionSource>& value) { SetCaptionSources(value); return *this;}

    /**
     * <p>Source files for the input sidecar captions used during the transcoding
     * process. To omit all sidecar captions, leave <code>CaptionSources</code>
     * blank.</p>
     */
    inline InputCaptions& WithCaptionSources(Aws::Vector<CaptionSource>&& value) { SetCaptionSources(std::move(value)); return *this;}

    /**
     * <p>Source files for the input sidecar captions used during the transcoding
     * process. To omit all sidecar captions, leave <code>CaptionSources</code>
     * blank.</p>
     */
    inline InputCaptions& AddCaptionSources(const CaptionSource& value) { m_captionSourcesHasBeenSet = true; m_captionSources.push_back(value); return *this; }

    /**
     * <p>Source files for the input sidecar captions used during the transcoding
     * process. To omit all sidecar captions, leave <code>CaptionSources</code>
     * blank.</p>
     */
    inline InputCaptions& AddCaptionSources(CaptionSource&& value) { m_captionSourcesHasBeenSet = true; m_captionSources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_mergePolicy;
    bool m_mergePolicyHasBeenSet;

    Aws::Vector<CaptionSource> m_captionSources;
    bool m_captionSourcesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
