/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/LogConfigurationType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class SetLogDeliveryConfigurationRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SetLogDeliveryConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetLogDeliveryConfiguration"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool where you want to configure logging.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    SetLogDeliveryConfigurationRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of the logging configurations for a user pool.</p>
     */
    inline const Aws::Vector<LogConfigurationType>& GetLogConfigurations() const { return m_logConfigurations; }
    inline bool LogConfigurationsHasBeenSet() const { return m_logConfigurationsHasBeenSet; }
    template<typename LogConfigurationsT = Aws::Vector<LogConfigurationType>>
    void SetLogConfigurations(LogConfigurationsT&& value) { m_logConfigurationsHasBeenSet = true; m_logConfigurations = std::forward<LogConfigurationsT>(value); }
    template<typename LogConfigurationsT = Aws::Vector<LogConfigurationType>>
    SetLogDeliveryConfigurationRequest& WithLogConfigurations(LogConfigurationsT&& value) { SetLogConfigurations(std::forward<LogConfigurationsT>(value)); return *this;}
    template<typename LogConfigurationsT = LogConfigurationType>
    SetLogDeliveryConfigurationRequest& AddLogConfigurations(LogConfigurationsT&& value) { m_logConfigurationsHasBeenSet = true; m_logConfigurations.emplace_back(std::forward<LogConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::Vector<LogConfigurationType> m_logConfigurations;
    bool m_logConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
