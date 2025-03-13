/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/UserTurnIntentOutput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/ActiveContext.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains results that are output for the user turn by the test
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UserTurnOutputSpecification">AWS
   * API Reference</a></p>
   */
  class UserTurnOutputSpecification
  {
  public:
    AWS_LEXMODELSV2_API UserTurnOutputSpecification() = default;
    AWS_LEXMODELSV2_API UserTurnOutputSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UserTurnOutputSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the intent.</p>
     */
    inline const UserTurnIntentOutput& GetIntent() const { return m_intent; }
    inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }
    template<typename IntentT = UserTurnIntentOutput>
    void SetIntent(IntentT&& value) { m_intentHasBeenSet = true; m_intent = std::forward<IntentT>(value); }
    template<typename IntentT = UserTurnIntentOutput>
    UserTurnOutputSpecification& WithIntent(IntentT&& value) { SetIntent(std::forward<IntentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contexts that are active in the turn.</p>
     */
    inline const Aws::Vector<ActiveContext>& GetActiveContexts() const { return m_activeContexts; }
    inline bool ActiveContextsHasBeenSet() const { return m_activeContextsHasBeenSet; }
    template<typename ActiveContextsT = Aws::Vector<ActiveContext>>
    void SetActiveContexts(ActiveContextsT&& value) { m_activeContextsHasBeenSet = true; m_activeContexts = std::forward<ActiveContextsT>(value); }
    template<typename ActiveContextsT = Aws::Vector<ActiveContext>>
    UserTurnOutputSpecification& WithActiveContexts(ActiveContextsT&& value) { SetActiveContexts(std::forward<ActiveContextsT>(value)); return *this;}
    template<typename ActiveContextsT = ActiveContext>
    UserTurnOutputSpecification& AddActiveContexts(ActiveContextsT&& value) { m_activeContextsHasBeenSet = true; m_activeContexts.emplace_back(std::forward<ActiveContextsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The transcript that is output for the user turn by the test execution.</p>
     */
    inline const Aws::String& GetTranscript() const { return m_transcript; }
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }
    template<typename TranscriptT = Aws::String>
    void SetTranscript(TranscriptT&& value) { m_transcriptHasBeenSet = true; m_transcript = std::forward<TranscriptT>(value); }
    template<typename TranscriptT = Aws::String>
    UserTurnOutputSpecification& WithTranscript(TranscriptT&& value) { SetTranscript(std::forward<TranscriptT>(value)); return *this;}
    ///@}
  private:

    UserTurnIntentOutput m_intent;
    bool m_intentHasBeenSet = false;

    Aws::Vector<ActiveContext> m_activeContexts;
    bool m_activeContextsHasBeenSet = false;

    Aws::String m_transcript;
    bool m_transcriptHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
