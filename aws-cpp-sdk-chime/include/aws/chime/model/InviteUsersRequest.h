/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/UserType.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class InviteUsersRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API InviteUsersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InviteUsers"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline InviteUsersRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline InviteUsersRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline InviteUsersRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The user email addresses to which to send the email invitation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserEmailList() const{ return m_userEmailList; }

    /**
     * <p>The user email addresses to which to send the email invitation.</p>
     */
    inline bool UserEmailListHasBeenSet() const { return m_userEmailListHasBeenSet; }

    /**
     * <p>The user email addresses to which to send the email invitation.</p>
     */
    inline void SetUserEmailList(const Aws::Vector<Aws::String>& value) { m_userEmailListHasBeenSet = true; m_userEmailList = value; }

    /**
     * <p>The user email addresses to which to send the email invitation.</p>
     */
    inline void SetUserEmailList(Aws::Vector<Aws::String>&& value) { m_userEmailListHasBeenSet = true; m_userEmailList = std::move(value); }

    /**
     * <p>The user email addresses to which to send the email invitation.</p>
     */
    inline InviteUsersRequest& WithUserEmailList(const Aws::Vector<Aws::String>& value) { SetUserEmailList(value); return *this;}

    /**
     * <p>The user email addresses to which to send the email invitation.</p>
     */
    inline InviteUsersRequest& WithUserEmailList(Aws::Vector<Aws::String>&& value) { SetUserEmailList(std::move(value)); return *this;}

    /**
     * <p>The user email addresses to which to send the email invitation.</p>
     */
    inline InviteUsersRequest& AddUserEmailList(const Aws::String& value) { m_userEmailListHasBeenSet = true; m_userEmailList.push_back(value); return *this; }

    /**
     * <p>The user email addresses to which to send the email invitation.</p>
     */
    inline InviteUsersRequest& AddUserEmailList(Aws::String&& value) { m_userEmailListHasBeenSet = true; m_userEmailList.push_back(std::move(value)); return *this; }

    /**
     * <p>The user email addresses to which to send the email invitation.</p>
     */
    inline InviteUsersRequest& AddUserEmailList(const char* value) { m_userEmailListHasBeenSet = true; m_userEmailList.push_back(value); return *this; }


    /**
     * <p>The user type.</p>
     */
    inline const UserType& GetUserType() const{ return m_userType; }

    /**
     * <p>The user type.</p>
     */
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }

    /**
     * <p>The user type.</p>
     */
    inline void SetUserType(const UserType& value) { m_userTypeHasBeenSet = true; m_userType = value; }

    /**
     * <p>The user type.</p>
     */
    inline void SetUserType(UserType&& value) { m_userTypeHasBeenSet = true; m_userType = std::move(value); }

    /**
     * <p>The user type.</p>
     */
    inline InviteUsersRequest& WithUserType(const UserType& value) { SetUserType(value); return *this;}

    /**
     * <p>The user type.</p>
     */
    inline InviteUsersRequest& WithUserType(UserType&& value) { SetUserType(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_userEmailList;
    bool m_userEmailListHasBeenSet = false;

    UserType m_userType;
    bool m_userTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
