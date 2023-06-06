/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/UtteranceInputSpecification.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/InputSessionStateSpecification.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about the user messages in the turn in the
   * input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UserTurnInputSpecification">AWS
   * API Reference</a></p>
   */
  class UserTurnInputSpecification
  {
  public:
    AWS_LEXMODELSV2_API UserTurnInputSpecification();
    AWS_LEXMODELSV2_API UserTurnInputSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UserTurnInputSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The utterance input in the user turn.</p>
     */
    inline const UtteranceInputSpecification& GetUtteranceInput() const{ return m_utteranceInput; }

    /**
     * <p>The utterance input in the user turn.</p>
     */
    inline bool UtteranceInputHasBeenSet() const { return m_utteranceInputHasBeenSet; }

    /**
     * <p>The utterance input in the user turn.</p>
     */
    inline void SetUtteranceInput(const UtteranceInputSpecification& value) { m_utteranceInputHasBeenSet = true; m_utteranceInput = value; }

    /**
     * <p>The utterance input in the user turn.</p>
     */
    inline void SetUtteranceInput(UtteranceInputSpecification&& value) { m_utteranceInputHasBeenSet = true; m_utteranceInput = std::move(value); }

    /**
     * <p>The utterance input in the user turn.</p>
     */
    inline UserTurnInputSpecification& WithUtteranceInput(const UtteranceInputSpecification& value) { SetUtteranceInput(value); return *this;}

    /**
     * <p>The utterance input in the user turn.</p>
     */
    inline UserTurnInputSpecification& WithUtteranceInput(UtteranceInputSpecification&& value) { SetUtteranceInput(std::move(value)); return *this;}


    /**
     * <p>Request attributes of the user turn.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestAttributes() const{ return m_requestAttributes; }

    /**
     * <p>Request attributes of the user turn.</p>
     */
    inline bool RequestAttributesHasBeenSet() const { return m_requestAttributesHasBeenSet; }

    /**
     * <p>Request attributes of the user turn.</p>
     */
    inline void SetRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = value; }

    /**
     * <p>Request attributes of the user turn.</p>
     */
    inline void SetRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::move(value); }

    /**
     * <p>Request attributes of the user turn.</p>
     */
    inline UserTurnInputSpecification& WithRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestAttributes(value); return *this;}

    /**
     * <p>Request attributes of the user turn.</p>
     */
    inline UserTurnInputSpecification& WithRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestAttributes(std::move(value)); return *this;}

    /**
     * <p>Request attributes of the user turn.</p>
     */
    inline UserTurnInputSpecification& AddRequestAttributes(const Aws::String& key, const Aws::String& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, value); return *this; }

    /**
     * <p>Request attributes of the user turn.</p>
     */
    inline UserTurnInputSpecification& AddRequestAttributes(Aws::String&& key, const Aws::String& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request attributes of the user turn.</p>
     */
    inline UserTurnInputSpecification& AddRequestAttributes(const Aws::String& key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request attributes of the user turn.</p>
     */
    inline UserTurnInputSpecification& AddRequestAttributes(Aws::String&& key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Request attributes of the user turn.</p>
     */
    inline UserTurnInputSpecification& AddRequestAttributes(const char* key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request attributes of the user turn.</p>
     */
    inline UserTurnInputSpecification& AddRequestAttributes(Aws::String&& key, const char* value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request attributes of the user turn.</p>
     */
    inline UserTurnInputSpecification& AddRequestAttributes(const char* key, const char* value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, value); return *this; }


    /**
     * <p>Contains information about the session state in the input.</p>
     */
    inline const InputSessionStateSpecification& GetSessionState() const{ return m_sessionState; }

    /**
     * <p>Contains information about the session state in the input.</p>
     */
    inline bool SessionStateHasBeenSet() const { return m_sessionStateHasBeenSet; }

    /**
     * <p>Contains information about the session state in the input.</p>
     */
    inline void SetSessionState(const InputSessionStateSpecification& value) { m_sessionStateHasBeenSet = true; m_sessionState = value; }

    /**
     * <p>Contains information about the session state in the input.</p>
     */
    inline void SetSessionState(InputSessionStateSpecification&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::move(value); }

    /**
     * <p>Contains information about the session state in the input.</p>
     */
    inline UserTurnInputSpecification& WithSessionState(const InputSessionStateSpecification& value) { SetSessionState(value); return *this;}

    /**
     * <p>Contains information about the session state in the input.</p>
     */
    inline UserTurnInputSpecification& WithSessionState(InputSessionStateSpecification&& value) { SetSessionState(std::move(value)); return *this;}

  private:

    UtteranceInputSpecification m_utteranceInput;
    bool m_utteranceInputHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestAttributes;
    bool m_requestAttributesHasBeenSet = false;

    InputSessionStateSpecification m_sessionState;
    bool m_sessionStateHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
