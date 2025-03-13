/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/CustomVocabularyItem.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class BatchUpdateCustomVocabularyItemRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API BatchUpdateCustomVocabularyItemRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateCustomVocabularyItem"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the bot associated with this custom vocabulary</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    BatchUpdateCustomVocabularyItemRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the version of the bot associated with this custom
     * vocabulary.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    BatchUpdateCustomVocabularyItemRequest& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale where this custom vocabulary is
     * used. The string must match one of the supported locales. For more information,
     * see <a href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">
     * Supported Languages </a>.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    BatchUpdateCustomVocabularyItemRequest& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom vocabulary items with updated fields. Each entry must
     * contain a phrase and can optionally contain a displayAs and/or a weight.</p>
     */
    inline const Aws::Vector<CustomVocabularyItem>& GetCustomVocabularyItemList() const { return m_customVocabularyItemList; }
    inline bool CustomVocabularyItemListHasBeenSet() const { return m_customVocabularyItemListHasBeenSet; }
    template<typename CustomVocabularyItemListT = Aws::Vector<CustomVocabularyItem>>
    void SetCustomVocabularyItemList(CustomVocabularyItemListT&& value) { m_customVocabularyItemListHasBeenSet = true; m_customVocabularyItemList = std::forward<CustomVocabularyItemListT>(value); }
    template<typename CustomVocabularyItemListT = Aws::Vector<CustomVocabularyItem>>
    BatchUpdateCustomVocabularyItemRequest& WithCustomVocabularyItemList(CustomVocabularyItemListT&& value) { SetCustomVocabularyItemList(std::forward<CustomVocabularyItemListT>(value)); return *this;}
    template<typename CustomVocabularyItemListT = CustomVocabularyItem>
    BatchUpdateCustomVocabularyItemRequest& AddCustomVocabularyItemList(CustomVocabularyItemListT&& value) { m_customVocabularyItemListHasBeenSet = true; m_customVocabularyItemList.emplace_back(std::forward<CustomVocabularyItemListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::Vector<CustomVocabularyItem> m_customVocabularyItemList;
    bool m_customVocabularyItemListHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
