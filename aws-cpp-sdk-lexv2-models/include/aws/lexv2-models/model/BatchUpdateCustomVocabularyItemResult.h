/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/FailedCustomVocabularyItem.h>
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
  class BatchUpdateCustomVocabularyItemResult
  {
  public:
    AWS_LEXMODELSV2_API BatchUpdateCustomVocabularyItemResult();
    AWS_LEXMODELSV2_API BatchUpdateCustomVocabularyItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API BatchUpdateCustomVocabularyItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique identifier of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The bot version of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The bot version of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The bot version of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The bot version of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The bot version of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The bot version of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The bot version of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The locale identifier of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The locale identifier of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The locale identifier of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The locale identifier of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The locale identifier of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale identifier of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale identifier of the bot to the batch update response for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The errors of the action to batch update response for the custom vocabulary
     * item.</p>
     */
    inline const Aws::Vector<FailedCustomVocabularyItem>& GetErrors() const{ return m_errors; }

    /**
     * <p>The errors of the action to batch update response for the custom vocabulary
     * item.</p>
     */
    inline void SetErrors(const Aws::Vector<FailedCustomVocabularyItem>& value) { m_errors = value; }

    /**
     * <p>The errors of the action to batch update response for the custom vocabulary
     * item.</p>
     */
    inline void SetErrors(Aws::Vector<FailedCustomVocabularyItem>&& value) { m_errors = std::move(value); }

    /**
     * <p>The errors of the action to batch update response for the custom vocabulary
     * item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& WithErrors(const Aws::Vector<FailedCustomVocabularyItem>& value) { SetErrors(value); return *this;}

    /**
     * <p>The errors of the action to batch update response for the custom vocabulary
     * item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& WithErrors(Aws::Vector<FailedCustomVocabularyItem>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>The errors of the action to batch update response for the custom vocabulary
     * item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& AddErrors(const FailedCustomVocabularyItem& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>The errors of the action to batch update response for the custom vocabulary
     * item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& AddErrors(FailedCustomVocabularyItem&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>The resources of the action to batch update response for the custom
     * vocabulary item.</p>
     */
    inline const Aws::Vector<CustomVocabularyItem>& GetResources() const{ return m_resources; }

    /**
     * <p>The resources of the action to batch update response for the custom
     * vocabulary item.</p>
     */
    inline void SetResources(const Aws::Vector<CustomVocabularyItem>& value) { m_resources = value; }

    /**
     * <p>The resources of the action to batch update response for the custom
     * vocabulary item.</p>
     */
    inline void SetResources(Aws::Vector<CustomVocabularyItem>&& value) { m_resources = std::move(value); }

    /**
     * <p>The resources of the action to batch update response for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& WithResources(const Aws::Vector<CustomVocabularyItem>& value) { SetResources(value); return *this;}

    /**
     * <p>The resources of the action to batch update response for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& WithResources(Aws::Vector<CustomVocabularyItem>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>The resources of the action to batch update response for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& AddResources(const CustomVocabularyItem& value) { m_resources.push_back(value); return *this; }

    /**
     * <p>The resources of the action to batch update response for the custom
     * vocabulary item.</p>
     */
    inline BatchUpdateCustomVocabularyItemResult& AddResources(CustomVocabularyItem&& value) { m_resources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::Vector<FailedCustomVocabularyItem> m_errors;

    Aws::Vector<CustomVocabularyItem> m_resources;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
