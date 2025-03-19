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
    AWS_GUARDDUTY_API UsageStatistics() = default;
    AWS_GUARDDUTY_API UsageStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UsageStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The usage statistic sum organized by account ID.</p>
     */
    inline const Aws::Vector<UsageAccountResult>& GetSumByAccount() const { return m_sumByAccount; }
    inline bool SumByAccountHasBeenSet() const { return m_sumByAccountHasBeenSet; }
    template<typename SumByAccountT = Aws::Vector<UsageAccountResult>>
    void SetSumByAccount(SumByAccountT&& value) { m_sumByAccountHasBeenSet = true; m_sumByAccount = std::forward<SumByAccountT>(value); }
    template<typename SumByAccountT = Aws::Vector<UsageAccountResult>>
    UsageStatistics& WithSumByAccount(SumByAccountT&& value) { SetSumByAccount(std::forward<SumByAccountT>(value)); return *this;}
    template<typename SumByAccountT = UsageAccountResult>
    UsageStatistics& AddSumByAccount(SumByAccountT&& value) { m_sumByAccountHasBeenSet = true; m_sumByAccount.emplace_back(std::forward<SumByAccountT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists the top 50 accounts by feature that have generated the most GuardDuty
     * usage, in the order from most to least expensive.</p> <p>Currently, this doesn't
     * support <code>RDS_LOGIN_EVENTS</code>.</p>
     */
    inline const Aws::Vector<UsageTopAccountsResult>& GetTopAccountsByFeature() const { return m_topAccountsByFeature; }
    inline bool TopAccountsByFeatureHasBeenSet() const { return m_topAccountsByFeatureHasBeenSet; }
    template<typename TopAccountsByFeatureT = Aws::Vector<UsageTopAccountsResult>>
    void SetTopAccountsByFeature(TopAccountsByFeatureT&& value) { m_topAccountsByFeatureHasBeenSet = true; m_topAccountsByFeature = std::forward<TopAccountsByFeatureT>(value); }
    template<typename TopAccountsByFeatureT = Aws::Vector<UsageTopAccountsResult>>
    UsageStatistics& WithTopAccountsByFeature(TopAccountsByFeatureT&& value) { SetTopAccountsByFeature(std::forward<TopAccountsByFeatureT>(value)); return *this;}
    template<typename TopAccountsByFeatureT = UsageTopAccountsResult>
    UsageStatistics& AddTopAccountsByFeature(TopAccountsByFeatureT&& value) { m_topAccountsByFeatureHasBeenSet = true; m_topAccountsByFeature.emplace_back(std::forward<TopAccountsByFeatureT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The usage statistic sum organized by on data source.</p>
     */
    inline const Aws::Vector<UsageDataSourceResult>& GetSumByDataSource() const { return m_sumByDataSource; }
    inline bool SumByDataSourceHasBeenSet() const { return m_sumByDataSourceHasBeenSet; }
    template<typename SumByDataSourceT = Aws::Vector<UsageDataSourceResult>>
    void SetSumByDataSource(SumByDataSourceT&& value) { m_sumByDataSourceHasBeenSet = true; m_sumByDataSource = std::forward<SumByDataSourceT>(value); }
    template<typename SumByDataSourceT = Aws::Vector<UsageDataSourceResult>>
    UsageStatistics& WithSumByDataSource(SumByDataSourceT&& value) { SetSumByDataSource(std::forward<SumByDataSourceT>(value)); return *this;}
    template<typename SumByDataSourceT = UsageDataSourceResult>
    UsageStatistics& AddSumByDataSource(SumByDataSourceT&& value) { m_sumByDataSourceHasBeenSet = true; m_sumByDataSource.emplace_back(std::forward<SumByDataSourceT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The usage statistic sum organized by resource.</p>
     */
    inline const Aws::Vector<UsageResourceResult>& GetSumByResource() const { return m_sumByResource; }
    inline bool SumByResourceHasBeenSet() const { return m_sumByResourceHasBeenSet; }
    template<typename SumByResourceT = Aws::Vector<UsageResourceResult>>
    void SetSumByResource(SumByResourceT&& value) { m_sumByResourceHasBeenSet = true; m_sumByResource = std::forward<SumByResourceT>(value); }
    template<typename SumByResourceT = Aws::Vector<UsageResourceResult>>
    UsageStatistics& WithSumByResource(SumByResourceT&& value) { SetSumByResource(std::forward<SumByResourceT>(value)); return *this;}
    template<typename SumByResourceT = UsageResourceResult>
    UsageStatistics& AddSumByResource(SumByResourceT&& value) { m_sumByResourceHasBeenSet = true; m_sumByResource.emplace_back(std::forward<SumByResourceT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists the top 50 resources that have generated the most GuardDuty usage, in
     * order from most to least expensive.</p>
     */
    inline const Aws::Vector<UsageResourceResult>& GetTopResources() const { return m_topResources; }
    inline bool TopResourcesHasBeenSet() const { return m_topResourcesHasBeenSet; }
    template<typename TopResourcesT = Aws::Vector<UsageResourceResult>>
    void SetTopResources(TopResourcesT&& value) { m_topResourcesHasBeenSet = true; m_topResources = std::forward<TopResourcesT>(value); }
    template<typename TopResourcesT = Aws::Vector<UsageResourceResult>>
    UsageStatistics& WithTopResources(TopResourcesT&& value) { SetTopResources(std::forward<TopResourcesT>(value)); return *this;}
    template<typename TopResourcesT = UsageResourceResult>
    UsageStatistics& AddTopResources(TopResourcesT&& value) { m_topResourcesHasBeenSet = true; m_topResources.emplace_back(std::forward<TopResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The usage statistic sum organized by feature.</p>
     */
    inline const Aws::Vector<UsageFeatureResult>& GetSumByFeature() const { return m_sumByFeature; }
    inline bool SumByFeatureHasBeenSet() const { return m_sumByFeatureHasBeenSet; }
    template<typename SumByFeatureT = Aws::Vector<UsageFeatureResult>>
    void SetSumByFeature(SumByFeatureT&& value) { m_sumByFeatureHasBeenSet = true; m_sumByFeature = std::forward<SumByFeatureT>(value); }
    template<typename SumByFeatureT = Aws::Vector<UsageFeatureResult>>
    UsageStatistics& WithSumByFeature(SumByFeatureT&& value) { SetSumByFeature(std::forward<SumByFeatureT>(value)); return *this;}
    template<typename SumByFeatureT = UsageFeatureResult>
    UsageStatistics& AddSumByFeature(SumByFeatureT&& value) { m_sumByFeatureHasBeenSet = true; m_sumByFeature.emplace_back(std::forward<SumByFeatureT>(value)); return *this; }
    ///@}
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
