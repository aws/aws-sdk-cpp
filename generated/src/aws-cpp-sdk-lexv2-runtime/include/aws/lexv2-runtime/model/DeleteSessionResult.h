/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
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
namespace LexRuntimeV2
{
namespace Model
{
  class DeleteSessionResult
  {
  public:
    AWS_LEXRUNTIMEV2_API DeleteSessionResult();
    AWS_LEXRUNTIMEV2_API DeleteSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXRUNTIMEV2_API DeleteSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the bot that contained the session data.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline DeleteSessionResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline DeleteSessionResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline DeleteSessionResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias identifier in use for the bot that contained the session data.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasId = value; }
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasId = std::move(value); }
    inline void SetBotAliasId(const char* value) { m_botAliasId.assign(value); }
    inline DeleteSessionResult& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}
    inline DeleteSessionResult& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}
    inline DeleteSessionResult& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale where the session was used.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }
    inline DeleteSessionResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline DeleteSessionResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline DeleteSessionResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the deleted session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline DeleteSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline DeleteSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline DeleteSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;

    Aws::String m_botAliasId;

    Aws::String m_localeId;

    Aws::String m_sessionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
