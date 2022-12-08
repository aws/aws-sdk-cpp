/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters for Snowflake.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnowflakeParameters">AWS
   * API Reference</a></p>
   */
  class SnowflakeParameters
  {
  public:
    AWS_QUICKSIGHT_API SnowflakeParameters();
    AWS_QUICKSIGHT_API SnowflakeParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnowflakeParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Host.</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }

    /**
     * <p>Host.</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>Host.</p>
     */
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>Host.</p>
     */
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>Host.</p>
     */
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }

    /**
     * <p>Host.</p>
     */
    inline SnowflakeParameters& WithHost(const Aws::String& value) { SetHost(value); return *this;}

    /**
     * <p>Host.</p>
     */
    inline SnowflakeParameters& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}

    /**
     * <p>Host.</p>
     */
    inline SnowflakeParameters& WithHost(const char* value) { SetHost(value); return *this;}


    /**
     * <p>Database.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>Database.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>Database.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>Database.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>Database.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>Database.</p>
     */
    inline SnowflakeParameters& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>Database.</p>
     */
    inline SnowflakeParameters& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>Database.</p>
     */
    inline SnowflakeParameters& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>Warehouse.</p>
     */
    inline const Aws::String& GetWarehouse() const{ return m_warehouse; }

    /**
     * <p>Warehouse.</p>
     */
    inline bool WarehouseHasBeenSet() const { return m_warehouseHasBeenSet; }

    /**
     * <p>Warehouse.</p>
     */
    inline void SetWarehouse(const Aws::String& value) { m_warehouseHasBeenSet = true; m_warehouse = value; }

    /**
     * <p>Warehouse.</p>
     */
    inline void SetWarehouse(Aws::String&& value) { m_warehouseHasBeenSet = true; m_warehouse = std::move(value); }

    /**
     * <p>Warehouse.</p>
     */
    inline void SetWarehouse(const char* value) { m_warehouseHasBeenSet = true; m_warehouse.assign(value); }

    /**
     * <p>Warehouse.</p>
     */
    inline SnowflakeParameters& WithWarehouse(const Aws::String& value) { SetWarehouse(value); return *this;}

    /**
     * <p>Warehouse.</p>
     */
    inline SnowflakeParameters& WithWarehouse(Aws::String&& value) { SetWarehouse(std::move(value)); return *this;}

    /**
     * <p>Warehouse.</p>
     */
    inline SnowflakeParameters& WithWarehouse(const char* value) { SetWarehouse(value); return *this;}

  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_warehouse;
    bool m_warehouseHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
