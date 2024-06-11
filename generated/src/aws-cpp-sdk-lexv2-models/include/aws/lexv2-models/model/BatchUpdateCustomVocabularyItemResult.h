﻿/**
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


    ///@{
    /**
     * <p>The identifier of the bot associated with this custom vocabulary.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline BatchUpdateCustomVocabularyItemResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline BatchUpdateCustomVocabularyItemResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline BatchUpdateCustomVocabularyItemResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the version of the bot associated with this custom
     * vocabulary.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline BatchUpdateCustomVocabularyItemResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline BatchUpdateCustomVocabularyItemResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline BatchUpdateCustomVocabularyItemResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale where this custom vocabulary is
     * used. The string must match one of the supported locales. For more information,
     * see <a href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">
     * Supported Languages </a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }
    inline BatchUpdateCustomVocabularyItemResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline BatchUpdateCustomVocabularyItemResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline BatchUpdateCustomVocabularyItemResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom vocabulary items that failed to update during the operation.
     * The reason for the error is contained within each error object.</p>
     */
    inline const Aws::Vector<FailedCustomVocabularyItem>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<FailedCustomVocabularyItem>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<FailedCustomVocabularyItem>&& value) { m_errors = std::move(value); }
    inline BatchUpdateCustomVocabularyItemResult& WithErrors(const Aws::Vector<FailedCustomVocabularyItem>& value) { SetErrors(value); return *this;}
    inline BatchUpdateCustomVocabularyItemResult& WithErrors(Aws::Vector<FailedCustomVocabularyItem>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchUpdateCustomVocabularyItemResult& AddErrors(const FailedCustomVocabularyItem& value) { m_errors.push_back(value); return *this; }
    inline BatchUpdateCustomVocabularyItemResult& AddErrors(FailedCustomVocabularyItem&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of custom vocabulary items that were successfully updated during the
     * operation.</p>
     */
    inline const Aws::Vector<CustomVocabularyItem>& GetResources() const{ return m_resources; }
    inline void SetResources(const Aws::Vector<CustomVocabularyItem>& value) { m_resources = value; }
    inline void SetResources(Aws::Vector<CustomVocabularyItem>&& value) { m_resources = std::move(value); }
    inline BatchUpdateCustomVocabularyItemResult& WithResources(const Aws::Vector<CustomVocabularyItem>& value) { SetResources(value); return *this;}
    inline BatchUpdateCustomVocabularyItemResult& WithResources(Aws::Vector<CustomVocabularyItem>&& value) { SetResources(std::move(value)); return *this;}
    inline BatchUpdateCustomVocabularyItemResult& AddResources(const CustomVocabularyItem& value) { m_resources.push_back(value); return *this; }
    inline BatchUpdateCustomVocabularyItemResult& AddResources(CustomVocabularyItem&& value) { m_resources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchUpdateCustomVocabularyItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchUpdateCustomVocabularyItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchUpdateCustomVocabularyItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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
