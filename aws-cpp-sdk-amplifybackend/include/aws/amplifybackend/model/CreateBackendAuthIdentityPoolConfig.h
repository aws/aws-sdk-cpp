/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>Describes authorization configurations for the auth resources, configured as
   * a part of your Amplify project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendAuthIdentityPoolConfig">AWS
   * API Reference</a></p>
   */
  class CreateBackendAuthIdentityPoolConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API CreateBackendAuthIdentityPoolConfig();
    AWS_AMPLIFYBACKEND_API CreateBackendAuthIdentityPoolConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API CreateBackendAuthIdentityPoolConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the Amazon Cognito identity pool used for authorization.</p>
     */
    inline const Aws::String& GetIdentityPoolName() const{ return m_identityPoolName; }

    /**
     * <p>Name of the Amazon Cognito identity pool used for authorization.</p>
     */
    inline bool IdentityPoolNameHasBeenSet() const { return m_identityPoolNameHasBeenSet; }

    /**
     * <p>Name of the Amazon Cognito identity pool used for authorization.</p>
     */
    inline void SetIdentityPoolName(const Aws::String& value) { m_identityPoolNameHasBeenSet = true; m_identityPoolName = value; }

    /**
     * <p>Name of the Amazon Cognito identity pool used for authorization.</p>
     */
    inline void SetIdentityPoolName(Aws::String&& value) { m_identityPoolNameHasBeenSet = true; m_identityPoolName = std::move(value); }

    /**
     * <p>Name of the Amazon Cognito identity pool used for authorization.</p>
     */
    inline void SetIdentityPoolName(const char* value) { m_identityPoolNameHasBeenSet = true; m_identityPoolName.assign(value); }

    /**
     * <p>Name of the Amazon Cognito identity pool used for authorization.</p>
     */
    inline CreateBackendAuthIdentityPoolConfig& WithIdentityPoolName(const Aws::String& value) { SetIdentityPoolName(value); return *this;}

    /**
     * <p>Name of the Amazon Cognito identity pool used for authorization.</p>
     */
    inline CreateBackendAuthIdentityPoolConfig& WithIdentityPoolName(Aws::String&& value) { SetIdentityPoolName(std::move(value)); return *this;}

    /**
     * <p>Name of the Amazon Cognito identity pool used for authorization.</p>
     */
    inline CreateBackendAuthIdentityPoolConfig& WithIdentityPoolName(const char* value) { SetIdentityPoolName(value); return *this;}


    /**
     * <p>Set to true or false based on whether you want to enable guest authorization
     * to your Amplify app.</p>
     */
    inline bool GetUnauthenticatedLogin() const{ return m_unauthenticatedLogin; }

    /**
     * <p>Set to true or false based on whether you want to enable guest authorization
     * to your Amplify app.</p>
     */
    inline bool UnauthenticatedLoginHasBeenSet() const { return m_unauthenticatedLoginHasBeenSet; }

    /**
     * <p>Set to true or false based on whether you want to enable guest authorization
     * to your Amplify app.</p>
     */
    inline void SetUnauthenticatedLogin(bool value) { m_unauthenticatedLoginHasBeenSet = true; m_unauthenticatedLogin = value; }

    /**
     * <p>Set to true or false based on whether you want to enable guest authorization
     * to your Amplify app.</p>
     */
    inline CreateBackendAuthIdentityPoolConfig& WithUnauthenticatedLogin(bool value) { SetUnauthenticatedLogin(value); return *this;}

  private:

    Aws::String m_identityPoolName;
    bool m_identityPoolNameHasBeenSet = false;

    bool m_unauthenticatedLogin;
    bool m_unauthenticatedLoginHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
