/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotAliasStatus.h>
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
   * <p>Summary information about bot aliases returned from the <a
   * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_ListBotAliases.html">ListBotAliases</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotAliasSummary">AWS
   * API Reference</a></p>
   */
  class BotAliasSummary
  {
  public:
    AWS_LEXMODELSV2_API BotAliasSummary() = default;
    AWS_LEXMODELSV2_API BotAliasSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotAliasSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier assigned to the bot alias. You can use this ID to get
     * detailed information about the alias using the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_DescribeBotAlias.html">DescribeBotAlias</a>
     * operation.</p>
     */
    inline const Aws::String& GetBotAliasId() const { return m_botAliasId; }
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }
    template<typename BotAliasIdT = Aws::String>
    void SetBotAliasId(BotAliasIdT&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::forward<BotAliasIdT>(value); }
    template<typename BotAliasIdT = Aws::String>
    BotAliasSummary& WithBotAliasId(BotAliasIdT&& value) { SetBotAliasId(std::forward<BotAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasName() const { return m_botAliasName; }
    inline bool BotAliasNameHasBeenSet() const { return m_botAliasNameHasBeenSet; }
    template<typename BotAliasNameT = Aws::String>
    void SetBotAliasName(BotAliasNameT&& value) { m_botAliasNameHasBeenSet = true; m_botAliasName = std::forward<BotAliasNameT>(value); }
    template<typename BotAliasNameT = Aws::String>
    BotAliasSummary& WithBotAliasName(BotAliasNameT&& value) { SetBotAliasName(std::forward<BotAliasNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the bot alias.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    BotAliasSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that the bot alias references.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    BotAliasSummary& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the bot alias. If the status is <code>Available</code>,
     * the alias is ready for use.</p>
     */
    inline BotAliasStatus GetBotAliasStatus() const { return m_botAliasStatus; }
    inline bool BotAliasStatusHasBeenSet() const { return m_botAliasStatusHasBeenSet; }
    inline void SetBotAliasStatus(BotAliasStatus value) { m_botAliasStatusHasBeenSet = true; m_botAliasStatus = value; }
    inline BotAliasSummary& WithBotAliasStatus(BotAliasStatus value) { SetBotAliasStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot alias was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    BotAliasSummary& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot alias was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    BotAliasSummary& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    Aws::String m_botAliasName;
    bool m_botAliasNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    BotAliasStatus m_botAliasStatus{BotAliasStatus::NOT_SET};
    bool m_botAliasStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
