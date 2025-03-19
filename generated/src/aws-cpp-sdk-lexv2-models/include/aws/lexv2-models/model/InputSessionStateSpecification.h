/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/RuntimeHints.h>
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
   * <p>Specifications for the current state of the dialog between the user and the
   * bot in the test set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/InputSessionStateSpecification">AWS
   * API Reference</a></p>
   */
  class InputSessionStateSpecification
  {
  public:
    AWS_LEXMODELSV2_API InputSessionStateSpecification() = default;
    AWS_LEXMODELSV2_API InputSessionStateSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API InputSessionStateSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Session attributes for the session state.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const { return m_sessionAttributes; }
    inline bool SessionAttributesHasBeenSet() const { return m_sessionAttributesHasBeenSet; }
    template<typename SessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetSessionAttributes(SessionAttributesT&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::forward<SessionAttributesT>(value); }
    template<typename SessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    InputSessionStateSpecification& WithSessionAttributes(SessionAttributesT&& value) { SetSessionAttributes(std::forward<SessionAttributesT>(value)); return *this;}
    template<typename SessionAttributesKeyT = Aws::String, typename SessionAttributesValueT = Aws::String>
    InputSessionStateSpecification& AddSessionAttributes(SessionAttributesKeyT&& key, SessionAttributesValueT&& value) {
      m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::forward<SessionAttributesKeyT>(key), std::forward<SessionAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Active contexts for the session state.</p>
     */
    inline const Aws::Vector<ActiveContext>& GetActiveContexts() const { return m_activeContexts; }
    inline bool ActiveContextsHasBeenSet() const { return m_activeContextsHasBeenSet; }
    template<typename ActiveContextsT = Aws::Vector<ActiveContext>>
    void SetActiveContexts(ActiveContextsT&& value) { m_activeContextsHasBeenSet = true; m_activeContexts = std::forward<ActiveContextsT>(value); }
    template<typename ActiveContextsT = Aws::Vector<ActiveContext>>
    InputSessionStateSpecification& WithActiveContexts(ActiveContextsT&& value) { SetActiveContexts(std::forward<ActiveContextsT>(value)); return *this;}
    template<typename ActiveContextsT = ActiveContext>
    InputSessionStateSpecification& AddActiveContexts(ActiveContextsT&& value) { m_activeContextsHasBeenSet = true; m_activeContexts.emplace_back(std::forward<ActiveContextsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Runtime hints for the session state.</p>
     */
    inline const RuntimeHints& GetRuntimeHints() const { return m_runtimeHints; }
    inline bool RuntimeHintsHasBeenSet() const { return m_runtimeHintsHasBeenSet; }
    template<typename RuntimeHintsT = RuntimeHints>
    void SetRuntimeHints(RuntimeHintsT&& value) { m_runtimeHintsHasBeenSet = true; m_runtimeHints = std::forward<RuntimeHintsT>(value); }
    template<typename RuntimeHintsT = RuntimeHints>
    InputSessionStateSpecification& WithRuntimeHints(RuntimeHintsT&& value) { SetRuntimeHints(std::forward<RuntimeHintsT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet = false;

    Aws::Vector<ActiveContext> m_activeContexts;
    bool m_activeContextsHasBeenSet = false;

    RuntimeHints m_runtimeHints;
    bool m_runtimeHintsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
