/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableOptimizerVpcConfiguration.h>
#include <aws/glue/model/CompactionConfiguration.h>
#include <aws/glue/model/RetentionConfiguration.h>
#include <aws/glue/model/OrphanFileDeletionConfiguration.h>
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
   * <p>Contains details on the configuration of a table optimizer. You pass this
   * configuration when creating or updating a table optimizer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TableOptimizerConfiguration">AWS
   * API Reference</a></p>
   */
  class TableOptimizerConfiguration
  {
  public:
    AWS_GLUE_API TableOptimizerConfiguration() = default;
    AWS_GLUE_API TableOptimizerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TableOptimizerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A role passed by the caller which gives the service permission to update the
     * resources associated with the optimizer on the caller's behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    TableOptimizerConfiguration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether table optimization is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline TableOptimizerConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TableOptimizerVpcConfiguration</code> object representing the VPC
     * configuration for a table optimizer.</p> <p>This configuration is necessary to
     * perform optimization on tables that are in a customer VPC.</p>
     */
    inline const TableOptimizerVpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = TableOptimizerVpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = TableOptimizerVpcConfiguration>
    TableOptimizerConfiguration& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a compaction optimizer. This configuration defines how
     * data files in your table will be compacted to improve query performance and
     * reduce storage costs.</p>
     */
    inline const CompactionConfiguration& GetCompactionConfiguration() const { return m_compactionConfiguration; }
    inline bool CompactionConfigurationHasBeenSet() const { return m_compactionConfigurationHasBeenSet; }
    template<typename CompactionConfigurationT = CompactionConfiguration>
    void SetCompactionConfiguration(CompactionConfigurationT&& value) { m_compactionConfigurationHasBeenSet = true; m_compactionConfiguration = std::forward<CompactionConfigurationT>(value); }
    template<typename CompactionConfigurationT = CompactionConfiguration>
    TableOptimizerConfiguration& WithCompactionConfiguration(CompactionConfigurationT&& value) { SetCompactionConfiguration(std::forward<CompactionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a snapshot retention optimizer.</p>
     */
    inline const RetentionConfiguration& GetRetentionConfiguration() const { return m_retentionConfiguration; }
    inline bool RetentionConfigurationHasBeenSet() const { return m_retentionConfigurationHasBeenSet; }
    template<typename RetentionConfigurationT = RetentionConfiguration>
    void SetRetentionConfiguration(RetentionConfigurationT&& value) { m_retentionConfigurationHasBeenSet = true; m_retentionConfiguration = std::forward<RetentionConfigurationT>(value); }
    template<typename RetentionConfigurationT = RetentionConfiguration>
    TableOptimizerConfiguration& WithRetentionConfiguration(RetentionConfigurationT&& value) { SetRetentionConfiguration(std::forward<RetentionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for an orphan file deletion optimizer.</p>
     */
    inline const OrphanFileDeletionConfiguration& GetOrphanFileDeletionConfiguration() const { return m_orphanFileDeletionConfiguration; }
    inline bool OrphanFileDeletionConfigurationHasBeenSet() const { return m_orphanFileDeletionConfigurationHasBeenSet; }
    template<typename OrphanFileDeletionConfigurationT = OrphanFileDeletionConfiguration>
    void SetOrphanFileDeletionConfiguration(OrphanFileDeletionConfigurationT&& value) { m_orphanFileDeletionConfigurationHasBeenSet = true; m_orphanFileDeletionConfiguration = std::forward<OrphanFileDeletionConfigurationT>(value); }
    template<typename OrphanFileDeletionConfigurationT = OrphanFileDeletionConfiguration>
    TableOptimizerConfiguration& WithOrphanFileDeletionConfiguration(OrphanFileDeletionConfigurationT&& value) { SetOrphanFileDeletionConfiguration(std::forward<OrphanFileDeletionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    TableOptimizerVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    CompactionConfiguration m_compactionConfiguration;
    bool m_compactionConfigurationHasBeenSet = false;

    RetentionConfiguration m_retentionConfiguration;
    bool m_retentionConfigurationHasBeenSet = false;

    OrphanFileDeletionConfiguration m_orphanFileDeletionConfiguration;
    bool m_orphanFileDeletionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
