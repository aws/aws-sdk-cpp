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
    AWS_LEXMODELSV2_API StartBotResourceGenerationResult() = default;
    AWS_LEXMODELSV2_API StartBotResourceGenerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API StartBotResourceGenerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The prompt that was used generate intents and slot types for the bot
     * locale.</p>
     */
    inline const Aws::String& GetGenerationInputPrompt() const { return m_generationInputPrompt; }
    template<typename GenerationInputPromptT = Aws::String>
    void SetGenerationInputPrompt(GenerationInputPromptT&& value) { m_generationInputPromptHasBeenSet = true; m_generationInputPrompt = std::forward<GenerationInputPromptT>(value); }
    template<typename GenerationInputPromptT = Aws::String>
    StartBotResourceGenerationResult& WithGenerationInputPrompt(GenerationInputPromptT&& value) { SetGenerationInputPrompt(std::forward<GenerationInputPromptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the generation request.</p>
     */
    inline const Aws::String& GetGenerationId() const { return m_generationId; }
    template<typename GenerationIdT = Aws::String>
    void SetGenerationId(GenerationIdT&& value) { m_generationIdHasBeenSet = true; m_generationId = std::forward<GenerationIdT>(value); }
    template<typename GenerationIdT = Aws::String>
    StartBotResourceGenerationResult& WithGenerationId(GenerationIdT&& value) { SetGenerationId(std::forward<GenerationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the bot for which the generation request was
     * made.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    StartBotResourceGenerationResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot for which the generation request was made.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    StartBotResourceGenerationResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the bot for which the generation request was made.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    StartBotResourceGenerationResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the generation request.</p>
     */
    inline GenerationStatus GetGenerationStatus() const { return m_generationStatus; }
    inline void SetGenerationStatus(GenerationStatus value) { m_generationStatusHasBeenSet = true; m_generationStatus = value; }
    inline StartBotResourceGenerationResult& WithGenerationStatus(GenerationStatus value) { SetGenerationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the generation request was made.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    StartBotResourceGenerationResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartBotResourceGenerationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_generationInputPrompt;
    bool m_generationInputPromptHasBeenSet = false;

    Aws::String m_generationId;
    bool m_generationIdHasBeenSet = false;

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    GenerationStatus m_generationStatus{GenerationStatus::NOT_SET};
    bool m_generationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
