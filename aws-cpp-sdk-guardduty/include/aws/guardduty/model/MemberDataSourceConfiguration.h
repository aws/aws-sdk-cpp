/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/DataSourceConfigurationsResult.h>
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
   * <p>Contains information on which data sources are enabled for a member
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/MemberDataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class MemberDataSourceConfiguration
  {
  public:
    AWS_GUARDDUTY_API MemberDataSourceConfiguration();
    AWS_GUARDDUTY_API MemberDataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API MemberDataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account ID for the member account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID for the member account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID for the member account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID for the member account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID for the member account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID for the member account.</p>
     */
    inline MemberDataSourceConfiguration& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID for the member account.</p>
     */
    inline MemberDataSourceConfiguration& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID for the member account.</p>
     */
    inline MemberDataSourceConfiguration& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Contains information on the status of data sources for the account.</p>
     */
    inline const DataSourceConfigurationsResult& GetDataSources() const{ return m_dataSources; }

    /**
     * <p>Contains information on the status of data sources for the account.</p>
     */
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }

    /**
     * <p>Contains information on the status of data sources for the account.</p>
     */
    inline void SetDataSources(const DataSourceConfigurationsResult& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }

    /**
     * <p>Contains information on the status of data sources for the account.</p>
     */
    inline void SetDataSources(DataSourceConfigurationsResult&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }

    /**
     * <p>Contains information on the status of data sources for the account.</p>
     */
    inline MemberDataSourceConfiguration& WithDataSources(const DataSourceConfigurationsResult& value) { SetDataSources(value); return *this;}

    /**
     * <p>Contains information on the status of data sources for the account.</p>
     */
    inline MemberDataSourceConfiguration& WithDataSources(DataSourceConfigurationsResult&& value) { SetDataSources(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    DataSourceConfigurationsResult m_dataSources;
    bool m_dataSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
