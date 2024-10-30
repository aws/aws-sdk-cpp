/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes an Amazon Cognito configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CognitoConfig">AWS
   * API Reference</a></p>
   */
  class CognitoConfig
  {
  public:
    AWS_APPSYNC_API CognitoConfig();
    AWS_APPSYNC_API CognitoConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API CognitoConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline CognitoConfig& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline CognitoConfig& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline CognitoConfig& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
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
    inline CognitoConfig& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}
    inline CognitoConfig& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}
    inline CognitoConfig& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}
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
    inline CognitoConfig& WithAppIdClientRegex(const Aws::String& value) { SetAppIdClientRegex(value); return *this;}
    inline CognitoConfig& WithAppIdClientRegex(Aws::String&& value) { SetAppIdClientRegex(std::move(value)); return *this;}
    inline CognitoConfig& WithAppIdClientRegex(const char* value) { SetAppIdClientRegex(value); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_appIdClientRegex;
    bool m_appIdClientRegexHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
