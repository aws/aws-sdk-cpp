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
    AWS_GUARDDUTY_API UsageDataSourceResult() = default;
    AWS_GUARDDUTY_API UsageDataSourceResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UsageDataSourceResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data source type that generated usage.</p>
     */
    inline DataSource GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(DataSource value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline UsageDataSourceResult& WithDataSource(DataSource value) { SetDataSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the total of usage for the specified data source.</p>
     */
    inline const Total& GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    template<typename TotalT = Total>
    void SetTotal(TotalT&& value) { m_totalHasBeenSet = true; m_total = std::forward<TotalT>(value); }
    template<typename TotalT = Total>
    UsageDataSourceResult& WithTotal(TotalT&& value) { SetTotal(std::forward<TotalT>(value)); return *this;}
    ///@}
  private:

    DataSource m_dataSource{DataSource::NOT_SET};
    bool m_dataSourceHasBeenSet = false;

    Total m_total;
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
