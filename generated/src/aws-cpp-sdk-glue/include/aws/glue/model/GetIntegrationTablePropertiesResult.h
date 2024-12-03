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
    AWS_GLUE_API GetIntegrationTablePropertiesResult();
    AWS_GLUE_API GetIntegrationTablePropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetIntegrationTablePropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The connection ARN of the source, or the database ARN of the target.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline GetIntegrationTablePropertiesResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline GetIntegrationTablePropertiesResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline GetIntegrationTablePropertiesResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table to be replicated.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline void SetTableName(const Aws::String& value) { m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableName.assign(value); }
    inline GetIntegrationTablePropertiesResult& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline GetIntegrationTablePropertiesResult& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline GetIntegrationTablePropertiesResult& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure for the source table configuration.</p>
     */
    inline const SourceTableConfig& GetSourceTableConfig() const{ return m_sourceTableConfig; }
    inline void SetSourceTableConfig(const SourceTableConfig& value) { m_sourceTableConfig = value; }
    inline void SetSourceTableConfig(SourceTableConfig&& value) { m_sourceTableConfig = std::move(value); }
    inline GetIntegrationTablePropertiesResult& WithSourceTableConfig(const SourceTableConfig& value) { SetSourceTableConfig(value); return *this;}
    inline GetIntegrationTablePropertiesResult& WithSourceTableConfig(SourceTableConfig&& value) { SetSourceTableConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure for the target table configuration.</p>
     */
    inline const TargetTableConfig& GetTargetTableConfig() const{ return m_targetTableConfig; }
    inline void SetTargetTableConfig(const TargetTableConfig& value) { m_targetTableConfig = value; }
    inline void SetTargetTableConfig(TargetTableConfig&& value) { m_targetTableConfig = std::move(value); }
    inline GetIntegrationTablePropertiesResult& WithTargetTableConfig(const TargetTableConfig& value) { SetTargetTableConfig(value); return *this;}
    inline GetIntegrationTablePropertiesResult& WithTargetTableConfig(TargetTableConfig&& value) { SetTargetTableConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIntegrationTablePropertiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIntegrationTablePropertiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIntegrationTablePropertiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;

    Aws::String m_tableName;

    SourceTableConfig m_sourceTableConfig;

    TargetTableConfig m_targetTableConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
