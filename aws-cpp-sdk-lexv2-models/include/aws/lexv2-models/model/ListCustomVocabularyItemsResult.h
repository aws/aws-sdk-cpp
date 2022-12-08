/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/CustomVocabularyItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{
  class ListCustomVocabularyItemsResult
  {
  public:
    AWS_LEXMODELSV2_API ListCustomVocabularyItemsResult();
    AWS_LEXMODELSV2_API ListCustomVocabularyItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListCustomVocabularyItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the bot to the list custom vocabulary response.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot to the list custom vocabulary response.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique identifier of the bot to the list custom vocabulary response.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot to the list custom vocabulary response.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot to the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot to the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot to the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The bot version of the bot to the list custom vocabulary response.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The bot version of the bot to the list custom vocabulary response.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The bot version of the bot to the list custom vocabulary response.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The bot version of the bot to the list custom vocabulary response.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The bot version of the bot to the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The bot version of the bot to the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The bot version of the bot to the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The locale identifier of the bot to the list custom vocabulary response.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The locale identifier of the bot to the list custom vocabulary response.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The locale identifier of the bot to the list custom vocabulary response.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The locale identifier of the bot to the list custom vocabulary response.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The locale identifier of the bot to the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale identifier of the bot to the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale identifier of the bot to the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The custom vocabulary items from the list custom vocabulary response.</p>
     */
    inline const Aws::Vector<CustomVocabularyItem>& GetCustomVocabularyItems() const{ return m_customVocabularyItems; }

    /**
     * <p>The custom vocabulary items from the list custom vocabulary response.</p>
     */
    inline void SetCustomVocabularyItems(const Aws::Vector<CustomVocabularyItem>& value) { m_customVocabularyItems = value; }

    /**
     * <p>The custom vocabulary items from the list custom vocabulary response.</p>
     */
    inline void SetCustomVocabularyItems(Aws::Vector<CustomVocabularyItem>&& value) { m_customVocabularyItems = std::move(value); }

    /**
     * <p>The custom vocabulary items from the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& WithCustomVocabularyItems(const Aws::Vector<CustomVocabularyItem>& value) { SetCustomVocabularyItems(value); return *this;}

    /**
     * <p>The custom vocabulary items from the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& WithCustomVocabularyItems(Aws::Vector<CustomVocabularyItem>&& value) { SetCustomVocabularyItems(std::move(value)); return *this;}

    /**
     * <p>The custom vocabulary items from the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& AddCustomVocabularyItems(const CustomVocabularyItem& value) { m_customVocabularyItems.push_back(value); return *this; }

    /**
     * <p>The custom vocabulary items from the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& AddCustomVocabularyItems(CustomVocabularyItem&& value) { m_customVocabularyItems.push_back(std::move(value)); return *this; }


    /**
     * <p>The nextToken identifier to the list custom vocabulary response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken identifier to the list custom vocabulary response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The nextToken identifier to the list custom vocabulary response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The nextToken identifier to the list custom vocabulary response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The nextToken identifier to the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken identifier to the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken identifier to the list custom vocabulary response.</p>
     */
    inline ListCustomVocabularyItemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::Vector<CustomVocabularyItem> m_customVocabularyItems;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
