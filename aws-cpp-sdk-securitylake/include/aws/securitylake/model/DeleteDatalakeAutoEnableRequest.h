/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/AutoEnableNewRegionConfiguration.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class DeleteDatalakeAutoEnableRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API DeleteDatalakeAutoEnableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDatalakeAutoEnable"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>Delete Amazon Security Lake with the specified configurations settings to
     * stop ingesting security data for new accounts in Security Lake. </p>
     */
    inline const Aws::Vector<AutoEnableNewRegionConfiguration>& GetRemoveFromConfigurationForNewAccounts() const{ return m_removeFromConfigurationForNewAccounts; }

    /**
     * <p>Delete Amazon Security Lake with the specified configurations settings to
     * stop ingesting security data for new accounts in Security Lake. </p>
     */
    inline bool RemoveFromConfigurationForNewAccountsHasBeenSet() const { return m_removeFromConfigurationForNewAccountsHasBeenSet; }

    /**
     * <p>Delete Amazon Security Lake with the specified configurations settings to
     * stop ingesting security data for new accounts in Security Lake. </p>
     */
    inline void SetRemoveFromConfigurationForNewAccounts(const Aws::Vector<AutoEnableNewRegionConfiguration>& value) { m_removeFromConfigurationForNewAccountsHasBeenSet = true; m_removeFromConfigurationForNewAccounts = value; }

    /**
     * <p>Delete Amazon Security Lake with the specified configurations settings to
     * stop ingesting security data for new accounts in Security Lake. </p>
     */
    inline void SetRemoveFromConfigurationForNewAccounts(Aws::Vector<AutoEnableNewRegionConfiguration>&& value) { m_removeFromConfigurationForNewAccountsHasBeenSet = true; m_removeFromConfigurationForNewAccounts = std::move(value); }

    /**
     * <p>Delete Amazon Security Lake with the specified configurations settings to
     * stop ingesting security data for new accounts in Security Lake. </p>
     */
    inline DeleteDatalakeAutoEnableRequest& WithRemoveFromConfigurationForNewAccounts(const Aws::Vector<AutoEnableNewRegionConfiguration>& value) { SetRemoveFromConfigurationForNewAccounts(value); return *this;}

    /**
     * <p>Delete Amazon Security Lake with the specified configurations settings to
     * stop ingesting security data for new accounts in Security Lake. </p>
     */
    inline DeleteDatalakeAutoEnableRequest& WithRemoveFromConfigurationForNewAccounts(Aws::Vector<AutoEnableNewRegionConfiguration>&& value) { SetRemoveFromConfigurationForNewAccounts(std::move(value)); return *this;}

    /**
     * <p>Delete Amazon Security Lake with the specified configurations settings to
     * stop ingesting security data for new accounts in Security Lake. </p>
     */
    inline DeleteDatalakeAutoEnableRequest& AddRemoveFromConfigurationForNewAccounts(const AutoEnableNewRegionConfiguration& value) { m_removeFromConfigurationForNewAccountsHasBeenSet = true; m_removeFromConfigurationForNewAccounts.push_back(value); return *this; }

    /**
     * <p>Delete Amazon Security Lake with the specified configurations settings to
     * stop ingesting security data for new accounts in Security Lake. </p>
     */
    inline DeleteDatalakeAutoEnableRequest& AddRemoveFromConfigurationForNewAccounts(AutoEnableNewRegionConfiguration&& value) { m_removeFromConfigurationForNewAccountsHasBeenSet = true; m_removeFromConfigurationForNewAccounts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AutoEnableNewRegionConfiguration> m_removeFromConfigurationForNewAccounts;
    bool m_removeFromConfigurationForNewAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
