/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Summary information about a bot returned by the <a
   * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_ListBots.html">ListBots</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotSummary">AWS
   * API Reference</a></p>
   */
  class BotSummary
  {
  public:
    AWS_LEXMODELSV2_API BotSummary();
    AWS_LEXMODELSV2_API BotSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier assigned to the bot. Use this ID to get detailed
     * information about the bot with the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeBot.html">DescribeBot</a>
     * operation.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier assigned to the bot. Use this ID to get detailed
     * information about the bot with the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeBot.html">DescribeBot</a>
     * operation.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier assigned to the bot. Use this ID to get detailed
     * information about the bot with the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeBot.html">DescribeBot</a>
     * operation.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier assigned to the bot. Use this ID to get detailed
     * information about the bot with the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeBot.html">DescribeBot</a>
     * operation.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier assigned to the bot. Use this ID to get detailed
     * information about the bot with the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeBot.html">DescribeBot</a>
     * operation.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier assigned to the bot. Use this ID to get detailed
     * information about the bot with the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeBot.html">DescribeBot</a>
     * operation.</p>
     */
    inline BotSummary& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier assigned to the bot. Use this ID to get detailed
     * information about the bot with the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeBot.html">DescribeBot</a>
     * operation.</p>
     */
    inline BotSummary& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier assigned to the bot. Use this ID to get detailed
     * information about the bot with the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeBot.html">DescribeBot</a>
     * operation.</p>
     */
    inline BotSummary& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The name of the bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the bot.</p>
     */
    inline BotSummary& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot.</p>
     */
    inline BotSummary& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot.</p>
     */
    inline BotSummary& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>The description of the bot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the bot.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the bot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the bot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the bot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the bot.</p>
     */
    inline BotSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the bot.</p>
     */
    inline BotSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the bot.</p>
     */
    inline BotSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The current status of the bot. When the status is <code>Available</code> the
     * bot is ready for use.</p>
     */
    inline const BotStatus& GetBotStatus() const{ return m_botStatus; }

    /**
     * <p>The current status of the bot. When the status is <code>Available</code> the
     * bot is ready for use.</p>
     */
    inline bool BotStatusHasBeenSet() const { return m_botStatusHasBeenSet; }

    /**
     * <p>The current status of the bot. When the status is <code>Available</code> the
     * bot is ready for use.</p>
     */
    inline void SetBotStatus(const BotStatus& value) { m_botStatusHasBeenSet = true; m_botStatus = value; }

    /**
     * <p>The current status of the bot. When the status is <code>Available</code> the
     * bot is ready for use.</p>
     */
    inline void SetBotStatus(BotStatus&& value) { m_botStatusHasBeenSet = true; m_botStatus = std::move(value); }

    /**
     * <p>The current status of the bot. When the status is <code>Available</code> the
     * bot is ready for use.</p>
     */
    inline BotSummary& WithBotStatus(const BotStatus& value) { SetBotStatus(value); return *this;}

    /**
     * <p>The current status of the bot. When the status is <code>Available</code> the
     * bot is ready for use.</p>
     */
    inline BotSummary& WithBotStatus(BotStatus&& value) { SetBotStatus(std::move(value)); return *this;}


    /**
     * <p>The latest numerical version in use for the bot.</p>
     */
    inline const Aws::String& GetLatestBotVersion() const{ return m_latestBotVersion; }

    /**
     * <p>The latest numerical version in use for the bot.</p>
     */
    inline bool LatestBotVersionHasBeenSet() const { return m_latestBotVersionHasBeenSet; }

    /**
     * <p>The latest numerical version in use for the bot.</p>
     */
    inline void SetLatestBotVersion(const Aws::String& value) { m_latestBotVersionHasBeenSet = true; m_latestBotVersion = value; }

    /**
     * <p>The latest numerical version in use for the bot.</p>
     */
    inline void SetLatestBotVersion(Aws::String&& value) { m_latestBotVersionHasBeenSet = true; m_latestBotVersion = std::move(value); }

    /**
     * <p>The latest numerical version in use for the bot.</p>
     */
    inline void SetLatestBotVersion(const char* value) { m_latestBotVersionHasBeenSet = true; m_latestBotVersion.assign(value); }

    /**
     * <p>The latest numerical version in use for the bot.</p>
     */
    inline BotSummary& WithLatestBotVersion(const Aws::String& value) { SetLatestBotVersion(value); return *this;}

    /**
     * <p>The latest numerical version in use for the bot.</p>
     */
    inline BotSummary& WithLatestBotVersion(Aws::String&& value) { SetLatestBotVersion(std::move(value)); return *this;}

    /**
     * <p>The latest numerical version in use for the bot.</p>
     */
    inline BotSummary& WithLatestBotVersion(const char* value) { SetLatestBotVersion(value); return *this;}


    /**
     * <p>The date and time that the bot was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time that the bot was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the bot was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time that the bot was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time that the bot was last updated.</p>
     */
    inline BotSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the bot was last updated.</p>
     */
    inline BotSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    BotStatus m_botStatus;
    bool m_botStatusHasBeenSet = false;

    Aws::String m_latestBotVersion;
    bool m_latestBotVersionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
