/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class DeclineInvitationsRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API DeclineInvitationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeclineInvitations"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>An array that lists Amazon Web Services account IDs, one for each account
     * that sent an invitation to decline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>An array that lists Amazon Web Services account IDs, one for each account
     * that sent an invitation to decline.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>An array that lists Amazon Web Services account IDs, one for each account
     * that sent an invitation to decline.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>An array that lists Amazon Web Services account IDs, one for each account
     * that sent an invitation to decline.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>An array that lists Amazon Web Services account IDs, one for each account
     * that sent an invitation to decline.</p>
     */
    inline DeclineInvitationsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>An array that lists Amazon Web Services account IDs, one for each account
     * that sent an invitation to decline.</p>
     */
    inline DeclineInvitationsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>An array that lists Amazon Web Services account IDs, one for each account
     * that sent an invitation to decline.</p>
     */
    inline DeclineInvitationsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>An array that lists Amazon Web Services account IDs, one for each account
     * that sent an invitation to decline.</p>
     */
    inline DeclineInvitationsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that lists Amazon Web Services account IDs, one for each account
     * that sent an invitation to decline.</p>
     */
    inline DeclineInvitationsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
