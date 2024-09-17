/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes an Amazon Cognito user pool configuration.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UserPoolConfig">AWS
   * API Reference</a></p>
   */
  class UserPoolConfig
  {
  public:
    AWS_APPSYNC_API UserPoolConfig();
    AWS_APPSYNC_API UserPoolConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API UserPoolConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline UserPoolConfig& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline UserPoolConfig& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline UserPoolConfig& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region in which the user pool was created.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }
    inline UserPoolConfig& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}
    inline UserPoolConfig& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}
    inline UserPoolConfig& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that you want your GraphQL API to take when a request that uses
     * Amazon Cognito user pool authentication doesn't match the Amazon Cognito user
     * pool configuration.</p>
     */
    inline const DefaultAction& GetDefaultAction() const{ return m_defaultAction; }
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
    inline void SetDefaultAction(const DefaultAction& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }
    inline void SetDefaultAction(DefaultAction&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }
    inline UserPoolConfig& WithDefaultAction(const DefaultAction& value) { SetDefaultAction(value); return *this;}
    inline UserPoolConfig& WithDefaultAction(DefaultAction&& value) { SetDefaultAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression for validating the incoming Amazon Cognito user pool app
     * client ID. If this value isn't set, no filtering is applied.</p>
     */
    inline const Aws::String& GetAppIdClientRegex() const{ return m_appIdClientRegex; }
    inline bool AppIdClientRegexHasBeenSet() const { return m_appIdClientRegexHasBeenSet; }
    inline void SetAppIdClientRegex(const Aws::String& value) { m_appIdClientRegexHasBeenSet = true; m_appIdClientRegex = value; }
    inline void SetAppIdClientRegex(Aws::String&& value) { m_appIdClientRegexHasBeenSet = true; m_appIdClientRegex = std::move(value); }
    inline void SetAppIdClientRegex(const char* value) { m_appIdClientRegexHasBeenSet = true; m_appIdClientRegex.assign(value); }
    inline UserPoolConfig& WithAppIdClientRegex(const Aws::String& value) { SetAppIdClientRegex(value); return *this;}
    inline UserPoolConfig& WithAppIdClientRegex(Aws::String&& value) { SetAppIdClientRegex(std::move(value)); return *this;}
    inline UserPoolConfig& WithAppIdClientRegex(const char* value) { SetAppIdClientRegex(value); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    DefaultAction m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    Aws::String m_appIdClientRegex;
    bool m_appIdClientRegexHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
