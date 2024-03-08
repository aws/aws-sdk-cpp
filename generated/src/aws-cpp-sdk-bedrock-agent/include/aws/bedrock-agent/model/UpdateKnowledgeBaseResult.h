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
  class UpdateKnowledgeBaseResult
  {
  public:
    AWS_BEDROCKAGENT_API UpdateKnowledgeBaseResult();
    AWS_BEDROCKAGENT_API UpdateKnowledgeBaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API UpdateKnowledgeBaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const KnowledgeBase& GetKnowledgeBase() const{ return m_knowledgeBase; }

    
    inline void SetKnowledgeBase(const KnowledgeBase& value) { m_knowledgeBase = value; }

    
    inline void SetKnowledgeBase(KnowledgeBase&& value) { m_knowledgeBase = std::move(value); }

    
    inline UpdateKnowledgeBaseResult& WithKnowledgeBase(const KnowledgeBase& value) { SetKnowledgeBase(value); return *this;}

    
    inline UpdateKnowledgeBaseResult& WithKnowledgeBase(KnowledgeBase&& value) { SetKnowledgeBase(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateKnowledgeBaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateKnowledgeBaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateKnowledgeBaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    KnowledgeBase m_knowledgeBase;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
