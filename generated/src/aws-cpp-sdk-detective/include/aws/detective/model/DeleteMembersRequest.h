/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class DeleteMembersRequest : public DetectiveRequest
  {
  public:
    AWS_DETECTIVE_API DeleteMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMembers"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the behavior graph to remove members from.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The ARN of the behavior graph to remove members from.</p>
     */
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }

    /**
     * <p>The ARN of the behavior graph to remove members from.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }

    /**
     * <p>The ARN of the behavior graph to remove members from.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }

    /**
     * <p>The ARN of the behavior graph to remove members from.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }

    /**
     * <p>The ARN of the behavior graph to remove members from.</p>
     */
    inline DeleteMembersRequest& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The ARN of the behavior graph to remove members from.</p>
     */
    inline DeleteMembersRequest& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the behavior graph to remove members from.</p>
     */
    inline DeleteMembersRequest& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}


    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * to remove from the behavior graph. You can remove up to 50 member accounts at a
     * time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * to remove from the behavior graph. You can remove up to 50 member accounts at a
     * time.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * to remove from the behavior graph. You can remove up to 50 member accounts at a
     * time.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * to remove from the behavior graph. You can remove up to 50 member accounts at a
     * time.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * to remove from the behavior graph. You can remove up to 50 member accounts at a
     * time.</p>
     */
    inline DeleteMembersRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * to remove from the behavior graph. You can remove up to 50 member accounts at a
     * time.</p>
     */
    inline DeleteMembersRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * to remove from the behavior graph. You can remove up to 50 member accounts at a
     * time.</p>
     */
    inline DeleteMembersRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * to remove from the behavior graph. You can remove up to 50 member accounts at a
     * time.</p>
     */
    inline DeleteMembersRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * to remove from the behavior graph. You can remove up to 50 member accounts at a
     * time.</p>
     */
    inline DeleteMembersRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
