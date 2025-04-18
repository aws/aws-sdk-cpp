﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>

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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Describes a Fleet Advisor collector inventory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/InventoryData">AWS
   * API Reference</a></p>
   */
  class InventoryData
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API InventoryData() = default;
    AWS_DATABASEMIGRATIONSERVICE_API InventoryData(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API InventoryData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of databases in the Fleet Advisor collector inventory.</p>
     */
    inline int GetNumberOfDatabases() const { return m_numberOfDatabases; }
    inline bool NumberOfDatabasesHasBeenSet() const { return m_numberOfDatabasesHasBeenSet; }
    inline void SetNumberOfDatabases(int value) { m_numberOfDatabasesHasBeenSet = true; m_numberOfDatabases = value; }
    inline InventoryData& WithNumberOfDatabases(int value) { SetNumberOfDatabases(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of schemas in the Fleet Advisor collector inventory.</p>
     */
    inline int GetNumberOfSchemas() const { return m_numberOfSchemas; }
    inline bool NumberOfSchemasHasBeenSet() const { return m_numberOfSchemasHasBeenSet; }
    inline void SetNumberOfSchemas(int value) { m_numberOfSchemasHasBeenSet = true; m_numberOfSchemas = value; }
    inline InventoryData& WithNumberOfSchemas(int value) { SetNumberOfSchemas(value); return *this;}
    ///@}
  private:

    int m_numberOfDatabases{0};
    bool m_numberOfDatabasesHasBeenSet = false;

    int m_numberOfSchemas{0};
    bool m_numberOfSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
