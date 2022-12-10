/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
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
namespace LexRuntimeService
{
namespace Model
{
  class DeleteSessionResult
  {
  public:
    AWS_LEXRUNTIMESERVICE_API DeleteSessionResult();
    AWS_LEXRUNTIMESERVICE_API DeleteSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXRUNTIMESERVICE_API DeleteSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the bot associated with the session data.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot associated with the session data.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botName = value; }

    /**
     * <p>The name of the bot associated with the session data.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botName = std::move(value); }

    /**
     * <p>The name of the bot associated with the session data.</p>
     */
    inline void SetBotName(const char* value) { m_botName.assign(value); }

    /**
     * <p>The name of the bot associated with the session data.</p>
     */
    inline DeleteSessionResult& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot associated with the session data.</p>
     */
    inline DeleteSessionResult& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot associated with the session data.</p>
     */
    inline DeleteSessionResult& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>The alias in use for the bot associated with the session data.</p>
     */
    inline const Aws::String& GetBotAlias() const{ return m_botAlias; }

    /**
     * <p>The alias in use for the bot associated with the session data.</p>
     */
    inline void SetBotAlias(const Aws::String& value) { m_botAlias = value; }

    /**
     * <p>The alias in use for the bot associated with the session data.</p>
     */
    inline void SetBotAlias(Aws::String&& value) { m_botAlias = std::move(value); }

    /**
     * <p>The alias in use for the bot associated with the session data.</p>
     */
    inline void SetBotAlias(const char* value) { m_botAlias.assign(value); }

    /**
     * <p>The alias in use for the bot associated with the session data.</p>
     */
    inline DeleteSessionResult& WithBotAlias(const Aws::String& value) { SetBotAlias(value); return *this;}

    /**
     * <p>The alias in use for the bot associated with the session data.</p>
     */
    inline DeleteSessionResult& WithBotAlias(Aws::String&& value) { SetBotAlias(std::move(value)); return *this;}

    /**
     * <p>The alias in use for the bot associated with the session data.</p>
     */
    inline DeleteSessionResult& WithBotAlias(const char* value) { SetBotAlias(value); return *this;}


    /**
     * <p>The ID of the client application user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The ID of the client application user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userId = value; }

    /**
     * <p>The ID of the client application user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }

    /**
     * <p>The ID of the client application user.</p>
     */
    inline void SetUserId(const char* value) { m_userId.assign(value); }

    /**
     * <p>The ID of the client application user.</p>
     */
    inline DeleteSessionResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of the client application user.</p>
     */
    inline DeleteSessionResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ID of the client application user.</p>
     */
    inline DeleteSessionResult& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The unique identifier for the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The unique identifier for the session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p>The unique identifier for the session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p>The unique identifier for the session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p>The unique identifier for the session.</p>
     */
    inline DeleteSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The unique identifier for the session.</p>
     */
    inline DeleteSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the session.</p>
     */
    inline DeleteSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}

  private:

    Aws::String m_botName;

    Aws::String m_botAlias;

    Aws::String m_userId;

    Aws::String m_sessionId;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
