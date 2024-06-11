/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/GenerationStatus.h>
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
  class DescribeBotResourceGenerationResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeBotResourceGenerationResult();
    AWS_LEXMODELSV2_API DescribeBotResourceGenerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeBotResourceGenerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the bot for which the generation request was
     * made.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline DescribeBotResourceGenerationResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline DescribeBotResourceGenerationResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline DescribeBotResourceGenerationResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot for which the generation request was made.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline DescribeBotResourceGenerationResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline DescribeBotResourceGenerationResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline DescribeBotResourceGenerationResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the bot for which the generation request was made.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }
    inline DescribeBotResourceGenerationResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline DescribeBotResourceGenerationResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline DescribeBotResourceGenerationResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generation ID for which to return the generation details.</p>
     */
    inline const Aws::String& GetGenerationId() const{ return m_generationId; }
    inline void SetGenerationId(const Aws::String& value) { m_generationId = value; }
    inline void SetGenerationId(Aws::String&& value) { m_generationId = std::move(value); }
    inline void SetGenerationId(const char* value) { m_generationId.assign(value); }
    inline DescribeBotResourceGenerationResult& WithGenerationId(const Aws::String& value) { SetGenerationId(value); return *this;}
    inline DescribeBotResourceGenerationResult& WithGenerationId(Aws::String&& value) { SetGenerationId(std::move(value)); return *this;}
    inline DescribeBotResourceGenerationResult& WithGenerationId(const char* value) { SetGenerationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reasons why the generation of bot resources through natural
     * language description failed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasons = value; }
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasons = std::move(value); }
    inline DescribeBotResourceGenerationResult& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}
    inline DescribeBotResourceGenerationResult& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}
    inline DescribeBotResourceGenerationResult& AddFailureReasons(const Aws::String& value) { m_failureReasons.push_back(value); return *this; }
    inline DescribeBotResourceGenerationResult& AddFailureReasons(Aws::String&& value) { m_failureReasons.push_back(std::move(value)); return *this; }
    inline DescribeBotResourceGenerationResult& AddFailureReasons(const char* value) { m_failureReasons.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the generation request.</p>
     */
    inline const GenerationStatus& GetGenerationStatus() const{ return m_generationStatus; }
    inline void SetGenerationStatus(const GenerationStatus& value) { m_generationStatus = value; }
    inline void SetGenerationStatus(GenerationStatus&& value) { m_generationStatus = std::move(value); }
    inline DescribeBotResourceGenerationResult& WithGenerationStatus(const GenerationStatus& value) { SetGenerationStatus(value); return *this;}
    inline DescribeBotResourceGenerationResult& WithGenerationStatus(GenerationStatus&& value) { SetGenerationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt used in the generation request.</p>
     */
    inline const Aws::String& GetGenerationInputPrompt() const{ return m_generationInputPrompt; }
    inline void SetGenerationInputPrompt(const Aws::String& value) { m_generationInputPrompt = value; }
    inline void SetGenerationInputPrompt(Aws::String&& value) { m_generationInputPrompt = std::move(value); }
    inline void SetGenerationInputPrompt(const char* value) { m_generationInputPrompt.assign(value); }
    inline DescribeBotResourceGenerationResult& WithGenerationInputPrompt(const Aws::String& value) { SetGenerationInputPrompt(value); return *this;}
    inline DescribeBotResourceGenerationResult& WithGenerationInputPrompt(Aws::String&& value) { SetGenerationInputPrompt(std::move(value)); return *this;}
    inline DescribeBotResourceGenerationResult& WithGenerationInputPrompt(const char* value) { SetGenerationInputPrompt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of the generated bot locale configuration.</p>
     */
    inline const Aws::String& GetGeneratedBotLocaleUrl() const{ return m_generatedBotLocaleUrl; }
    inline void SetGeneratedBotLocaleUrl(const Aws::String& value) { m_generatedBotLocaleUrl = value; }
    inline void SetGeneratedBotLocaleUrl(Aws::String&& value) { m_generatedBotLocaleUrl = std::move(value); }
    inline void SetGeneratedBotLocaleUrl(const char* value) { m_generatedBotLocaleUrl.assign(value); }
    inline DescribeBotResourceGenerationResult& WithGeneratedBotLocaleUrl(const Aws::String& value) { SetGeneratedBotLocaleUrl(value); return *this;}
    inline DescribeBotResourceGenerationResult& WithGeneratedBotLocaleUrl(Aws::String&& value) { SetGeneratedBotLocaleUrl(std::move(value)); return *this;}
    inline DescribeBotResourceGenerationResult& WithGeneratedBotLocaleUrl(const char* value) { SetGeneratedBotLocaleUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the item was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline DescribeBotResourceGenerationResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline DescribeBotResourceGenerationResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the model used to generate the bot resources.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }
    inline DescribeBotResourceGenerationResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline DescribeBotResourceGenerationResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline DescribeBotResourceGenerationResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the generated item was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }
    inline DescribeBotResourceGenerationResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline DescribeBotResourceGenerationResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeBotResourceGenerationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeBotResourceGenerationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeBotResourceGenerationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::String m_generationId;

    Aws::Vector<Aws::String> m_failureReasons;

    GenerationStatus m_generationStatus;

    Aws::String m_generationInputPrompt;

    Aws::String m_generatedBotLocaleUrl;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::String m_modelArn;

    Aws::Utils::DateTime m_lastUpdatedDateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
