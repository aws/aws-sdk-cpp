/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/CustomVocabularyStatus.h>
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
  class DeleteCustomVocabularyResult
  {
  public:
    AWS_LEXMODELSV2_API DeleteCustomVocabularyResult();
    AWS_LEXMODELSV2_API DeleteCustomVocabularyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DeleteCustomVocabularyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the bot that the custom vocabulary was removed from.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot that the custom vocabulary was removed from.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot that the custom vocabulary was removed from.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot that the custom vocabulary was removed from.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot that the custom vocabulary was removed from.</p>
     */
    inline DeleteCustomVocabularyResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot that the custom vocabulary was removed from.</p>
     */
    inline DeleteCustomVocabularyResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot that the custom vocabulary was removed from.</p>
     */
    inline DeleteCustomVocabularyResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot that the custom vocabulary was removed from.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that the custom vocabulary was removed from.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot that the custom vocabulary was removed from.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that the custom vocabulary was removed from.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that the custom vocabulary was removed from.</p>
     */
    inline DeleteCustomVocabularyResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that the custom vocabulary was removed from.</p>
     */
    inline DeleteCustomVocabularyResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that the custom vocabulary was removed from.</p>
     */
    inline DeleteCustomVocabularyResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The locale identifier for the locale that the custom vocabulary was removed
     * from.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The locale identifier for the locale that the custom vocabulary was removed
     * from.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The locale identifier for the locale that the custom vocabulary was removed
     * from.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The locale identifier for the locale that the custom vocabulary was removed
     * from.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The locale identifier for the locale that the custom vocabulary was removed
     * from.</p>
     */
    inline DeleteCustomVocabularyResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale identifier for the locale that the custom vocabulary was removed
     * from.</p>
     */
    inline DeleteCustomVocabularyResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale identifier for the locale that the custom vocabulary was removed
     * from.</p>
     */
    inline DeleteCustomVocabularyResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The status of removing the custom vocabulary.</p>
     */
    inline const CustomVocabularyStatus& GetCustomVocabularyStatus() const{ return m_customVocabularyStatus; }

    /**
     * <p>The status of removing the custom vocabulary.</p>
     */
    inline void SetCustomVocabularyStatus(const CustomVocabularyStatus& value) { m_customVocabularyStatus = value; }

    /**
     * <p>The status of removing the custom vocabulary.</p>
     */
    inline void SetCustomVocabularyStatus(CustomVocabularyStatus&& value) { m_customVocabularyStatus = std::move(value); }

    /**
     * <p>The status of removing the custom vocabulary.</p>
     */
    inline DeleteCustomVocabularyResult& WithCustomVocabularyStatus(const CustomVocabularyStatus& value) { SetCustomVocabularyStatus(value); return *this;}

    /**
     * <p>The status of removing the custom vocabulary.</p>
     */
    inline DeleteCustomVocabularyResult& WithCustomVocabularyStatus(CustomVocabularyStatus&& value) { SetCustomVocabularyStatus(std::move(value)); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    CustomVocabularyStatus m_customVocabularyStatus;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
