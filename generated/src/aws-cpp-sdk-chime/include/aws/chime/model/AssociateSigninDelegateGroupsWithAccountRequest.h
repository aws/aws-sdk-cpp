/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/SigninDelegateGroup.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class AssociateSigninDelegateGroupsWithAccountRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API AssociateSigninDelegateGroupsWithAccountRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateSigninDelegateGroupsWithAccount"; }

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
    AssociateSigninDelegateGroupsWithAccountRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sign-in delegate groups.</p>
     */
    inline const Aws::Vector<SigninDelegateGroup>& GetSigninDelegateGroups() const { return m_signinDelegateGroups; }
    inline bool SigninDelegateGroupsHasBeenSet() const { return m_signinDelegateGroupsHasBeenSet; }
    template<typename SigninDelegateGroupsT = Aws::Vector<SigninDelegateGroup>>
    void SetSigninDelegateGroups(SigninDelegateGroupsT&& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups = std::forward<SigninDelegateGroupsT>(value); }
    template<typename SigninDelegateGroupsT = Aws::Vector<SigninDelegateGroup>>
    AssociateSigninDelegateGroupsWithAccountRequest& WithSigninDelegateGroups(SigninDelegateGroupsT&& value) { SetSigninDelegateGroups(std::forward<SigninDelegateGroupsT>(value)); return *this;}
    template<typename SigninDelegateGroupsT = SigninDelegateGroup>
    AssociateSigninDelegateGroupsWithAccountRequest& AddSigninDelegateGroups(SigninDelegateGroupsT&& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups.emplace_back(std::forward<SigninDelegateGroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<SigninDelegateGroup> m_signinDelegateGroups;
    bool m_signinDelegateGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
