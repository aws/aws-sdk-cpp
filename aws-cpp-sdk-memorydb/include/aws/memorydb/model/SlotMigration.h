/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>

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
   * <p>Represents the progress of an online resharding operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/SlotMigration">AWS
   * API Reference</a></p>
   */
  class SlotMigration
  {
  public:
    AWS_MEMORYDB_API SlotMigration();
    AWS_MEMORYDB_API SlotMigration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API SlotMigration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentage of the slot migration that is complete.</p>
     */
    inline double GetProgressPercentage() const{ return m_progressPercentage; }

    /**
     * <p>The percentage of the slot migration that is complete.</p>
     */
    inline bool ProgressPercentageHasBeenSet() const { return m_progressPercentageHasBeenSet; }

    /**
     * <p>The percentage of the slot migration that is complete.</p>
     */
    inline void SetProgressPercentage(double value) { m_progressPercentageHasBeenSet = true; m_progressPercentage = value; }

    /**
     * <p>The percentage of the slot migration that is complete.</p>
     */
    inline SlotMigration& WithProgressPercentage(double value) { SetProgressPercentage(value); return *this;}

  private:

    double m_progressPercentage;
    bool m_progressPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
