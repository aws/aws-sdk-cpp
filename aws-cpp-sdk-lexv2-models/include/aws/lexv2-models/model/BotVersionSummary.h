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
   * <p>Summary information about a bot version returned by the <a
   * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_ListBotVersions.html">ListBotVersions</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotVersionSummary">AWS
   * API Reference</a></p>
   */
  class BotVersionSummary
  {
  public:
    AWS_LEXMODELSV2_API BotVersionSummary();
    AWS_LEXMODELSV2_API BotVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the bot associated with the version.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot associated with the version.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the bot associated with the version.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the bot associated with the version.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the bot associated with the version.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the bot associated with the version.</p>
     */
    inline BotVersionSummary& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot associated with the version.</p>
     */
    inline BotVersionSummary& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot associated with the version.</p>
     */
    inline BotVersionSummary& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>The numeric version of the bot, or <code>DRAFT</code> to indicate that this
     * is the version of the bot that can be updated..</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The numeric version of the bot, or <code>DRAFT</code> to indicate that this
     * is the version of the bot that can be updated..</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The numeric version of the bot, or <code>DRAFT</code> to indicate that this
     * is the version of the bot that can be updated..</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The numeric version of the bot, or <code>DRAFT</code> to indicate that this
     * is the version of the bot that can be updated..</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The numeric version of the bot, or <code>DRAFT</code> to indicate that this
     * is the version of the bot that can be updated..</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The numeric version of the bot, or <code>DRAFT</code> to indicate that this
     * is the version of the bot that can be updated..</p>
     */
    inline BotVersionSummary& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The numeric version of the bot, or <code>DRAFT</code> to indicate that this
     * is the version of the bot that can be updated..</p>
     */
    inline BotVersionSummary& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The numeric version of the bot, or <code>DRAFT</code> to indicate that this
     * is the version of the bot that can be updated..</p>
     */
    inline BotVersionSummary& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The description of the version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the version.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the version.</p>
     */
    inline BotVersionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the version.</p>
     */
    inline BotVersionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the version.</p>
     */
    inline BotVersionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the bot. When the status is available, the version of the bot
     * is ready for use.</p>
     */
    inline const BotStatus& GetBotStatus() const{ return m_botStatus; }

    /**
     * <p>The status of the bot. When the status is available, the version of the bot
     * is ready for use.</p>
     */
    inline bool BotStatusHasBeenSet() const { return m_botStatusHasBeenSet; }

    /**
     * <p>The status of the bot. When the status is available, the version of the bot
     * is ready for use.</p>
     */
    inline void SetBotStatus(const BotStatus& value) { m_botStatusHasBeenSet = true; m_botStatus = value; }

    /**
     * <p>The status of the bot. When the status is available, the version of the bot
     * is ready for use.</p>
     */
    inline void SetBotStatus(BotStatus&& value) { m_botStatusHasBeenSet = true; m_botStatus = std::move(value); }

    /**
     * <p>The status of the bot. When the status is available, the version of the bot
     * is ready for use.</p>
     */
    inline BotVersionSummary& WithBotStatus(const BotStatus& value) { SetBotStatus(value); return *this;}

    /**
     * <p>The status of the bot. When the status is available, the version of the bot
     * is ready for use.</p>
     */
    inline BotVersionSummary& WithBotStatus(BotStatus&& value) { SetBotStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp of the date and time that the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>A timestamp of the date and time that the version was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>A timestamp of the date and time that the version was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the version was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the version was created.</p>
     */
    inline BotVersionSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the version was created.</p>
     */
    inline BotVersionSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    BotStatus m_botStatus;
    bool m_botStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
