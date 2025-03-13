/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/AuthenticationType.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class EnableUserRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API EnableUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableUser"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The email address of the user.</p>  <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays. </p>
     * 
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    EnableUserRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type for the user. You must specify USERPOOL.</p>
     */
    inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline EnableUserRequest& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    AuthenticationType m_authenticationType{AuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
