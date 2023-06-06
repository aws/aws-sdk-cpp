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
    AWS_LEXMODELSV2_API UtteranceAudioInputSpecification();
    AWS_LEXMODELSV2_API UtteranceAudioInputSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UtteranceAudioInputSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon S3 file pointing to the audio.</p>
     */
    inline const Aws::String& GetAudioFileS3Location() const{ return m_audioFileS3Location; }

    /**
     * <p>Amazon S3 file pointing to the audio.</p>
     */
    inline bool AudioFileS3LocationHasBeenSet() const { return m_audioFileS3LocationHasBeenSet; }

    /**
     * <p>Amazon S3 file pointing to the audio.</p>
     */
    inline void SetAudioFileS3Location(const Aws::String& value) { m_audioFileS3LocationHasBeenSet = true; m_audioFileS3Location = value; }

    /**
     * <p>Amazon S3 file pointing to the audio.</p>
     */
    inline void SetAudioFileS3Location(Aws::String&& value) { m_audioFileS3LocationHasBeenSet = true; m_audioFileS3Location = std::move(value); }

    /**
     * <p>Amazon S3 file pointing to the audio.</p>
     */
    inline void SetAudioFileS3Location(const char* value) { m_audioFileS3LocationHasBeenSet = true; m_audioFileS3Location.assign(value); }

    /**
     * <p>Amazon S3 file pointing to the audio.</p>
     */
    inline UtteranceAudioInputSpecification& WithAudioFileS3Location(const Aws::String& value) { SetAudioFileS3Location(value); return *this;}

    /**
     * <p>Amazon S3 file pointing to the audio.</p>
     */
    inline UtteranceAudioInputSpecification& WithAudioFileS3Location(Aws::String&& value) { SetAudioFileS3Location(std::move(value)); return *this;}

    /**
     * <p>Amazon S3 file pointing to the audio.</p>
     */
    inline UtteranceAudioInputSpecification& WithAudioFileS3Location(const char* value) { SetAudioFileS3Location(value); return *this;}

  private:

    Aws::String m_audioFileS3Location;
    bool m_audioFileS3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
