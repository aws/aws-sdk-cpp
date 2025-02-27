/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class GetSessionResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GetSessionResult();
    AWS_BEDROCKAGENTRUNTIME_API GetSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API GetSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp for when the session was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetSessionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetSessionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key used to
     * encrypt the session data. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/session-encryption.html">Amazon
     * Bedrock session encryption</a>.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArn = value; }
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArn = std::move(value); }
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArn.assign(value); }
    inline GetSessionResult& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}
    inline GetSessionResult& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}
    inline GetSessionResult& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the session was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetSessionResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetSessionResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the session.</p>
     */
    inline const Aws::String& GetSessionArn() const{ return m_sessionArn; }
    inline void SetSessionArn(const Aws::String& value) { m_sessionArn = value; }
    inline void SetSessionArn(Aws::String&& value) { m_sessionArn = std::move(value); }
    inline void SetSessionArn(const char* value) { m_sessionArn.assign(value); }
    inline GetSessionResult& WithSessionArn(const Aws::String& value) { SetSessionArn(value); return *this;}
    inline GetSessionResult& WithSessionArn(Aws::String&& value) { SetSessionArn(std::move(value)); return *this;}
    inline GetSessionResult& WithSessionArn(const char* value) { SetSessionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the session in UUID format.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline GetSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline GetSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline GetSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs containing attributes persisted across the
     * session.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionMetadata() const{ return m_sessionMetadata; }
    inline void SetSessionMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionMetadata = value; }
    inline void SetSessionMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionMetadata = std::move(value); }
    inline GetSessionResult& WithSessionMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionMetadata(value); return *this;}
    inline GetSessionResult& WithSessionMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionMetadata(std::move(value)); return *this;}
    inline GetSessionResult& AddSessionMetadata(const Aws::String& key, const Aws::String& value) { m_sessionMetadata.emplace(key, value); return *this; }
    inline GetSessionResult& AddSessionMetadata(Aws::String&& key, const Aws::String& value) { m_sessionMetadata.emplace(std::move(key), value); return *this; }
    inline GetSessionResult& AddSessionMetadata(const Aws::String& key, Aws::String&& value) { m_sessionMetadata.emplace(key, std::move(value)); return *this; }
    inline GetSessionResult& AddSessionMetadata(Aws::String&& key, Aws::String&& value) { m_sessionMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline GetSessionResult& AddSessionMetadata(const char* key, Aws::String&& value) { m_sessionMetadata.emplace(key, std::move(value)); return *this; }
    inline GetSessionResult& AddSessionMetadata(Aws::String&& key, const char* value) { m_sessionMetadata.emplace(std::move(key), value); return *this; }
    inline GetSessionResult& AddSessionMetadata(const char* key, const char* value) { m_sessionMetadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status of the session.</p>
     */
    inline const SessionStatus& GetSessionStatus() const{ return m_sessionStatus; }
    inline void SetSessionStatus(const SessionStatus& value) { m_sessionStatus = value; }
    inline void SetSessionStatus(SessionStatus&& value) { m_sessionStatus = std::move(value); }
    inline GetSessionResult& WithSessionStatus(const SessionStatus& value) { SetSessionStatus(value); return *this;}
    inline GetSessionResult& WithSessionStatus(SessionStatus&& value) { SetSessionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_encryptionKeyArn;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_sessionArn;

    Aws::String m_sessionId;

    Aws::Map<Aws::String, Aws::String> m_sessionMetadata;

    SessionStatus m_sessionStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
