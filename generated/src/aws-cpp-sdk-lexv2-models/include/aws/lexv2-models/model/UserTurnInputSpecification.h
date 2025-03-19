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
    AWS_LEXMODELSV2_API UserTurnInputSpecification() = default;
    AWS_LEXMODELSV2_API UserTurnInputSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UserTurnInputSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The utterance input in the user turn.</p>
     */
    inline const UtteranceInputSpecification& GetUtteranceInput() const { return m_utteranceInput; }
    inline bool UtteranceInputHasBeenSet() const { return m_utteranceInputHasBeenSet; }
    template<typename UtteranceInputT = UtteranceInputSpecification>
    void SetUtteranceInput(UtteranceInputT&& value) { m_utteranceInputHasBeenSet = true; m_utteranceInput = std::forward<UtteranceInputT>(value); }
    template<typename UtteranceInputT = UtteranceInputSpecification>
    UserTurnInputSpecification& WithUtteranceInput(UtteranceInputT&& value) { SetUtteranceInput(std::forward<UtteranceInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request attributes of the user turn.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestAttributes() const { return m_requestAttributes; }
    inline bool RequestAttributesHasBeenSet() const { return m_requestAttributesHasBeenSet; }
    template<typename RequestAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetRequestAttributes(RequestAttributesT&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::forward<RequestAttributesT>(value); }
    template<typename RequestAttributesT = Aws::Map<Aws::String, Aws::String>>
    UserTurnInputSpecification& WithRequestAttributes(RequestAttributesT&& value) { SetRequestAttributes(std::forward<RequestAttributesT>(value)); return *this;}
    template<typename RequestAttributesKeyT = Aws::String, typename RequestAttributesValueT = Aws::String>
    UserTurnInputSpecification& AddRequestAttributes(RequestAttributesKeyT&& key, RequestAttributesValueT&& value) {
      m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::forward<RequestAttributesKeyT>(key), std::forward<RequestAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Contains information about the session state in the input.</p>
     */
    inline const InputSessionStateSpecification& GetSessionState() const { return m_sessionState; }
    inline bool SessionStateHasBeenSet() const { return m_sessionStateHasBeenSet; }
    template<typename SessionStateT = InputSessionStateSpecification>
    void SetSessionState(SessionStateT&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::forward<SessionStateT>(value); }
    template<typename SessionStateT = InputSessionStateSpecification>
    UserTurnInputSpecification& WithSessionState(SessionStateT&& value) { SetSessionState(std::forward<SessionStateT>(value)); return *this;}
    ///@}
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
