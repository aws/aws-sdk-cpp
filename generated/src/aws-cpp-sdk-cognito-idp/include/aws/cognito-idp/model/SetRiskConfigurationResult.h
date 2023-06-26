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
    AWS_COGNITOIDENTITYPROVIDER_API SetRiskConfigurationResult();
    AWS_COGNITOIDENTITYPROVIDER_API SetRiskConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API SetRiskConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline SetRiskConfigurationResult& WithRiskConfiguration(const RiskConfigurationType& value) { SetRiskConfiguration(value); return *this;}

    /**
     * <p>The risk configuration.</p>
     */
    inline SetRiskConfigurationResult& WithRiskConfiguration(RiskConfigurationType&& value) { SetRiskConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SetRiskConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SetRiskConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SetRiskConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RiskConfigurationType m_riskConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
