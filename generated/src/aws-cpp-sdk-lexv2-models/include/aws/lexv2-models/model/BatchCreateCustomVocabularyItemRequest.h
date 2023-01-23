/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/NewCustomVocabularyItem.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class BatchCreateCustomVocabularyItemRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API BatchCreateCustomVocabularyItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateCustomVocabularyItem"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline BatchCreateCustomVocabularyItemRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline BatchCreateCustomVocabularyItemRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline BatchCreateCustomVocabularyItemRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The bot version of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The bot version of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The bot version of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The bot version of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The bot version of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The bot version of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline BatchCreateCustomVocabularyItemRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The bot version of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline BatchCreateCustomVocabularyItemRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The bot version of the bot to batch create the custom vocabulary item
     * for.</p>
     */
    inline BatchCreateCustomVocabularyItemRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The unique locale identifier of the bot to batch create the custom vocabulary
     * item for.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The unique locale identifier of the bot to batch create the custom vocabulary
     * item for.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The unique locale identifier of the bot to batch create the custom vocabulary
     * item for.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The unique locale identifier of the bot to batch create the custom vocabulary
     * item for.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The unique locale identifier of the bot to batch create the custom vocabulary
     * item for.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The unique locale identifier of the bot to batch create the custom vocabulary
     * item for.</p>
     */
    inline BatchCreateCustomVocabularyItemRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The unique locale identifier of the bot to batch create the custom vocabulary
     * item for.</p>
     */
    inline BatchCreateCustomVocabularyItemRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The unique locale identifier of the bot to batch create the custom vocabulary
     * item for.</p>
     */
    inline BatchCreateCustomVocabularyItemRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The custom vocabulary item list of the bot to batch create the custom
     * vocabulary item for.</p>
     */
    inline const Aws::Vector<NewCustomVocabularyItem>& GetCustomVocabularyItemList() const{ return m_customVocabularyItemList; }

    /**
     * <p>The custom vocabulary item list of the bot to batch create the custom
     * vocabulary item for.</p>
     */
    inline bool CustomVocabularyItemListHasBeenSet() const { return m_customVocabularyItemListHasBeenSet; }

    /**
     * <p>The custom vocabulary item list of the bot to batch create the custom
     * vocabulary item for.</p>
     */
    inline void SetCustomVocabularyItemList(const Aws::Vector<NewCustomVocabularyItem>& value) { m_customVocabularyItemListHasBeenSet = true; m_customVocabularyItemList = value; }

    /**
     * <p>The custom vocabulary item list of the bot to batch create the custom
     * vocabulary item for.</p>
     */
    inline void SetCustomVocabularyItemList(Aws::Vector<NewCustomVocabularyItem>&& value) { m_customVocabularyItemListHasBeenSet = true; m_customVocabularyItemList = std::move(value); }

    /**
     * <p>The custom vocabulary item list of the bot to batch create the custom
     * vocabulary item for.</p>
     */
    inline BatchCreateCustomVocabularyItemRequest& WithCustomVocabularyItemList(const Aws::Vector<NewCustomVocabularyItem>& value) { SetCustomVocabularyItemList(value); return *this;}

    /**
     * <p>The custom vocabulary item list of the bot to batch create the custom
     * vocabulary item for.</p>
     */
    inline BatchCreateCustomVocabularyItemRequest& WithCustomVocabularyItemList(Aws::Vector<NewCustomVocabularyItem>&& value) { SetCustomVocabularyItemList(std::move(value)); return *this;}

    /**
     * <p>The custom vocabulary item list of the bot to batch create the custom
     * vocabulary item for.</p>
     */
    inline BatchCreateCustomVocabularyItemRequest& AddCustomVocabularyItemList(const NewCustomVocabularyItem& value) { m_customVocabularyItemListHasBeenSet = true; m_customVocabularyItemList.push_back(value); return *this; }

    /**
     * <p>The custom vocabulary item list of the bot to batch create the custom
     * vocabulary item for.</p>
     */
    inline BatchCreateCustomVocabularyItemRequest& AddCustomVocabularyItemList(NewCustomVocabularyItem&& value) { m_customVocabularyItemListHasBeenSet = true; m_customVocabularyItemList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::Vector<NewCustomVocabularyItem> m_customVocabularyItemList;
    bool m_customVocabularyItemListHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
