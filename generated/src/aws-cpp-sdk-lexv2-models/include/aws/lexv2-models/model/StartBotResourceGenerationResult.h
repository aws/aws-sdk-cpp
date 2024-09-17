/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StartBotResourceGenerationResult
  {
  public:
    AWS_LEXMODELSV2_API StartBotResourceGenerationResult();
    AWS_LEXMODELSV2_API StartBotResourceGenerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API StartBotResourceGenerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The prompt that was used generate intents and slot types for the bot
     * locale.</p>
     */
    inline const Aws::String& GetGenerationInputPrompt() const{ return m_generationInputPrompt; }
    inline void SetGenerationInputPrompt(const Aws::String& value) { m_generationInputPrompt = value; }
    inline void SetGenerationInputPrompt(Aws::String&& value) { m_generationInputPrompt = std::move(value); }
    inline void SetGenerationInputPrompt(const char* value) { m_generationInputPrompt.assign(value); }
    inline StartBotResourceGenerationResult& WithGenerationInputPrompt(const Aws::String& value) { SetGenerationInputPrompt(value); return *this;}
    inline StartBotResourceGenerationResult& WithGenerationInputPrompt(Aws::String&& value) { SetGenerationInputPrompt(std::move(value)); return *this;}
    inline StartBotResourceGenerationResult& WithGenerationInputPrompt(const char* value) { SetGenerationInputPrompt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the generation request.</p>
     */
    inline const Aws::String& GetGenerationId() const{ return m_generationId; }
    inline void SetGenerationId(const Aws::String& value) { m_generationId = value; }
    inline void SetGenerationId(Aws::String&& value) { m_generationId = std::move(value); }
    inline void SetGenerationId(const char* value) { m_generationId.assign(value); }
    inline StartBotResourceGenerationResult& WithGenerationId(const Aws::String& value) { SetGenerationId(value); return *this;}
    inline StartBotResourceGenerationResult& WithGenerationId(Aws::String&& value) { SetGenerationId(std::move(value)); return *this;}
    inline StartBotResourceGenerationResult& WithGenerationId(const char* value) { SetGenerationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the bot for which the generation request was
     * made.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline StartBotResourceGenerationResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline StartBotResourceGenerationResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline StartBotResourceGenerationResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot for which the generation request was made.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline StartBotResourceGenerationResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline StartBotResourceGenerationResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline StartBotResourceGenerationResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the bot for which the generation request was made.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }
    inline StartBotResourceGenerationResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline StartBotResourceGenerationResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline StartBotResourceGenerationResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the generation request.</p>
     */
    inline const GenerationStatus& GetGenerationStatus() const{ return m_generationStatus; }
    inline void SetGenerationStatus(const GenerationStatus& value) { m_generationStatus = value; }
    inline void SetGenerationStatus(GenerationStatus&& value) { m_generationStatus = std::move(value); }
    inline StartBotResourceGenerationResult& WithGenerationStatus(const GenerationStatus& value) { SetGenerationStatus(value); return *this;}
    inline StartBotResourceGenerationResult& WithGenerationStatus(GenerationStatus&& value) { SetGenerationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the generation request was made.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline StartBotResourceGenerationResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline StartBotResourceGenerationResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartBotResourceGenerationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartBotResourceGenerationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartBotResourceGenerationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_generationInputPrompt;

    Aws::String m_generationId;

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    GenerationStatus m_generationStatus;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
