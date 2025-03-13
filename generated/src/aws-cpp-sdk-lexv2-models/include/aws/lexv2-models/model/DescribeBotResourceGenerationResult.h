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
    AWS_LEXMODELSV2_API DescribeBotResourceGenerationResult() = default;
    AWS_LEXMODELSV2_API DescribeBotResourceGenerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeBotResourceGenerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the bot for which the generation request was
     * made.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    DescribeBotResourceGenerationResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot for which the generation request was made.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    DescribeBotResourceGenerationResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the bot for which the generation request was made.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    DescribeBotResourceGenerationResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generation ID for which to return the generation details.</p>
     */
    inline const Aws::String& GetGenerationId() const { return m_generationId; }
    template<typename GenerationIdT = Aws::String>
    void SetGenerationId(GenerationIdT&& value) { m_generationIdHasBeenSet = true; m_generationId = std::forward<GenerationIdT>(value); }
    template<typename GenerationIdT = Aws::String>
    DescribeBotResourceGenerationResult& WithGenerationId(GenerationIdT&& value) { SetGenerationId(std::forward<GenerationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reasons why the generation of bot resources through natural
     * language description failed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const { return m_failureReasons; }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    void SetFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::forward<FailureReasonsT>(value); }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    DescribeBotResourceGenerationResult& WithFailureReasons(FailureReasonsT&& value) { SetFailureReasons(std::forward<FailureReasonsT>(value)); return *this;}
    template<typename FailureReasonsT = Aws::String>
    DescribeBotResourceGenerationResult& AddFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the generation request.</p>
     */
    inline GenerationStatus GetGenerationStatus() const { return m_generationStatus; }
    inline void SetGenerationStatus(GenerationStatus value) { m_generationStatusHasBeenSet = true; m_generationStatus = value; }
    inline DescribeBotResourceGenerationResult& WithGenerationStatus(GenerationStatus value) { SetGenerationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt used in the generation request.</p>
     */
    inline const Aws::String& GetGenerationInputPrompt() const { return m_generationInputPrompt; }
    template<typename GenerationInputPromptT = Aws::String>
    void SetGenerationInputPrompt(GenerationInputPromptT&& value) { m_generationInputPromptHasBeenSet = true; m_generationInputPrompt = std::forward<GenerationInputPromptT>(value); }
    template<typename GenerationInputPromptT = Aws::String>
    DescribeBotResourceGenerationResult& WithGenerationInputPrompt(GenerationInputPromptT&& value) { SetGenerationInputPrompt(std::forward<GenerationInputPromptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of the generated bot locale configuration.</p>
     */
    inline const Aws::String& GetGeneratedBotLocaleUrl() const { return m_generatedBotLocaleUrl; }
    template<typename GeneratedBotLocaleUrlT = Aws::String>
    void SetGeneratedBotLocaleUrl(GeneratedBotLocaleUrlT&& value) { m_generatedBotLocaleUrlHasBeenSet = true; m_generatedBotLocaleUrl = std::forward<GeneratedBotLocaleUrlT>(value); }
    template<typename GeneratedBotLocaleUrlT = Aws::String>
    DescribeBotResourceGenerationResult& WithGeneratedBotLocaleUrl(GeneratedBotLocaleUrlT&& value) { SetGeneratedBotLocaleUrl(std::forward<GeneratedBotLocaleUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the item was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    DescribeBotResourceGenerationResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the model used to generate the bot resources.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    DescribeBotResourceGenerationResult& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the generated item was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    DescribeBotResourceGenerationResult& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBotResourceGenerationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_generationId;
    bool m_generationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    GenerationStatus m_generationStatus{GenerationStatus::NOT_SET};
    bool m_generationStatusHasBeenSet = false;

    Aws::String m_generationInputPrompt;
    bool m_generationInputPromptHasBeenSet = false;

    Aws::String m_generatedBotLocaleUrl;
    bool m_generatedBotLocaleUrlHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
