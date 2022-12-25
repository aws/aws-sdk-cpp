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
   * <p>A request to configure the sharding properties of a cluster</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ShardConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class ShardConfigurationRequest
  {
  public:
    AWS_MEMORYDB_API ShardConfigurationRequest();
    AWS_MEMORYDB_API ShardConfigurationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ShardConfigurationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of shards in the cluster</p>
     */
    inline int GetShardCount() const{ return m_shardCount; }

    /**
     * <p>The number of shards in the cluster</p>
     */
    inline bool ShardCountHasBeenSet() const { return m_shardCountHasBeenSet; }

    /**
     * <p>The number of shards in the cluster</p>
     */
    inline void SetShardCount(int value) { m_shardCountHasBeenSet = true; m_shardCount = value; }

    /**
     * <p>The number of shards in the cluster</p>
     */
    inline ShardConfigurationRequest& WithShardCount(int value) { SetShardCount(value); return *this;}

  private:

    int m_shardCount;
    bool m_shardCountHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
