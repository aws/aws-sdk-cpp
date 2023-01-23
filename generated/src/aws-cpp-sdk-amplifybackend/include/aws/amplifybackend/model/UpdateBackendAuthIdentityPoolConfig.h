/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>

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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>Describes the authorization configuration for the Amazon Cognito identity
   * pool, provisioned as a part of your auth resource in the Amplify
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendAuthIdentityPoolConfig">AWS
   * API Reference</a></p>
   */
  class UpdateBackendAuthIdentityPoolConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthIdentityPoolConfig();
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthIdentityPoolConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthIdentityPoolConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A boolean value that can be set to allow or disallow guest-level
     * authorization into your Amplify app.</p>
     */
    inline bool GetUnauthenticatedLogin() const{ return m_unauthenticatedLogin; }

    /**
     * <p>A boolean value that can be set to allow or disallow guest-level
     * authorization into your Amplify app.</p>
     */
    inline bool UnauthenticatedLoginHasBeenSet() const { return m_unauthenticatedLoginHasBeenSet; }

    /**
     * <p>A boolean value that can be set to allow or disallow guest-level
     * authorization into your Amplify app.</p>
     */
    inline void SetUnauthenticatedLogin(bool value) { m_unauthenticatedLoginHasBeenSet = true; m_unauthenticatedLogin = value; }

    /**
     * <p>A boolean value that can be set to allow or disallow guest-level
     * authorization into your Amplify app.</p>
     */
    inline UpdateBackendAuthIdentityPoolConfig& WithUnauthenticatedLogin(bool value) { SetUnauthenticatedLogin(value); return *this;}

  private:

    bool m_unauthenticatedLogin;
    bool m_unauthenticatedLoginHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
