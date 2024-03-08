/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/DataSourceStatus.h>
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
namespace BedrockAgent
{
namespace Model
{
  class DeleteDataSourceResult
  {
  public:
    AWS_BEDROCKAGENT_API DeleteDataSourceResult();
    AWS_BEDROCKAGENT_API DeleteDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API DeleteDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseId = value; }

    
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseId = std::move(value); }

    
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseId.assign(value); }

    
    inline DeleteDataSourceResult& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    
    inline DeleteDataSourceResult& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    
    inline DeleteDataSourceResult& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceId = value; }

    
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceId = std::move(value); }

    
    inline void SetDataSourceId(const char* value) { m_dataSourceId.assign(value); }

    
    inline DeleteDataSourceResult& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    
    inline DeleteDataSourceResult& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    
    inline DeleteDataSourceResult& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    
    inline const DataSourceStatus& GetStatus() const{ return m_status; }

    
    inline void SetStatus(const DataSourceStatus& value) { m_status = value; }

    
    inline void SetStatus(DataSourceStatus&& value) { m_status = std::move(value); }

    
    inline DeleteDataSourceResult& WithStatus(const DataSourceStatus& value) { SetStatus(value); return *this;}

    
    inline DeleteDataSourceResult& WithStatus(DataSourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteDataSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteDataSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteDataSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_knowledgeBaseId;

    Aws::String m_dataSourceId;

    DataSourceStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
