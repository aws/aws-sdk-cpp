/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateOutput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/Citation.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{
  class RetrieveAndGenerateResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateResult();
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    
    inline RetrieveAndGenerateResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    
    inline RetrieveAndGenerateResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    
    inline RetrieveAndGenerateResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    
    inline const RetrieveAndGenerateOutput& GetOutput() const{ return m_output; }

    
    inline void SetOutput(const RetrieveAndGenerateOutput& value) { m_output = value; }

    
    inline void SetOutput(RetrieveAndGenerateOutput&& value) { m_output = std::move(value); }

    
    inline RetrieveAndGenerateResult& WithOutput(const RetrieveAndGenerateOutput& value) { SetOutput(value); return *this;}

    
    inline RetrieveAndGenerateResult& WithOutput(RetrieveAndGenerateOutput&& value) { SetOutput(std::move(value)); return *this;}


    
    inline const Aws::Vector<Citation>& GetCitations() const{ return m_citations; }

    
    inline void SetCitations(const Aws::Vector<Citation>& value) { m_citations = value; }

    
    inline void SetCitations(Aws::Vector<Citation>&& value) { m_citations = std::move(value); }

    
    inline RetrieveAndGenerateResult& WithCitations(const Aws::Vector<Citation>& value) { SetCitations(value); return *this;}

    
    inline RetrieveAndGenerateResult& WithCitations(Aws::Vector<Citation>&& value) { SetCitations(std::move(value)); return *this;}

    
    inline RetrieveAndGenerateResult& AddCitations(const Citation& value) { m_citations.push_back(value); return *this; }

    
    inline RetrieveAndGenerateResult& AddCitations(Citation&& value) { m_citations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RetrieveAndGenerateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RetrieveAndGenerateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RetrieveAndGenerateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_sessionId;

    RetrieveAndGenerateOutput m_output;

    Aws::Vector<Citation> m_citations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
