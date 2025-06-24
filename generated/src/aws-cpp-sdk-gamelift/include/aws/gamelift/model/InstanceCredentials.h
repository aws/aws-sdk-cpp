/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>A set of credentials that allow remote access to an instance in an EC2
   * managed fleet. These credentials are returned in response to a call to <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GetInstanceAccess">https://docs.aws.amazon.com/gamelift/latest/apireference/API_GetInstanceAccess</a>,
   * which requests access for instances that are running game servers with the
   * Amazon GameLift Servers server SDK version 4.x or earlier.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/InstanceCredentials">AWS
   * API Reference</a></p>
   */
  class InstanceCredentials
  {
  public:
    AWS_GAMELIFT_API InstanceCredentials() = default;
    AWS_GAMELIFT_API InstanceCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API InstanceCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A user name for logging in.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    InstanceCredentials& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it's a private key for use with
     * SSH.</p>
     */
    inline const Aws::String& GetSecret() const { return m_secret; }
    inline bool SecretHasBeenSet() const { return m_secretHasBeenSet; }
    template<typename SecretT = Aws::String>
    void SetSecret(SecretT&& value) { m_secretHasBeenSet = true; m_secret = std::forward<SecretT>(value); }
    template<typename SecretT = Aws::String>
    InstanceCredentials& WithSecret(SecretT&& value) { SetSecret(std::forward<SecretT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_secret;
    bool m_secretHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
