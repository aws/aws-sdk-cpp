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
    AWS_BCMDATAEXPORTS_API DataQuery();
    AWS_BCMDATAEXPORTS_API DataQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API DataQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The query statement.</p>
     */
    inline const Aws::String& GetQueryStatement() const{ return m_queryStatement; }

    /**
     * <p>The query statement.</p>
     */
    inline bool QueryStatementHasBeenSet() const { return m_queryStatementHasBeenSet; }

    /**
     * <p>The query statement.</p>
     */
    inline void SetQueryStatement(const Aws::String& value) { m_queryStatementHasBeenSet = true; m_queryStatement = value; }

    /**
     * <p>The query statement.</p>
     */
    inline void SetQueryStatement(Aws::String&& value) { m_queryStatementHasBeenSet = true; m_queryStatement = std::move(value); }

    /**
     * <p>The query statement.</p>
     */
    inline void SetQueryStatement(const char* value) { m_queryStatementHasBeenSet = true; m_queryStatement.assign(value); }

    /**
     * <p>The query statement.</p>
     */
    inline DataQuery& WithQueryStatement(const Aws::String& value) { SetQueryStatement(value); return *this;}

    /**
     * <p>The query statement.</p>
     */
    inline DataQuery& WithQueryStatement(Aws::String&& value) { SetQueryStatement(std::move(value)); return *this;}

    /**
     * <p>The query statement.</p>
     */
    inline DataQuery& WithQueryStatement(const char* value) { SetQueryStatement(value); return *this;}


    /**
     * <p>The table configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetTableConfigurations() const{ return m_tableConfigurations; }

    /**
     * <p>The table configuration.</p>
     */
    inline bool TableConfigurationsHasBeenSet() const { return m_tableConfigurationsHasBeenSet; }

    /**
     * <p>The table configuration.</p>
     */
    inline void SetTableConfigurations(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_tableConfigurationsHasBeenSet = true; m_tableConfigurations = value; }

    /**
     * <p>The table configuration.</p>
     */
    inline void SetTableConfigurations(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_tableConfigurationsHasBeenSet = true; m_tableConfigurations = std::move(value); }

    /**
     * <p>The table configuration.</p>
     */
    inline DataQuery& WithTableConfigurations(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetTableConfigurations(value); return *this;}

    /**
     * <p>The table configuration.</p>
     */
    inline DataQuery& WithTableConfigurations(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetTableConfigurations(std::move(value)); return *this;}

    /**
     * <p>The table configuration.</p>
     */
    inline DataQuery& AddTableConfigurations(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_tableConfigurationsHasBeenSet = true; m_tableConfigurations.emplace(key, value); return *this; }

    /**
     * <p>The table configuration.</p>
     */
    inline DataQuery& AddTableConfigurations(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_tableConfigurationsHasBeenSet = true; m_tableConfigurations.emplace(std::move(key), value); return *this; }

    /**
     * <p>The table configuration.</p>
     */
    inline DataQuery& AddTableConfigurations(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_tableConfigurationsHasBeenSet = true; m_tableConfigurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The table configuration.</p>
     */
    inline DataQuery& AddTableConfigurations(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_tableConfigurationsHasBeenSet = true; m_tableConfigurations.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The table configuration.</p>
     */
    inline DataQuery& AddTableConfigurations(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_tableConfigurationsHasBeenSet = true; m_tableConfigurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The table configuration.</p>
     */
    inline DataQuery& AddTableConfigurations(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_tableConfigurationsHasBeenSet = true; m_tableConfigurations.emplace(key, value); return *this; }

  private:

    Aws::String m_queryStatement;
    bool m_queryStatementHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_tableConfigurations;
    bool m_tableConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
