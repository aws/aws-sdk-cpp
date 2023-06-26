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
    AWS_LEXMODELSV2_API UserTurnOutputSpecification();
    AWS_LEXMODELSV2_API UserTurnOutputSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UserTurnOutputSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about the intent.</p>
     */
    inline const UserTurnIntentOutput& GetIntent() const{ return m_intent; }

    /**
     * <p>Contains information about the intent.</p>
     */
    inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }

    /**
     * <p>Contains information about the intent.</p>
     */
    inline void SetIntent(const UserTurnIntentOutput& value) { m_intentHasBeenSet = true; m_intent = value; }

    /**
     * <p>Contains information about the intent.</p>
     */
    inline void SetIntent(UserTurnIntentOutput&& value) { m_intentHasBeenSet = true; m_intent = std::move(value); }

    /**
     * <p>Contains information about the intent.</p>
     */
    inline UserTurnOutputSpecification& WithIntent(const UserTurnIntentOutput& value) { SetIntent(value); return *this;}

    /**
     * <p>Contains information about the intent.</p>
     */
    inline UserTurnOutputSpecification& WithIntent(UserTurnIntentOutput&& value) { SetIntent(std::move(value)); return *this;}


    /**
     * <p>The contexts that are active in the turn.</p>
     */
    inline const Aws::Vector<ActiveContext>& GetActiveContexts() const{ return m_activeContexts; }

    /**
     * <p>The contexts that are active in the turn.</p>
     */
    inline bool ActiveContextsHasBeenSet() const { return m_activeContextsHasBeenSet; }

    /**
     * <p>The contexts that are active in the turn.</p>
     */
    inline void SetActiveContexts(const Aws::Vector<ActiveContext>& value) { m_activeContextsHasBeenSet = true; m_activeContexts = value; }

    /**
     * <p>The contexts that are active in the turn.</p>
     */
    inline void SetActiveContexts(Aws::Vector<ActiveContext>&& value) { m_activeContextsHasBeenSet = true; m_activeContexts = std::move(value); }

    /**
     * <p>The contexts that are active in the turn.</p>
     */
    inline UserTurnOutputSpecification& WithActiveContexts(const Aws::Vector<ActiveContext>& value) { SetActiveContexts(value); return *this;}

    /**
     * <p>The contexts that are active in the turn.</p>
     */
    inline UserTurnOutputSpecification& WithActiveContexts(Aws::Vector<ActiveContext>&& value) { SetActiveContexts(std::move(value)); return *this;}

    /**
     * <p>The contexts that are active in the turn.</p>
     */
    inline UserTurnOutputSpecification& AddActiveContexts(const ActiveContext& value) { m_activeContextsHasBeenSet = true; m_activeContexts.push_back(value); return *this; }

    /**
     * <p>The contexts that are active in the turn.</p>
     */
    inline UserTurnOutputSpecification& AddActiveContexts(ActiveContext&& value) { m_activeContextsHasBeenSet = true; m_activeContexts.push_back(std::move(value)); return *this; }


    /**
     * <p>The transcript that is output for the user turn by the test execution.</p>
     */
    inline const Aws::String& GetTranscript() const{ return m_transcript; }

    /**
     * <p>The transcript that is output for the user turn by the test execution.</p>
     */
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    /**
     * <p>The transcript that is output for the user turn by the test execution.</p>
     */
    inline void SetTranscript(const Aws::String& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    /**
     * <p>The transcript that is output for the user turn by the test execution.</p>
     */
    inline void SetTranscript(Aws::String&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    /**
     * <p>The transcript that is output for the user turn by the test execution.</p>
     */
    inline void SetTranscript(const char* value) { m_transcriptHasBeenSet = true; m_transcript.assign(value); }

    /**
     * <p>The transcript that is output for the user turn by the test execution.</p>
     */
    inline UserTurnOutputSpecification& WithTranscript(const Aws::String& value) { SetTranscript(value); return *this;}

    /**
     * <p>The transcript that is output for the user turn by the test execution.</p>
     */
    inline UserTurnOutputSpecification& WithTranscript(Aws::String&& value) { SetTranscript(std::move(value)); return *this;}

    /**
     * <p>The transcript that is output for the user turn by the test execution.</p>
     */
    inline UserTurnOutputSpecification& WithTranscript(const char* value) { SetTranscript(value); return *this;}

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
