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
  class AWS_ELASTICTRANSCODER_API AudioCodecOptions
  {
  public:
    AudioCodecOptions();
    AudioCodecOptions(Aws::Utils::Json::JsonView jsonValue);
    AudioCodecOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <code>Profile</code>.</p> <note> <p>If you created any presets before AAC
     * profiles were added, Elastic Transcoder automatically updated your presets to
     * use AAC-LC. You can change the value as required.</p> </note>
     */
    inline const Aws::String& GetProfile() const{ return m_profile; }

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
     * <code>Profile</code>.</p> <note> <p>If you created any presets before AAC
     * profiles were added, Elastic Transcoder automatically updated your presets to
     * use AAC-LC. You can change the value as required.</p> </note>
     */
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }

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
     * <code>Profile</code>.</p> <note> <p>If you created any presets before AAC
     * profiles were added, Elastic Transcoder automatically updated your presets to
     * use AAC-LC. You can change the value as required.</p> </note>
     */
    inline void SetProfile(const Aws::String& value) { m_profileHasBeenSet = true; m_profile = value; }

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
     * <code>Profile</code>.</p> <note> <p>If you created any presets before AAC
     * profiles were added, Elastic Transcoder automatically updated your presets to
     * use AAC-LC. You can change the value as required.</p> </note>
     */
    inline void SetProfile(Aws::String&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }

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
     * <code>Profile</code>.</p> <note> <p>If you created any presets before AAC
     * profiles were added, Elastic Transcoder automatically updated your presets to
     * use AAC-LC. You can change the value as required.</p> </note>
     */
    inline void SetProfile(const char* value) { m_profileHasBeenSet = true; m_profile.assign(value); }

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
     * <code>Profile</code>.</p> <note> <p>If you created any presets before AAC
     * profiles were added, Elastic Transcoder automatically updated your presets to
     * use AAC-LC. You can change the value as required.</p> </note>
     */
    inline AudioCodecOptions& WithProfile(const Aws::String& value) { SetProfile(value); return *this;}

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
     * <code>Profile</code>.</p> <note> <p>If you created any presets before AAC
     * profiles were added, Elastic Transcoder automatically updated your presets to
     * use AAC-LC. You can change the value as required.</p> </note>
     */
    inline AudioCodecOptions& WithProfile(Aws::String&& value) { SetProfile(std::move(value)); return *this;}

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
     * <code>Profile</code>.</p> <note> <p>If you created any presets before AAC
     * profiles were added, Elastic Transcoder automatically updated your presets to
     * use AAC-LC. You can change the value as required.</p> </note>
     */
    inline AudioCodecOptions& WithProfile(const char* value) { SetProfile(value); return *this;}


    /**
     * <p>You can only choose an audio bit depth when you specify <code>flac</code> or
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>The bit depth of a sample
     * is how many bits of information are included in the audio samples. The higher
     * the bit depth, the better the audio, but the larger the file.</p> <p>Valid
     * values are <code>16</code> and <code>24</code>.</p> <p>The most common bit depth
     * is <code>24</code>.</p>
     */
    inline const Aws::String& GetBitDepth() const{ return m_bitDepth; }

    /**
     * <p>You can only choose an audio bit depth when you specify <code>flac</code> or
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>The bit depth of a sample
     * is how many bits of information are included in the audio samples. The higher
     * the bit depth, the better the audio, but the larger the file.</p> <p>Valid
     * values are <code>16</code> and <code>24</code>.</p> <p>The most common bit depth
     * is <code>24</code>.</p>
     */
    inline bool BitDepthHasBeenSet() const { return m_bitDepthHasBeenSet; }

    /**
     * <p>You can only choose an audio bit depth when you specify <code>flac</code> or
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>The bit depth of a sample
     * is how many bits of information are included in the audio samples. The higher
     * the bit depth, the better the audio, but the larger the file.</p> <p>Valid
     * values are <code>16</code> and <code>24</code>.</p> <p>The most common bit depth
     * is <code>24</code>.</p>
     */
    inline void SetBitDepth(const Aws::String& value) { m_bitDepthHasBeenSet = true; m_bitDepth = value; }

    /**
     * <p>You can only choose an audio bit depth when you specify <code>flac</code> or
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>The bit depth of a sample
     * is how many bits of information are included in the audio samples. The higher
     * the bit depth, the better the audio, but the larger the file.</p> <p>Valid
     * values are <code>16</code> and <code>24</code>.</p> <p>The most common bit depth
     * is <code>24</code>.</p>
     */
    inline void SetBitDepth(Aws::String&& value) { m_bitDepthHasBeenSet = true; m_bitDepth = std::move(value); }

    /**
     * <p>You can only choose an audio bit depth when you specify <code>flac</code> or
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>The bit depth of a sample
     * is how many bits of information are included in the audio samples. The higher
     * the bit depth, the better the audio, but the larger the file.</p> <p>Valid
     * values are <code>16</code> and <code>24</code>.</p> <p>The most common bit depth
     * is <code>24</code>.</p>
     */
    inline void SetBitDepth(const char* value) { m_bitDepthHasBeenSet = true; m_bitDepth.assign(value); }

    /**
     * <p>You can only choose an audio bit depth when you specify <code>flac</code> or
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>The bit depth of a sample
     * is how many bits of information are included in the audio samples. The higher
     * the bit depth, the better the audio, but the larger the file.</p> <p>Valid
     * values are <code>16</code> and <code>24</code>.</p> <p>The most common bit depth
     * is <code>24</code>.</p>
     */
    inline AudioCodecOptions& WithBitDepth(const Aws::String& value) { SetBitDepth(value); return *this;}

    /**
     * <p>You can only choose an audio bit depth when you specify <code>flac</code> or
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>The bit depth of a sample
     * is how many bits of information are included in the audio samples. The higher
     * the bit depth, the better the audio, but the larger the file.</p> <p>Valid
     * values are <code>16</code> and <code>24</code>.</p> <p>The most common bit depth
     * is <code>24</code>.</p>
     */
    inline AudioCodecOptions& WithBitDepth(Aws::String&& value) { SetBitDepth(std::move(value)); return *this;}

    /**
     * <p>You can only choose an audio bit depth when you specify <code>flac</code> or
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>The bit depth of a sample
     * is how many bits of information are included in the audio samples. The higher
     * the bit depth, the better the audio, but the larger the file.</p> <p>Valid
     * values are <code>16</code> and <code>24</code>.</p> <p>The most common bit depth
     * is <code>24</code>.</p>
     */
    inline AudioCodecOptions& WithBitDepth(const char* value) { SetBitDepth(value); return *this;}


    /**
     * <p>You can only choose an audio bit order when you specify <code>pcm</code> for
     * the value of Audio:Codec.</p> <p>The order the bits of a PCM sample are stored
     * in.</p> <p>The supported value is <code>LittleEndian</code>.</p>
     */
    inline const Aws::String& GetBitOrder() const{ return m_bitOrder; }

    /**
     * <p>You can only choose an audio bit order when you specify <code>pcm</code> for
     * the value of Audio:Codec.</p> <p>The order the bits of a PCM sample are stored
     * in.</p> <p>The supported value is <code>LittleEndian</code>.</p>
     */
    inline bool BitOrderHasBeenSet() const { return m_bitOrderHasBeenSet; }

    /**
     * <p>You can only choose an audio bit order when you specify <code>pcm</code> for
     * the value of Audio:Codec.</p> <p>The order the bits of a PCM sample are stored
     * in.</p> <p>The supported value is <code>LittleEndian</code>.</p>
     */
    inline void SetBitOrder(const Aws::String& value) { m_bitOrderHasBeenSet = true; m_bitOrder = value; }

    /**
     * <p>You can only choose an audio bit order when you specify <code>pcm</code> for
     * the value of Audio:Codec.</p> <p>The order the bits of a PCM sample are stored
     * in.</p> <p>The supported value is <code>LittleEndian</code>.</p>
     */
    inline void SetBitOrder(Aws::String&& value) { m_bitOrderHasBeenSet = true; m_bitOrder = std::move(value); }

    /**
     * <p>You can only choose an audio bit order when you specify <code>pcm</code> for
     * the value of Audio:Codec.</p> <p>The order the bits of a PCM sample are stored
     * in.</p> <p>The supported value is <code>LittleEndian</code>.</p>
     */
    inline void SetBitOrder(const char* value) { m_bitOrderHasBeenSet = true; m_bitOrder.assign(value); }

    /**
     * <p>You can only choose an audio bit order when you specify <code>pcm</code> for
     * the value of Audio:Codec.</p> <p>The order the bits of a PCM sample are stored
     * in.</p> <p>The supported value is <code>LittleEndian</code>.</p>
     */
    inline AudioCodecOptions& WithBitOrder(const Aws::String& value) { SetBitOrder(value); return *this;}

    /**
     * <p>You can only choose an audio bit order when you specify <code>pcm</code> for
     * the value of Audio:Codec.</p> <p>The order the bits of a PCM sample are stored
     * in.</p> <p>The supported value is <code>LittleEndian</code>.</p>
     */
    inline AudioCodecOptions& WithBitOrder(Aws::String&& value) { SetBitOrder(std::move(value)); return *this;}

    /**
     * <p>You can only choose an audio bit order when you specify <code>pcm</code> for
     * the value of Audio:Codec.</p> <p>The order the bits of a PCM sample are stored
     * in.</p> <p>The supported value is <code>LittleEndian</code>.</p>
     */
    inline AudioCodecOptions& WithBitOrder(const char* value) { SetBitOrder(value); return *this;}


    /**
     * <p>You can only choose whether an audio sample is signed when you specify
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>Whether audio samples are
     * represented with negative and positive numbers (signed) or only positive numbers
     * (unsigned).</p> <p>The supported value is <code>Signed</code>.</p>
     */
    inline const Aws::String& GetSigned() const{ return m_signed; }

    /**
     * <p>You can only choose whether an audio sample is signed when you specify
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>Whether audio samples are
     * represented with negative and positive numbers (signed) or only positive numbers
     * (unsigned).</p> <p>The supported value is <code>Signed</code>.</p>
     */
    inline bool SignedHasBeenSet() const { return m_signedHasBeenSet; }

    /**
     * <p>You can only choose whether an audio sample is signed when you specify
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>Whether audio samples are
     * represented with negative and positive numbers (signed) or only positive numbers
     * (unsigned).</p> <p>The supported value is <code>Signed</code>.</p>
     */
    inline void SetSigned(const Aws::String& value) { m_signedHasBeenSet = true; m_signed = value; }

    /**
     * <p>You can only choose whether an audio sample is signed when you specify
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>Whether audio samples are
     * represented with negative and positive numbers (signed) or only positive numbers
     * (unsigned).</p> <p>The supported value is <code>Signed</code>.</p>
     */
    inline void SetSigned(Aws::String&& value) { m_signedHasBeenSet = true; m_signed = std::move(value); }

    /**
     * <p>You can only choose whether an audio sample is signed when you specify
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>Whether audio samples are
     * represented with negative and positive numbers (signed) or only positive numbers
     * (unsigned).</p> <p>The supported value is <code>Signed</code>.</p>
     */
    inline void SetSigned(const char* value) { m_signedHasBeenSet = true; m_signed.assign(value); }

    /**
     * <p>You can only choose whether an audio sample is signed when you specify
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>Whether audio samples are
     * represented with negative and positive numbers (signed) or only positive numbers
     * (unsigned).</p> <p>The supported value is <code>Signed</code>.</p>
     */
    inline AudioCodecOptions& WithSigned(const Aws::String& value) { SetSigned(value); return *this;}

    /**
     * <p>You can only choose whether an audio sample is signed when you specify
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>Whether audio samples are
     * represented with negative and positive numbers (signed) or only positive numbers
     * (unsigned).</p> <p>The supported value is <code>Signed</code>.</p>
     */
    inline AudioCodecOptions& WithSigned(Aws::String&& value) { SetSigned(std::move(value)); return *this;}

    /**
     * <p>You can only choose whether an audio sample is signed when you specify
     * <code>pcm</code> for the value of Audio:Codec.</p> <p>Whether audio samples are
     * represented with negative and positive numbers (signed) or only positive numbers
     * (unsigned).</p> <p>The supported value is <code>Signed</code>.</p>
     */
    inline AudioCodecOptions& WithSigned(const char* value) { SetSigned(value); return *this;}

  private:

    Aws::String m_profile;
    bool m_profileHasBeenSet;

    Aws::String m_bitDepth;
    bool m_bitDepthHasBeenSet;

    Aws::String m_bitOrder;
    bool m_bitOrderHasBeenSet;

    Aws::String m_signed;
    bool m_signedHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
