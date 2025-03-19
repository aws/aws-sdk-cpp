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
    AWS_AMPLIFYBACKEND_API CreateBackendAuthIdentityPoolConfig() = default;
    AWS_AMPLIFYBACKEND_API CreateBackendAuthIdentityPoolConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API CreateBackendAuthIdentityPoolConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the Amazon Cognito identity pool used for authorization.</p>
     */
    inline const Aws::String& GetIdentityPoolName() const { return m_identityPoolName; }
    inline bool IdentityPoolNameHasBeenSet() const { return m_identityPoolNameHasBeenSet; }
    template<typename IdentityPoolNameT = Aws::String>
    void SetIdentityPoolName(IdentityPoolNameT&& value) { m_identityPoolNameHasBeenSet = true; m_identityPoolName = std::forward<IdentityPoolNameT>(value); }
    template<typename IdentityPoolNameT = Aws::String>
    CreateBackendAuthIdentityPoolConfig& WithIdentityPoolName(IdentityPoolNameT&& value) { SetIdentityPoolName(std::forward<IdentityPoolNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to true or false based on whether you want to enable guest authorization
     * to your Amplify app.</p>
     */
    inline bool GetUnauthenticatedLogin() const { return m_unauthenticatedLogin; }
    inline bool UnauthenticatedLoginHasBeenSet() const { return m_unauthenticatedLoginHasBeenSet; }
    inline void SetUnauthenticatedLogin(bool value) { m_unauthenticatedLoginHasBeenSet = true; m_unauthenticatedLogin = value; }
    inline CreateBackendAuthIdentityPoolConfig& WithUnauthenticatedLogin(bool value) { SetUnauthenticatedLogin(value); return *this;}
    ///@}
  private:

    Aws::String m_identityPoolName;
    bool m_identityPoolNameHasBeenSet = false;

    bool m_unauthenticatedLogin{false};
    bool m_unauthenticatedLoginHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
