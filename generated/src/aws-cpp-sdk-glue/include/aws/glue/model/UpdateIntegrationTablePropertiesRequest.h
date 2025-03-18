/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SourceTableConfig.h>
#include <aws/glue/model/TargetTableConfig.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateIntegrationTablePropertiesRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateIntegrationTablePropertiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIntegrationTableProperties"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The connection ARN of the source, or the database ARN of the target.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    UpdateIntegrationTablePropertiesRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table to be replicated.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    UpdateIntegrationTablePropertiesRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure for the source table configuration.</p>
     */
    inline const SourceTableConfig& GetSourceTableConfig() const { return m_sourceTableConfig; }
    inline bool SourceTableConfigHasBeenSet() const { return m_sourceTableConfigHasBeenSet; }
    template<typename SourceTableConfigT = SourceTableConfig>
    void SetSourceTableConfig(SourceTableConfigT&& value) { m_sourceTableConfigHasBeenSet = true; m_sourceTableConfig = std::forward<SourceTableConfigT>(value); }
    template<typename SourceTableConfigT = SourceTableConfig>
    UpdateIntegrationTablePropertiesRequest& WithSourceTableConfig(SourceTableConfigT&& value) { SetSourceTableConfig(std::forward<SourceTableConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure for the target table configuration.</p>
     */
    inline const TargetTableConfig& GetTargetTableConfig() const { return m_targetTableConfig; }
    inline bool TargetTableConfigHasBeenSet() const { return m_targetTableConfigHasBeenSet; }
    template<typename TargetTableConfigT = TargetTableConfig>
    void SetTargetTableConfig(TargetTableConfigT&& value) { m_targetTableConfigHasBeenSet = true; m_targetTableConfig = std::forward<TargetTableConfigT>(value); }
    template<typename TargetTableConfigT = TargetTableConfig>
    UpdateIntegrationTablePropertiesRequest& WithTargetTableConfig(TargetTableConfigT&& value) { SetTargetTableConfig(std::forward<TargetTableConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    SourceTableConfig m_sourceTableConfig;
    bool m_sourceTableConfigHasBeenSet = false;

    TargetTableConfig m_targetTableConfig;
    bool m_targetTableConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
