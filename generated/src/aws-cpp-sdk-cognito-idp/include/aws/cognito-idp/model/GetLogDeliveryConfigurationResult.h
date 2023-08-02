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
  class GetLogDeliveryConfigurationResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetLogDeliveryConfigurationResult();
    AWS_COGNITOIDENTITYPROVIDER_API GetLogDeliveryConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetLogDeliveryConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed activity logging configuration of the requested user pool.</p>
     */
    inline const LogDeliveryConfigurationType& GetLogDeliveryConfiguration() const{ return m_logDeliveryConfiguration; }

    /**
     * <p>The detailed activity logging configuration of the requested user pool.</p>
     */
    inline void SetLogDeliveryConfiguration(const LogDeliveryConfigurationType& value) { m_logDeliveryConfiguration = value; }

    /**
     * <p>The detailed activity logging configuration of the requested user pool.</p>
     */
    inline void SetLogDeliveryConfiguration(LogDeliveryConfigurationType&& value) { m_logDeliveryConfiguration = std::move(value); }

    /**
     * <p>The detailed activity logging configuration of the requested user pool.</p>
     */
    inline GetLogDeliveryConfigurationResult& WithLogDeliveryConfiguration(const LogDeliveryConfigurationType& value) { SetLogDeliveryConfiguration(value); return *this;}

    /**
     * <p>The detailed activity logging configuration of the requested user pool.</p>
     */
    inline GetLogDeliveryConfigurationResult& WithLogDeliveryConfiguration(LogDeliveryConfigurationType&& value) { SetLogDeliveryConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLogDeliveryConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLogDeliveryConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLogDeliveryConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LogDeliveryConfigurationType m_logDeliveryConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
