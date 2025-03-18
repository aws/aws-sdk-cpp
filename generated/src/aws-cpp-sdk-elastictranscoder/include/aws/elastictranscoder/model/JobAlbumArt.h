/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastictranscoder/model/Artwork.h>
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
   * <p>The .jpg or .png file associated with an audio file.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/JobAlbumArt">AWS
   * API Reference</a></p>
   */
  class JobAlbumArt
  {
  public:
    AWS_ELASTICTRANSCODER_API JobAlbumArt() = default;
    AWS_ELASTICTRANSCODER_API JobAlbumArt(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API JobAlbumArt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A policy that determines how Elastic Transcoder handles the existence of
     * multiple album artwork files.</p> <ul> <li> <p> <code>Replace:</code> The
     * specified album art replaces any existing album art.</p> </li> <li> <p>
     * <code>Prepend:</code> The specified album art is placed in front of any existing
     * album art.</p> </li> <li> <p> <code>Append:</code> The specified album art is
     * placed after any existing album art.</p> </li> <li> <p> <code>Fallback:</code>
     * If the original input file contains artwork, Elastic Transcoder uses that
     * artwork for the output. If the original input does not contain artwork, Elastic
     * Transcoder uses the specified album art file.</p> </li> </ul>
     */
    inline const Aws::String& GetMergePolicy() const { return m_mergePolicy; }
    inline bool MergePolicyHasBeenSet() const { return m_mergePolicyHasBeenSet; }
    template<typename MergePolicyT = Aws::String>
    void SetMergePolicy(MergePolicyT&& value) { m_mergePolicyHasBeenSet = true; m_mergePolicy = std::forward<MergePolicyT>(value); }
    template<typename MergePolicyT = Aws::String>
    JobAlbumArt& WithMergePolicy(MergePolicyT&& value) { SetMergePolicy(std::forward<MergePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code> </p>
     */
    inline const Aws::Vector<Artwork>& GetArtwork() const { return m_artwork; }
    inline bool ArtworkHasBeenSet() const { return m_artworkHasBeenSet; }
    template<typename ArtworkT = Aws::Vector<Artwork>>
    void SetArtwork(ArtworkT&& value) { m_artworkHasBeenSet = true; m_artwork = std::forward<ArtworkT>(value); }
    template<typename ArtworkT = Aws::Vector<Artwork>>
    JobAlbumArt& WithArtwork(ArtworkT&& value) { SetArtwork(std::forward<ArtworkT>(value)); return *this;}
    template<typename ArtworkT = Artwork>
    JobAlbumArt& AddArtwork(ArtworkT&& value) { m_artworkHasBeenSet = true; m_artwork.emplace_back(std::forward<ArtworkT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_mergePolicy;
    bool m_mergePolicyHasBeenSet = false;

    Aws::Vector<Artwork> m_artwork;
    bool m_artworkHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
