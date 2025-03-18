/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/RiskConfigurationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class SetRiskConfigurationResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SetRiskConfigurationResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API SetRiskConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API SetRiskConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The API response that contains the risk configuration that you set and the
     * timestamp of the most recent change.</p>
     */
    inline const RiskConfigurationType& GetRiskConfiguration() const { return m_riskConfiguration; }
    template<typename RiskConfigurationT = RiskConfigurationType>
    void SetRiskConfiguration(RiskConfigurationT&& value) { m_riskConfigurationHasBeenSet = true; m_riskConfiguration = std::forward<RiskConfigurationT>(value); }
    template<typename RiskConfigurationT = RiskConfigurationType>
    SetRiskConfigurationResult& WithRiskConfiguration(RiskConfigurationT&& value) { SetRiskConfiguration(std::forward<RiskConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SetRiskConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RiskConfigurationType m_riskConfiguration;
    bool m_riskConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
