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
