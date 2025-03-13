/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class DeleteInvitationsRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API DeleteInvitationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInvitations"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of account IDs of the Amazon Web Services accounts that sent
     * invitations to the current member account that you want to delete invitations
     * from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    DeleteInvitationsRequest& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    DeleteInvitationsRequest& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
