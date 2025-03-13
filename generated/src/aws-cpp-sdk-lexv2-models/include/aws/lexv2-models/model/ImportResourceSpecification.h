/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BotImportSpecification.h>
#include <aws/lexv2-models/model/BotLocaleImportSpecification.h>
#include <aws/lexv2-models/model/CustomVocabularyImportSpecification.h>
#include <aws/lexv2-models/model/TestSetImportResourceSpecification.h>
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
   * <p>Provides information about the bot or bot locale that you want to import. You
   * can specify the <code>botImportSpecification</code> or the
   * <code>botLocaleImportSpecification</code>, but not both.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ImportResourceSpecification">AWS
   * API Reference</a></p>
   */
  class ImportResourceSpecification
  {
  public:
    AWS_LEXMODELSV2_API ImportResourceSpecification() = default;
    AWS_LEXMODELSV2_API ImportResourceSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ImportResourceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameters for importing a bot.</p>
     */
    inline const BotImportSpecification& GetBotImportSpecification() const { return m_botImportSpecification; }
    inline bool BotImportSpecificationHasBeenSet() const { return m_botImportSpecificationHasBeenSet; }
    template<typename BotImportSpecificationT = BotImportSpecification>
    void SetBotImportSpecification(BotImportSpecificationT&& value) { m_botImportSpecificationHasBeenSet = true; m_botImportSpecification = std::forward<BotImportSpecificationT>(value); }
    template<typename BotImportSpecificationT = BotImportSpecification>
    ImportResourceSpecification& WithBotImportSpecification(BotImportSpecificationT&& value) { SetBotImportSpecification(std::forward<BotImportSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters for importing a bot locale.</p>
     */
    inline const BotLocaleImportSpecification& GetBotLocaleImportSpecification() const { return m_botLocaleImportSpecification; }
    inline bool BotLocaleImportSpecificationHasBeenSet() const { return m_botLocaleImportSpecificationHasBeenSet; }
    template<typename BotLocaleImportSpecificationT = BotLocaleImportSpecification>
    void SetBotLocaleImportSpecification(BotLocaleImportSpecificationT&& value) { m_botLocaleImportSpecificationHasBeenSet = true; m_botLocaleImportSpecification = std::forward<BotLocaleImportSpecificationT>(value); }
    template<typename BotLocaleImportSpecificationT = BotLocaleImportSpecification>
    ImportResourceSpecification& WithBotLocaleImportSpecification(BotLocaleImportSpecificationT&& value) { SetBotLocaleImportSpecification(std::forward<BotLocaleImportSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomVocabularyImportSpecification& GetCustomVocabularyImportSpecification() const { return m_customVocabularyImportSpecification; }
    inline bool CustomVocabularyImportSpecificationHasBeenSet() const { return m_customVocabularyImportSpecificationHasBeenSet; }
    template<typename CustomVocabularyImportSpecificationT = CustomVocabularyImportSpecification>
    void SetCustomVocabularyImportSpecification(CustomVocabularyImportSpecificationT&& value) { m_customVocabularyImportSpecificationHasBeenSet = true; m_customVocabularyImportSpecification = std::forward<CustomVocabularyImportSpecificationT>(value); }
    template<typename CustomVocabularyImportSpecificationT = CustomVocabularyImportSpecification>
    ImportResourceSpecification& WithCustomVocabularyImportSpecification(CustomVocabularyImportSpecificationT&& value) { SetCustomVocabularyImportSpecification(std::forward<CustomVocabularyImportSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifications for the test set that is imported.</p>
     */
    inline const TestSetImportResourceSpecification& GetTestSetImportResourceSpecification() const { return m_testSetImportResourceSpecification; }
    inline bool TestSetImportResourceSpecificationHasBeenSet() const { return m_testSetImportResourceSpecificationHasBeenSet; }
    template<typename TestSetImportResourceSpecificationT = TestSetImportResourceSpecification>
    void SetTestSetImportResourceSpecification(TestSetImportResourceSpecificationT&& value) { m_testSetImportResourceSpecificationHasBeenSet = true; m_testSetImportResourceSpecification = std::forward<TestSetImportResourceSpecificationT>(value); }
    template<typename TestSetImportResourceSpecificationT = TestSetImportResourceSpecification>
    ImportResourceSpecification& WithTestSetImportResourceSpecification(TestSetImportResourceSpecificationT&& value) { SetTestSetImportResourceSpecification(std::forward<TestSetImportResourceSpecificationT>(value)); return *this;}
    ///@}
  private:

    BotImportSpecification m_botImportSpecification;
    bool m_botImportSpecificationHasBeenSet = false;

    BotLocaleImportSpecification m_botLocaleImportSpecification;
    bool m_botLocaleImportSpecificationHasBeenSet = false;

    CustomVocabularyImportSpecification m_customVocabularyImportSpecification;
    bool m_customVocabularyImportSpecificationHasBeenSet = false;

    TestSetImportResourceSpecification m_testSetImportResourceSpecification;
    bool m_testSetImportResourceSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
