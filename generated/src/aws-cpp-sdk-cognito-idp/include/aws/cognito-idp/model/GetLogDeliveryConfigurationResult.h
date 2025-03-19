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
    AWS_COGNITOIDENTITYPROVIDER_API GetLogDeliveryConfigurationResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API GetLogDeliveryConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetLogDeliveryConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The logging configuration of the requested user pool. Includes types of logs
     * configured and their destinations.</p>
     */
    inline const LogDeliveryConfigurationType& GetLogDeliveryConfiguration() const { return m_logDeliveryConfiguration; }
    template<typename LogDeliveryConfigurationT = LogDeliveryConfigurationType>
    void SetLogDeliveryConfiguration(LogDeliveryConfigurationT&& value) { m_logDeliveryConfigurationHasBeenSet = true; m_logDeliveryConfiguration = std::forward<LogDeliveryConfigurationT>(value); }
    template<typename LogDeliveryConfigurationT = LogDeliveryConfigurationType>
    GetLogDeliveryConfigurationResult& WithLogDeliveryConfiguration(LogDeliveryConfigurationT&& value) { SetLogDeliveryConfiguration(std::forward<LogDeliveryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLogDeliveryConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LogDeliveryConfigurationType m_logDeliveryConfiguration;
    bool m_logDeliveryConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
