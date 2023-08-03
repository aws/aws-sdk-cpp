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
   * <p>The logging parameters of a user pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/LogDeliveryConfigurationType">AWS
   * API Reference</a></p>
   */
  class LogDeliveryConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API LogDeliveryConfigurationType();
    AWS_COGNITOIDENTITYPROVIDER_API LogDeliveryConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API LogDeliveryConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the user pool where you configured detailed activity logging.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The ID of the user pool where you configured detailed activity logging.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The ID of the user pool where you configured detailed activity logging.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The ID of the user pool where you configured detailed activity logging.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The ID of the user pool where you configured detailed activity logging.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The ID of the user pool where you configured detailed activity logging.</p>
     */
    inline LogDeliveryConfigurationType& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The ID of the user pool where you configured detailed activity logging.</p>
     */
    inline LogDeliveryConfigurationType& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user pool where you configured detailed activity logging.</p>
     */
    inline LogDeliveryConfigurationType& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The detailed activity logging destination of a user pool.</p>
     */
    inline const Aws::Vector<LogConfigurationType>& GetLogConfigurations() const{ return m_logConfigurations; }

    /**
     * <p>The detailed activity logging destination of a user pool.</p>
     */
    inline bool LogConfigurationsHasBeenSet() const { return m_logConfigurationsHasBeenSet; }

    /**
     * <p>The detailed activity logging destination of a user pool.</p>
     */
    inline void SetLogConfigurations(const Aws::Vector<LogConfigurationType>& value) { m_logConfigurationsHasBeenSet = true; m_logConfigurations = value; }

    /**
     * <p>The detailed activity logging destination of a user pool.</p>
     */
    inline void SetLogConfigurations(Aws::Vector<LogConfigurationType>&& value) { m_logConfigurationsHasBeenSet = true; m_logConfigurations = std::move(value); }

    /**
     * <p>The detailed activity logging destination of a user pool.</p>
     */
    inline LogDeliveryConfigurationType& WithLogConfigurations(const Aws::Vector<LogConfigurationType>& value) { SetLogConfigurations(value); return *this;}

    /**
     * <p>The detailed activity logging destination of a user pool.</p>
     */
    inline LogDeliveryConfigurationType& WithLogConfigurations(Aws::Vector<LogConfigurationType>&& value) { SetLogConfigurations(std::move(value)); return *this;}

    /**
     * <p>The detailed activity logging destination of a user pool.</p>
     */
    inline LogDeliveryConfigurationType& AddLogConfigurations(const LogConfigurationType& value) { m_logConfigurationsHasBeenSet = true; m_logConfigurations.push_back(value); return *this; }

    /**
     * <p>The detailed activity logging destination of a user pool.</p>
     */
    inline LogDeliveryConfigurationType& AddLogConfigurations(LogConfigurationType&& value) { m_logConfigurationsHasBeenSet = true; m_logConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::Vector<LogConfigurationType> m_logConfigurations;
    bool m_logConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
