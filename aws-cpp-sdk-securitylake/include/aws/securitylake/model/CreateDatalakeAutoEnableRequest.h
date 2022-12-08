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
  class CreateDatalakeAutoEnableRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API CreateDatalakeAutoEnableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDatalakeAutoEnable"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>Enable Amazon Security Lake with the specified configurations settings to
     * begin ingesting security data for new accounts in Security Lake. </p>
     */
    inline const Aws::Vector<AutoEnableNewRegionConfiguration>& GetConfigurationForNewAccounts() const{ return m_configurationForNewAccounts; }

    /**
     * <p>Enable Amazon Security Lake with the specified configurations settings to
     * begin ingesting security data for new accounts in Security Lake. </p>
     */
    inline bool ConfigurationForNewAccountsHasBeenSet() const { return m_configurationForNewAccountsHasBeenSet; }

    /**
     * <p>Enable Amazon Security Lake with the specified configurations settings to
     * begin ingesting security data for new accounts in Security Lake. </p>
     */
    inline void SetConfigurationForNewAccounts(const Aws::Vector<AutoEnableNewRegionConfiguration>& value) { m_configurationForNewAccountsHasBeenSet = true; m_configurationForNewAccounts = value; }

    /**
     * <p>Enable Amazon Security Lake with the specified configurations settings to
     * begin ingesting security data for new accounts in Security Lake. </p>
     */
    inline void SetConfigurationForNewAccounts(Aws::Vector<AutoEnableNewRegionConfiguration>&& value) { m_configurationForNewAccountsHasBeenSet = true; m_configurationForNewAccounts = std::move(value); }

    /**
     * <p>Enable Amazon Security Lake with the specified configurations settings to
     * begin ingesting security data for new accounts in Security Lake. </p>
     */
    inline CreateDatalakeAutoEnableRequest& WithConfigurationForNewAccounts(const Aws::Vector<AutoEnableNewRegionConfiguration>& value) { SetConfigurationForNewAccounts(value); return *this;}

    /**
     * <p>Enable Amazon Security Lake with the specified configurations settings to
     * begin ingesting security data for new accounts in Security Lake. </p>
     */
    inline CreateDatalakeAutoEnableRequest& WithConfigurationForNewAccounts(Aws::Vector<AutoEnableNewRegionConfiguration>&& value) { SetConfigurationForNewAccounts(std::move(value)); return *this;}

    /**
     * <p>Enable Amazon Security Lake with the specified configurations settings to
     * begin ingesting security data for new accounts in Security Lake. </p>
     */
    inline CreateDatalakeAutoEnableRequest& AddConfigurationForNewAccounts(const AutoEnableNewRegionConfiguration& value) { m_configurationForNewAccountsHasBeenSet = true; m_configurationForNewAccounts.push_back(value); return *this; }

    /**
     * <p>Enable Amazon Security Lake with the specified configurations settings to
     * begin ingesting security data for new accounts in Security Lake. </p>
     */
    inline CreateDatalakeAutoEnableRequest& AddConfigurationForNewAccounts(AutoEnableNewRegionConfiguration&& value) { m_configurationForNewAccountsHasBeenSet = true; m_configurationForNewAccounts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AutoEnableNewRegionConfiguration> m_configurationForNewAccounts;
    bool m_configurationForNewAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
