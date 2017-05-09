/*
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
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Set of credentials required to remotely access a fleet instance. Access
   * credentials are requested by calling <a>GetInstanceAccess</a> and returned in an
   * <a>InstanceAccess</a> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/InstanceCredentials">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API InstanceCredentials
  {
  public:
    InstanceCredentials();
    InstanceCredentials(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceCredentials& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>User login string.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>User login string.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>User login string.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>User login string.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>User login string.</p>
     */
    inline InstanceCredentials& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>User login string.</p>
     */
    inline InstanceCredentials& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>User login string.</p>
     */
    inline InstanceCredentials& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it is a private key (which must be
     * saved as a <code>.pem</code> file) for use with SSH.</p>
     */
    inline const Aws::String& GetSecret() const{ return m_secret; }

    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it is a private key (which must be
     * saved as a <code>.pem</code> file) for use with SSH.</p>
     */
    inline void SetSecret(const Aws::String& value) { m_secretHasBeenSet = true; m_secret = value; }

    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it is a private key (which must be
     * saved as a <code>.pem</code> file) for use with SSH.</p>
     */
    inline void SetSecret(Aws::String&& value) { m_secretHasBeenSet = true; m_secret = std::move(value); }

    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it is a private key (which must be
     * saved as a <code>.pem</code> file) for use with SSH.</p>
     */
    inline void SetSecret(const char* value) { m_secretHasBeenSet = true; m_secret.assign(value); }

    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it is a private key (which must be
     * saved as a <code>.pem</code> file) for use with SSH.</p>
     */
    inline InstanceCredentials& WithSecret(const Aws::String& value) { SetSecret(value); return *this;}

    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it is a private key (which must be
     * saved as a <code>.pem</code> file) for use with SSH.</p>
     */
    inline InstanceCredentials& WithSecret(Aws::String&& value) { SetSecret(std::move(value)); return *this;}

    /**
     * <p>Secret string. For Windows instances, the secret is a password for use with
     * Windows Remote Desktop. For Linux instances, it is a private key (which must be
     * saved as a <code>.pem</code> file) for use with SSH.</p>
     */
    inline InstanceCredentials& WithSecret(const char* value) { SetSecret(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_secret;
    bool m_secretHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
