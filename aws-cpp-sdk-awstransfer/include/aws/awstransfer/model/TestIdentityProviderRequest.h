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
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class AWS_TRANSFER_API TestIdentityProviderRequest : public TransferRequest
  {
  public:
    TestIdentityProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestIdentityProvider"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A system assigned identifier for a specific server. That server's user
     * authentication method is tested with a user name and password.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system assigned identifier for a specific server. That server's user
     * authentication method is tested with a user name and password.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>A system assigned identifier for a specific server. That server's user
     * authentication method is tested with a user name and password.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>A system assigned identifier for a specific server. That server's user
     * authentication method is tested with a user name and password.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>A system assigned identifier for a specific server. That server's user
     * authentication method is tested with a user name and password.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>A system assigned identifier for a specific server. That server's user
     * authentication method is tested with a user name and password.</p>
     */
    inline TestIdentityProviderRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system assigned identifier for a specific server. That server's user
     * authentication method is tested with a user name and password.</p>
     */
    inline TestIdentityProviderRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system assigned identifier for a specific server. That server's user
     * authentication method is tested with a user name and password.</p>
     */
    inline TestIdentityProviderRequest& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>This request parameter is name of the user account to be tested.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>This request parameter is name of the user account to be tested.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>This request parameter is name of the user account to be tested.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>This request parameter is name of the user account to be tested.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>This request parameter is name of the user account to be tested.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>This request parameter is name of the user account to be tested.</p>
     */
    inline TestIdentityProviderRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>This request parameter is name of the user account to be tested.</p>
     */
    inline TestIdentityProviderRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>This request parameter is name of the user account to be tested.</p>
     */
    inline TestIdentityProviderRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The password of the user account to be tested.</p>
     */
    inline const Aws::String& GetUserPassword() const{ return m_userPassword; }

    /**
     * <p>The password of the user account to be tested.</p>
     */
    inline bool UserPasswordHasBeenSet() const { return m_userPasswordHasBeenSet; }

    /**
     * <p>The password of the user account to be tested.</p>
     */
    inline void SetUserPassword(const Aws::String& value) { m_userPasswordHasBeenSet = true; m_userPassword = value; }

    /**
     * <p>The password of the user account to be tested.</p>
     */
    inline void SetUserPassword(Aws::String&& value) { m_userPasswordHasBeenSet = true; m_userPassword = std::move(value); }

    /**
     * <p>The password of the user account to be tested.</p>
     */
    inline void SetUserPassword(const char* value) { m_userPasswordHasBeenSet = true; m_userPassword.assign(value); }

    /**
     * <p>The password of the user account to be tested.</p>
     */
    inline TestIdentityProviderRequest& WithUserPassword(const Aws::String& value) { SetUserPassword(value); return *this;}

    /**
     * <p>The password of the user account to be tested.</p>
     */
    inline TestIdentityProviderRequest& WithUserPassword(Aws::String&& value) { SetUserPassword(std::move(value)); return *this;}

    /**
     * <p>The password of the user account to be tested.</p>
     */
    inline TestIdentityProviderRequest& WithUserPassword(const char* value) { SetUserPassword(value); return *this;}

  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_userPassword;
    bool m_userPasswordHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
