/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotLocaleStatus.h>
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
   * <p>Summary information about bot locales returned by the <a
   * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_ListBotLocales.html">ListBotLocales</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotLocaleSummary">AWS
   * API Reference</a></p>
   */
  class BotLocaleSummary
  {
  public:
    AWS_LEXMODELSV2_API BotLocaleSummary();
    AWS_LEXMODELSV2_API BotLocaleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotLocaleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The language and locale of the bot locale.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The language and locale of the bot locale.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The language and locale of the bot locale.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The language and locale of the bot locale.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The language and locale of the bot locale.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The language and locale of the bot locale.</p>
     */
    inline BotLocaleSummary& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The language and locale of the bot locale.</p>
     */
    inline BotLocaleSummary& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The language and locale of the bot locale.</p>
     */
    inline BotLocaleSummary& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The name of the bot locale.</p>
     */
    inline const Aws::String& GetLocaleName() const{ return m_localeName; }

    /**
     * <p>The name of the bot locale.</p>
     */
    inline bool LocaleNameHasBeenSet() const { return m_localeNameHasBeenSet; }

    /**
     * <p>The name of the bot locale.</p>
     */
    inline void SetLocaleName(const Aws::String& value) { m_localeNameHasBeenSet = true; m_localeName = value; }

    /**
     * <p>The name of the bot locale.</p>
     */
    inline void SetLocaleName(Aws::String&& value) { m_localeNameHasBeenSet = true; m_localeName = std::move(value); }

    /**
     * <p>The name of the bot locale.</p>
     */
    inline void SetLocaleName(const char* value) { m_localeNameHasBeenSet = true; m_localeName.assign(value); }

    /**
     * <p>The name of the bot locale.</p>
     */
    inline BotLocaleSummary& WithLocaleName(const Aws::String& value) { SetLocaleName(value); return *this;}

    /**
     * <p>The name of the bot locale.</p>
     */
    inline BotLocaleSummary& WithLocaleName(Aws::String&& value) { SetLocaleName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot locale.</p>
     */
    inline BotLocaleSummary& WithLocaleName(const char* value) { SetLocaleName(value); return *this;}


    /**
     * <p>The description of the bot locale.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the bot locale.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the bot locale.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the bot locale.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the bot locale.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the bot locale.</p>
     */
    inline BotLocaleSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the bot locale.</p>
     */
    inline BotLocaleSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the bot locale.</p>
     */
    inline BotLocaleSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The current status of the bot locale. When the status is <code>Built</code>
     * the locale is ready for use.</p>
     */
    inline const BotLocaleStatus& GetBotLocaleStatus() const{ return m_botLocaleStatus; }

    /**
     * <p>The current status of the bot locale. When the status is <code>Built</code>
     * the locale is ready for use.</p>
     */
    inline bool BotLocaleStatusHasBeenSet() const { return m_botLocaleStatusHasBeenSet; }

    /**
     * <p>The current status of the bot locale. When the status is <code>Built</code>
     * the locale is ready for use.</p>
     */
    inline void SetBotLocaleStatus(const BotLocaleStatus& value) { m_botLocaleStatusHasBeenSet = true; m_botLocaleStatus = value; }

    /**
     * <p>The current status of the bot locale. When the status is <code>Built</code>
     * the locale is ready for use.</p>
     */
    inline void SetBotLocaleStatus(BotLocaleStatus&& value) { m_botLocaleStatusHasBeenSet = true; m_botLocaleStatus = std::move(value); }

    /**
     * <p>The current status of the bot locale. When the status is <code>Built</code>
     * the locale is ready for use.</p>
     */
    inline BotLocaleSummary& WithBotLocaleStatus(const BotLocaleStatus& value) { SetBotLocaleStatus(value); return *this;}

    /**
     * <p>The current status of the bot locale. When the status is <code>Built</code>
     * the locale is ready for use.</p>
     */
    inline BotLocaleSummary& WithBotLocaleStatus(BotLocaleStatus&& value) { SetBotLocaleStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp of the date and time that the bot locale was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>A timestamp of the date and time that the bot locale was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>A timestamp of the date and time that the bot locale was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the bot locale was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the bot locale was last updated.</p>
     */
    inline BotLocaleSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the bot locale was last updated.</p>
     */
    inline BotLocaleSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp of the date and time that the bot locale was last built.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBuildSubmittedDateTime() const{ return m_lastBuildSubmittedDateTime; }

    /**
     * <p>A timestamp of the date and time that the bot locale was last built.</p>
     */
    inline bool LastBuildSubmittedDateTimeHasBeenSet() const { return m_lastBuildSubmittedDateTimeHasBeenSet; }

    /**
     * <p>A timestamp of the date and time that the bot locale was last built.</p>
     */
    inline void SetLastBuildSubmittedDateTime(const Aws::Utils::DateTime& value) { m_lastBuildSubmittedDateTimeHasBeenSet = true; m_lastBuildSubmittedDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the bot locale was last built.</p>
     */
    inline void SetLastBuildSubmittedDateTime(Aws::Utils::DateTime&& value) { m_lastBuildSubmittedDateTimeHasBeenSet = true; m_lastBuildSubmittedDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the bot locale was last built.</p>
     */
    inline BotLocaleSummary& WithLastBuildSubmittedDateTime(const Aws::Utils::DateTime& value) { SetLastBuildSubmittedDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the bot locale was last built.</p>
     */
    inline BotLocaleSummary& WithLastBuildSubmittedDateTime(Aws::Utils::DateTime&& value) { SetLastBuildSubmittedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_localeName;
    bool m_localeNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    BotLocaleStatus m_botLocaleStatus;
    bool m_botLocaleStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastBuildSubmittedDateTime;
    bool m_lastBuildSubmittedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
