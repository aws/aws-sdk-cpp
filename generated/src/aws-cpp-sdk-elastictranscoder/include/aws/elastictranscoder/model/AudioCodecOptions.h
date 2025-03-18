/**
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
   * <p>Options associated with your audio codec.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/AudioCodecOptions">AWS
   * API Reference</a></p>
   */
  class AudioCodecOptions
  {
  public:
    AWS_ELASTICTRANSCODER_API AudioCodecOptions() = default;
    AWS_ELASTICTRANSCODER_API AudioCodecOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API AudioCodecOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>You can only choose an audio profile when you specify AAC for the value of
     * Audio:Codec.</p> <p>Specify the AAC profile for the output file. Elastic
     * Transcoder supports the following profiles:</p> <ul> <li> <p> <code>auto</code>:
     * If you specify <code>auto</code>, Elastic Transcoder selects the profile based
     * on the bit rate selected for the output file.</p> </li> <li> <p>
     * <code>AAC-LC</code>: The most common AAC profile. Use for bit rates larger than
     * 64 kbps.</p> </li> <li> <p> <code>HE-AAC</code>: Not supported on some older
     * players and devices. Use for bit rates between 40 and 80 kbps.</p> </li> <li>
     * <p> <code>HE-AACv2</code>: Not supported on some players and devices. Use for
     * bit rates less than 48 kbps.</p> </li> </ul> <p>All outputs in a
     * <code>Smooth</code> playlist must have the same value for
     * <code>Profile</code>.</p>  <p>If you created any presets before AAC
     * profiles were added, Elastic Transcoder automatically updated your presets to
     * use AAC-LC. You can change the value as required.</p> 
     */
    inline const Aws::String& GetProfile() const { return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    template<typename ProfileT = Aws::String>
    void SetProfile(ProfileT&& value) { m_profileHasBeenSet = true; m_profile = std::forward<ProfileT>(value); }
    template<typename ProfileT = Aws::String>
    AudioCodecOptions& WithProfile(ProfileT&& value) { SetProfile(std::forward<ProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can only choose an audio bit depth when you specify <code>flac</code> or
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>The bit depth of a sample
     * is how many bits of information are included in the audio samples. The higher
     * the bit depth, the better the audio, but the larger the file.</p> <p>Valid
     * values are <code>16</code> and <code>24</code>.</p> <p>The most common bit depth
     * is <code>24</code>.</p>
     */
    inline const Aws::String& GetBitDepth() const { return m_bitDepth; }
    inline bool BitDepthHasBeenSet() const { return m_bitDepthHasBeenSet; }
    template<typename BitDepthT = Aws::String>
    void SetBitDepth(BitDepthT&& value) { m_bitDepthHasBeenSet = true; m_bitDepth = std::forward<BitDepthT>(value); }
    template<typename BitDepthT = Aws::String>
    AudioCodecOptions& WithBitDepth(BitDepthT&& value) { SetBitDepth(std::forward<BitDepthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can only choose an audio bit order when you specify <code>pcm</code> for
     * the value of Audio:Codec.</p> <p>The order the bits of a PCM sample are stored
     * in.</p> <p>The supported value is <code>LittleEndian</code>.</p>
     */
    inline const Aws::String& GetBitOrder() const { return m_bitOrder; }
    inline bool BitOrderHasBeenSet() const { return m_bitOrderHasBeenSet; }
    template<typename BitOrderT = Aws::String>
    void SetBitOrder(BitOrderT&& value) { m_bitOrderHasBeenSet = true; m_bitOrder = std::forward<BitOrderT>(value); }
    template<typename BitOrderT = Aws::String>
    AudioCodecOptions& WithBitOrder(BitOrderT&& value) { SetBitOrder(std::forward<BitOrderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can only choose whether an audio sample is signed when you specify
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>Whether audio samples are
     * represented with negative and positive numbers (signed) or only positive numbers
     * (unsigned).</p> <p>The supported value is <code>Signed</code>.</p>
     */
    inline const Aws::String& GetSigned() const { return m_signed; }
    inline bool SignedHasBeenSet() const { return m_signedHasBeenSet; }
    template<typename SignedT = Aws::String>
    void SetSigned(SignedT&& value) { m_signedHasBeenSet = true; m_signed = std::forward<SignedT>(value); }
    template<typename SignedT = Aws::String>
    AudioCodecOptions& WithSigned(SignedT&& value) { SetSigned(std::forward<SignedT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profile;
    bool m_profileHasBeenSet = false;

    Aws::String m_bitDepth;
    bool m_bitDepthHasBeenSet = false;

    Aws::String m_bitOrder;
    bool m_bitOrderHasBeenSet = false;

    Aws::String m_signed;
    bool m_signedHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
