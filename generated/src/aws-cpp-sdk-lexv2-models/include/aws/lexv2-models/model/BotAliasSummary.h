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
    AWS_LEXMODELSV2_API BotAliasSummary();
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
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = value; }
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::move(value); }
    inline void SetBotAliasId(const char* value) { m_botAliasIdHasBeenSet = true; m_botAliasId.assign(value); }
    inline BotAliasSummary& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}
    inline BotAliasSummary& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}
    inline BotAliasSummary& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasName() const{ return m_botAliasName; }
    inline bool BotAliasNameHasBeenSet() const { return m_botAliasNameHasBeenSet; }
    inline void SetBotAliasName(const Aws::String& value) { m_botAliasNameHasBeenSet = true; m_botAliasName = value; }
    inline void SetBotAliasName(Aws::String&& value) { m_botAliasNameHasBeenSet = true; m_botAliasName = std::move(value); }
    inline void SetBotAliasName(const char* value) { m_botAliasNameHasBeenSet = true; m_botAliasName.assign(value); }
    inline BotAliasSummary& WithBotAliasName(const Aws::String& value) { SetBotAliasName(value); return *this;}
    inline BotAliasSummary& WithBotAliasName(Aws::String&& value) { SetBotAliasName(std::move(value)); return *this;}
    inline BotAliasSummary& WithBotAliasName(const char* value) { SetBotAliasName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the bot alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline BotAliasSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline BotAliasSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline BotAliasSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that the bot alias references.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline BotAliasSummary& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline BotAliasSummary& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline BotAliasSummary& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the bot alias. If the status is <code>Available</code>,
     * the alias is ready for use.</p>
     */
    inline const BotAliasStatus& GetBotAliasStatus() const{ return m_botAliasStatus; }
    inline bool BotAliasStatusHasBeenSet() const { return m_botAliasStatusHasBeenSet; }
    inline void SetBotAliasStatus(const BotAliasStatus& value) { m_botAliasStatusHasBeenSet = true; m_botAliasStatus = value; }
    inline void SetBotAliasStatus(BotAliasStatus&& value) { m_botAliasStatusHasBeenSet = true; m_botAliasStatus = std::move(value); }
    inline BotAliasSummary& WithBotAliasStatus(const BotAliasStatus& value) { SetBotAliasStatus(value); return *this;}
    inline BotAliasSummary& WithBotAliasStatus(BotAliasStatus&& value) { SetBotAliasStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot alias was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline BotAliasSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline BotAliasSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot alias was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline BotAliasSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline BotAliasSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
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

    BotAliasStatus m_botAliasStatus;
    bool m_botAliasStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
