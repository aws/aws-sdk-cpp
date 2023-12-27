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
   * managed fleet. These credentials are returned in response to a call to
   * <a>GetInstanceAccess</a>, which requests access for instances that are running
   * game servers with the Amazon GameLift server SDK version 4.x or
   * earlier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/InstanceCredentials">AWS
   * API Reference</a></p>
   */
  class InstanceCredentials
  {
  public:
    AWS_GAMELIFT_API InstanceCredentials();
    AWS_GAMELIFT_API InstanceCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API InstanceCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A user name for logging in.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>A user name for logging in.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>A user name for logging in.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>A user name for logging in.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>A user name for logging in.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>A user name for logging in.</p>
     */
    inline InstanceCredentials& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>A user name for logging in.</p>
     */
    inline InstanceCredentials& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>A user name for logging in.</p>
     */
    inline InstanceCredentials& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it's a private key for use with
     * SSH.</p>
     */
    inline const Aws::String& GetSecret() const{ return m_secret; }

    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it's a private key for use with
     * SSH.</p>
     */
    inline bool SecretHasBeenSet() const { return m_secretHasBeenSet; }

    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it's a private key for use with
     * SSH.</p>
     */
    inline void SetSecret(const Aws::String& value) { m_secretHasBeenSet = true; m_secret = value; }

    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it's a private key for use with
     * SSH.</p>
     */
    inline void SetSecret(Aws::String&& value) { m_secretHasBeenSet = true; m_secret = std::move(value); }

    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it's a private key for use with
     * SSH.</p>
     */
    inline void SetSecret(const char* value) { m_secretHasBeenSet = true; m_secret.assign(value); }

    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it's a private key for use with
     * SSH.</p>
     */
    inline InstanceCredentials& WithSecret(const Aws::String& value) { SetSecret(value); return *this;}

    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it's a private key for use with
     * SSH.</p>
     */
    inline InstanceCredentials& WithSecret(Aws::String&& value) { SetSecret(std::move(value)); return *this;}

    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it's a private key for use with
     * SSH.</p>
     */
    inline InstanceCredentials& WithSecret(const char* value) { SetSecret(value); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_secret;
    bool m_secretHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
