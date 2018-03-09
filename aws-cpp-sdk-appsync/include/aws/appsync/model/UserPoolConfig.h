﻿/*
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
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/DefaultAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes an Amazon Cognito User Pool configuration.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UserPoolConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPSYNC_API UserPoolConfig
  {
  public:
    UserPoolConfig();
    UserPoolConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    UserPoolConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline UserPoolConfig& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline UserPoolConfig& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline UserPoolConfig& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The AWS region in which the user pool was created.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The AWS region in which the user pool was created.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The AWS region in which the user pool was created.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The AWS region in which the user pool was created.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The AWS region in which the user pool was created.</p>
     */
    inline UserPoolConfig& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The AWS region in which the user pool was created.</p>
     */
    inline UserPoolConfig& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS region in which the user pool was created.</p>
     */
    inline UserPoolConfig& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>The action that you want your GraphQL API to take when a request that uses
     * Amazon Cognito User Pool authentication doesn't match the Amazon Cognito User
     * Pool configuration.</p>
     */
    inline const DefaultAction& GetDefaultAction() const{ return m_defaultAction; }

    /**
     * <p>The action that you want your GraphQL API to take when a request that uses
     * Amazon Cognito User Pool authentication doesn't match the Amazon Cognito User
     * Pool configuration.</p>
     */
    inline void SetDefaultAction(const DefaultAction& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }

    /**
     * <p>The action that you want your GraphQL API to take when a request that uses
     * Amazon Cognito User Pool authentication doesn't match the Amazon Cognito User
     * Pool configuration.</p>
     */
    inline void SetDefaultAction(DefaultAction&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }

    /**
     * <p>The action that you want your GraphQL API to take when a request that uses
     * Amazon Cognito User Pool authentication doesn't match the Amazon Cognito User
     * Pool configuration.</p>
     */
    inline UserPoolConfig& WithDefaultAction(const DefaultAction& value) { SetDefaultAction(value); return *this;}

    /**
     * <p>The action that you want your GraphQL API to take when a request that uses
     * Amazon Cognito User Pool authentication doesn't match the Amazon Cognito User
     * Pool configuration.</p>
     */
    inline UserPoolConfig& WithDefaultAction(DefaultAction&& value) { SetDefaultAction(std::move(value)); return *this;}


    /**
     * <p>A regular expression for validating the incoming Amazon Cognito User Pool app
     * client ID.</p>
     */
    inline const Aws::String& GetAppIdClientRegex() const{ return m_appIdClientRegex; }

    /**
     * <p>A regular expression for validating the incoming Amazon Cognito User Pool app
     * client ID.</p>
     */
    inline void SetAppIdClientRegex(const Aws::String& value) { m_appIdClientRegexHasBeenSet = true; m_appIdClientRegex = value; }

    /**
     * <p>A regular expression for validating the incoming Amazon Cognito User Pool app
     * client ID.</p>
     */
    inline void SetAppIdClientRegex(Aws::String&& value) { m_appIdClientRegexHasBeenSet = true; m_appIdClientRegex = std::move(value); }

    /**
     * <p>A regular expression for validating the incoming Amazon Cognito User Pool app
     * client ID.</p>
     */
    inline void SetAppIdClientRegex(const char* value) { m_appIdClientRegexHasBeenSet = true; m_appIdClientRegex.assign(value); }

    /**
     * <p>A regular expression for validating the incoming Amazon Cognito User Pool app
     * client ID.</p>
     */
    inline UserPoolConfig& WithAppIdClientRegex(const Aws::String& value) { SetAppIdClientRegex(value); return *this;}

    /**
     * <p>A regular expression for validating the incoming Amazon Cognito User Pool app
     * client ID.</p>
     */
    inline UserPoolConfig& WithAppIdClientRegex(Aws::String&& value) { SetAppIdClientRegex(std::move(value)); return *this;}

    /**
     * <p>A regular expression for validating the incoming Amazon Cognito User Pool app
     * client ID.</p>
     */
    inline UserPoolConfig& WithAppIdClientRegex(const char* value) { SetAppIdClientRegex(value); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet;

    DefaultAction m_defaultAction;
    bool m_defaultActionHasBeenSet;

    Aws::String m_appIdClientRegex;
    bool m_appIdClientRegexHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
