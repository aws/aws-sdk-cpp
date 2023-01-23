/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/CustomVocabularyStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class DescribeCustomVocabularyMetadataResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeCustomVocabularyMetadataResult();
    AWS_LEXMODELSV2_API DescribeCustomVocabularyMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeCustomVocabularyMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the bot that contains the custom vocabulary.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot that contains the custom vocabulary.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot that contains the custom vocabulary.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot that contains the custom vocabulary.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot that contains the custom vocabulary.</p>
     */
    inline DescribeCustomVocabularyMetadataResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot that contains the custom vocabulary.</p>
     */
    inline DescribeCustomVocabularyMetadataResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot that contains the custom vocabulary.</p>
     */
    inline DescribeCustomVocabularyMetadataResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot that contains the custom vocabulary to describe.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that contains the custom vocabulary to describe.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot that contains the custom vocabulary to describe.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that contains the custom vocabulary to describe.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that contains the custom vocabulary to describe.</p>
     */
    inline DescribeCustomVocabularyMetadataResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that contains the custom vocabulary to describe.</p>
     */
    inline DescribeCustomVocabularyMetadataResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that contains the custom vocabulary to describe.</p>
     */
    inline DescribeCustomVocabularyMetadataResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The locale that contains the custom vocabulary to describe.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The locale that contains the custom vocabulary to describe.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The locale that contains the custom vocabulary to describe.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The locale that contains the custom vocabulary to describe.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The locale that contains the custom vocabulary to describe.</p>
     */
    inline DescribeCustomVocabularyMetadataResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale that contains the custom vocabulary to describe.</p>
     */
    inline DescribeCustomVocabularyMetadataResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale that contains the custom vocabulary to describe.</p>
     */
    inline DescribeCustomVocabularyMetadataResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The status of the custom vocabulary. If the status is <code>Ready</code> the
     * custom vocabulary is ready to use.</p>
     */
    inline const CustomVocabularyStatus& GetCustomVocabularyStatus() const{ return m_customVocabularyStatus; }

    /**
     * <p>The status of the custom vocabulary. If the status is <code>Ready</code> the
     * custom vocabulary is ready to use.</p>
     */
    inline void SetCustomVocabularyStatus(const CustomVocabularyStatus& value) { m_customVocabularyStatus = value; }

    /**
     * <p>The status of the custom vocabulary. If the status is <code>Ready</code> the
     * custom vocabulary is ready to use.</p>
     */
    inline void SetCustomVocabularyStatus(CustomVocabularyStatus&& value) { m_customVocabularyStatus = std::move(value); }

    /**
     * <p>The status of the custom vocabulary. If the status is <code>Ready</code> the
     * custom vocabulary is ready to use.</p>
     */
    inline DescribeCustomVocabularyMetadataResult& WithCustomVocabularyStatus(const CustomVocabularyStatus& value) { SetCustomVocabularyStatus(value); return *this;}

    /**
     * <p>The status of the custom vocabulary. If the status is <code>Ready</code> the
     * custom vocabulary is ready to use.</p>
     */
    inline DescribeCustomVocabularyMetadataResult& WithCustomVocabularyStatus(CustomVocabularyStatus&& value) { SetCustomVocabularyStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time that the custom vocabulary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time that the custom vocabulary was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The date and time that the custom vocabulary was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time that the custom vocabulary was created.</p>
     */
    inline DescribeCustomVocabularyMetadataResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time that the custom vocabulary was created.</p>
     */
    inline DescribeCustomVocabularyMetadataResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the custom vocabulary was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time that the custom vocabulary was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time that the custom vocabulary was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time that the custom vocabulary was last updated.</p>
     */
    inline DescribeCustomVocabularyMetadataResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the custom vocabulary was last updated.</p>
     */
    inline DescribeCustomVocabularyMetadataResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    CustomVocabularyStatus m_customVocabularyStatus;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
