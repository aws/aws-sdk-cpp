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
   * <p>The configuration used for performing fraud detection over a speaker during a
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/FraudDetectionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_VOICEID_API FraudDetectionConfiguration
  {
  public:
    FraudDetectionConfiguration();
    FraudDetectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    FraudDetectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Threshold value for determining whether the speaker is a fraudster. If the
     * detected risk score calculated by Voice ID is higher than the threshold, the
     * speaker is considered a fraudster.</p>
     */
    inline int GetRiskThreshold() const{ return m_riskThreshold; }

    /**
     * <p>Threshold value for determining whether the speaker is a fraudster. If the
     * detected risk score calculated by Voice ID is higher than the threshold, the
     * speaker is considered a fraudster.</p>
     */
    inline bool RiskThresholdHasBeenSet() const { return m_riskThresholdHasBeenSet; }

    /**
     * <p>Threshold value for determining whether the speaker is a fraudster. If the
     * detected risk score calculated by Voice ID is higher than the threshold, the
     * speaker is considered a fraudster.</p>
     */
    inline void SetRiskThreshold(int value) { m_riskThresholdHasBeenSet = true; m_riskThreshold = value; }

    /**
     * <p>Threshold value for determining whether the speaker is a fraudster. If the
     * detected risk score calculated by Voice ID is higher than the threshold, the
     * speaker is considered a fraudster.</p>
     */
    inline FraudDetectionConfiguration& WithRiskThreshold(int value) { SetRiskThreshold(value); return *this;}

  private:

    int m_riskThreshold;
    bool m_riskThresholdHasBeenSet;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
