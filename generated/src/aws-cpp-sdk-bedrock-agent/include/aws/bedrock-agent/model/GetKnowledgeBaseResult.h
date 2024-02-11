/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/KnowledgeBase.h>
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
  class GetKnowledgeBaseResult
  {
  public:
    AWS_BEDROCKAGENT_API GetKnowledgeBaseResult();
    AWS_BEDROCKAGENT_API GetKnowledgeBaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API GetKnowledgeBaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const KnowledgeBase& GetKnowledgeBase() const{ return m_knowledgeBase; }

    
    inline void SetKnowledgeBase(const KnowledgeBase& value) { m_knowledgeBase = value; }

    
    inline void SetKnowledgeBase(KnowledgeBase&& value) { m_knowledgeBase = std::move(value); }

    
    inline GetKnowledgeBaseResult& WithKnowledgeBase(const KnowledgeBase& value) { SetKnowledgeBase(value); return *this;}

    
    inline GetKnowledgeBaseResult& WithKnowledgeBase(KnowledgeBase&& value) { SetKnowledgeBase(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetKnowledgeBaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetKnowledgeBaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetKnowledgeBaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    KnowledgeBase m_knowledgeBase;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
