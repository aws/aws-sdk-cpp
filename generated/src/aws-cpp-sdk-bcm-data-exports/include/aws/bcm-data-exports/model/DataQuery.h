/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace BCMDataExports
{
namespace Model
{

  /**
   * <p>The SQL query of column selections and row filters from the data table you
   * want.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/DataQuery">AWS
   * API Reference</a></p>
   */
  class DataQuery
  {
  public:
    AWS_BCMDATAEXPORTS_API DataQuery() = default;
    AWS_BCMDATAEXPORTS_API DataQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API DataQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query statement.</p>
     */
    inline const Aws::String& GetQueryStatement() const { return m_queryStatement; }
    inline bool QueryStatementHasBeenSet() const { return m_queryStatementHasBeenSet; }
    template<typename QueryStatementT = Aws::String>
    void SetQueryStatement(QueryStatementT&& value) { m_queryStatementHasBeenSet = true; m_queryStatement = std::forward<QueryStatementT>(value); }
    template<typename QueryStatementT = Aws::String>
    DataQuery& WithQueryStatement(QueryStatementT&& value) { SetQueryStatement(std::forward<QueryStatementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetTableConfigurations() const { return m_tableConfigurations; }
    inline bool TableConfigurationsHasBeenSet() const { return m_tableConfigurationsHasBeenSet; }
    template<typename TableConfigurationsT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    void SetTableConfigurations(TableConfigurationsT&& value) { m_tableConfigurationsHasBeenSet = true; m_tableConfigurations = std::forward<TableConfigurationsT>(value); }
    template<typename TableConfigurationsT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    DataQuery& WithTableConfigurations(TableConfigurationsT&& value) { SetTableConfigurations(std::forward<TableConfigurationsT>(value)); return *this;}
    template<typename TableConfigurationsKeyT = Aws::String, typename TableConfigurationsValueT = Aws::Map<Aws::String, Aws::String>>
    DataQuery& AddTableConfigurations(TableConfigurationsKeyT&& key, TableConfigurationsValueT&& value) {
      m_tableConfigurationsHasBeenSet = true; m_tableConfigurations.emplace(std::forward<TableConfigurationsKeyT>(key), std::forward<TableConfigurationsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_queryStatement;
    bool m_queryStatementHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_tableConfigurations;
    bool m_tableConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
