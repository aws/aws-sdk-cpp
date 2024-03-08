/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class GetIngestionJobRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API GetIngestionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIngestionJob"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    
    inline GetIngestionJobRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    
    inline GetIngestionJobRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    
    inline GetIngestionJobRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    
    inline GetIngestionJobRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    
    inline GetIngestionJobRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    
    inline GetIngestionJobRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    
    inline const Aws::String& GetIngestionJobId() const{ return m_ingestionJobId; }

    
    inline bool IngestionJobIdHasBeenSet() const { return m_ingestionJobIdHasBeenSet; }

    
    inline void SetIngestionJobId(const Aws::String& value) { m_ingestionJobIdHasBeenSet = true; m_ingestionJobId = value; }

    
    inline void SetIngestionJobId(Aws::String&& value) { m_ingestionJobIdHasBeenSet = true; m_ingestionJobId = std::move(value); }

    
    inline void SetIngestionJobId(const char* value) { m_ingestionJobIdHasBeenSet = true; m_ingestionJobId.assign(value); }

    
    inline GetIngestionJobRequest& WithIngestionJobId(const Aws::String& value) { SetIngestionJobId(value); return *this;}

    
    inline GetIngestionJobRequest& WithIngestionJobId(Aws::String&& value) { SetIngestionJobId(std::move(value)); return *this;}

    
    inline GetIngestionJobRequest& WithIngestionJobId(const char* value) { SetIngestionJobId(value); return *this;}

  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_ingestionJobId;
    bool m_ingestionJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
