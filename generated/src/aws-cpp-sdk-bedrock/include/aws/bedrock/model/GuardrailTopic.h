/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/GuardrailTopicType.h>
#include <aws/bedrock/model/GuardrailTopicAction.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Details about topics for the guardrail to identify and deny.</p> <p>This data
   * type is used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GetGuardrail.html#API_GetGuardrail_ResponseSyntax">GetGuardrail
   * response body</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailTopic">AWS
   * API Reference</a></p>
   */
  class GuardrailTopic
  {
  public:
    AWS_BEDROCK_API GuardrailTopic() = default;
    AWS_BEDROCK_API GuardrailTopic(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailTopic& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the topic to deny.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GuardrailTopic& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A definition of the topic to deny.</p>
     */
    inline const Aws::String& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = Aws::String>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = Aws::String>
    GuardrailTopic& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of prompts, each of which is an example of a prompt that can be
     * categorized as belonging to the topic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExamples() const { return m_examples; }
    inline bool ExamplesHasBeenSet() const { return m_examplesHasBeenSet; }
    template<typename ExamplesT = Aws::Vector<Aws::String>>
    void SetExamples(ExamplesT&& value) { m_examplesHasBeenSet = true; m_examples = std::forward<ExamplesT>(value); }
    template<typename ExamplesT = Aws::Vector<Aws::String>>
    GuardrailTopic& WithExamples(ExamplesT&& value) { SetExamples(std::forward<ExamplesT>(value)); return *this;}
    template<typename ExamplesT = Aws::String>
    GuardrailTopic& AddExamples(ExamplesT&& value) { m_examplesHasBeenSet = true; m_examples.emplace_back(std::forward<ExamplesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies to deny the topic.</p>
     */
    inline GuardrailTopicType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailTopicType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailTopic& WithType(GuardrailTopicType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take when harmful content is detected in the input. Supported
     * values include:</p> <ul> <li> <p> <code>BLOCK</code> – Block the content and
     * replace it with blocked messaging.</p> </li> <li> <p> <code>NONE</code> – Take
     * no action but return detection information in the trace response.</p> </li>
     * </ul>
     */
    inline GuardrailTopicAction GetInputAction() const { return m_inputAction; }
    inline bool InputActionHasBeenSet() const { return m_inputActionHasBeenSet; }
    inline void SetInputAction(GuardrailTopicAction value) { m_inputActionHasBeenSet = true; m_inputAction = value; }
    inline GuardrailTopic& WithInputAction(GuardrailTopicAction value) { SetInputAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take when harmful content is detected in the output. Supported
     * values include:</p> <ul> <li> <p> <code>BLOCK</code> – Block the content and
     * replace it with blocked messaging.</p> </li> <li> <p> <code>NONE</code> – Take
     * no action but return detection information in the trace response.</p> </li>
     * </ul>
     */
    inline GuardrailTopicAction GetOutputAction() const { return m_outputAction; }
    inline bool OutputActionHasBeenSet() const { return m_outputActionHasBeenSet; }
    inline void SetOutputAction(GuardrailTopicAction value) { m_outputActionHasBeenSet = true; m_outputAction = value; }
    inline GuardrailTopic& WithOutputAction(GuardrailTopicAction value) { SetOutputAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether guardrail evaluation is enabled on the input. When
     * disabled, you aren't charged for the evaluation. The evaluation doesn't appear
     * in the response.</p>
     */
    inline bool GetInputEnabled() const { return m_inputEnabled; }
    inline bool InputEnabledHasBeenSet() const { return m_inputEnabledHasBeenSet; }
    inline void SetInputEnabled(bool value) { m_inputEnabledHasBeenSet = true; m_inputEnabled = value; }
    inline GuardrailTopic& WithInputEnabled(bool value) { SetInputEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether guardrail evaluation is enabled on the output. When
     * disabled, you aren't charged for the evaluation. The evaluation doesn't appear
     * in the response.</p>
     */
    inline bool GetOutputEnabled() const { return m_outputEnabled; }
    inline bool OutputEnabledHasBeenSet() const { return m_outputEnabledHasBeenSet; }
    inline void SetOutputEnabled(bool value) { m_outputEnabledHasBeenSet = true; m_outputEnabled = value; }
    inline GuardrailTopic& WithOutputEnabled(bool value) { SetOutputEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::Vector<Aws::String> m_examples;
    bool m_examplesHasBeenSet = false;

    GuardrailTopicType m_type{GuardrailTopicType::NOT_SET};
    bool m_typeHasBeenSet = false;

    GuardrailTopicAction m_inputAction{GuardrailTopicAction::NOT_SET};
    bool m_inputActionHasBeenSet = false;

    GuardrailTopicAction m_outputAction{GuardrailTopicAction::NOT_SET};
    bool m_outputActionHasBeenSet = false;

    bool m_inputEnabled{false};
    bool m_inputEnabledHasBeenSet = false;

    bool m_outputEnabled{false};
    bool m_outputEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
