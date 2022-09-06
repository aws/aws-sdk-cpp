﻿/**
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
  class AWS_GUARDDUTY_API DeleteInvitationsRequest : public GuardDutyRequest
  {
  public:
    DeleteInvitationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInvitations"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A list of account IDs of the Amazon Web Services accounts that sent
     * invitations to the current member account that you want to delete invitations
     * from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>A list of account IDs of the Amazon Web Services accounts that sent
     * invitations to the current member account that you want to delete invitations
     * from.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>A list of account IDs of the Amazon Web Services accounts that sent
     * invitations to the current member account that you want to delete invitations
     * from.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>A list of account IDs of the Amazon Web Services accounts that sent
     * invitations to the current member account that you want to delete invitations
     * from.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>A list of account IDs of the Amazon Web Services accounts that sent
     * invitations to the current member account that you want to delete invitations
     * from.</p>
     */
    inline DeleteInvitationsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>A list of account IDs of the Amazon Web Services accounts that sent
     * invitations to the current member account that you want to delete invitations
     * from.</p>
     */
    inline DeleteInvitationsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>A list of account IDs of the Amazon Web Services accounts that sent
     * invitations to the current member account that you want to delete invitations
     * from.</p>
     */
    inline DeleteInvitationsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>A list of account IDs of the Amazon Web Services accounts that sent
     * invitations to the current member account that you want to delete invitations
     * from.</p>
     */
    inline DeleteInvitationsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of account IDs of the Amazon Web Services accounts that sent
     * invitations to the current member account that you want to delete invitations
     * from.</p>
     */
    inline DeleteInvitationsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
