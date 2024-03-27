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


    /**
     * <p>The unique identifier of the data source that was deleted.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The unique identifier of the data source that was deleted.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceId = value; }

    /**
     * <p>The unique identifier of the data source that was deleted.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceId = std::move(value); }

    /**
     * <p>The unique identifier of the data source that was deleted.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceId.assign(value); }

    /**
     * <p>The unique identifier of the data source that was deleted.</p>
     */
    inline DeleteDataSourceResult& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The unique identifier of the data source that was deleted.</p>
     */
    inline DeleteDataSourceResult& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the data source that was deleted.</p>
     */
    inline DeleteDataSourceResult& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The unique identifier of the knowledge base to which the data source that was
     * deleted belonged.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The unique identifier of the knowledge base to which the data source that was
     * deleted belonged.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseId = value; }

    /**
     * <p>The unique identifier of the knowledge base to which the data source that was
     * deleted belonged.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The unique identifier of the knowledge base to which the data source that was
     * deleted belonged.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseId.assign(value); }

    /**
     * <p>The unique identifier of the knowledge base to which the data source that was
     * deleted belonged.</p>
     */
    inline DeleteDataSourceResult& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The unique identifier of the knowledge base to which the data source that was
     * deleted belonged.</p>
     */
    inline DeleteDataSourceResult& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the knowledge base to which the data source that was
     * deleted belonged.</p>
     */
    inline DeleteDataSourceResult& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>The status of the data source.</p>
     */
    inline const DataSourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the data source.</p>
     */
    inline void SetStatus(const DataSourceStatus& value) { m_status = value; }

    /**
     * <p>The status of the data source.</p>
     */
    inline void SetStatus(DataSourceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the data source.</p>
     */
    inline DeleteDataSourceResult& WithStatus(const DataSourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the data source.</p>
     */
    inline DeleteDataSourceResult& WithStatus(DataSourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteDataSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteDataSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteDataSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_dataSourceId;

    Aws::String m_knowledgeBaseId;

    DataSourceStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
