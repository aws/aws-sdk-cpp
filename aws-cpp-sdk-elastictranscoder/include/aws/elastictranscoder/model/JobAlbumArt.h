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
  class AWS_ELASTICTRANSCODER_API JobAlbumArt
  {
  public:
    JobAlbumArt();
    JobAlbumArt(Aws::Utils::Json::JsonView jsonValue);
    JobAlbumArt& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const Aws::String& GetMergePolicy() const{ return m_mergePolicy; }

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
    inline bool MergePolicyHasBeenSet() const { return m_mergePolicyHasBeenSet; }

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
    inline void SetMergePolicy(const Aws::String& value) { m_mergePolicyHasBeenSet = true; m_mergePolicy = value; }

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
    inline void SetMergePolicy(Aws::String&& value) { m_mergePolicyHasBeenSet = true; m_mergePolicy = std::move(value); }

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
    inline void SetMergePolicy(const char* value) { m_mergePolicyHasBeenSet = true; m_mergePolicy.assign(value); }

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
    inline JobAlbumArt& WithMergePolicy(const Aws::String& value) { SetMergePolicy(value); return *this;}

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
    inline JobAlbumArt& WithMergePolicy(Aws::String&& value) { SetMergePolicy(std::move(value)); return *this;}

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
    inline JobAlbumArt& WithMergePolicy(const char* value) { SetMergePolicy(value); return *this;}


    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code> </p>
     */
    inline const Aws::Vector<Artwork>& GetArtwork() const{ return m_artwork; }

    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code> </p>
     */
    inline bool ArtworkHasBeenSet() const { return m_artworkHasBeenSet; }

    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code> </p>
     */
    inline void SetArtwork(const Aws::Vector<Artwork>& value) { m_artworkHasBeenSet = true; m_artwork = value; }

    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code> </p>
     */
    inline void SetArtwork(Aws::Vector<Artwork>&& value) { m_artworkHasBeenSet = true; m_artwork = std::move(value); }

    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code> </p>
     */
    inline JobAlbumArt& WithArtwork(const Aws::Vector<Artwork>& value) { SetArtwork(value); return *this;}

    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code> </p>
     */
    inline JobAlbumArt& WithArtwork(Aws::Vector<Artwork>&& value) { SetArtwork(std::move(value)); return *this;}

    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code> </p>
     */
    inline JobAlbumArt& AddArtwork(const Artwork& value) { m_artworkHasBeenSet = true; m_artwork.push_back(value); return *this; }

    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code> </p>
     */
    inline JobAlbumArt& AddArtwork(Artwork&& value) { m_artworkHasBeenSet = true; m_artwork.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_mergePolicy;
    bool m_mergePolicyHasBeenSet;

    Aws::Vector<Artwork> m_artwork;
    bool m_artworkHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
