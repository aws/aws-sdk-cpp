﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Contains the inputs for the <a>EnableSso</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableSsoRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API EnableSsoRequest : public DirectoryServiceRequest
  {
  public:
    EnableSsoRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableSso"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory for which to enable single-sign on.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory for which to enable single-sign on.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory for which to enable single-sign on.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory for which to enable single-sign on.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory for which to enable single-sign on.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory for which to enable single-sign on.</p>
     */
    inline EnableSsoRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory for which to enable single-sign on.</p>
     */
    inline EnableSsoRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory for which to enable single-sign on.</p>
     */
    inline EnableSsoRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The username of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. This account must have privileges to add
     * a service principal name.</p> <p>If the AD Connector service account does not
     * have privileges to add a service principal name, you can specify an alternate
     * account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to enable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The username of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. This account must have privileges to add
     * a service principal name.</p> <p>If the AD Connector service account does not
     * have privileges to add a service principal name, you can specify an alternate
     * account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to enable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The username of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. This account must have privileges to add
     * a service principal name.</p> <p>If the AD Connector service account does not
     * have privileges to add a service principal name, you can specify an alternate
     * account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to enable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The username of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. This account must have privileges to add
     * a service principal name.</p> <p>If the AD Connector service account does not
     * have privileges to add a service principal name, you can specify an alternate
     * account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to enable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The username of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. This account must have privileges to add
     * a service principal name.</p> <p>If the AD Connector service account does not
     * have privileges to add a service principal name, you can specify an alternate
     * account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to enable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The username of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. This account must have privileges to add
     * a service principal name.</p> <p>If the AD Connector service account does not
     * have privileges to add a service principal name, you can specify an alternate
     * account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to enable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline EnableSsoRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The username of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. This account must have privileges to add
     * a service principal name.</p> <p>If the AD Connector service account does not
     * have privileges to add a service principal name, you can specify an alternate
     * account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to enable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline EnableSsoRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The username of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. This account must have privileges to add
     * a service principal name.</p> <p>If the AD Connector service account does not
     * have privileges to add a service principal name, you can specify an alternate
     * account with the <i>UserName</i> and <i>Password</i> parameters. These
     * credentials are only used to enable single sign-on and are not stored by the
     * service. The AD Connector service account is not changed.</p>
     */
    inline EnableSsoRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The password of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline EnableSsoRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline EnableSsoRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password of an alternate account to use to enable single-sign on. This is
     * only used for AD Connector directories. For more information, see the
     * <i>UserName</i> parameter.</p>
     */
    inline EnableSsoRequest& WithPassword(const char* value) { SetPassword(value); return *this;}

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
