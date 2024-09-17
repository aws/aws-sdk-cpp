/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/AutomatedDiscoveryAccountUpdate.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class BatchUpdateAutomatedDiscoveryAccountsRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API BatchUpdateAutomatedDiscoveryAccountsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateAutomatedDiscoveryAccounts"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An array of objects, one for each account to change the status of automated
     * sensitive data discovery for. Each object specifies the Amazon Web Services
     * account ID for an account and a new status for that account.</p>
     */
    inline const Aws::Vector<AutomatedDiscoveryAccountUpdate>& GetAccounts() const{ return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    inline void SetAccounts(const Aws::Vector<AutomatedDiscoveryAccountUpdate>& value) { m_accountsHasBeenSet = true; m_accounts = value; }
    inline void SetAccounts(Aws::Vector<AutomatedDiscoveryAccountUpdate>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }
    inline BatchUpdateAutomatedDiscoveryAccountsRequest& WithAccounts(const Aws::Vector<AutomatedDiscoveryAccountUpdate>& value) { SetAccounts(value); return *this;}
    inline BatchUpdateAutomatedDiscoveryAccountsRequest& WithAccounts(Aws::Vector<AutomatedDiscoveryAccountUpdate>&& value) { SetAccounts(std::move(value)); return *this;}
    inline BatchUpdateAutomatedDiscoveryAccountsRequest& AddAccounts(const AutomatedDiscoveryAccountUpdate& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }
    inline BatchUpdateAutomatedDiscoveryAccountsRequest& AddAccounts(AutomatedDiscoveryAccountUpdate&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AutomatedDiscoveryAccountUpdate> m_accounts;
    bool m_accountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
