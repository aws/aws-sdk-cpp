/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb-elastic/model/Status.h>
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
namespace DocDBElastic
{
namespace Model
{

  /**
   * <p>The name of the shard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/Shard">AWS
   * API Reference</a></p>
   */
  class Shard
  {
  public:
    AWS_DOCDBELASTIC_API Shard();
    AWS_DOCDBELASTIC_API Shard(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API Shard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time when the shard was created in Universal Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time when the shard was created in Universal Coordinated Time (UTC).</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time when the shard was created in Universal Coordinated Time (UTC).</p>
     */
    inline void SetCreateTime(const Aws::String& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time when the shard was created in Universal Coordinated Time (UTC).</p>
     */
    inline void SetCreateTime(Aws::String&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time when the shard was created in Universal Coordinated Time (UTC).</p>
     */
    inline void SetCreateTime(const char* value) { m_createTimeHasBeenSet = true; m_createTime.assign(value); }

    /**
     * <p>The time when the shard was created in Universal Coordinated Time (UTC).</p>
     */
    inline Shard& WithCreateTime(const Aws::String& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time when the shard was created in Universal Coordinated Time (UTC).</p>
     */
    inline Shard& WithCreateTime(Aws::String&& value) { SetCreateTime(std::move(value)); return *this;}

    /**
     * <p>The time when the shard was created in Universal Coordinated Time (UTC).</p>
     */
    inline Shard& WithCreateTime(const char* value) { SetCreateTime(value); return *this;}


    /**
     * <p>The ID of the shard.</p>
     */
    inline const Aws::String& GetShardId() const{ return m_shardId; }

    /**
     * <p>The ID of the shard.</p>
     */
    inline bool ShardIdHasBeenSet() const { return m_shardIdHasBeenSet; }

    /**
     * <p>The ID of the shard.</p>
     */
    inline void SetShardId(const Aws::String& value) { m_shardIdHasBeenSet = true; m_shardId = value; }

    /**
     * <p>The ID of the shard.</p>
     */
    inline void SetShardId(Aws::String&& value) { m_shardIdHasBeenSet = true; m_shardId = std::move(value); }

    /**
     * <p>The ID of the shard.</p>
     */
    inline void SetShardId(const char* value) { m_shardIdHasBeenSet = true; m_shardId.assign(value); }

    /**
     * <p>The ID of the shard.</p>
     */
    inline Shard& WithShardId(const Aws::String& value) { SetShardId(value); return *this;}

    /**
     * <p>The ID of the shard.</p>
     */
    inline Shard& WithShardId(Aws::String&& value) { SetShardId(std::move(value)); return *this;}

    /**
     * <p>The ID of the shard.</p>
     */
    inline Shard& WithShardId(const char* value) { SetShardId(value); return *this;}


    /**
     * <p>The current status of the shard.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the shard.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the shard.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the shard.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the shard.</p>
     */
    inline Shard& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the shard.</p>
     */
    inline Shard& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_shardId;
    bool m_shardIdHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
