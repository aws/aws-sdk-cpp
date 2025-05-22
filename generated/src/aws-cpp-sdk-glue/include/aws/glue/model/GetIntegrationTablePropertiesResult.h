/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SourceTableConfig.h>
#include <aws/glue/model/TargetTableConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  class GetIntegrationTablePropertiesResult
  {
  public:
    AWS_GLUE_API GetIntegrationTablePropertiesResult() = default;
    AWS_GLUE_API GetIntegrationTablePropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetIntegrationTablePropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target table for which to retrieve
     * integration table properties. Currently, this API only supports retrieving
     * properties for target tables, and the provided ARN should be the ARN of the
     * target table in the Glue Data Catalog. Support for retrieving integration table
     * properties for source connections (using the connection ARN) is not yet
     * implemented and will be added in a future release. </p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    GetIntegrationTablePropertiesResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table to be replicated.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    GetIntegrationTablePropertiesResult& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure for the source table configuration.</p>
     */
    inline const SourceTableConfig& GetSourceTableConfig() const { return m_sourceTableConfig; }
    template<typename SourceTableConfigT = SourceTableConfig>
    void SetSourceTableConfig(SourceTableConfigT&& value) { m_sourceTableConfigHasBeenSet = true; m_sourceTableConfig = std::forward<SourceTableConfigT>(value); }
    template<typename SourceTableConfigT = SourceTableConfig>
    GetIntegrationTablePropertiesResult& WithSourceTableConfig(SourceTableConfigT&& value) { SetSourceTableConfig(std::forward<SourceTableConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure for the target table configuration.</p>
     */
    inline const TargetTableConfig& GetTargetTableConfig() const { return m_targetTableConfig; }
    template<typename TargetTableConfigT = TargetTableConfig>
    void SetTargetTableConfig(TargetTableConfigT&& value) { m_targetTableConfigHasBeenSet = true; m_targetTableConfig = std::forward<TargetTableConfigT>(value); }
    template<typename TargetTableConfigT = TargetTableConfig>
    GetIntegrationTablePropertiesResult& WithTargetTableConfig(TargetTableConfigT&& value) { SetTargetTableConfig(std::forward<TargetTableConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIntegrationTablePropertiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
