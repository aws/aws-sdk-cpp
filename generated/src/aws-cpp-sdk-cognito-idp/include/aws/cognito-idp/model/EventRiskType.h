/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/RiskDecisionType.h>
#include <aws/cognito-idp/model/RiskLevelType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The risk evaluation by adaptive authentication, as displayed in an
   * <code>AdminListUserAuthEvents</code> response. Contains evaluations of
   * compromised-credentials detection and assessed risk level and action taken by
   * adaptive authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/EventRiskType">AWS
   * API Reference</a></p>
   */
  class EventRiskType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API EventRiskType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API EventRiskType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API EventRiskType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action taken by adaptive authentication. If <code>NoRisk</code>, your
     * user pool took no action. If <code>AccountTakeover</code>, your user pool
     * applied the adaptive authentication automated response that you configured. If
     * <code>Block</code>, your user pool prevented the attempt.</p>
     */
    inline RiskDecisionType GetRiskDecision() const { return m_riskDecision; }
    inline bool RiskDecisionHasBeenSet() const { return m_riskDecisionHasBeenSet; }
    inline void SetRiskDecision(RiskDecisionType value) { m_riskDecisionHasBeenSet = true; m_riskDecision = value; }
    inline EventRiskType& WithRiskDecision(RiskDecisionType value) { SetRiskDecision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The risk level that adaptive authentication assessed for the authentication
     * event.</p>
     */
    inline RiskLevelType GetRiskLevel() const { return m_riskLevel; }
    inline bool RiskLevelHasBeenSet() const { return m_riskLevelHasBeenSet; }
    inline void SetRiskLevel(RiskLevelType value) { m_riskLevelHasBeenSet = true; m_riskLevel = value; }
    inline EventRiskType& WithRiskLevel(RiskLevelType value) { SetRiskLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether compromised credentials were detected during an
     * authentication event.</p>
     */
    inline bool GetCompromisedCredentialsDetected() const { return m_compromisedCredentialsDetected; }
    inline bool CompromisedCredentialsDetectedHasBeenSet() const { return m_compromisedCredentialsDetectedHasBeenSet; }
    inline void SetCompromisedCredentialsDetected(bool value) { m_compromisedCredentialsDetectedHasBeenSet = true; m_compromisedCredentialsDetected = value; }
    inline EventRiskType& WithCompromisedCredentialsDetected(bool value) { SetCompromisedCredentialsDetected(value); return *this;}
    ///@}
  private:

    RiskDecisionType m_riskDecision{RiskDecisionType::NOT_SET};
    bool m_riskDecisionHasBeenSet = false;

    RiskLevelType m_riskLevel{RiskLevelType::NOT_SET};
    bool m_riskLevelHasBeenSet = false;

    bool m_compromisedCredentialsDetected{false};
    bool m_compromisedCredentialsDetectedHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
