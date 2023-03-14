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
  class BatchCreateCustomVocabularyItemResult
  {
  public:
    AWS_LEXMODELSV2_API BatchCreateCustomVocabularyItemResult();
    AWS_LEXMODELSV2_API BatchCreateCustomVocabularyItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API BatchCreateCustomVocabularyItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the bot associated with this custom vocabulary.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot associated with this custom vocabulary.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot associated with this custom vocabulary.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot associated with this custom vocabulary.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot associated with this custom vocabulary.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot associated with this custom vocabulary.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot associated with this custom vocabulary.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The identifier of the version of the bot associated with this custom
     * vocabulary.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The identifier of the version of the bot associated with this custom
     * vocabulary.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The identifier of the version of the bot associated with this custom
     * vocabulary.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The identifier of the version of the bot associated with this custom
     * vocabulary.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The identifier of the version of the bot associated with this custom
     * vocabulary.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The identifier of the version of the bot associated with this custom
     * vocabulary.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The identifier of the version of the bot associated with this custom
     * vocabulary.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale where this custom vocabulary is
     * used. The string must match one of the supported locales. For more information,
     * see <a href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">
     * Supported Languages </a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale where this custom vocabulary is
     * used. The string must match one of the supported locales. For more information,
     * see <a href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">
     * Supported Languages </a>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The identifier of the language and locale where this custom vocabulary is
     * used. The string must match one of the supported locales. For more information,
     * see <a href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">
     * Supported Languages </a>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale where this custom vocabulary is
     * used. The string must match one of the supported locales. For more information,
     * see <a href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">
     * Supported Languages </a>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale where this custom vocabulary is
     * used. The string must match one of the supported locales. For more information,
     * see <a href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">
     * Supported Languages </a>.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale where this custom vocabulary is
     * used. The string must match one of the supported locales. For more information,
     * see <a href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">
     * Supported Languages </a>.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale where this custom vocabulary is
     * used. The string must match one of the supported locales. For more information,
     * see <a href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">
     * Supported Languages </a>.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>A list of custom vocabulary items that failed to create during the operation.
     * The reason for the error is contained within each error object.</p>
     */
    inline const Aws::Vector<FailedCustomVocabularyItem>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of custom vocabulary items that failed to create during the operation.
     * The reason for the error is contained within each error object.</p>
     */
    inline void SetErrors(const Aws::Vector<FailedCustomVocabularyItem>& value) { m_errors = value; }

    /**
     * <p>A list of custom vocabulary items that failed to create during the operation.
     * The reason for the error is contained within each error object.</p>
     */
    inline void SetErrors(Aws::Vector<FailedCustomVocabularyItem>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of custom vocabulary items that failed to create during the operation.
     * The reason for the error is contained within each error object.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& WithErrors(const Aws::Vector<FailedCustomVocabularyItem>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of custom vocabulary items that failed to create during the operation.
     * The reason for the error is contained within each error object.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& WithErrors(Aws::Vector<FailedCustomVocabularyItem>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of custom vocabulary items that failed to create during the operation.
     * The reason for the error is contained within each error object.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& AddErrors(const FailedCustomVocabularyItem& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of custom vocabulary items that failed to create during the operation.
     * The reason for the error is contained within each error object.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& AddErrors(FailedCustomVocabularyItem&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of custom vocabulary items that were successfully created during the
     * operation.</p>
     */
    inline const Aws::Vector<CustomVocabularyItem>& GetResources() const{ return m_resources; }

    /**
     * <p>A list of custom vocabulary items that were successfully created during the
     * operation.</p>
     */
    inline void SetResources(const Aws::Vector<CustomVocabularyItem>& value) { m_resources = value; }

    /**
     * <p>A list of custom vocabulary items that were successfully created during the
     * operation.</p>
     */
    inline void SetResources(Aws::Vector<CustomVocabularyItem>&& value) { m_resources = std::move(value); }

    /**
     * <p>A list of custom vocabulary items that were successfully created during the
     * operation.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& WithResources(const Aws::Vector<CustomVocabularyItem>& value) { SetResources(value); return *this;}

    /**
     * <p>A list of custom vocabulary items that were successfully created during the
     * operation.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& WithResources(Aws::Vector<CustomVocabularyItem>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>A list of custom vocabulary items that were successfully created during the
     * operation.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& AddResources(const CustomVocabularyItem& value) { m_resources.push_back(value); return *this; }

    /**
     * <p>A list of custom vocabulary items that were successfully created during the
     * operation.</p>
     */
    inline BatchCreateCustomVocabularyItemResult& AddResources(CustomVocabularyItem&& value) { m_resources.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchCreateCustomVocabularyItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchCreateCustomVocabularyItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchCreateCustomVocabularyItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::Vector<FailedCustomVocabularyItem> m_errors;

    Aws::Vector<CustomVocabularyItem> m_resources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
