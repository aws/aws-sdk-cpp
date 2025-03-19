/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/BotType.h>
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
   * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_ListBots.html">ListBots</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotSummary">AWS
   * API Reference</a></p>
   */
  class BotSummary
  {
  public:
    AWS_LEXMODELSV2_API BotSummary() = default;
    AWS_LEXMODELSV2_API BotSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier assigned to the bot. Use this ID to get detailed
     * information about the bot with the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_DescribeBot.html">DescribeBot</a>
     * operation.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    BotSummary& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bot.</p>
     */
    inline const Aws::String& GetBotName() const { return m_botName; }
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
    template<typename BotNameT = Aws::String>
    void SetBotName(BotNameT&& value) { m_botNameHasBeenSet = true; m_botName = std::forward<BotNameT>(value); }
    template<typename BotNameT = Aws::String>
    BotSummary& WithBotName(BotNameT&& value) { SetBotName(std::forward<BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the bot.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    BotSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the bot. When the status is <code>Available</code> the
     * bot is ready for use.</p>
     */
    inline BotStatus GetBotStatus() const { return m_botStatus; }
    inline bool BotStatusHasBeenSet() const { return m_botStatusHasBeenSet; }
    inline void SetBotStatus(BotStatus value) { m_botStatusHasBeenSet = true; m_botStatus = value; }
    inline BotSummary& WithBotStatus(BotStatus value) { SetBotStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest numerical version in use for the bot.</p>
     */
    inline const Aws::String& GetLatestBotVersion() const { return m_latestBotVersion; }
    inline bool LatestBotVersionHasBeenSet() const { return m_latestBotVersionHasBeenSet; }
    template<typename LatestBotVersionT = Aws::String>
    void SetLatestBotVersion(LatestBotVersionT&& value) { m_latestBotVersionHasBeenSet = true; m_latestBotVersion = std::forward<LatestBotVersionT>(value); }
    template<typename LatestBotVersionT = Aws::String>
    BotSummary& WithLatestBotVersion(LatestBotVersionT&& value) { SetLatestBotVersion(std::forward<LatestBotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the bot was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    BotSummary& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the bot.</p>
     */
    inline BotType GetBotType() const { return m_botType; }
    inline bool BotTypeHasBeenSet() const { return m_botTypeHasBeenSet; }
    inline void SetBotType(BotType value) { m_botTypeHasBeenSet = true; m_botType = value; }
    inline BotSummary& WithBotType(BotType value) { SetBotType(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    BotStatus m_botStatus{BotStatus::NOT_SET};
    bool m_botStatusHasBeenSet = false;

    Aws::String m_latestBotVersion;
    bool m_latestBotVersionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    BotType m_botType{BotType::NOT_SET};
    bool m_botTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
