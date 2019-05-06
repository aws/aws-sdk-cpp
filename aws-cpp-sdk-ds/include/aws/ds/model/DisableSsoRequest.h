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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>DisableSso</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableSsoRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API DisableSsoRequest : public DirectoryServiceRequest
  {
  public:
    DisableSsoRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableSso"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory for which to disable single-sign on.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory for which to disable single-sign on.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory for which to disable single-sign on.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory for which to disable single-sign on.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory for which to disable single-sign on.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory for which to disable single-sign on.</p>
     */
    inline DisableSsoRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory for which to disable single-sign on.</p>
     */
    inline DisableSsoRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory for which to disable single-sign on.</p>
     */
    inline DisableSsoRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The username of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. This account must have privileges to
     * remove a service principal name.</p> <p>If the AD Connector service account does
     * not have privileges to remove a service principal name, you can specify an
     * alternate account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to disable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The username of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. This account must have privileges to
     * remove a service principal name.</p> <p>If the AD Connector service account does
     * not have privileges to remove a service principal name, you can specify an
     * alternate account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to disable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The username of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. This account must have privileges to
     * remove a service principal name.</p> <p>If the AD Connector service account does
     * not have privileges to remove a service principal name, you can specify an
     * alternate account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to disable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The username of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. This account must have privileges to
     * remove a service principal name.</p> <p>If the AD Connector service account does
     * not have privileges to remove a service principal name, you can specify an
     * alternate account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to disable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The username of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. This account must have privileges to
     * remove a service principal name.</p> <p>If the AD Connector service account does
     * not have privileges to remove a service principal name, you can specify an
     * alternate account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to disable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The username of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. This account must have privileges to
     * remove a service principal name.</p> <p>If the AD Connector service account does
     * not have privileges to remove a service principal name, you can specify an
     * alternate account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to disable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline DisableSsoRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The username of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. This account must have privileges to
     * remove a service principal name.</p> <p>If the AD Connector service account does
     * not have privileges to remove a service principal name, you can specify an
     * alternate account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to disable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline DisableSsoRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The username of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. This account must have privileges to
     * remove a service principal name.</p> <p>If the AD Connector service account does
     * not have privileges to remove a service principal name, you can specify an
     * alternate account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to disable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline DisableSsoRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The password of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline DisableSsoRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline DisableSsoRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password of an alternate account to use to disable single-sign on. This
     * is only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline DisableSsoRequest& WithPassword(const char* value) { SetPassword(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
