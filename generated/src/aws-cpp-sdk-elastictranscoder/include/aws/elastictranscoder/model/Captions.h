/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastictranscoder/model/CaptionFormat.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/Captions">AWS
   * API Reference</a></p>
   */
  class Captions
  {
  public:
    AWS_ELASTICTRANSCODER_API Captions() = default;
    AWS_ELASTICTRANSCODER_API Captions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Captions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The array of file formats for the output captions. If you leave this value
     * blank, Elastic Transcoder returns an error.</p>
     */
    inline const Aws::Vector<CaptionFormat>& GetCaptionFormats() const { return m_captionFormats; }
    inline bool CaptionFormatsHasBeenSet() const { return m_captionFormatsHasBeenSet; }
    template<typename CaptionFormatsT = Aws::Vector<CaptionFormat>>
    void SetCaptionFormats(CaptionFormatsT&& value) { m_captionFormatsHasBeenSet = true; m_captionFormats = std::forward<CaptionFormatsT>(value); }
    template<typename CaptionFormatsT = Aws::Vector<CaptionFormat>>
    Captions& WithCaptionFormats(CaptionFormatsT&& value) { SetCaptionFormats(std::forward<CaptionFormatsT>(value)); return *this;}
    template<typename CaptionFormatsT = CaptionFormat>
    Captions& AddCaptionFormats(CaptionFormatsT&& value) { m_captionFormatsHasBeenSet = true; m_captionFormats.emplace_back(std::forward<CaptionFormatsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CaptionFormat> m_captionFormats;
    bool m_captionFormatsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
