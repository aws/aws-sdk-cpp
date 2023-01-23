/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/BotStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/BotVersionLocaleDetails.h>
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
  class CreateBotVersionResult
  {
  public:
    AWS_LEXMODELSV2_API CreateBotVersionResult();
    AWS_LEXMODELSV2_API CreateBotVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateBotVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The bot identifier specified in the request.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The bot identifier specified in the request.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The bot identifier specified in the request.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The bot identifier specified in the request.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The bot identifier specified in the request.</p>
     */
    inline CreateBotVersionResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The bot identifier specified in the request.</p>
     */
    inline CreateBotVersionResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The bot identifier specified in the request.</p>
     */
    inline CreateBotVersionResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The description of the version specified in the request.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the version specified in the request.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the version specified in the request.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the version specified in the request.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the version specified in the request.</p>
     */
    inline CreateBotVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the version specified in the request.</p>
     */
    inline CreateBotVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the version specified in the request.</p>
     */
    inline CreateBotVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The version number assigned to the version.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version number assigned to the version.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version number assigned to the version.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version number assigned to the version.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version number assigned to the version.</p>
     */
    inline CreateBotVersionResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version number assigned to the version.</p>
     */
    inline CreateBotVersionResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version number assigned to the version.</p>
     */
    inline CreateBotVersionResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The source versions used for each locale in the new version.</p>
     */
    inline const Aws::Map<Aws::String, BotVersionLocaleDetails>& GetBotVersionLocaleSpecification() const{ return m_botVersionLocaleSpecification; }

    /**
     * <p>The source versions used for each locale in the new version.</p>
     */
    inline void SetBotVersionLocaleSpecification(const Aws::Map<Aws::String, BotVersionLocaleDetails>& value) { m_botVersionLocaleSpecification = value; }

    /**
     * <p>The source versions used for each locale in the new version.</p>
     */
    inline void SetBotVersionLocaleSpecification(Aws::Map<Aws::String, BotVersionLocaleDetails>&& value) { m_botVersionLocaleSpecification = std::move(value); }

    /**
     * <p>The source versions used for each locale in the new version.</p>
     */
    inline CreateBotVersionResult& WithBotVersionLocaleSpecification(const Aws::Map<Aws::String, BotVersionLocaleDetails>& value) { SetBotVersionLocaleSpecification(value); return *this;}

    /**
     * <p>The source versions used for each locale in the new version.</p>
     */
    inline CreateBotVersionResult& WithBotVersionLocaleSpecification(Aws::Map<Aws::String, BotVersionLocaleDetails>&& value) { SetBotVersionLocaleSpecification(std::move(value)); return *this;}

    /**
     * <p>The source versions used for each locale in the new version.</p>
     */
    inline CreateBotVersionResult& AddBotVersionLocaleSpecification(const Aws::String& key, const BotVersionLocaleDetails& value) { m_botVersionLocaleSpecification.emplace(key, value); return *this; }

    /**
     * <p>The source versions used for each locale in the new version.</p>
     */
    inline CreateBotVersionResult& AddBotVersionLocaleSpecification(Aws::String&& key, const BotVersionLocaleDetails& value) { m_botVersionLocaleSpecification.emplace(std::move(key), value); return *this; }

    /**
     * <p>The source versions used for each locale in the new version.</p>
     */
    inline CreateBotVersionResult& AddBotVersionLocaleSpecification(const Aws::String& key, BotVersionLocaleDetails&& value) { m_botVersionLocaleSpecification.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The source versions used for each locale in the new version.</p>
     */
    inline CreateBotVersionResult& AddBotVersionLocaleSpecification(Aws::String&& key, BotVersionLocaleDetails&& value) { m_botVersionLocaleSpecification.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The source versions used for each locale in the new version.</p>
     */
    inline CreateBotVersionResult& AddBotVersionLocaleSpecification(const char* key, BotVersionLocaleDetails&& value) { m_botVersionLocaleSpecification.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The source versions used for each locale in the new version.</p>
     */
    inline CreateBotVersionResult& AddBotVersionLocaleSpecification(const char* key, const BotVersionLocaleDetails& value) { m_botVersionLocaleSpecification.emplace(key, value); return *this; }


    /**
     * <p>When you send a request to create or update a bot, Amazon Lex sets the status
     * response element to <code>Creating</code>. After Amazon Lex builds the bot, it
     * sets status to <code>Available</code>. If Amazon Lex can't build the bot, it
     * sets status to <code>Failed</code>.</p>
     */
    inline const BotStatus& GetBotStatus() const{ return m_botStatus; }

    /**
     * <p>When you send a request to create or update a bot, Amazon Lex sets the status
     * response element to <code>Creating</code>. After Amazon Lex builds the bot, it
     * sets status to <code>Available</code>. If Amazon Lex can't build the bot, it
     * sets status to <code>Failed</code>.</p>
     */
    inline void SetBotStatus(const BotStatus& value) { m_botStatus = value; }

    /**
     * <p>When you send a request to create or update a bot, Amazon Lex sets the status
     * response element to <code>Creating</code>. After Amazon Lex builds the bot, it
     * sets status to <code>Available</code>. If Amazon Lex can't build the bot, it
     * sets status to <code>Failed</code>.</p>
     */
    inline void SetBotStatus(BotStatus&& value) { m_botStatus = std::move(value); }

    /**
     * <p>When you send a request to create or update a bot, Amazon Lex sets the status
     * response element to <code>Creating</code>. After Amazon Lex builds the bot, it
     * sets status to <code>Available</code>. If Amazon Lex can't build the bot, it
     * sets status to <code>Failed</code>.</p>
     */
    inline CreateBotVersionResult& WithBotStatus(const BotStatus& value) { SetBotStatus(value); return *this;}

    /**
     * <p>When you send a request to create or update a bot, Amazon Lex sets the status
     * response element to <code>Creating</code>. After Amazon Lex builds the bot, it
     * sets status to <code>Available</code>. If Amazon Lex can't build the bot, it
     * sets status to <code>Failed</code>.</p>
     */
    inline CreateBotVersionResult& WithBotStatus(BotStatus&& value) { SetBotStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp of the date and time that the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>A timestamp of the date and time that the version was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the version was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the version was created.</p>
     */
    inline CreateBotVersionResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the version was created.</p>
     */
    inline CreateBotVersionResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_description;

    Aws::String m_botVersion;

    Aws::Map<Aws::String, BotVersionLocaleDetails> m_botVersionLocaleSpecification;

    BotStatus m_botStatus;

    Aws::Utils::DateTime m_creationDateTime;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
