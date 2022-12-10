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
    AWS_LEXMODELSV2_API BatchUpdateCustomVocabularyItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateCustomVocabularyItem"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The bot version of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The bot version of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The bot version of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The bot version of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The bot version of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The bot version of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The bot version of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The bot version of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The locale identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The locale identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The locale identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The locale identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The locale identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The locale identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale identifier of the bot to the batch update request for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The custom vocabulary item list of the bot to the batch update request for
     * the custom vocabulary item.</p>
     */
    inline const Aws::Vector<CustomVocabularyItem>& GetCustomVocabularyItemList() const{ return m_customVocabularyItemList; }

    /**
     * <p>The custom vocabulary item list of the bot to the batch update request for
     * the custom vocabulary item.</p>
     */
    inline bool CustomVocabularyItemListHasBeenSet() const { return m_customVocabularyItemListHasBeenSet; }

    /**
     * <p>The custom vocabulary item list of the bot to the batch update request for
     * the custom vocabulary item.</p>
     */
    inline void SetCustomVocabularyItemList(const Aws::Vector<CustomVocabularyItem>& value) { m_customVocabularyItemListHasBeenSet = true; m_customVocabularyItemList = value; }

    /**
     * <p>The custom vocabulary item list of the bot to the batch update request for
     * the custom vocabulary item.</p>
     */
    inline void SetCustomVocabularyItemList(Aws::Vector<CustomVocabularyItem>&& value) { m_customVocabularyItemListHasBeenSet = true; m_customVocabularyItemList = std::move(value); }

    /**
     * <p>The custom vocabulary item list of the bot to the batch update request for
     * the custom vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemRequest& WithCustomVocabularyItemList(const Aws::Vector<CustomVocabularyItem>& value) { SetCustomVocabularyItemList(value); return *this;}

    /**
     * <p>The custom vocabulary item list of the bot to the batch update request for
     * the custom vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemRequest& WithCustomVocabularyItemList(Aws::Vector<CustomVocabularyItem>&& value) { SetCustomVocabularyItemList(std::move(value)); return *this;}

    /**
     * <p>The custom vocabulary item list of the bot to the batch update request for
     * the custom vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemRequest& AddCustomVocabularyItemList(const CustomVocabularyItem& value) { m_customVocabularyItemListHasBeenSet = true; m_customVocabularyItemList.push_back(value); return *this; }

    /**
     * <p>The custom vocabulary item list of the bot to the batch update request for
     * the custom vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemRequest& AddCustomVocabularyItemList(CustomVocabularyItem&& value) { m_customVocabularyItemListHasBeenSet = true; m_customVocabularyItemList.push_back(std::move(value)); return *this; }

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
