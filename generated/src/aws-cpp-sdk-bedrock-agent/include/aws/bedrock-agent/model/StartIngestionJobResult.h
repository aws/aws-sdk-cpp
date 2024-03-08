/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/IngestionJob.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StartIngestionJobResult
  {
  public:
    AWS_BEDROCKAGENT_API StartIngestionJobResult();
    AWS_BEDROCKAGENT_API StartIngestionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API StartIngestionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const IngestionJob& GetIngestionJob() const{ return m_ingestionJob; }

    
    inline void SetIngestionJob(const IngestionJob& value) { m_ingestionJob = value; }

    
    inline void SetIngestionJob(IngestionJob&& value) { m_ingestionJob = std::move(value); }

    
    inline StartIngestionJobResult& WithIngestionJob(const IngestionJob& value) { SetIngestionJob(value); return *this;}

    
    inline StartIngestionJobResult& WithIngestionJob(IngestionJob&& value) { SetIngestionJob(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartIngestionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartIngestionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartIngestionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    IngestionJob m_ingestionJob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
