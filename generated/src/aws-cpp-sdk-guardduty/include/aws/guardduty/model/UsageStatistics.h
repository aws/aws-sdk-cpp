/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/UsageAccountResult.h>
#include <aws/guardduty/model/UsageTopAccountsResult.h>
#include <aws/guardduty/model/UsageDataSourceResult.h>
#include <aws/guardduty/model/UsageResourceResult.h>
#include <aws/guardduty/model/UsageFeatureResult.h>
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
   * <p>Contains the result of GuardDuty usage. If a UsageStatisticType is provided
   * the result for other types will be null. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UsageStatistics">AWS
   * API Reference</a></p>
   */
  class UsageStatistics
  {
  public:
    AWS_GUARDDUTY_API UsageStatistics();
    AWS_GUARDDUTY_API UsageStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UsageStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The usage statistic sum organized by account ID.</p>
     */
    inline const Aws::Vector<UsageAccountResult>& GetSumByAccount() const{ return m_sumByAccount; }

    /**
     * <p>The usage statistic sum organized by account ID.</p>
     */
    inline bool SumByAccountHasBeenSet() const { return m_sumByAccountHasBeenSet; }

    /**
     * <p>The usage statistic sum organized by account ID.</p>
     */
    inline void SetSumByAccount(const Aws::Vector<UsageAccountResult>& value) { m_sumByAccountHasBeenSet = true; m_sumByAccount = value; }

    /**
     * <p>The usage statistic sum organized by account ID.</p>
     */
    inline void SetSumByAccount(Aws::Vector<UsageAccountResult>&& value) { m_sumByAccountHasBeenSet = true; m_sumByAccount = std::move(value); }

    /**
     * <p>The usage statistic sum organized by account ID.</p>
     */
    inline UsageStatistics& WithSumByAccount(const Aws::Vector<UsageAccountResult>& value) { SetSumByAccount(value); return *this;}

    /**
     * <p>The usage statistic sum organized by account ID.</p>
     */
    inline UsageStatistics& WithSumByAccount(Aws::Vector<UsageAccountResult>&& value) { SetSumByAccount(std::move(value)); return *this;}

    /**
     * <p>The usage statistic sum organized by account ID.</p>
     */
    inline UsageStatistics& AddSumByAccount(const UsageAccountResult& value) { m_sumByAccountHasBeenSet = true; m_sumByAccount.push_back(value); return *this; }

    /**
     * <p>The usage statistic sum organized by account ID.</p>
     */
    inline UsageStatistics& AddSumByAccount(UsageAccountResult&& value) { m_sumByAccountHasBeenSet = true; m_sumByAccount.push_back(std::move(value)); return *this; }


    /**
     * <p>Lists the top 50 accounts by feature that have generated the most GuardDuty
     * usage, in the order from most to least expensive.</p> <p>Currently, this doesn't
     * support <code>RDS_LOGIN_EVENTS</code>.</p>
     */
    inline const Aws::Vector<UsageTopAccountsResult>& GetTopAccountsByFeature() const{ return m_topAccountsByFeature; }

    /**
     * <p>Lists the top 50 accounts by feature that have generated the most GuardDuty
     * usage, in the order from most to least expensive.</p> <p>Currently, this doesn't
     * support <code>RDS_LOGIN_EVENTS</code>.</p>
     */
    inline bool TopAccountsByFeatureHasBeenSet() const { return m_topAccountsByFeatureHasBeenSet; }

    /**
     * <p>Lists the top 50 accounts by feature that have generated the most GuardDuty
     * usage, in the order from most to least expensive.</p> <p>Currently, this doesn't
     * support <code>RDS_LOGIN_EVENTS</code>.</p>
     */
    inline void SetTopAccountsByFeature(const Aws::Vector<UsageTopAccountsResult>& value) { m_topAccountsByFeatureHasBeenSet = true; m_topAccountsByFeature = value; }

    /**
     * <p>Lists the top 50 accounts by feature that have generated the most GuardDuty
     * usage, in the order from most to least expensive.</p> <p>Currently, this doesn't
     * support <code>RDS_LOGIN_EVENTS</code>.</p>
     */
    inline void SetTopAccountsByFeature(Aws::Vector<UsageTopAccountsResult>&& value) { m_topAccountsByFeatureHasBeenSet = true; m_topAccountsByFeature = std::move(value); }

    /**
     * <p>Lists the top 50 accounts by feature that have generated the most GuardDuty
     * usage, in the order from most to least expensive.</p> <p>Currently, this doesn't
     * support <code>RDS_LOGIN_EVENTS</code>.</p>
     */
    inline UsageStatistics& WithTopAccountsByFeature(const Aws::Vector<UsageTopAccountsResult>& value) { SetTopAccountsByFeature(value); return *this;}

    /**
     * <p>Lists the top 50 accounts by feature that have generated the most GuardDuty
     * usage, in the order from most to least expensive.</p> <p>Currently, this doesn't
     * support <code>RDS_LOGIN_EVENTS</code>.</p>
     */
    inline UsageStatistics& WithTopAccountsByFeature(Aws::Vector<UsageTopAccountsResult>&& value) { SetTopAccountsByFeature(std::move(value)); return *this;}

    /**
     * <p>Lists the top 50 accounts by feature that have generated the most GuardDuty
     * usage, in the order from most to least expensive.</p> <p>Currently, this doesn't
     * support <code>RDS_LOGIN_EVENTS</code>.</p>
     */
    inline UsageStatistics& AddTopAccountsByFeature(const UsageTopAccountsResult& value) { m_topAccountsByFeatureHasBeenSet = true; m_topAccountsByFeature.push_back(value); return *this; }

    /**
     * <p>Lists the top 50 accounts by feature that have generated the most GuardDuty
     * usage, in the order from most to least expensive.</p> <p>Currently, this doesn't
     * support <code>RDS_LOGIN_EVENTS</code>.</p>
     */
    inline UsageStatistics& AddTopAccountsByFeature(UsageTopAccountsResult&& value) { m_topAccountsByFeatureHasBeenSet = true; m_topAccountsByFeature.push_back(std::move(value)); return *this; }


    /**
     * <p>The usage statistic sum organized by on data source.</p>
     */
    inline const Aws::Vector<UsageDataSourceResult>& GetSumByDataSource() const{ return m_sumByDataSource; }

    /**
     * <p>The usage statistic sum organized by on data source.</p>
     */
    inline bool SumByDataSourceHasBeenSet() const { return m_sumByDataSourceHasBeenSet; }

    /**
     * <p>The usage statistic sum organized by on data source.</p>
     */
    inline void SetSumByDataSource(const Aws::Vector<UsageDataSourceResult>& value) { m_sumByDataSourceHasBeenSet = true; m_sumByDataSource = value; }

    /**
     * <p>The usage statistic sum organized by on data source.</p>
     */
    inline void SetSumByDataSource(Aws::Vector<UsageDataSourceResult>&& value) { m_sumByDataSourceHasBeenSet = true; m_sumByDataSource = std::move(value); }

    /**
     * <p>The usage statistic sum organized by on data source.</p>
     */
    inline UsageStatistics& WithSumByDataSource(const Aws::Vector<UsageDataSourceResult>& value) { SetSumByDataSource(value); return *this;}

    /**
     * <p>The usage statistic sum organized by on data source.</p>
     */
    inline UsageStatistics& WithSumByDataSource(Aws::Vector<UsageDataSourceResult>&& value) { SetSumByDataSource(std::move(value)); return *this;}

    /**
     * <p>The usage statistic sum organized by on data source.</p>
     */
    inline UsageStatistics& AddSumByDataSource(const UsageDataSourceResult& value) { m_sumByDataSourceHasBeenSet = true; m_sumByDataSource.push_back(value); return *this; }

    /**
     * <p>The usage statistic sum organized by on data source.</p>
     */
    inline UsageStatistics& AddSumByDataSource(UsageDataSourceResult&& value) { m_sumByDataSourceHasBeenSet = true; m_sumByDataSource.push_back(std::move(value)); return *this; }


    /**
     * <p>The usage statistic sum organized by resource.</p>
     */
    inline const Aws::Vector<UsageResourceResult>& GetSumByResource() const{ return m_sumByResource; }

    /**
     * <p>The usage statistic sum organized by resource.</p>
     */
    inline bool SumByResourceHasBeenSet() const { return m_sumByResourceHasBeenSet; }

    /**
     * <p>The usage statistic sum organized by resource.</p>
     */
    inline void SetSumByResource(const Aws::Vector<UsageResourceResult>& value) { m_sumByResourceHasBeenSet = true; m_sumByResource = value; }

    /**
     * <p>The usage statistic sum organized by resource.</p>
     */
    inline void SetSumByResource(Aws::Vector<UsageResourceResult>&& value) { m_sumByResourceHasBeenSet = true; m_sumByResource = std::move(value); }

    /**
     * <p>The usage statistic sum organized by resource.</p>
     */
    inline UsageStatistics& WithSumByResource(const Aws::Vector<UsageResourceResult>& value) { SetSumByResource(value); return *this;}

    /**
     * <p>The usage statistic sum organized by resource.</p>
     */
    inline UsageStatistics& WithSumByResource(Aws::Vector<UsageResourceResult>&& value) { SetSumByResource(std::move(value)); return *this;}

    /**
     * <p>The usage statistic sum organized by resource.</p>
     */
    inline UsageStatistics& AddSumByResource(const UsageResourceResult& value) { m_sumByResourceHasBeenSet = true; m_sumByResource.push_back(value); return *this; }

    /**
     * <p>The usage statistic sum organized by resource.</p>
     */
    inline UsageStatistics& AddSumByResource(UsageResourceResult&& value) { m_sumByResourceHasBeenSet = true; m_sumByResource.push_back(std::move(value)); return *this; }


    /**
     * <p>Lists the top 50 resources that have generated the most GuardDuty usage, in
     * order from most to least expensive.</p>
     */
    inline const Aws::Vector<UsageResourceResult>& GetTopResources() const{ return m_topResources; }

    /**
     * <p>Lists the top 50 resources that have generated the most GuardDuty usage, in
     * order from most to least expensive.</p>
     */
    inline bool TopResourcesHasBeenSet() const { return m_topResourcesHasBeenSet; }

    /**
     * <p>Lists the top 50 resources that have generated the most GuardDuty usage, in
     * order from most to least expensive.</p>
     */
    inline void SetTopResources(const Aws::Vector<UsageResourceResult>& value) { m_topResourcesHasBeenSet = true; m_topResources = value; }

    /**
     * <p>Lists the top 50 resources that have generated the most GuardDuty usage, in
     * order from most to least expensive.</p>
     */
    inline void SetTopResources(Aws::Vector<UsageResourceResult>&& value) { m_topResourcesHasBeenSet = true; m_topResources = std::move(value); }

    /**
     * <p>Lists the top 50 resources that have generated the most GuardDuty usage, in
     * order from most to least expensive.</p>
     */
    inline UsageStatistics& WithTopResources(const Aws::Vector<UsageResourceResult>& value) { SetTopResources(value); return *this;}

    /**
     * <p>Lists the top 50 resources that have generated the most GuardDuty usage, in
     * order from most to least expensive.</p>
     */
    inline UsageStatistics& WithTopResources(Aws::Vector<UsageResourceResult>&& value) { SetTopResources(std::move(value)); return *this;}

    /**
     * <p>Lists the top 50 resources that have generated the most GuardDuty usage, in
     * order from most to least expensive.</p>
     */
    inline UsageStatistics& AddTopResources(const UsageResourceResult& value) { m_topResourcesHasBeenSet = true; m_topResources.push_back(value); return *this; }

    /**
     * <p>Lists the top 50 resources that have generated the most GuardDuty usage, in
     * order from most to least expensive.</p>
     */
    inline UsageStatistics& AddTopResources(UsageResourceResult&& value) { m_topResourcesHasBeenSet = true; m_topResources.push_back(std::move(value)); return *this; }


    /**
     * <p>The usage statistic sum organized by feature.</p>
     */
    inline const Aws::Vector<UsageFeatureResult>& GetSumByFeature() const{ return m_sumByFeature; }

    /**
     * <p>The usage statistic sum organized by feature.</p>
     */
    inline bool SumByFeatureHasBeenSet() const { return m_sumByFeatureHasBeenSet; }

    /**
     * <p>The usage statistic sum organized by feature.</p>
     */
    inline void SetSumByFeature(const Aws::Vector<UsageFeatureResult>& value) { m_sumByFeatureHasBeenSet = true; m_sumByFeature = value; }

    /**
     * <p>The usage statistic sum organized by feature.</p>
     */
    inline void SetSumByFeature(Aws::Vector<UsageFeatureResult>&& value) { m_sumByFeatureHasBeenSet = true; m_sumByFeature = std::move(value); }

    /**
     * <p>The usage statistic sum organized by feature.</p>
     */
    inline UsageStatistics& WithSumByFeature(const Aws::Vector<UsageFeatureResult>& value) { SetSumByFeature(value); return *this;}

    /**
     * <p>The usage statistic sum organized by feature.</p>
     */
    inline UsageStatistics& WithSumByFeature(Aws::Vector<UsageFeatureResult>&& value) { SetSumByFeature(std::move(value)); return *this;}

    /**
     * <p>The usage statistic sum organized by feature.</p>
     */
    inline UsageStatistics& AddSumByFeature(const UsageFeatureResult& value) { m_sumByFeatureHasBeenSet = true; m_sumByFeature.push_back(value); return *this; }

    /**
     * <p>The usage statistic sum organized by feature.</p>
     */
    inline UsageStatistics& AddSumByFeature(UsageFeatureResult&& value) { m_sumByFeatureHasBeenSet = true; m_sumByFeature.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UsageAccountResult> m_sumByAccount;
    bool m_sumByAccountHasBeenSet = false;

    Aws::Vector<UsageTopAccountsResult> m_topAccountsByFeature;
    bool m_topAccountsByFeatureHasBeenSet = false;

    Aws::Vector<UsageDataSourceResult> m_sumByDataSource;
    bool m_sumByDataSourceHasBeenSet = false;

    Aws::Vector<UsageResourceResult> m_sumByResource;
    bool m_sumByResourceHasBeenSet = false;

    Aws::Vector<UsageResourceResult> m_topResources;
    bool m_topResourcesHasBeenSet = false;

    Aws::Vector<UsageFeatureResult> m_sumByFeature;
    bool m_sumByFeatureHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
