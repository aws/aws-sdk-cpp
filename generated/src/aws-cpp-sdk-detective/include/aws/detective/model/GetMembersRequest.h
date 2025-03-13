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
  class GetMembersRequest : public DetectiveRequest
  {
  public:
    AWS_DETECTIVE_API GetMembersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMembers"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the behavior graph for which to request the member details.</p>
     */
    inline const Aws::String& GetGraphArn() const { return m_graphArn; }
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }
    template<typename GraphArnT = Aws::String>
    void SetGraphArn(GraphArnT&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::forward<GraphArnT>(value); }
    template<typename GraphArnT = Aws::String>
    GetMembersRequest& WithGraphArn(GraphArnT&& value) { SetGraphArn(std::forward<GraphArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Amazon Web Services account identifiers for the member account
     * for which to return member details. You can request details for up to 50 member
     * accounts at a time.</p> <p>You cannot use <code>GetMembers</code> to retrieve
     * information about member accounts that were removed from the behavior graph.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    GetMembersRequest& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    GetMembersRequest& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
