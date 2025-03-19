/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Artwork
  {
  public:
    AWS_ELASTICTRANSCODER_API Artwork() = default;
    AWS_ELASTICTRANSCODER_API Artwork(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Artwork& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the file to be used as album art. To determine which Amazon S3
     * bucket contains the specified file, Elastic Transcoder checks the pipeline
     * specified by <code>PipelineId</code>; the <code>InputBucket</code> object in
     * that pipeline identifies the bucket.</p> <p>If the file name includes a prefix,
     * for example, <code>cooking/pie.jpg</code>, include the prefix in the key. If the
     * file isn't in the specified bucket, Elastic Transcoder returns an error.</p>
     */
    inline const Aws::String& GetInputKey() const { return m_inputKey; }
    inline bool InputKeyHasBeenSet() const { return m_inputKeyHasBeenSet; }
    template<typename InputKeyT = Aws::String>
    void SetInputKey(InputKeyT&& value) { m_inputKeyHasBeenSet = true; m_inputKey = std::forward<InputKeyT>(value); }
    template<typename InputKeyT = Aws::String>
    Artwork& WithInputKey(InputKeyT&& value) { SetInputKey(std::forward<InputKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum width of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 4096,
     * inclusive.</p>
     */
    inline const Aws::String& GetMaxWidth() const { return m_maxWidth; }
    inline bool MaxWidthHasBeenSet() const { return m_maxWidthHasBeenSet; }
    template<typename MaxWidthT = Aws::String>
    void SetMaxWidth(MaxWidthT&& value) { m_maxWidthHasBeenSet = true; m_maxWidth = std::forward<MaxWidthT>(value); }
    template<typename MaxWidthT = Aws::String>
    Artwork& WithMaxWidth(MaxWidthT&& value) { SetMaxWidth(std::forward<MaxWidthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum height of the output album art in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 600 as the default value. If you
     * specify a numeric value, enter an even integer between 32 and 3072,
     * inclusive.</p>
     */
    inline const Aws::String& GetMaxHeight() const { return m_maxHeight; }
    inline bool MaxHeightHasBeenSet() const { return m_maxHeightHasBeenSet; }
    template<typename MaxHeightT = Aws::String>
    void SetMaxHeight(MaxHeightT&& value) { m_maxHeightHasBeenSet = true; m_maxHeight = std::forward<MaxHeightT>(value); }
    template<typename MaxHeightT = Aws::String>
    Artwork& WithMaxHeight(MaxHeightT&& value) { SetMaxHeight(std::forward<MaxHeightT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetSizingPolicy() const { return m_sizingPolicy; }
    inline bool SizingPolicyHasBeenSet() const { return m_sizingPolicyHasBeenSet; }
    template<typename SizingPolicyT = Aws::String>
    void SetSizingPolicy(SizingPolicyT&& value) { m_sizingPolicyHasBeenSet = true; m_sizingPolicy = std::forward<SizingPolicyT>(value); }
    template<typename SizingPolicyT = Aws::String>
    Artwork& WithSizingPolicy(SizingPolicyT&& value) { SetSizingPolicy(std::forward<SizingPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you set <code>PaddingPolicy</code> to <code>Pad</code>, Elastic
     * Transcoder may add white bars to the top and bottom and/or left and right sides
     * of the output album art to make the total size of the output art match the
     * values that you specified for <code>MaxWidth</code> and
     * <code>MaxHeight</code>.</p>
     */
    inline const Aws::String& GetPaddingPolicy() const { return m_paddingPolicy; }
    inline bool PaddingPolicyHasBeenSet() const { return m_paddingPolicyHasBeenSet; }
    template<typename PaddingPolicyT = Aws::String>
    void SetPaddingPolicy(PaddingPolicyT&& value) { m_paddingPolicyHasBeenSet = true; m_paddingPolicy = std::forward<PaddingPolicyT>(value); }
    template<typename PaddingPolicyT = Aws::String>
    Artwork& WithPaddingPolicy(PaddingPolicyT&& value) { SetPaddingPolicy(std::forward<PaddingPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of album art, if any. Valid formats are <code>.jpg</code> and
     * <code>.png</code>.</p>
     */
    inline const Aws::String& GetAlbumArtFormat() const { return m_albumArtFormat; }
    inline bool AlbumArtFormatHasBeenSet() const { return m_albumArtFormatHasBeenSet; }
    template<typename AlbumArtFormatT = Aws::String>
    void SetAlbumArtFormat(AlbumArtFormatT&& value) { m_albumArtFormatHasBeenSet = true; m_albumArtFormat = std::forward<AlbumArtFormatT>(value); }
    template<typename AlbumArtFormatT = Aws::String>
    Artwork& WithAlbumArtFormat(AlbumArtFormatT&& value) { SetAlbumArtFormat(std::forward<AlbumArtFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your artwork.</p>
     */
    inline const Encryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = Encryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = Encryption>
    Artwork& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputKey;
    bool m_inputKeyHasBeenSet = false;

    Aws::String m_maxWidth;
    bool m_maxWidthHasBeenSet = false;

    Aws::String m_maxHeight;
    bool m_maxHeightHasBeenSet = false;

    Aws::String m_sizingPolicy;
    bool m_sizingPolicyHasBeenSet = false;

    Aws::String m_paddingPolicy;
    bool m_paddingPolicyHasBeenSet = false;

    Aws::String m_albumArtFormat;
    bool m_albumArtFormatHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
