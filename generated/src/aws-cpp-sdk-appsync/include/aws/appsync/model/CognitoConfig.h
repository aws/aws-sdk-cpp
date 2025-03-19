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
    AWS_APPSYNC_API CognitoConfig() = default;
    AWS_APPSYNC_API CognitoConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API CognitoConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    CognitoConfig& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region in which the user pool was created.</p>
     */
    inline const Aws::String& GetAwsRegion() const { return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    template<typename AwsRegionT = Aws::String>
    void SetAwsRegion(AwsRegionT&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::forward<AwsRegionT>(value); }
    template<typename AwsRegionT = Aws::String>
    CognitoConfig& WithAwsRegion(AwsRegionT&& value) { SetAwsRegion(std::forward<AwsRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression for validating the incoming Amazon Cognito user pool app
     * client ID. If this value isn't set, no filtering is applied.</p>
     */
    inline const Aws::String& GetAppIdClientRegex() const { return m_appIdClientRegex; }
    inline bool AppIdClientRegexHasBeenSet() const { return m_appIdClientRegexHasBeenSet; }
    template<typename AppIdClientRegexT = Aws::String>
    void SetAppIdClientRegex(AppIdClientRegexT&& value) { m_appIdClientRegexHasBeenSet = true; m_appIdClientRegex = std::forward<AppIdClientRegexT>(value); }
    template<typename AppIdClientRegexT = Aws::String>
    CognitoConfig& WithAppIdClientRegex(AppIdClientRegexT&& value) { SetAppIdClientRegex(std::forward<AppIdClientRegexT>(value)); return *this;}
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
