/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The .jpg or .png file associated with an audio file.</p>
   */
  class AWS_ELASTICTRANSCODER_API JobAlbumArt
  {
  public:
    JobAlbumArt();
    JobAlbumArt(const Aws::Utils::Json::JsonValue& jsonValue);
    JobAlbumArt& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A policy that determines how Elastic Transcoder will handle the existence of
     * multiple album artwork files.</p> <p> <ul> <li><code>Replace:</code> The
     * specified album art will replace any existing album art.</li>
     * <li><code>Prepend:</code> The specified album art will be placed in front of any
     * existing album art.</li> <li><code>Append:</code> The specified album art will
     * be placed after any existing album art.</li> <li><code>Fallback:</code> If the
     * original input file contains artwork, Elastic Transcoder will use that artwork
     * for the output. If the original input does not contain artwork, Elastic
     * Transcoder will use the specified album art file.</li> </ul> </p>
     */
    inline const Aws::String& GetMergePolicy() const{ return m_mergePolicy; }

    /**
     * <p>A policy that determines how Elastic Transcoder will handle the existence of
     * multiple album artwork files.</p> <p> <ul> <li><code>Replace:</code> The
     * specified album art will replace any existing album art.</li>
     * <li><code>Prepend:</code> The specified album art will be placed in front of any
     * existing album art.</li> <li><code>Append:</code> The specified album art will
     * be placed after any existing album art.</li> <li><code>Fallback:</code> If the
     * original input file contains artwork, Elastic Transcoder will use that artwork
     * for the output. If the original input does not contain artwork, Elastic
     * Transcoder will use the specified album art file.</li> </ul> </p>
     */
    inline void SetMergePolicy(const Aws::String& value) { m_mergePolicyHasBeenSet = true; m_mergePolicy = value; }

    /**
     * <p>A policy that determines how Elastic Transcoder will handle the existence of
     * multiple album artwork files.</p> <p> <ul> <li><code>Replace:</code> The
     * specified album art will replace any existing album art.</li>
     * <li><code>Prepend:</code> The specified album art will be placed in front of any
     * existing album art.</li> <li><code>Append:</code> The specified album art will
     * be placed after any existing album art.</li> <li><code>Fallback:</code> If the
     * original input file contains artwork, Elastic Transcoder will use that artwork
     * for the output. If the original input does not contain artwork, Elastic
     * Transcoder will use the specified album art file.</li> </ul> </p>
     */
    inline void SetMergePolicy(Aws::String&& value) { m_mergePolicyHasBeenSet = true; m_mergePolicy = value; }

    /**
     * <p>A policy that determines how Elastic Transcoder will handle the existence of
     * multiple album artwork files.</p> <p> <ul> <li><code>Replace:</code> The
     * specified album art will replace any existing album art.</li>
     * <li><code>Prepend:</code> The specified album art will be placed in front of any
     * existing album art.</li> <li><code>Append:</code> The specified album art will
     * be placed after any existing album art.</li> <li><code>Fallback:</code> If the
     * original input file contains artwork, Elastic Transcoder will use that artwork
     * for the output. If the original input does not contain artwork, Elastic
     * Transcoder will use the specified album art file.</li> </ul> </p>
     */
    inline void SetMergePolicy(const char* value) { m_mergePolicyHasBeenSet = true; m_mergePolicy.assign(value); }

    /**
     * <p>A policy that determines how Elastic Transcoder will handle the existence of
     * multiple album artwork files.</p> <p> <ul> <li><code>Replace:</code> The
     * specified album art will replace any existing album art.</li>
     * <li><code>Prepend:</code> The specified album art will be placed in front of any
     * existing album art.</li> <li><code>Append:</code> The specified album art will
     * be placed after any existing album art.</li> <li><code>Fallback:</code> If the
     * original input file contains artwork, Elastic Transcoder will use that artwork
     * for the output. If the original input does not contain artwork, Elastic
     * Transcoder will use the specified album art file.</li> </ul> </p>
     */
    inline JobAlbumArt& WithMergePolicy(const Aws::String& value) { SetMergePolicy(value); return *this;}

    /**
     * <p>A policy that determines how Elastic Transcoder will handle the existence of
     * multiple album artwork files.</p> <p> <ul> <li><code>Replace:</code> The
     * specified album art will replace any existing album art.</li>
     * <li><code>Prepend:</code> The specified album art will be placed in front of any
     * existing album art.</li> <li><code>Append:</code> The specified album art will
     * be placed after any existing album art.</li> <li><code>Fallback:</code> If the
     * original input file contains artwork, Elastic Transcoder will use that artwork
     * for the output. If the original input does not contain artwork, Elastic
     * Transcoder will use the specified album art file.</li> </ul> </p>
     */
    inline JobAlbumArt& WithMergePolicy(Aws::String&& value) { SetMergePolicy(value); return *this;}

    /**
     * <p>A policy that determines how Elastic Transcoder will handle the existence of
     * multiple album artwork files.</p> <p> <ul> <li><code>Replace:</code> The
     * specified album art will replace any existing album art.</li>
     * <li><code>Prepend:</code> The specified album art will be placed in front of any
     * existing album art.</li> <li><code>Append:</code> The specified album art will
     * be placed after any existing album art.</li> <li><code>Fallback:</code> If the
     * original input file contains artwork, Elastic Transcoder will use that artwork
     * for the output. If the original input does not contain artwork, Elastic
     * Transcoder will use the specified album art file.</li> </ul> </p>
     */
    inline JobAlbumArt& WithMergePolicy(const char* value) { SetMergePolicy(value); return *this;}

    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code></p>
     */
    inline const Aws::Vector<Artwork>& GetArtwork() const{ return m_artwork; }

    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code></p>
     */
    inline void SetArtwork(const Aws::Vector<Artwork>& value) { m_artworkHasBeenSet = true; m_artwork = value; }

    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code></p>
     */
    inline void SetArtwork(Aws::Vector<Artwork>&& value) { m_artworkHasBeenSet = true; m_artwork = value; }

    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code></p>
     */
    inline JobAlbumArt& WithArtwork(const Aws::Vector<Artwork>& value) { SetArtwork(value); return *this;}

    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code></p>
     */
    inline JobAlbumArt& WithArtwork(Aws::Vector<Artwork>&& value) { SetArtwork(value); return *this;}

    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code></p>
     */
    inline JobAlbumArt& AddArtwork(const Artwork& value) { m_artworkHasBeenSet = true; m_artwork.push_back(value); return *this; }

    /**
     * <p>The file to be used as album art. There can be multiple artworks associated
     * with an audio file, to a maximum of 20. Valid formats are <code>.jpg</code> and
     * <code>.png</code></p>
     */
    inline JobAlbumArt& AddArtwork(Artwork&& value) { m_artworkHasBeenSet = true; m_artwork.push_back(value); return *this; }

  private:
    Aws::String m_mergePolicy;
    bool m_mergePolicyHasBeenSet;
    Aws::Vector<Artwork> m_artwork;
    bool m_artworkHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
