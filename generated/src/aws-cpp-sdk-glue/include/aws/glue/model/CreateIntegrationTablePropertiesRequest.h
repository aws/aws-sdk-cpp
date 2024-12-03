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
    AWS_GLUE_API CreateIntegrationTablePropertiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIntegrationTableProperties"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The connection ARN of the source, or the database ARN of the target.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline CreateIntegrationTablePropertiesRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline CreateIntegrationTablePropertiesRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline CreateIntegrationTablePropertiesRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table to be replicated.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline CreateIntegrationTablePropertiesRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline CreateIntegrationTablePropertiesRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline CreateIntegrationTablePropertiesRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure for the source table configuration.</p>
     */
    inline const SourceTableConfig& GetSourceTableConfig() const{ return m_sourceTableConfig; }
    inline bool SourceTableConfigHasBeenSet() const { return m_sourceTableConfigHasBeenSet; }
    inline void SetSourceTableConfig(const SourceTableConfig& value) { m_sourceTableConfigHasBeenSet = true; m_sourceTableConfig = value; }
    inline void SetSourceTableConfig(SourceTableConfig&& value) { m_sourceTableConfigHasBeenSet = true; m_sourceTableConfig = std::move(value); }
    inline CreateIntegrationTablePropertiesRequest& WithSourceTableConfig(const SourceTableConfig& value) { SetSourceTableConfig(value); return *this;}
    inline CreateIntegrationTablePropertiesRequest& WithSourceTableConfig(SourceTableConfig&& value) { SetSourceTableConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure for the target table configuration.</p>
     */
    inline const TargetTableConfig& GetTargetTableConfig() const{ return m_targetTableConfig; }
    inline bool TargetTableConfigHasBeenSet() const { return m_targetTableConfigHasBeenSet; }
    inline void SetTargetTableConfig(const TargetTableConfig& value) { m_targetTableConfigHasBeenSet = true; m_targetTableConfig = value; }
    inline void SetTargetTableConfig(TargetTableConfig&& value) { m_targetTableConfigHasBeenSet = true; m_targetTableConfig = std::move(value); }
    inline CreateIntegrationTablePropertiesRequest& WithTargetTableConfig(const TargetTableConfig& value) { SetTargetTableConfig(value); return *this;}
    inline CreateIntegrationTablePropertiesRequest& WithTargetTableConfig(TargetTableConfig&& value) { SetTargetTableConfig(std::move(value)); return *this;}
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
