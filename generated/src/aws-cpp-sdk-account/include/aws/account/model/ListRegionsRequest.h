/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/AccountRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/account/model/RegionOptStatus.h>
#include <utility>

namespace Aws
{
namespace Account
{
namespace Model
{

  /**
   */
  class ListRegionsRequest : public AccountRequest
  {
  public:
    AWS_ACCOUNT_API ListRegionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRegions"; }

    AWS_ACCOUNT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the 12-digit account ID number of the Amazon Web Services account
     * that you want to access or modify with this operation. If you don't specify this
     * parameter, it defaults to the Amazon Web Services account of the identity used
     * to call the operation. To use this parameter, the caller must be an identity in
     * the <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#account">organization's
     * management account</a> or a delegated administrator account. The specified
     * account ID must be a member account in the same organization. The organization
     * must have <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">all
     * features enabled</a>, and the organization must have <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">trusted
     * access</a> enabled for the Account Management service, and optionally a <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#delegated-admin">delegated
     * admin</a> account assigned.</p>  <p>The management account can't specify
     * its own <code>AccountId</code>. It must call the operation in standalone context
     * by not including the <code>AccountId</code> parameter.</p>  <p>To call
     * this operation on an account that is not a member of an organization, don't
     * specify this parameter. Instead, call the operation using an identity belonging
     * to the account whose contacts you wish to retrieve or modify.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ListRegionsRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of items to return in the command’s output. If the total
     * number of items available is more than the value specified, a
     * <code>NextToken</code> is provided in the command’s output. To resume
     * pagination, provide the <code>NextToken</code> value in the
     * <code>starting-token</code> argument of a subsequent command. Do not use the
     * <code>NextToken</code> response element directly outside of the Amazon Web
     * Services CLI. For usage examples, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Pagination</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRegionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response. For usage examples,
     * see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Pagination</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRegionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Region statuses (Enabling, Enabled, Disabling, Disabled,
     * Enabled_by_default) to use to filter the list of Regions for a given account.
     * For example, passing in a value of ENABLING will only return a list of Regions
     * with a Region status of ENABLING.</p>
     */
    inline const Aws::Vector<RegionOptStatus>& GetRegionOptStatusContains() const { return m_regionOptStatusContains; }
    inline bool RegionOptStatusContainsHasBeenSet() const { return m_regionOptStatusContainsHasBeenSet; }
    template<typename RegionOptStatusContainsT = Aws::Vector<RegionOptStatus>>
    void SetRegionOptStatusContains(RegionOptStatusContainsT&& value) { m_regionOptStatusContainsHasBeenSet = true; m_regionOptStatusContains = std::forward<RegionOptStatusContainsT>(value); }
    template<typename RegionOptStatusContainsT = Aws::Vector<RegionOptStatus>>
    ListRegionsRequest& WithRegionOptStatusContains(RegionOptStatusContainsT&& value) { SetRegionOptStatusContains(std::forward<RegionOptStatusContainsT>(value)); return *this;}
    inline ListRegionsRequest& AddRegionOptStatusContains(RegionOptStatus value) { m_regionOptStatusContainsHasBeenSet = true; m_regionOptStatusContains.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RegionOptStatus> m_regionOptStatusContains;
    bool m_regionOptStatusContainsHasBeenSet = false;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
