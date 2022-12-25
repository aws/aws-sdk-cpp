/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BotExportSpecification.h>
#include <aws/lexv2-models/model/BotLocaleExportSpecification.h>
#include <aws/lexv2-models/model/CustomVocabularyExportSpecification.h>
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
   * <p>Provides information about the bot or bot locale that you want to export. You
   * can specify the <code>botExportSpecification</code> or the
   * <code>botLocaleExportSpecification</code>, but not both.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ExportResourceSpecification">AWS
   * API Reference</a></p>
   */
  class ExportResourceSpecification
  {
  public:
    AWS_LEXMODELSV2_API ExportResourceSpecification();
    AWS_LEXMODELSV2_API ExportResourceSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ExportResourceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Parameters for exporting a bot.</p>
     */
    inline const BotExportSpecification& GetBotExportSpecification() const{ return m_botExportSpecification; }

    /**
     * <p>Parameters for exporting a bot.</p>
     */
    inline bool BotExportSpecificationHasBeenSet() const { return m_botExportSpecificationHasBeenSet; }

    /**
     * <p>Parameters for exporting a bot.</p>
     */
    inline void SetBotExportSpecification(const BotExportSpecification& value) { m_botExportSpecificationHasBeenSet = true; m_botExportSpecification = value; }

    /**
     * <p>Parameters for exporting a bot.</p>
     */
    inline void SetBotExportSpecification(BotExportSpecification&& value) { m_botExportSpecificationHasBeenSet = true; m_botExportSpecification = std::move(value); }

    /**
     * <p>Parameters for exporting a bot.</p>
     */
    inline ExportResourceSpecification& WithBotExportSpecification(const BotExportSpecification& value) { SetBotExportSpecification(value); return *this;}

    /**
     * <p>Parameters for exporting a bot.</p>
     */
    inline ExportResourceSpecification& WithBotExportSpecification(BotExportSpecification&& value) { SetBotExportSpecification(std::move(value)); return *this;}


    /**
     * <p>Parameters for exporting a bot locale.</p>
     */
    inline const BotLocaleExportSpecification& GetBotLocaleExportSpecification() const{ return m_botLocaleExportSpecification; }

    /**
     * <p>Parameters for exporting a bot locale.</p>
     */
    inline bool BotLocaleExportSpecificationHasBeenSet() const { return m_botLocaleExportSpecificationHasBeenSet; }

    /**
     * <p>Parameters for exporting a bot locale.</p>
     */
    inline void SetBotLocaleExportSpecification(const BotLocaleExportSpecification& value) { m_botLocaleExportSpecificationHasBeenSet = true; m_botLocaleExportSpecification = value; }

    /**
     * <p>Parameters for exporting a bot locale.</p>
     */
    inline void SetBotLocaleExportSpecification(BotLocaleExportSpecification&& value) { m_botLocaleExportSpecificationHasBeenSet = true; m_botLocaleExportSpecification = std::move(value); }

    /**
     * <p>Parameters for exporting a bot locale.</p>
     */
    inline ExportResourceSpecification& WithBotLocaleExportSpecification(const BotLocaleExportSpecification& value) { SetBotLocaleExportSpecification(value); return *this;}

    /**
     * <p>Parameters for exporting a bot locale.</p>
     */
    inline ExportResourceSpecification& WithBotLocaleExportSpecification(BotLocaleExportSpecification&& value) { SetBotLocaleExportSpecification(std::move(value)); return *this;}


    /**
     * <p>The parameters required to export a custom vocabulary.</p>
     */
    inline const CustomVocabularyExportSpecification& GetCustomVocabularyExportSpecification() const{ return m_customVocabularyExportSpecification; }

    /**
     * <p>The parameters required to export a custom vocabulary.</p>
     */
    inline bool CustomVocabularyExportSpecificationHasBeenSet() const { return m_customVocabularyExportSpecificationHasBeenSet; }

    /**
     * <p>The parameters required to export a custom vocabulary.</p>
     */
    inline void SetCustomVocabularyExportSpecification(const CustomVocabularyExportSpecification& value) { m_customVocabularyExportSpecificationHasBeenSet = true; m_customVocabularyExportSpecification = value; }

    /**
     * <p>The parameters required to export a custom vocabulary.</p>
     */
    inline void SetCustomVocabularyExportSpecification(CustomVocabularyExportSpecification&& value) { m_customVocabularyExportSpecificationHasBeenSet = true; m_customVocabularyExportSpecification = std::move(value); }

    /**
     * <p>The parameters required to export a custom vocabulary.</p>
     */
    inline ExportResourceSpecification& WithCustomVocabularyExportSpecification(const CustomVocabularyExportSpecification& value) { SetCustomVocabularyExportSpecification(value); return *this;}

    /**
     * <p>The parameters required to export a custom vocabulary.</p>
     */
    inline ExportResourceSpecification& WithCustomVocabularyExportSpecification(CustomVocabularyExportSpecification&& value) { SetCustomVocabularyExportSpecification(std::move(value)); return *this;}

  private:

    BotExportSpecification m_botExportSpecification;
    bool m_botExportSpecificationHasBeenSet = false;

    BotLocaleExportSpecification m_botLocaleExportSpecification;
    bool m_botLocaleExportSpecificationHasBeenSet = false;

    CustomVocabularyExportSpecification m_customVocabularyExportSpecification;
    bool m_customVocabularyExportSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
