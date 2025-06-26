/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/keyspacesstreams/model/ShardFilterType.h>
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
namespace KeyspacesStreams
{
namespace Model
{

  /**
   * <p>A filter used to limit the shards returned by a <code>GetStream</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspacesstreams-2024-09-09/ShardFilter">AWS
   * API Reference</a></p>
   */
  class ShardFilter
  {
  public:
    AWS_KEYSPACESSTREAMS_API ShardFilter() = default;
    AWS_KEYSPACESSTREAMS_API ShardFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API ShardFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of shard filter to use, which determines how the shardId parameter
     * is interpreted.</p>
     */
    inline ShardFilterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ShardFilterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ShardFilter& WithType(ShardFilterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a specific shard used to filter results based on the
     * specified filter type.</p>
     */
    inline const Aws::String& GetShardId() const { return m_shardId; }
    inline bool ShardIdHasBeenSet() const { return m_shardIdHasBeenSet; }
    template<typename ShardIdT = Aws::String>
    void SetShardId(ShardIdT&& value) { m_shardIdHasBeenSet = true; m_shardId = std::forward<ShardIdT>(value); }
    template<typename ShardIdT = Aws::String>
    ShardFilter& WithShardId(ShardIdT&& value) { SetShardId(std::forward<ShardIdT>(value)); return *this;}
    ///@}
  private:

    ShardFilterType m_type{ShardFilterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_shardId;
    bool m_shardIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
