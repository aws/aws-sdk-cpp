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
   * <p>The event risk type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/EventRiskType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API EventRiskType
  {
  public:
    EventRiskType();
    EventRiskType(Aws::Utils::Json::JsonView jsonValue);
    EventRiskType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The risk decision.</p>
     */
    inline const RiskDecisionType& GetRiskDecision() const{ return m_riskDecision; }

    /**
     * <p>The risk decision.</p>
     */
    inline bool RiskDecisionHasBeenSet() const { return m_riskDecisionHasBeenSet; }

    /**
     * <p>The risk decision.</p>
     */
    inline void SetRiskDecision(const RiskDecisionType& value) { m_riskDecisionHasBeenSet = true; m_riskDecision = value; }

    /**
     * <p>The risk decision.</p>
     */
    inline void SetRiskDecision(RiskDecisionType&& value) { m_riskDecisionHasBeenSet = true; m_riskDecision = std::move(value); }

    /**
     * <p>The risk decision.</p>
     */
    inline EventRiskType& WithRiskDecision(const RiskDecisionType& value) { SetRiskDecision(value); return *this;}

    /**
     * <p>The risk decision.</p>
     */
    inline EventRiskType& WithRiskDecision(RiskDecisionType&& value) { SetRiskDecision(std::move(value)); return *this;}


    /**
     * <p>The risk level.</p>
     */
    inline const RiskLevelType& GetRiskLevel() const{ return m_riskLevel; }

    /**
     * <p>The risk level.</p>
     */
    inline bool RiskLevelHasBeenSet() const { return m_riskLevelHasBeenSet; }

    /**
     * <p>The risk level.</p>
     */
    inline void SetRiskLevel(const RiskLevelType& value) { m_riskLevelHasBeenSet = true; m_riskLevel = value; }

    /**
     * <p>The risk level.</p>
     */
    inline void SetRiskLevel(RiskLevelType&& value) { m_riskLevelHasBeenSet = true; m_riskLevel = std::move(value); }

    /**
     * <p>The risk level.</p>
     */
    inline EventRiskType& WithRiskLevel(const RiskLevelType& value) { SetRiskLevel(value); return *this;}

    /**
     * <p>The risk level.</p>
     */
    inline EventRiskType& WithRiskLevel(RiskLevelType&& value) { SetRiskLevel(std::move(value)); return *this;}

  private:

    RiskDecisionType m_riskDecision;
    bool m_riskDecisionHasBeenSet;

    RiskLevelType m_riskLevel;
    bool m_riskLevelHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
