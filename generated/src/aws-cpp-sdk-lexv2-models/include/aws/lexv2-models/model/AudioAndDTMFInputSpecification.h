/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AudioSpecification.h>
#include <aws/lexv2-models/model/DTMFSpecification.h>
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
   * <p>Specifies the audio and DTMF input specification.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AudioAndDTMFInputSpecification">AWS
   * API Reference</a></p>
   */
  class AudioAndDTMFInputSpecification
  {
  public:
    AWS_LEXMODELSV2_API AudioAndDTMFInputSpecification();
    AWS_LEXMODELSV2_API AudioAndDTMFInputSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AudioAndDTMFInputSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Time for which a bot waits before assuming that the customer isn't going to
     * speak or press a key. This timeout is shared between Audio and DTMF inputs.</p>
     */
    inline int GetStartTimeoutMs() const{ return m_startTimeoutMs; }
    inline bool StartTimeoutMsHasBeenSet() const { return m_startTimeoutMsHasBeenSet; }
    inline void SetStartTimeoutMs(int value) { m_startTimeoutMsHasBeenSet = true; m_startTimeoutMs = value; }
    inline AudioAndDTMFInputSpecification& WithStartTimeoutMs(int value) { SetStartTimeoutMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the settings on audio input.</p>
     */
    inline const AudioSpecification& GetAudioSpecification() const{ return m_audioSpecification; }
    inline bool AudioSpecificationHasBeenSet() const { return m_audioSpecificationHasBeenSet; }
    inline void SetAudioSpecification(const AudioSpecification& value) { m_audioSpecificationHasBeenSet = true; m_audioSpecification = value; }
    inline void SetAudioSpecification(AudioSpecification&& value) { m_audioSpecificationHasBeenSet = true; m_audioSpecification = std::move(value); }
    inline AudioAndDTMFInputSpecification& WithAudioSpecification(const AudioSpecification& value) { SetAudioSpecification(value); return *this;}
    inline AudioAndDTMFInputSpecification& WithAudioSpecification(AudioSpecification&& value) { SetAudioSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the settings on DTMF input.</p>
     */
    inline const DTMFSpecification& GetDtmfSpecification() const{ return m_dtmfSpecification; }
    inline bool DtmfSpecificationHasBeenSet() const { return m_dtmfSpecificationHasBeenSet; }
    inline void SetDtmfSpecification(const DTMFSpecification& value) { m_dtmfSpecificationHasBeenSet = true; m_dtmfSpecification = value; }
    inline void SetDtmfSpecification(DTMFSpecification&& value) { m_dtmfSpecificationHasBeenSet = true; m_dtmfSpecification = std::move(value); }
    inline AudioAndDTMFInputSpecification& WithDtmfSpecification(const DTMFSpecification& value) { SetDtmfSpecification(value); return *this;}
    inline AudioAndDTMFInputSpecification& WithDtmfSpecification(DTMFSpecification&& value) { SetDtmfSpecification(std::move(value)); return *this;}
    ///@}
  private:

    int m_startTimeoutMs;
    bool m_startTimeoutMsHasBeenSet = false;

    AudioSpecification m_audioSpecification;
    bool m_audioSpecificationHasBeenSet = false;

    DTMFSpecification m_dtmfSpecification;
    bool m_dtmfSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
