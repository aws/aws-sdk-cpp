/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InputCaptions
  {
  public:
    AWS_ELASTICTRANSCODER_API InputCaptions() = default;
    AWS_ELASTICTRANSCODER_API InputCaptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API InputCaptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline const Aws::String& GetMergePolicy() const { return m_mergePolicy; }
    inline bool MergePolicyHasBeenSet() const { return m_mergePolicyHasBeenSet; }
    template<typename MergePolicyT = Aws::String>
    void SetMergePolicy(MergePolicyT&& value) { m_mergePolicyHasBeenSet = true; m_mergePolicy = std::forward<MergePolicyT>(value); }
    template<typename MergePolicyT = Aws::String>
    InputCaptions& WithMergePolicy(MergePolicyT&& value) { SetMergePolicy(std::forward<MergePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source files for the input sidecar captions used during the transcoding
     * process. To omit all sidecar captions, leave <code>CaptionSources</code>
     * blank.</p>
     */
    inline const Aws::Vector<CaptionSource>& GetCaptionSources() const { return m_captionSources; }
    inline bool CaptionSourcesHasBeenSet() const { return m_captionSourcesHasBeenSet; }
    template<typename CaptionSourcesT = Aws::Vector<CaptionSource>>
    void SetCaptionSources(CaptionSourcesT&& value) { m_captionSourcesHasBeenSet = true; m_captionSources = std::forward<CaptionSourcesT>(value); }
    template<typename CaptionSourcesT = Aws::Vector<CaptionSource>>
    InputCaptions& WithCaptionSources(CaptionSourcesT&& value) { SetCaptionSources(std::forward<CaptionSourcesT>(value)); return *this;}
    template<typename CaptionSourcesT = CaptionSource>
    InputCaptions& AddCaptionSources(CaptionSourcesT&& value) { m_captionSourcesHasBeenSet = true; m_captionSources.emplace_back(std::forward<CaptionSourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_mergePolicy;
    bool m_mergePolicyHasBeenSet = false;

    Aws::Vector<CaptionSource> m_captionSources;
    bool m_captionSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
