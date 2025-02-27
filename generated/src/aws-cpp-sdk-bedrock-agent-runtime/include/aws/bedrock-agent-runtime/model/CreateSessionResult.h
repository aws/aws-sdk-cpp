/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/SessionStatus.h>
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
  class CreateSessionResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API CreateSessionResult();
    AWS_BEDROCKAGENTRUNTIME_API CreateSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API CreateSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp for when the session was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateSessionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateSessionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the created session.</p>
     */
    inline const Aws::String& GetSessionArn() const{ return m_sessionArn; }
    inline void SetSessionArn(const Aws::String& value) { m_sessionArn = value; }
    inline void SetSessionArn(Aws::String&& value) { m_sessionArn = std::move(value); }
    inline void SetSessionArn(const char* value) { m_sessionArn.assign(value); }
    inline CreateSessionResult& WithSessionArn(const Aws::String& value) { SetSessionArn(value); return *this;}
    inline CreateSessionResult& WithSessionArn(Aws::String&& value) { SetSessionArn(std::move(value)); return *this;}
    inline CreateSessionResult& WithSessionArn(const char* value) { SetSessionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline CreateSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline CreateSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline CreateSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the session.</p>
     */
    inline const SessionStatus& GetSessionStatus() const{ return m_sessionStatus; }
    inline void SetSessionStatus(const SessionStatus& value) { m_sessionStatus = value; }
    inline void SetSessionStatus(SessionStatus&& value) { m_sessionStatus = std::move(value); }
    inline CreateSessionResult& WithSessionStatus(const SessionStatus& value) { SetSessionStatus(value); return *this;}
    inline CreateSessionResult& WithSessionStatus(SessionStatus&& value) { SetSessionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_sessionArn;

    Aws::String m_sessionId;

    SessionStatus m_sessionStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
