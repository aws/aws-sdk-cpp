/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/LogDeliveryConfigurationType.h>
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
  class SetLogDeliveryConfigurationResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SetLogDeliveryConfigurationResult();
    AWS_COGNITOIDENTITYPROVIDER_API SetLogDeliveryConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API SetLogDeliveryConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The detailed activity logging configuration that you applied to the requested
     * user pool.</p>
     */
    inline const LogDeliveryConfigurationType& GetLogDeliveryConfiguration() const{ return m_logDeliveryConfiguration; }
    inline void SetLogDeliveryConfiguration(const LogDeliveryConfigurationType& value) { m_logDeliveryConfiguration = value; }
    inline void SetLogDeliveryConfiguration(LogDeliveryConfigurationType&& value) { m_logDeliveryConfiguration = std::move(value); }
    inline SetLogDeliveryConfigurationResult& WithLogDeliveryConfiguration(const LogDeliveryConfigurationType& value) { SetLogDeliveryConfiguration(value); return *this;}
    inline SetLogDeliveryConfigurationResult& WithLogDeliveryConfiguration(LogDeliveryConfigurationType&& value) { SetLogDeliveryConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SetLogDeliveryConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SetLogDeliveryConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SetLogDeliveryConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    LogDeliveryConfigurationType m_logDeliveryConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
