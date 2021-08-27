/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/ShardFilterType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Kinesis
{
namespace Model
{

  class AWS_KINESIS_API ShardFilter
  {
  public:
    ShardFilter();
    ShardFilter(Aws::Utils::Json::JsonView jsonValue);
    ShardFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ShardFilterType& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const ShardFilterType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(ShardFilterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline ShardFilter& WithType(const ShardFilterType& value) { SetType(value); return *this;}

    
    inline ShardFilter& WithType(ShardFilterType&& value) { SetType(std::move(value)); return *this;}


    
    inline const Aws::String& GetShardId() const{ return m_shardId; }

    
    inline bool ShardIdHasBeenSet() const { return m_shardIdHasBeenSet; }

    
    inline void SetShardId(const Aws::String& value) { m_shardIdHasBeenSet = true; m_shardId = value; }

    
    inline void SetShardId(Aws::String&& value) { m_shardIdHasBeenSet = true; m_shardId = std::move(value); }

    
    inline void SetShardId(const char* value) { m_shardIdHasBeenSet = true; m_shardId.assign(value); }

    
    inline ShardFilter& WithShardId(const Aws::String& value) { SetShardId(value); return *this;}

    
    inline ShardFilter& WithShardId(Aws::String&& value) { SetShardId(std::move(value)); return *this;}

    
    inline ShardFilter& WithShardId(const char* value) { SetShardId(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    
    inline ShardFilter& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    
    inline ShardFilter& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}

  private:

    ShardFilterType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_shardId;
    bool m_shardIdHasBeenSet;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
