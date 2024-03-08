/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/FilterExpression.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The relational filter configuration for the data source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RelationalFilterConfiguration">AWS
   * API Reference</a></p>
   */
  class RelationalFilterConfiguration
  {
  public:
    AWS_DATAZONE_API RelationalFilterConfiguration();
    AWS_DATAZONE_API RelationalFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RelationalFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The database name specified in the relational filter configuration for the
     * data source.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The database name specified in the relational filter configuration for the
     * data source.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The database name specified in the relational filter configuration for the
     * data source.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database name specified in the relational filter configuration for the
     * data source.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The database name specified in the relational filter configuration for the
     * data source.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The database name specified in the relational filter configuration for the
     * data source.</p>
     */
    inline RelationalFilterConfiguration& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database name specified in the relational filter configuration for the
     * data source.</p>
     */
    inline RelationalFilterConfiguration& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The database name specified in the relational filter configuration for the
     * data source.</p>
     */
    inline RelationalFilterConfiguration& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The filter expressions specified in the relational filter configuration for
     * the data source.</p>
     */
    inline const Aws::Vector<FilterExpression>& GetFilterExpressions() const{ return m_filterExpressions; }

    /**
     * <p>The filter expressions specified in the relational filter configuration for
     * the data source.</p>
     */
    inline bool FilterExpressionsHasBeenSet() const { return m_filterExpressionsHasBeenSet; }

    /**
     * <p>The filter expressions specified in the relational filter configuration for
     * the data source.</p>
     */
    inline void SetFilterExpressions(const Aws::Vector<FilterExpression>& value) { m_filterExpressionsHasBeenSet = true; m_filterExpressions = value; }

    /**
     * <p>The filter expressions specified in the relational filter configuration for
     * the data source.</p>
     */
    inline void SetFilterExpressions(Aws::Vector<FilterExpression>&& value) { m_filterExpressionsHasBeenSet = true; m_filterExpressions = std::move(value); }

    /**
     * <p>The filter expressions specified in the relational filter configuration for
     * the data source.</p>
     */
    inline RelationalFilterConfiguration& WithFilterExpressions(const Aws::Vector<FilterExpression>& value) { SetFilterExpressions(value); return *this;}

    /**
     * <p>The filter expressions specified in the relational filter configuration for
     * the data source.</p>
     */
    inline RelationalFilterConfiguration& WithFilterExpressions(Aws::Vector<FilterExpression>&& value) { SetFilterExpressions(std::move(value)); return *this;}

    /**
     * <p>The filter expressions specified in the relational filter configuration for
     * the data source.</p>
     */
    inline RelationalFilterConfiguration& AddFilterExpressions(const FilterExpression& value) { m_filterExpressionsHasBeenSet = true; m_filterExpressions.push_back(value); return *this; }

    /**
     * <p>The filter expressions specified in the relational filter configuration for
     * the data source.</p>
     */
    inline RelationalFilterConfiguration& AddFilterExpressions(FilterExpression&& value) { m_filterExpressionsHasBeenSet = true; m_filterExpressions.push_back(std::move(value)); return *this; }


    /**
     * <p>The schema name specified in the relational filter configuration for the data
     * source.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The schema name specified in the relational filter configuration for the data
     * source.</p>
     */
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    /**
     * <p>The schema name specified in the relational filter configuration for the data
     * source.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>The schema name specified in the relational filter configuration for the data
     * source.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * <p>The schema name specified in the relational filter configuration for the data
     * source.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * <p>The schema name specified in the relational filter configuration for the data
     * source.</p>
     */
    inline RelationalFilterConfiguration& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The schema name specified in the relational filter configuration for the data
     * source.</p>
     */
    inline RelationalFilterConfiguration& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The schema name specified in the relational filter configuration for the data
     * source.</p>
     */
    inline RelationalFilterConfiguration& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}

  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::Vector<FilterExpression> m_filterExpressions;
    bool m_filterExpressionsHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
