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
    AWS_DOCDBELASTIC_API Shard() = default;
    AWS_DOCDBELASTIC_API Shard(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API Shard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time when the shard was created in Universal Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::String>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::String>
    Shard& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the shard.</p>
     */
    inline const Aws::String& GetShardId() const { return m_shardId; }
    inline bool ShardIdHasBeenSet() const { return m_shardIdHasBeenSet; }
    template<typename ShardIdT = Aws::String>
    void SetShardId(ShardIdT&& value) { m_shardIdHasBeenSet = true; m_shardId = std::forward<ShardIdT>(value); }
    template<typename ShardIdT = Aws::String>
    Shard& WithShardId(ShardIdT&& value) { SetShardId(std::forward<ShardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the shard.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline Shard& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_shardId;
    bool m_shardIdHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
