/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/DataPrivacy.h>
#include <aws/lexv2-models/model/BotStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateBotResult
  {
  public:
    AWS_LEXMODELSV2_API CreateBotResult();
    AWS_LEXMODELSV2_API CreateBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for a particular bot. You use this to identify the bot
     * when you call other Amazon Lex API operations.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>A unique identifier for a particular bot. You use this to identify the bot
     * when you call other Amazon Lex API operations.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>A unique identifier for a particular bot. You use this to identify the bot
     * when you call other Amazon Lex API operations.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>A unique identifier for a particular bot. You use this to identify the bot
     * when you call other Amazon Lex API operations.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>A unique identifier for a particular bot. You use this to identify the bot
     * when you call other Amazon Lex API operations.</p>
     */
    inline CreateBotResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>A unique identifier for a particular bot. You use this to identify the bot
     * when you call other Amazon Lex API operations.</p>
     */
    inline CreateBotResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a particular bot. You use this to identify the bot
     * when you call other Amazon Lex API operations.</p>
     */
    inline CreateBotResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The name specified for the bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name specified for the bot.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botName = value; }

    /**
     * <p>The name specified for the bot.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botName = std::move(value); }

    /**
     * <p>The name specified for the bot.</p>
     */
    inline void SetBotName(const char* value) { m_botName.assign(value); }

    /**
     * <p>The name specified for the bot.</p>
     */
    inline CreateBotResult& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name specified for the bot.</p>
     */
    inline CreateBotResult& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name specified for the bot.</p>
     */
    inline CreateBotResult& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>The description specified for the bot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description specified for the bot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description specified for the bot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description specified for the bot.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description specified for the bot.</p>
     */
    inline CreateBotResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description specified for the bot.</p>
     */
    inline CreateBotResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description specified for the bot.</p>
     */
    inline CreateBotResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The IAM role specified for the bot.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role specified for the bot.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The IAM role specified for the bot.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The IAM role specified for the bot.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The IAM role specified for the bot.</p>
     */
    inline CreateBotResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role specified for the bot.</p>
     */
    inline CreateBotResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role specified for the bot.</p>
     */
    inline CreateBotResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The data privacy settings specified for the bot.</p>
     */
    inline const DataPrivacy& GetDataPrivacy() const{ return m_dataPrivacy; }

    /**
     * <p>The data privacy settings specified for the bot.</p>
     */
    inline void SetDataPrivacy(const DataPrivacy& value) { m_dataPrivacy = value; }

    /**
     * <p>The data privacy settings specified for the bot.</p>
     */
    inline void SetDataPrivacy(DataPrivacy&& value) { m_dataPrivacy = std::move(value); }

    /**
     * <p>The data privacy settings specified for the bot.</p>
     */
    inline CreateBotResult& WithDataPrivacy(const DataPrivacy& value) { SetDataPrivacy(value); return *this;}

    /**
     * <p>The data privacy settings specified for the bot.</p>
     */
    inline CreateBotResult& WithDataPrivacy(DataPrivacy&& value) { SetDataPrivacy(std::move(value)); return *this;}


    /**
     * <p>The session idle time specified for the bot.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }

    /**
     * <p>The session idle time specified for the bot.</p>
     */
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSeconds = value; }

    /**
     * <p>The session idle time specified for the bot.</p>
     */
    inline CreateBotResult& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}


    /**
     * <p>Shows the current status of the bot. The bot is first in the
     * <code>Creating</code> status. Once the bot is read for use, it changes to the
     * <code>Available</code> status. After the bot is created, you can use the
     * <code>Draft</code> version of the bot.</p>
     */
    inline const BotStatus& GetBotStatus() const{ return m_botStatus; }

    /**
     * <p>Shows the current status of the bot. The bot is first in the
     * <code>Creating</code> status. Once the bot is read for use, it changes to the
     * <code>Available</code> status. After the bot is created, you can use the
     * <code>Draft</code> version of the bot.</p>
     */
    inline void SetBotStatus(const BotStatus& value) { m_botStatus = value; }

    /**
     * <p>Shows the current status of the bot. The bot is first in the
     * <code>Creating</code> status. Once the bot is read for use, it changes to the
     * <code>Available</code> status. After the bot is created, you can use the
     * <code>Draft</code> version of the bot.</p>
     */
    inline void SetBotStatus(BotStatus&& value) { m_botStatus = std::move(value); }

    /**
     * <p>Shows the current status of the bot. The bot is first in the
     * <code>Creating</code> status. Once the bot is read for use, it changes to the
     * <code>Available</code> status. After the bot is created, you can use the
     * <code>Draft</code> version of the bot.</p>
     */
    inline CreateBotResult& WithBotStatus(const BotStatus& value) { SetBotStatus(value); return *this;}

    /**
     * <p>Shows the current status of the bot. The bot is first in the
     * <code>Creating</code> status. Once the bot is read for use, it changes to the
     * <code>Available</code> status. After the bot is created, you can use the
     * <code>Draft</code> version of the bot.</p>
     */
    inline CreateBotResult& WithBotStatus(BotStatus&& value) { SetBotStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp indicating the date and time that the bot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>A timestamp indicating the date and time that the bot was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>A timestamp indicating the date and time that the bot was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>A timestamp indicating the date and time that the bot was created.</p>
     */
    inline CreateBotResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>A timestamp indicating the date and time that the bot was created.</p>
     */
    inline CreateBotResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>A list of tags associated with the bot.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBotTags() const{ return m_botTags; }

    /**
     * <p>A list of tags associated with the bot.</p>
     */
    inline void SetBotTags(const Aws::Map<Aws::String, Aws::String>& value) { m_botTags = value; }

    /**
     * <p>A list of tags associated with the bot.</p>
     */
    inline void SetBotTags(Aws::Map<Aws::String, Aws::String>&& value) { m_botTags = std::move(value); }

    /**
     * <p>A list of tags associated with the bot.</p>
     */
    inline CreateBotResult& WithBotTags(const Aws::Map<Aws::String, Aws::String>& value) { SetBotTags(value); return *this;}

    /**
     * <p>A list of tags associated with the bot.</p>
     */
    inline CreateBotResult& WithBotTags(Aws::Map<Aws::String, Aws::String>&& value) { SetBotTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags associated with the bot.</p>
     */
    inline CreateBotResult& AddBotTags(const Aws::String& key, const Aws::String& value) { m_botTags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags associated with the bot.</p>
     */
    inline CreateBotResult& AddBotTags(Aws::String&& key, const Aws::String& value) { m_botTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags associated with the bot.</p>
     */
    inline CreateBotResult& AddBotTags(const Aws::String& key, Aws::String&& value) { m_botTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the bot.</p>
     */
    inline CreateBotResult& AddBotTags(Aws::String&& key, Aws::String&& value) { m_botTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the bot.</p>
     */
    inline CreateBotResult& AddBotTags(const char* key, Aws::String&& value) { m_botTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the bot.</p>
     */
    inline CreateBotResult& AddBotTags(Aws::String&& key, const char* value) { m_botTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags associated with the bot.</p>
     */
    inline CreateBotResult& AddBotTags(const char* key, const char* value) { m_botTags.emplace(key, value); return *this; }


    /**
     * <p>A list of tags associated with the test alias for the bot.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTestBotAliasTags() const{ return m_testBotAliasTags; }

    /**
     * <p>A list of tags associated with the test alias for the bot.</p>
     */
    inline void SetTestBotAliasTags(const Aws::Map<Aws::String, Aws::String>& value) { m_testBotAliasTags = value; }

    /**
     * <p>A list of tags associated with the test alias for the bot.</p>
     */
    inline void SetTestBotAliasTags(Aws::Map<Aws::String, Aws::String>&& value) { m_testBotAliasTags = std::move(value); }

    /**
     * <p>A list of tags associated with the test alias for the bot.</p>
     */
    inline CreateBotResult& WithTestBotAliasTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTestBotAliasTags(value); return *this;}

    /**
     * <p>A list of tags associated with the test alias for the bot.</p>
     */
    inline CreateBotResult& WithTestBotAliasTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTestBotAliasTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags associated with the test alias for the bot.</p>
     */
    inline CreateBotResult& AddTestBotAliasTags(const Aws::String& key, const Aws::String& value) { m_testBotAliasTags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags associated with the test alias for the bot.</p>
     */
    inline CreateBotResult& AddTestBotAliasTags(Aws::String&& key, const Aws::String& value) { m_testBotAliasTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags associated with the test alias for the bot.</p>
     */
    inline CreateBotResult& AddTestBotAliasTags(const Aws::String& key, Aws::String&& value) { m_testBotAliasTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the test alias for the bot.</p>
     */
    inline CreateBotResult& AddTestBotAliasTags(Aws::String&& key, Aws::String&& value) { m_testBotAliasTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the test alias for the bot.</p>
     */
    inline CreateBotResult& AddTestBotAliasTags(const char* key, Aws::String&& value) { m_testBotAliasTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the test alias for the bot.</p>
     */
    inline CreateBotResult& AddTestBotAliasTags(Aws::String&& key, const char* value) { m_testBotAliasTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags associated with the test alias for the bot.</p>
     */
    inline CreateBotResult& AddTestBotAliasTags(const char* key, const char* value) { m_testBotAliasTags.emplace(key, value); return *this; }

  private:

    Aws::String m_botId;

    Aws::String m_botName;

    Aws::String m_description;

    Aws::String m_roleArn;

    DataPrivacy m_dataPrivacy;

    int m_idleSessionTTLInSeconds;

    BotStatus m_botStatus;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Map<Aws::String, Aws::String> m_botTags;

    Aws::Map<Aws::String, Aws::String> m_testBotAliasTags;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
