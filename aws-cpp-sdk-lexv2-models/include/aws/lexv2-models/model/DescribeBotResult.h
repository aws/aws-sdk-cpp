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
  class DescribeBotResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeBotResult();
    AWS_LEXMODELSV2_API DescribeBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the bot.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique identifier of the bot.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot.</p>
     */
    inline DescribeBotResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot.</p>
     */
    inline DescribeBotResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot.</p>
     */
    inline DescribeBotResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The name of the bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botName = value; }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botName = std::move(value); }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetBotName(const char* value) { m_botName.assign(value); }

    /**
     * <p>The name of the bot.</p>
     */
    inline DescribeBotResult& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot.</p>
     */
    inline DescribeBotResult& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot.</p>
     */
    inline DescribeBotResult& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>The description of the bot. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the bot. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the bot. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the bot. </p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the bot. </p>
     */
    inline DescribeBotResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the bot. </p>
     */
    inline DescribeBotResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the bot. </p>
     */
    inline DescribeBotResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline DescribeBotResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline DescribeBotResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline DescribeBotResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Settings for managing data privacy of the bot and its conversations with
     * users.</p>
     */
    inline const DataPrivacy& GetDataPrivacy() const{ return m_dataPrivacy; }

    /**
     * <p>Settings for managing data privacy of the bot and its conversations with
     * users.</p>
     */
    inline void SetDataPrivacy(const DataPrivacy& value) { m_dataPrivacy = value; }

    /**
     * <p>Settings for managing data privacy of the bot and its conversations with
     * users.</p>
     */
    inline void SetDataPrivacy(DataPrivacy&& value) { m_dataPrivacy = std::move(value); }

    /**
     * <p>Settings for managing data privacy of the bot and its conversations with
     * users.</p>
     */
    inline DescribeBotResult& WithDataPrivacy(const DataPrivacy& value) { SetDataPrivacy(value); return *this;}

    /**
     * <p>Settings for managing data privacy of the bot and its conversations with
     * users.</p>
     */
    inline DescribeBotResult& WithDataPrivacy(DataPrivacy&& value) { SetDataPrivacy(std::move(value)); return *this;}


    /**
     * <p>The maximum time in seconds that Amazon Lex retains the data gathered in a
     * conversation.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }

    /**
     * <p>The maximum time in seconds that Amazon Lex retains the data gathered in a
     * conversation.</p>
     */
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSeconds = value; }

    /**
     * <p>The maximum time in seconds that Amazon Lex retains the data gathered in a
     * conversation.</p>
     */
    inline DescribeBotResult& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}


    /**
     * <p>The current status of the bot. When the status is <code>Available</code> the
     * bot is ready to be used in conversations with users.</p>
     */
    inline const BotStatus& GetBotStatus() const{ return m_botStatus; }

    /**
     * <p>The current status of the bot. When the status is <code>Available</code> the
     * bot is ready to be used in conversations with users.</p>
     */
    inline void SetBotStatus(const BotStatus& value) { m_botStatus = value; }

    /**
     * <p>The current status of the bot. When the status is <code>Available</code> the
     * bot is ready to be used in conversations with users.</p>
     */
    inline void SetBotStatus(BotStatus&& value) { m_botStatus = std::move(value); }

    /**
     * <p>The current status of the bot. When the status is <code>Available</code> the
     * bot is ready to be used in conversations with users.</p>
     */
    inline DescribeBotResult& WithBotStatus(const BotStatus& value) { SetBotStatus(value); return *this;}

    /**
     * <p>The current status of the bot. When the status is <code>Available</code> the
     * bot is ready to be used in conversations with users.</p>
     */
    inline DescribeBotResult& WithBotStatus(BotStatus&& value) { SetBotStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp of the date and time that the bot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>A timestamp of the date and time that the bot was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the bot was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the bot was created.</p>
     */
    inline DescribeBotResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the bot was created.</p>
     */
    inline DescribeBotResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp of the date and time that the bot was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>A timestamp of the date and time that the bot was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the bot was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the bot was last updated.</p>
     */
    inline DescribeBotResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the bot was last updated.</p>
     */
    inline DescribeBotResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botName;

    Aws::String m_description;

    Aws::String m_roleArn;

    DataPrivacy m_dataPrivacy;

    int m_idleSessionTTLInSeconds;

    BotStatus m_botStatus;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
