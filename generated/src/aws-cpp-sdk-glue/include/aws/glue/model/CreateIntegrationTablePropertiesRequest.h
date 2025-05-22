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
  class CreateIntegrationTablePropertiesRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateIntegrationTablePropertiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIntegrationTableProperties"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target table for which to create
     * integration table properties. Currently, this API only supports creating
     * integration table properties for target tables, and the provided ARN should be
     * the ARN of the target table in the Glue Data Catalog. Support for creating
     * integration table properties for source connections (using the connection ARN)
     * is not yet implemented and will be added in a future release. </p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    CreateIntegrationTablePropertiesRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
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
    CreateIntegrationTablePropertiesRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure for the source table configuration. See the
     * <code>SourceTableConfig</code> structure to see list of supported source
     * properties.</p>
     */
    inline const SourceTableConfig& GetSourceTableConfig() const { return m_sourceTableConfig; }
    inline bool SourceTableConfigHasBeenSet() const { return m_sourceTableConfigHasBeenSet; }
    template<typename SourceTableConfigT = SourceTableConfig>
    void SetSourceTableConfig(SourceTableConfigT&& value) { m_sourceTableConfigHasBeenSet = true; m_sourceTableConfig = std::forward<SourceTableConfigT>(value); }
    template<typename SourceTableConfigT = SourceTableConfig>
    CreateIntegrationTablePropertiesRequest& WithSourceTableConfig(SourceTableConfigT&& value) { SetSourceTableConfig(std::forward<SourceTableConfigT>(value)); return *this;}
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
    CreateIntegrationTablePropertiesRequest& WithTargetTableConfig(TargetTableConfigT&& value) { SetTargetTableConfig(std::forward<TargetTableConfigT>(value)); return *this;}
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
