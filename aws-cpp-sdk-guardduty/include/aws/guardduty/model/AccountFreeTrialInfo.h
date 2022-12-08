/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/DataSourcesFreeTrial.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Provides details of the GuardDuty member account that uses a free trial
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AccountFreeTrialInfo">AWS
   * API Reference</a></p>
   */
  class AccountFreeTrialInfo
  {
  public:
    AWS_GUARDDUTY_API AccountFreeTrialInfo();
    AWS_GUARDDUTY_API AccountFreeTrialInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AccountFreeTrialInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline AccountFreeTrialInfo& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline AccountFreeTrialInfo& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline AccountFreeTrialInfo& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Describes the data source enabled for the GuardDuty member account.</p>
     */
    inline const DataSourcesFreeTrial& GetDataSources() const{ return m_dataSources; }

    /**
     * <p>Describes the data source enabled for the GuardDuty member account.</p>
     */
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }

    /**
     * <p>Describes the data source enabled for the GuardDuty member account.</p>
     */
    inline void SetDataSources(const DataSourcesFreeTrial& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }

    /**
     * <p>Describes the data source enabled for the GuardDuty member account.</p>
     */
    inline void SetDataSources(DataSourcesFreeTrial&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }

    /**
     * <p>Describes the data source enabled for the GuardDuty member account.</p>
     */
    inline AccountFreeTrialInfo& WithDataSources(const DataSourcesFreeTrial& value) { SetDataSources(value); return *this;}

    /**
     * <p>Describes the data source enabled for the GuardDuty member account.</p>
     */
    inline AccountFreeTrialInfo& WithDataSources(DataSourcesFreeTrial&& value) { SetDataSources(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    DataSourcesFreeTrial m_dataSources;
    bool m_dataSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
