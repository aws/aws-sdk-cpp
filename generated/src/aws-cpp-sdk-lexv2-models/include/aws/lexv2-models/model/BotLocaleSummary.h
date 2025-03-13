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
   * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_ListBotLocales.html">ListBotLocales</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotLocaleSummary">AWS
   * API Reference</a></p>
   */
  class BotLocaleSummary
  {
  public:
    AWS_LEXMODELSV2_API BotLocaleSummary() = default;
    AWS_LEXMODELSV2_API BotLocaleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotLocaleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The language and locale of the bot locale.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    BotLocaleSummary& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bot locale.</p>
     */
    inline const Aws::String& GetLocaleName() const { return m_localeName; }
    inline bool LocaleNameHasBeenSet() const { return m_localeNameHasBeenSet; }
    template<typename LocaleNameT = Aws::String>
    void SetLocaleName(LocaleNameT&& value) { m_localeNameHasBeenSet = true; m_localeName = std::forward<LocaleNameT>(value); }
    template<typename LocaleNameT = Aws::String>
    BotLocaleSummary& WithLocaleName(LocaleNameT&& value) { SetLocaleName(std::forward<LocaleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the bot locale.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    BotLocaleSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the bot locale. When the status is <code>Built</code>
     * the locale is ready for use.</p>
     */
    inline BotLocaleStatus GetBotLocaleStatus() const { return m_botLocaleStatus; }
    inline bool BotLocaleStatusHasBeenSet() const { return m_botLocaleStatusHasBeenSet; }
    inline void SetBotLocaleStatus(BotLocaleStatus value) { m_botLocaleStatusHasBeenSet = true; m_botLocaleStatus = value; }
    inline BotLocaleSummary& WithBotLocaleStatus(BotLocaleStatus value) { SetBotLocaleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot locale was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    BotLocaleSummary& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot locale was last built.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBuildSubmittedDateTime() const { return m_lastBuildSubmittedDateTime; }
    inline bool LastBuildSubmittedDateTimeHasBeenSet() const { return m_lastBuildSubmittedDateTimeHasBeenSet; }
    template<typename LastBuildSubmittedDateTimeT = Aws::Utils::DateTime>
    void SetLastBuildSubmittedDateTime(LastBuildSubmittedDateTimeT&& value) { m_lastBuildSubmittedDateTimeHasBeenSet = true; m_lastBuildSubmittedDateTime = std::forward<LastBuildSubmittedDateTimeT>(value); }
    template<typename LastBuildSubmittedDateTimeT = Aws::Utils::DateTime>
    BotLocaleSummary& WithLastBuildSubmittedDateTime(LastBuildSubmittedDateTimeT&& value) { SetLastBuildSubmittedDateTime(std::forward<LastBuildSubmittedDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_localeName;
    bool m_localeNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    BotLocaleStatus m_botLocaleStatus{BotLocaleStatus::NOT_SET};
    bool m_botLocaleStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastBuildSubmittedDateTime{};
    bool m_lastBuildSubmittedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
