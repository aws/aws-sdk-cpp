/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotLocaleStatus.h>
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
namespace LexModelsV2
{
namespace Model
{
  class DeleteBotLocaleResult
  {
  public:
    AWS_LEXMODELSV2_API DeleteBotLocaleResult();
    AWS_LEXMODELSV2_API DeleteBotLocaleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DeleteBotLocaleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the bot that contained the deleted locale.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot that contained the deleted locale.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot that contained the deleted locale.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot that contained the deleted locale.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot that contained the deleted locale.</p>
     */
    inline DeleteBotLocaleResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot that contained the deleted locale.</p>
     */
    inline DeleteBotLocaleResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot that contained the deleted locale.</p>
     */
    inline DeleteBotLocaleResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot that contained the deleted locale.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that contained the deleted locale.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot that contained the deleted locale.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that contained the deleted locale.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that contained the deleted locale.</p>
     */
    inline DeleteBotLocaleResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that contained the deleted locale.</p>
     */
    inline DeleteBotLocaleResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that contained the deleted locale.</p>
     */
    inline DeleteBotLocaleResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The language and locale of the deleted locale.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The language and locale of the deleted locale.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The language and locale of the deleted locale.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The language and locale of the deleted locale.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The language and locale of the deleted locale.</p>
     */
    inline DeleteBotLocaleResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The language and locale of the deleted locale.</p>
     */
    inline DeleteBotLocaleResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The language and locale of the deleted locale.</p>
     */
    inline DeleteBotLocaleResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The status of deleting the bot locale. The locale first enters the
     * <code>Deleting</code> status. Once the locale is deleted it no longer appears in
     * the list of locales for the bot.</p>
     */
    inline const BotLocaleStatus& GetBotLocaleStatus() const{ return m_botLocaleStatus; }

    /**
     * <p>The status of deleting the bot locale. The locale first enters the
     * <code>Deleting</code> status. Once the locale is deleted it no longer appears in
     * the list of locales for the bot.</p>
     */
    inline void SetBotLocaleStatus(const BotLocaleStatus& value) { m_botLocaleStatus = value; }

    /**
     * <p>The status of deleting the bot locale. The locale first enters the
     * <code>Deleting</code> status. Once the locale is deleted it no longer appears in
     * the list of locales for the bot.</p>
     */
    inline void SetBotLocaleStatus(BotLocaleStatus&& value) { m_botLocaleStatus = std::move(value); }

    /**
     * <p>The status of deleting the bot locale. The locale first enters the
     * <code>Deleting</code> status. Once the locale is deleted it no longer appears in
     * the list of locales for the bot.</p>
     */
    inline DeleteBotLocaleResult& WithBotLocaleStatus(const BotLocaleStatus& value) { SetBotLocaleStatus(value); return *this;}

    /**
     * <p>The status of deleting the bot locale. The locale first enters the
     * <code>Deleting</code> status. Once the locale is deleted it no longer appears in
     * the list of locales for the bot.</p>
     */
    inline DeleteBotLocaleResult& WithBotLocaleStatus(BotLocaleStatus&& value) { SetBotLocaleStatus(std::move(value)); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    BotLocaleStatus m_botLocaleStatus;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
