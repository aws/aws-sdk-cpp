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


    ///@{
    /**
     * <p>The identifier of the bot that contains the custom vocabulary.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline DescribeCustomVocabularyMetadataResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline DescribeCustomVocabularyMetadataResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline DescribeCustomVocabularyMetadataResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that contains the custom vocabulary to describe.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline DescribeCustomVocabularyMetadataResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline DescribeCustomVocabularyMetadataResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline DescribeCustomVocabularyMetadataResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale that contains the custom vocabulary to describe.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }
    inline DescribeCustomVocabularyMetadataResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline DescribeCustomVocabularyMetadataResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline DescribeCustomVocabularyMetadataResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the custom vocabulary. If the status is <code>Ready</code> the
     * custom vocabulary is ready to use.</p>
     */
    inline const CustomVocabularyStatus& GetCustomVocabularyStatus() const{ return m_customVocabularyStatus; }
    inline void SetCustomVocabularyStatus(const CustomVocabularyStatus& value) { m_customVocabularyStatus = value; }
    inline void SetCustomVocabularyStatus(CustomVocabularyStatus&& value) { m_customVocabularyStatus = std::move(value); }
    inline DescribeCustomVocabularyMetadataResult& WithCustomVocabularyStatus(const CustomVocabularyStatus& value) { SetCustomVocabularyStatus(value); return *this;}
    inline DescribeCustomVocabularyMetadataResult& WithCustomVocabularyStatus(CustomVocabularyStatus&& value) { SetCustomVocabularyStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the custom vocabulary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline DescribeCustomVocabularyMetadataResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline DescribeCustomVocabularyMetadataResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the custom vocabulary was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }
    inline DescribeCustomVocabularyMetadataResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline DescribeCustomVocabularyMetadataResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeCustomVocabularyMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeCustomVocabularyMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeCustomVocabularyMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    CustomVocabularyStatus m_customVocabularyStatus;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
