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
    AWS_COGNITOIDENTITYPROVIDER_API SetLogDeliveryConfigurationRequest();

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
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline SetLogDeliveryConfigurationRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline SetLogDeliveryConfigurationRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline SetLogDeliveryConfigurationRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of the logging configurations for a user pool.</p>
     */
    inline const Aws::Vector<LogConfigurationType>& GetLogConfigurations() const{ return m_logConfigurations; }
    inline bool LogConfigurationsHasBeenSet() const { return m_logConfigurationsHasBeenSet; }
    inline void SetLogConfigurations(const Aws::Vector<LogConfigurationType>& value) { m_logConfigurationsHasBeenSet = true; m_logConfigurations = value; }
    inline void SetLogConfigurations(Aws::Vector<LogConfigurationType>&& value) { m_logConfigurationsHasBeenSet = true; m_logConfigurations = std::move(value); }
    inline SetLogDeliveryConfigurationRequest& WithLogConfigurations(const Aws::Vector<LogConfigurationType>& value) { SetLogConfigurations(value); return *this;}
    inline SetLogDeliveryConfigurationRequest& WithLogConfigurations(Aws::Vector<LogConfigurationType>&& value) { SetLogConfigurations(std::move(value)); return *this;}
    inline SetLogDeliveryConfigurationRequest& AddLogConfigurations(const LogConfigurationType& value) { m_logConfigurationsHasBeenSet = true; m_logConfigurations.push_back(value); return *this; }
    inline SetLogDeliveryConfigurationRequest& AddLogConfigurations(LogConfigurationType&& value) { m_logConfigurationsHasBeenSet = true; m_logConfigurations.push_back(std::move(value)); return *this; }
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
