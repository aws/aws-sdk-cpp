/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/LogConfigurationType.h>
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
   * <p>The logging parameters of a user pool, as returned in the response to a
   * <code>GetLogDeliveryConfiguration</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/LogDeliveryConfigurationType">AWS
   * API Reference</a></p>
   */
  class LogDeliveryConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API LogDeliveryConfigurationType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API LogDeliveryConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API LogDeliveryConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the user pool where you configured logging.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    LogDeliveryConfigurationType& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A logging destination of a user pool. User pools can have multiple logging
     * destinations for message-delivery and user-activity logs.</p>
     */
    inline const Aws::Vector<LogConfigurationType>& GetLogConfigurations() const { return m_logConfigurations; }
    inline bool LogConfigurationsHasBeenSet() const { return m_logConfigurationsHasBeenSet; }
    template<typename LogConfigurationsT = Aws::Vector<LogConfigurationType>>
    void SetLogConfigurations(LogConfigurationsT&& value) { m_logConfigurationsHasBeenSet = true; m_logConfigurations = std::forward<LogConfigurationsT>(value); }
    template<typename LogConfigurationsT = Aws::Vector<LogConfigurationType>>
    LogDeliveryConfigurationType& WithLogConfigurations(LogConfigurationsT&& value) { SetLogConfigurations(std::forward<LogConfigurationsT>(value)); return *this;}
    template<typename LogConfigurationsT = LogConfigurationType>
    LogDeliveryConfigurationType& AddLogConfigurations(LogConfigurationsT&& value) { m_logConfigurationsHasBeenSet = true; m_logConfigurations.emplace_back(std::forward<LogConfigurationsT>(value)); return *this; }
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
