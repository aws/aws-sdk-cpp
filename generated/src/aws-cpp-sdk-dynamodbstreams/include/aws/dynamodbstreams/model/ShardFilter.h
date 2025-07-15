/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/dynamodbstreams/model/ShardFilterType.h>
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
namespace DynamoDBStreams
{
namespace Model
{

  /**
   * <p>This optional field contains the filter definition for the
   * <code>DescribeStream</code> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/ShardFilter">AWS
   * API Reference</a></p>
   */
  class ShardFilter
  {
  public:
    AWS_DYNAMODBSTREAMS_API ShardFilter() = default;
    AWS_DYNAMODBSTREAMS_API ShardFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API ShardFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the type of filter to be applied on the <code>DescribeStream</code>
     * API. Currently, the only value this parameter accepts is
     * <code>CHILD_SHARDS</code>.</p>
     */
    inline ShardFilterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ShardFilterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ShardFilter& WithType(ShardFilterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the <code>shardId</code> of the parent shard for which you are
     * requesting child shards.</p> <p> <i>Sample request:</i> </p>
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
} // namespace DynamoDBStreams
} // namespace Aws
