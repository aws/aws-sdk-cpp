﻿/**
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
  class AWS_IOTANALYTICS_API SqlQueryDatasetAction
  {
  public:
    SqlQueryDatasetAction();
    SqlQueryDatasetAction(Aws::Utils::Json::JsonView jsonValue);
    SqlQueryDatasetAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A SQL query string.</p>
     */
    inline const Aws::String& GetSqlQuery() const{ return m_sqlQuery; }

    /**
     * <p>A SQL query string.</p>
     */
    inline bool SqlQueryHasBeenSet() const { return m_sqlQueryHasBeenSet; }

    /**
     * <p>A SQL query string.</p>
     */
    inline void SetSqlQuery(const Aws::String& value) { m_sqlQueryHasBeenSet = true; m_sqlQuery = value; }

    /**
     * <p>A SQL query string.</p>
     */
    inline void SetSqlQuery(Aws::String&& value) { m_sqlQueryHasBeenSet = true; m_sqlQuery = std::move(value); }

    /**
     * <p>A SQL query string.</p>
     */
    inline void SetSqlQuery(const char* value) { m_sqlQueryHasBeenSet = true; m_sqlQuery.assign(value); }

    /**
     * <p>A SQL query string.</p>
     */
    inline SqlQueryDatasetAction& WithSqlQuery(const Aws::String& value) { SetSqlQuery(value); return *this;}

    /**
     * <p>A SQL query string.</p>
     */
    inline SqlQueryDatasetAction& WithSqlQuery(Aws::String&& value) { SetSqlQuery(std::move(value)); return *this;}

    /**
     * <p>A SQL query string.</p>
     */
    inline SqlQueryDatasetAction& WithSqlQuery(const char* value) { SetSqlQuery(value); return *this;}


    /**
     * <p>Prefilters applied to message data.</p>
     */
    inline const Aws::Vector<QueryFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Prefilters applied to message data.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Prefilters applied to message data.</p>
     */
    inline void SetFilters(const Aws::Vector<QueryFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Prefilters applied to message data.</p>
     */
    inline void SetFilters(Aws::Vector<QueryFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Prefilters applied to message data.</p>
     */
    inline SqlQueryDatasetAction& WithFilters(const Aws::Vector<QueryFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Prefilters applied to message data.</p>
     */
    inline SqlQueryDatasetAction& WithFilters(Aws::Vector<QueryFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Prefilters applied to message data.</p>
     */
    inline SqlQueryDatasetAction& AddFilters(const QueryFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Prefilters applied to message data.</p>
     */
    inline SqlQueryDatasetAction& AddFilters(QueryFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sqlQuery;
    bool m_sqlQueryHasBeenSet;

    Aws::Vector<QueryFilter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
