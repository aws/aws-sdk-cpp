/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/SlotMigration.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>The status of the online resharding</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ReshardingStatus">AWS
   * API Reference</a></p>
   */
  class ReshardingStatus
  {
  public:
    AWS_MEMORYDB_API ReshardingStatus();
    AWS_MEMORYDB_API ReshardingStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ReshardingStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the online resharding slot migration</p>
     */
    inline const SlotMigration& GetSlotMigration() const{ return m_slotMigration; }

    /**
     * <p>The status of the online resharding slot migration</p>
     */
    inline bool SlotMigrationHasBeenSet() const { return m_slotMigrationHasBeenSet; }

    /**
     * <p>The status of the online resharding slot migration</p>
     */
    inline void SetSlotMigration(const SlotMigration& value) { m_slotMigrationHasBeenSet = true; m_slotMigration = value; }

    /**
     * <p>The status of the online resharding slot migration</p>
     */
    inline void SetSlotMigration(SlotMigration&& value) { m_slotMigrationHasBeenSet = true; m_slotMigration = std::move(value); }

    /**
     * <p>The status of the online resharding slot migration</p>
     */
    inline ReshardingStatus& WithSlotMigration(const SlotMigration& value) { SetSlotMigration(value); return *this;}

    /**
     * <p>The status of the online resharding slot migration</p>
     */
    inline ReshardingStatus& WithSlotMigration(SlotMigration&& value) { SetSlotMigration(std::move(value)); return *this;}

  private:

    SlotMigration m_slotMigration;
    bool m_slotMigrationHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
