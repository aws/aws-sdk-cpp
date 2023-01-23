/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/DataSource.h>
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
   * <p>Contains information about the criteria used to query usage
   * statistics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UsageCriteria">AWS
   * API Reference</a></p>
   */
  class UsageCriteria
  {
  public:
    AWS_GUARDDUTY_API UsageCriteria();
    AWS_GUARDDUTY_API UsageCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UsageCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>The data sources to aggregate usage statistics from.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const{ return m_dataSources; }

    /**
     * <p>The data sources to aggregate usage statistics from.</p>
     */
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }

    /**
     * <p>The data sources to aggregate usage statistics from.</p>
     */
    inline void SetDataSources(const Aws::Vector<DataSource>& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }

    /**
     * <p>The data sources to aggregate usage statistics from.</p>
     */
    inline void SetDataSources(Aws::Vector<DataSource>&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }

    /**
     * <p>The data sources to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& WithDataSources(const Aws::Vector<DataSource>& value) { SetDataSources(value); return *this;}

    /**
     * <p>The data sources to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& WithDataSources(Aws::Vector<DataSource>&& value) { SetDataSources(std::move(value)); return *this;}

    /**
     * <p>The data sources to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& AddDataSources(const DataSource& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(value); return *this; }

    /**
     * <p>The data sources to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& AddDataSources(DataSource&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(std::move(value)); return *this; }


    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const{ return m_resources; }

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline void SetResources(const Aws::Vector<Aws::String>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline void SetResources(Aws::Vector<Aws::String>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline UsageCriteria& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline UsageCriteria& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline UsageCriteria& AddResources(const Aws::String& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline UsageCriteria& AddResources(Aws::String&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline UsageCriteria& AddResources(const char* value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<DataSource> m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
