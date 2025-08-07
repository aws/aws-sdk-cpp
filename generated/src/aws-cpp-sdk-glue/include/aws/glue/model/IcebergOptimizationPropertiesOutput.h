/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure that contains the output properties of Iceberg table optimization
   * configuration for your catalog resource in the Glue Data Catalog.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergOptimizationPropertiesOutput">AWS
   * API Reference</a></p>
   */
  class IcebergOptimizationPropertiesOutput
  {
  public:
    AWS_GLUE_API IcebergOptimizationPropertiesOutput() = default;
    AWS_GLUE_API IcebergOptimizationPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergOptimizationPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that is used to perform
     * Iceberg table optimization operations.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    IcebergOptimizationPropertiesOutput& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs that specify configuration parameters for Iceberg
     * table compaction operations, which optimize the layout of data files to improve
     * query performance.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCompaction() const { return m_compaction; }
    inline bool CompactionHasBeenSet() const { return m_compactionHasBeenSet; }
    template<typename CompactionT = Aws::Map<Aws::String, Aws::String>>
    void SetCompaction(CompactionT&& value) { m_compactionHasBeenSet = true; m_compaction = std::forward<CompactionT>(value); }
    template<typename CompactionT = Aws::Map<Aws::String, Aws::String>>
    IcebergOptimizationPropertiesOutput& WithCompaction(CompactionT&& value) { SetCompaction(std::forward<CompactionT>(value)); return *this;}
    template<typename CompactionKeyT = Aws::String, typename CompactionValueT = Aws::String>
    IcebergOptimizationPropertiesOutput& AddCompaction(CompactionKeyT&& key, CompactionValueT&& value) {
      m_compactionHasBeenSet = true; m_compaction.emplace(std::forward<CompactionKeyT>(key), std::forward<CompactionValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs that specify configuration parameters for Iceberg
     * table retention operations, which manage the lifecycle of table snapshots to
     * control storage costs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRetention() const { return m_retention; }
    inline bool RetentionHasBeenSet() const { return m_retentionHasBeenSet; }
    template<typename RetentionT = Aws::Map<Aws::String, Aws::String>>
    void SetRetention(RetentionT&& value) { m_retentionHasBeenSet = true; m_retention = std::forward<RetentionT>(value); }
    template<typename RetentionT = Aws::Map<Aws::String, Aws::String>>
    IcebergOptimizationPropertiesOutput& WithRetention(RetentionT&& value) { SetRetention(std::forward<RetentionT>(value)); return *this;}
    template<typename RetentionKeyT = Aws::String, typename RetentionValueT = Aws::String>
    IcebergOptimizationPropertiesOutput& AddRetention(RetentionKeyT&& key, RetentionValueT&& value) {
      m_retentionHasBeenSet = true; m_retention.emplace(std::forward<RetentionKeyT>(key), std::forward<RetentionValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs that specify configuration parameters for Iceberg
     * orphan file deletion operations, which identify and remove files that are no
     * longer referenced by the table metadata.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOrphanFileDeletion() const { return m_orphanFileDeletion; }
    inline bool OrphanFileDeletionHasBeenSet() const { return m_orphanFileDeletionHasBeenSet; }
    template<typename OrphanFileDeletionT = Aws::Map<Aws::String, Aws::String>>
    void SetOrphanFileDeletion(OrphanFileDeletionT&& value) { m_orphanFileDeletionHasBeenSet = true; m_orphanFileDeletion = std::forward<OrphanFileDeletionT>(value); }
    template<typename OrphanFileDeletionT = Aws::Map<Aws::String, Aws::String>>
    IcebergOptimizationPropertiesOutput& WithOrphanFileDeletion(OrphanFileDeletionT&& value) { SetOrphanFileDeletion(std::forward<OrphanFileDeletionT>(value)); return *this;}
    template<typename OrphanFileDeletionKeyT = Aws::String, typename OrphanFileDeletionValueT = Aws::String>
    IcebergOptimizationPropertiesOutput& AddOrphanFileDeletion(OrphanFileDeletionKeyT&& key, OrphanFileDeletionValueT&& value) {
      m_orphanFileDeletionHasBeenSet = true; m_orphanFileDeletion.emplace(std::forward<OrphanFileDeletionKeyT>(key), std::forward<OrphanFileDeletionValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timestamp when the Iceberg optimization properties were last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    IcebergOptimizationPropertiesOutput& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_compaction;
    bool m_compactionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_retention;
    bool m_retentionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_orphanFileDeletion;
    bool m_orphanFileDeletionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
