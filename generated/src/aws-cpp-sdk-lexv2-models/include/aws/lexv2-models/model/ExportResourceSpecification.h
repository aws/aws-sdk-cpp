/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BotExportSpecification.h>
#include <aws/lexv2-models/model/BotLocaleExportSpecification.h>
#include <aws/lexv2-models/model/CustomVocabularyExportSpecification.h>
#include <aws/lexv2-models/model/TestSetExportSpecification.h>
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
    AWS_LEXMODELSV2_API ExportResourceSpecification() = default;
    AWS_LEXMODELSV2_API ExportResourceSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ExportResourceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameters for exporting a bot.</p>
     */
    inline const BotExportSpecification& GetBotExportSpecification() const { return m_botExportSpecification; }
    inline bool BotExportSpecificationHasBeenSet() const { return m_botExportSpecificationHasBeenSet; }
    template<typename BotExportSpecificationT = BotExportSpecification>
    void SetBotExportSpecification(BotExportSpecificationT&& value) { m_botExportSpecificationHasBeenSet = true; m_botExportSpecification = std::forward<BotExportSpecificationT>(value); }
    template<typename BotExportSpecificationT = BotExportSpecification>
    ExportResourceSpecification& WithBotExportSpecification(BotExportSpecificationT&& value) { SetBotExportSpecification(std::forward<BotExportSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters for exporting a bot locale.</p>
     */
    inline const BotLocaleExportSpecification& GetBotLocaleExportSpecification() const { return m_botLocaleExportSpecification; }
    inline bool BotLocaleExportSpecificationHasBeenSet() const { return m_botLocaleExportSpecificationHasBeenSet; }
    template<typename BotLocaleExportSpecificationT = BotLocaleExportSpecification>
    void SetBotLocaleExportSpecification(BotLocaleExportSpecificationT&& value) { m_botLocaleExportSpecificationHasBeenSet = true; m_botLocaleExportSpecification = std::forward<BotLocaleExportSpecificationT>(value); }
    template<typename BotLocaleExportSpecificationT = BotLocaleExportSpecification>
    ExportResourceSpecification& WithBotLocaleExportSpecification(BotLocaleExportSpecificationT&& value) { SetBotLocaleExportSpecification(std::forward<BotLocaleExportSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters required to export a custom vocabulary.</p>
     */
    inline const CustomVocabularyExportSpecification& GetCustomVocabularyExportSpecification() const { return m_customVocabularyExportSpecification; }
    inline bool CustomVocabularyExportSpecificationHasBeenSet() const { return m_customVocabularyExportSpecificationHasBeenSet; }
    template<typename CustomVocabularyExportSpecificationT = CustomVocabularyExportSpecification>
    void SetCustomVocabularyExportSpecification(CustomVocabularyExportSpecificationT&& value) { m_customVocabularyExportSpecificationHasBeenSet = true; m_customVocabularyExportSpecification = std::forward<CustomVocabularyExportSpecificationT>(value); }
    template<typename CustomVocabularyExportSpecificationT = CustomVocabularyExportSpecification>
    ExportResourceSpecification& WithCustomVocabularyExportSpecification(CustomVocabularyExportSpecificationT&& value) { SetCustomVocabularyExportSpecification(std::forward<CustomVocabularyExportSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifications for the test set that is exported as a resource.</p>
     */
    inline const TestSetExportSpecification& GetTestSetExportSpecification() const { return m_testSetExportSpecification; }
    inline bool TestSetExportSpecificationHasBeenSet() const { return m_testSetExportSpecificationHasBeenSet; }
    template<typename TestSetExportSpecificationT = TestSetExportSpecification>
    void SetTestSetExportSpecification(TestSetExportSpecificationT&& value) { m_testSetExportSpecificationHasBeenSet = true; m_testSetExportSpecification = std::forward<TestSetExportSpecificationT>(value); }
    template<typename TestSetExportSpecificationT = TestSetExportSpecification>
    ExportResourceSpecification& WithTestSetExportSpecification(TestSetExportSpecificationT&& value) { SetTestSetExportSpecification(std::forward<TestSetExportSpecificationT>(value)); return *this;}
    ///@}
  private:

    BotExportSpecification m_botExportSpecification;
    bool m_botExportSpecificationHasBeenSet = false;

    BotLocaleExportSpecification m_botLocaleExportSpecification;
    bool m_botLocaleExportSpecificationHasBeenSet = false;

    CustomVocabularyExportSpecification m_customVocabularyExportSpecification;
    bool m_customVocabularyExportSpecificationHasBeenSet = false;

    TestSetExportSpecification m_testSetExportSpecification;
    bool m_testSetExportSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
