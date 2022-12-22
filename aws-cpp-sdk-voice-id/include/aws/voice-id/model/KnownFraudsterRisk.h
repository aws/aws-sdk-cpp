/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>Contains details produced as a result of performing known fraudster risk
   * analysis on a speaker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/KnownFraudsterRisk">AWS
   * API Reference</a></p>
   */
  class KnownFraudsterRisk
  {
  public:
    AWS_VOICEID_API KnownFraudsterRisk();
    AWS_VOICEID_API KnownFraudsterRisk(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API KnownFraudsterRisk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the fraudster that is the closest match to the speaker. If
     * there are no fraudsters registered in a given domain, or if there are no
     * fraudsters with a non-zero RiskScore, this value is <code>null</code>.</p>
     */
    inline const Aws::String& GetGeneratedFraudsterId() const{ return m_generatedFraudsterId; }

    /**
     * <p>The identifier of the fraudster that is the closest match to the speaker. If
     * there are no fraudsters registered in a given domain, or if there are no
     * fraudsters with a non-zero RiskScore, this value is <code>null</code>.</p>
     */
    inline bool GeneratedFraudsterIdHasBeenSet() const { return m_generatedFraudsterIdHasBeenSet; }

    /**
     * <p>The identifier of the fraudster that is the closest match to the speaker. If
     * there are no fraudsters registered in a given domain, or if there are no
     * fraudsters with a non-zero RiskScore, this value is <code>null</code>.</p>
     */
    inline void SetGeneratedFraudsterId(const Aws::String& value) { m_generatedFraudsterIdHasBeenSet = true; m_generatedFraudsterId = value; }

    /**
     * <p>The identifier of the fraudster that is the closest match to the speaker. If
     * there are no fraudsters registered in a given domain, or if there are no
     * fraudsters with a non-zero RiskScore, this value is <code>null</code>.</p>
     */
    inline void SetGeneratedFraudsterId(Aws::String&& value) { m_generatedFraudsterIdHasBeenSet = true; m_generatedFraudsterId = std::move(value); }

    /**
     * <p>The identifier of the fraudster that is the closest match to the speaker. If
     * there are no fraudsters registered in a given domain, or if there are no
     * fraudsters with a non-zero RiskScore, this value is <code>null</code>.</p>
     */
    inline void SetGeneratedFraudsterId(const char* value) { m_generatedFraudsterIdHasBeenSet = true; m_generatedFraudsterId.assign(value); }

    /**
     * <p>The identifier of the fraudster that is the closest match to the speaker. If
     * there are no fraudsters registered in a given domain, or if there are no
     * fraudsters with a non-zero RiskScore, this value is <code>null</code>.</p>
     */
    inline KnownFraudsterRisk& WithGeneratedFraudsterId(const Aws::String& value) { SetGeneratedFraudsterId(value); return *this;}

    /**
     * <p>The identifier of the fraudster that is the closest match to the speaker. If
     * there are no fraudsters registered in a given domain, or if there are no
     * fraudsters with a non-zero RiskScore, this value is <code>null</code>.</p>
     */
    inline KnownFraudsterRisk& WithGeneratedFraudsterId(Aws::String&& value) { SetGeneratedFraudsterId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the fraudster that is the closest match to the speaker. If
     * there are no fraudsters registered in a given domain, or if there are no
     * fraudsters with a non-zero RiskScore, this value is <code>null</code>.</p>
     */
    inline KnownFraudsterRisk& WithGeneratedFraudsterId(const char* value) { SetGeneratedFraudsterId(value); return *this;}


    /**
     * <p>The score indicating the likelihood the speaker is a known fraudster.</p>
     */
    inline int GetRiskScore() const{ return m_riskScore; }

    /**
     * <p>The score indicating the likelihood the speaker is a known fraudster.</p>
     */
    inline bool RiskScoreHasBeenSet() const { return m_riskScoreHasBeenSet; }

    /**
     * <p>The score indicating the likelihood the speaker is a known fraudster.</p>
     */
    inline void SetRiskScore(int value) { m_riskScoreHasBeenSet = true; m_riskScore = value; }

    /**
     * <p>The score indicating the likelihood the speaker is a known fraudster.</p>
     */
    inline KnownFraudsterRisk& WithRiskScore(int value) { SetRiskScore(value); return *this;}

  private:

    Aws::String m_generatedFraudsterId;
    bool m_generatedFraudsterIdHasBeenSet = false;

    int m_riskScore;
    bool m_riskScoreHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
