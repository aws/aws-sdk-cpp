/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DataSource.h>
#include <aws/guardduty/model/Total.h>
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
   * <p>Contains information on the result of usage based on data source
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UsageDataSourceResult">AWS
   * API Reference</a></p>
   */
  class UsageDataSourceResult
  {
  public:
    AWS_GUARDDUTY_API UsageDataSourceResult();
    AWS_GUARDDUTY_API UsageDataSourceResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UsageDataSourceResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data source type that generated usage.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The data source type that generated usage.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The data source type that generated usage.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The data source type that generated usage.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The data source type that generated usage.</p>
     */
    inline UsageDataSourceResult& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The data source type that generated usage.</p>
     */
    inline UsageDataSourceResult& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>Represents the total of usage for the specified data source.</p>
     */
    inline const Total& GetTotal() const{ return m_total; }

    /**
     * <p>Represents the total of usage for the specified data source.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>Represents the total of usage for the specified data source.</p>
     */
    inline void SetTotal(const Total& value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>Represents the total of usage for the specified data source.</p>
     */
    inline void SetTotal(Total&& value) { m_totalHasBeenSet = true; m_total = std::move(value); }

    /**
     * <p>Represents the total of usage for the specified data source.</p>
     */
    inline UsageDataSourceResult& WithTotal(const Total& value) { SetTotal(value); return *this;}

    /**
     * <p>Represents the total of usage for the specified data source.</p>
     */
    inline UsageDataSourceResult& WithTotal(Total&& value) { SetTotal(std::move(value)); return *this;}

  private:

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Total m_total;
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
