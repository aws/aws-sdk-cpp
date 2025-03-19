/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotanalytics/model/QueryFilter.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>The SQL query to modify the message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/SqlQueryDatasetAction">AWS
   * API Reference</a></p>
   */
  class SqlQueryDatasetAction
  {
  public:
    AWS_IOTANALYTICS_API SqlQueryDatasetAction() = default;
    AWS_IOTANALYTICS_API SqlQueryDatasetAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API SqlQueryDatasetAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A SQL query string.</p>
     */
    inline const Aws::String& GetSqlQuery() const { return m_sqlQuery; }
    inline bool SqlQueryHasBeenSet() const { return m_sqlQueryHasBeenSet; }
    template<typename SqlQueryT = Aws::String>
    void SetSqlQuery(SqlQueryT&& value) { m_sqlQueryHasBeenSet = true; m_sqlQuery = std::forward<SqlQueryT>(value); }
    template<typename SqlQueryT = Aws::String>
    SqlQueryDatasetAction& WithSqlQuery(SqlQueryT&& value) { SetSqlQuery(std::forward<SqlQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prefilters applied to message data.</p>
     */
    inline const Aws::Vector<QueryFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<QueryFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<QueryFilter>>
    SqlQueryDatasetAction& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = QueryFilter>
    SqlQueryDatasetAction& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sqlQuery;
    bool m_sqlQueryHasBeenSet = false;

    Aws::Vector<QueryFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
