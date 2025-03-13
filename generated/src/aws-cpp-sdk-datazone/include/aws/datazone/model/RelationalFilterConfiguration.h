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
    AWS_DATAZONE_API RelationalFilterConfiguration() = default;
    AWS_DATAZONE_API RelationalFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RelationalFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The database name specified in the relational filter configuration for the
     * data source.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    RelationalFilterConfiguration& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter expressions specified in the relational filter configuration for
     * the data source.</p>
     */
    inline const Aws::Vector<FilterExpression>& GetFilterExpressions() const { return m_filterExpressions; }
    inline bool FilterExpressionsHasBeenSet() const { return m_filterExpressionsHasBeenSet; }
    template<typename FilterExpressionsT = Aws::Vector<FilterExpression>>
    void SetFilterExpressions(FilterExpressionsT&& value) { m_filterExpressionsHasBeenSet = true; m_filterExpressions = std::forward<FilterExpressionsT>(value); }
    template<typename FilterExpressionsT = Aws::Vector<FilterExpression>>
    RelationalFilterConfiguration& WithFilterExpressions(FilterExpressionsT&& value) { SetFilterExpressions(std::forward<FilterExpressionsT>(value)); return *this;}
    template<typename FilterExpressionsT = FilterExpression>
    RelationalFilterConfiguration& AddFilterExpressions(FilterExpressionsT&& value) { m_filterExpressionsHasBeenSet = true; m_filterExpressions.emplace_back(std::forward<FilterExpressionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The schema name specified in the relational filter configuration for the data
     * source.</p>
     */
    inline const Aws::String& GetSchemaName() const { return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    template<typename SchemaNameT = Aws::String>
    void SetSchemaName(SchemaNameT&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::forward<SchemaNameT>(value); }
    template<typename SchemaNameT = Aws::String>
    RelationalFilterConfiguration& WithSchemaName(SchemaNameT&& value) { SetSchemaName(std::forward<SchemaNameT>(value)); return *this;}
    ///@}
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
