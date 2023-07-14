﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/RiskConfigurationType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{
  class AWS_COGNITOIDENTITYPROVIDER_API DescribeRiskConfigurationResult
  {
  public:
    DescribeRiskConfigurationResult();
    DescribeRiskConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRiskConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The risk configuration.</p>
     */
    inline const RiskConfigurationType& GetRiskConfiguration() const{ return m_riskConfiguration; }

    /**
     * <p>The risk configuration.</p>
     */
    inline void SetRiskConfiguration(const RiskConfigurationType& value) { m_riskConfiguration = value; }

    /**
     * <p>The risk configuration.</p>
     */
    inline void SetRiskConfiguration(RiskConfigurationType&& value) { m_riskConfiguration = std::move(value); }

    /**
     * <p>The risk configuration.</p>
     */
    inline DescribeRiskConfigurationResult& WithRiskConfiguration(const RiskConfigurationType& value) { SetRiskConfiguration(value); return *this;}

    /**
     * <p>The risk configuration.</p>
     */
    inline DescribeRiskConfigurationResult& WithRiskConfiguration(RiskConfigurationType&& value) { SetRiskConfiguration(std::move(value)); return *this;}

  private:

    RiskConfigurationType m_riskConfiguration;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
