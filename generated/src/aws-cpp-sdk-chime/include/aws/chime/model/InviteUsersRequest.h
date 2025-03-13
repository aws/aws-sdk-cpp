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
    AWS_CHIME_API InviteUsersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InviteUsers"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    InviteUsersRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user email addresses to which to send the email invitation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserEmailList() const { return m_userEmailList; }
    inline bool UserEmailListHasBeenSet() const { return m_userEmailListHasBeenSet; }
    template<typename UserEmailListT = Aws::Vector<Aws::String>>
    void SetUserEmailList(UserEmailListT&& value) { m_userEmailListHasBeenSet = true; m_userEmailList = std::forward<UserEmailListT>(value); }
    template<typename UserEmailListT = Aws::Vector<Aws::String>>
    InviteUsersRequest& WithUserEmailList(UserEmailListT&& value) { SetUserEmailList(std::forward<UserEmailListT>(value)); return *this;}
    template<typename UserEmailListT = Aws::String>
    InviteUsersRequest& AddUserEmailList(UserEmailListT&& value) { m_userEmailListHasBeenSet = true; m_userEmailList.emplace_back(std::forward<UserEmailListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user type.</p>
     */
    inline UserType GetUserType() const { return m_userType; }
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }
    inline void SetUserType(UserType value) { m_userTypeHasBeenSet = true; m_userType = value; }
    inline InviteUsersRequest& WithUserType(UserType value) { SetUserType(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_userEmailList;
    bool m_userEmailListHasBeenSet = false;

    UserType m_userType{UserType::NOT_SET};
    bool m_userTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
