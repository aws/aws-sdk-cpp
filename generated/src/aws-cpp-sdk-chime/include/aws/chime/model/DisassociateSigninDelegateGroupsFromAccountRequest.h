/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class DisassociateSigninDelegateGroupsFromAccountRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API DisassociateSigninDelegateGroupsFromAccountRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateSigninDelegateGroupsFromAccount"; }

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
    DisassociateSigninDelegateGroupsFromAccountRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sign-in delegate group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupNames() const { return m_groupNames; }
    inline bool GroupNamesHasBeenSet() const { return m_groupNamesHasBeenSet; }
    template<typename GroupNamesT = Aws::Vector<Aws::String>>
    void SetGroupNames(GroupNamesT&& value) { m_groupNamesHasBeenSet = true; m_groupNames = std::forward<GroupNamesT>(value); }
    template<typename GroupNamesT = Aws::Vector<Aws::String>>
    DisassociateSigninDelegateGroupsFromAccountRequest& WithGroupNames(GroupNamesT&& value) { SetGroupNames(std::forward<GroupNamesT>(value)); return *this;}
    template<typename GroupNamesT = Aws::String>
    DisassociateSigninDelegateGroupsFromAccountRequest& AddGroupNames(GroupNamesT&& value) { m_groupNamesHasBeenSet = true; m_groupNames.emplace_back(std::forward<GroupNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupNames;
    bool m_groupNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
