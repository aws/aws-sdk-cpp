/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains information about the audio for an utterance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UtteranceAudioInputSpecification">AWS
   * API Reference</a></p>
   */
  class UtteranceAudioInputSpecification
  {
  public:
    AWS_LEXMODELSV2_API UtteranceAudioInputSpecification() = default;
    AWS_LEXMODELSV2_API UtteranceAudioInputSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UtteranceAudioInputSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon S3 file pointing to the audio.</p>
     */
    inline const Aws::String& GetAudioFileS3Location() const { return m_audioFileS3Location; }
    inline bool AudioFileS3LocationHasBeenSet() const { return m_audioFileS3LocationHasBeenSet; }
    template<typename AudioFileS3LocationT = Aws::String>
    void SetAudioFileS3Location(AudioFileS3LocationT&& value) { m_audioFileS3LocationHasBeenSet = true; m_audioFileS3Location = std::forward<AudioFileS3LocationT>(value); }
    template<typename AudioFileS3LocationT = Aws::String>
    UtteranceAudioInputSpecification& WithAudioFileS3Location(AudioFileS3LocationT&& value) { SetAudioFileS3Location(std::forward<AudioFileS3LocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_audioFileS3Location;
    bool m_audioFileS3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
