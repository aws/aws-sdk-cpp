/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>

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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>The details resulting from 'Voice Spoofing Risk' analysis of the
   * speaker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/VoiceSpoofingRisk">AWS
   * API Reference</a></p>
   */
  class VoiceSpoofingRisk
  {
  public:
    AWS_VOICEID_API VoiceSpoofingRisk();
    AWS_VOICEID_API VoiceSpoofingRisk(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API VoiceSpoofingRisk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The score indicating the likelihood of speaker’s voice being spoofed.</p>
     */
    inline int GetRiskScore() const{ return m_riskScore; }

    /**
     * <p>The score indicating the likelihood of speaker’s voice being spoofed.</p>
     */
    inline bool RiskScoreHasBeenSet() const { return m_riskScoreHasBeenSet; }

    /**
     * <p>The score indicating the likelihood of speaker’s voice being spoofed.</p>
     */
    inline void SetRiskScore(int value) { m_riskScoreHasBeenSet = true; m_riskScore = value; }

    /**
     * <p>The score indicating the likelihood of speaker’s voice being spoofed.</p>
     */
    inline VoiceSpoofingRisk& WithRiskScore(int value) { SetRiskScore(value); return *this;}

  private:

    int m_riskScore;
    bool m_riskScoreHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
