/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableOptimizerVpcConfiguration.h>
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
    AWS_GLUE_API TableOptimizerConfiguration();
    AWS_GLUE_API TableOptimizerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TableOptimizerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A role passed by the caller which gives the service permission to update the
     * resources associated with the optimizer on the caller's behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline TableOptimizerConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline TableOptimizerConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline TableOptimizerConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether table optimization is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
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
    inline const TableOptimizerVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    inline void SetVpcConfiguration(const TableOptimizerVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }
    inline void SetVpcConfiguration(TableOptimizerVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }
    inline TableOptimizerConfiguration& WithVpcConfiguration(const TableOptimizerVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}
    inline TableOptimizerConfiguration& WithVpcConfiguration(TableOptimizerVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a snapshot retention optimizer.</p>
     */
    inline const RetentionConfiguration& GetRetentionConfiguration() const{ return m_retentionConfiguration; }
    inline bool RetentionConfigurationHasBeenSet() const { return m_retentionConfigurationHasBeenSet; }
    inline void SetRetentionConfiguration(const RetentionConfiguration& value) { m_retentionConfigurationHasBeenSet = true; m_retentionConfiguration = value; }
    inline void SetRetentionConfiguration(RetentionConfiguration&& value) { m_retentionConfigurationHasBeenSet = true; m_retentionConfiguration = std::move(value); }
    inline TableOptimizerConfiguration& WithRetentionConfiguration(const RetentionConfiguration& value) { SetRetentionConfiguration(value); return *this;}
    inline TableOptimizerConfiguration& WithRetentionConfiguration(RetentionConfiguration&& value) { SetRetentionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for an orphan file deletion optimizer.</p>
     */
    inline const OrphanFileDeletionConfiguration& GetOrphanFileDeletionConfiguration() const{ return m_orphanFileDeletionConfiguration; }
    inline bool OrphanFileDeletionConfigurationHasBeenSet() const { return m_orphanFileDeletionConfigurationHasBeenSet; }
    inline void SetOrphanFileDeletionConfiguration(const OrphanFileDeletionConfiguration& value) { m_orphanFileDeletionConfigurationHasBeenSet = true; m_orphanFileDeletionConfiguration = value; }
    inline void SetOrphanFileDeletionConfiguration(OrphanFileDeletionConfiguration&& value) { m_orphanFileDeletionConfigurationHasBeenSet = true; m_orphanFileDeletionConfiguration = std::move(value); }
    inline TableOptimizerConfiguration& WithOrphanFileDeletionConfiguration(const OrphanFileDeletionConfiguration& value) { SetOrphanFileDeletionConfiguration(value); return *this;}
    inline TableOptimizerConfiguration& WithOrphanFileDeletionConfiguration(OrphanFileDeletionConfiguration&& value) { SetOrphanFileDeletionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    TableOptimizerVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    RetentionConfiguration m_retentionConfiguration;
    bool m_retentionConfigurationHasBeenSet = false;

    OrphanFileDeletionConfiguration m_orphanFileDeletionConfiguration;
    bool m_orphanFileDeletionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
