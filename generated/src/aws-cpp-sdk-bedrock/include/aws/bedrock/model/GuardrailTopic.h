/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/GuardrailTopicType.h>
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
    AWS_BEDROCK_API GuardrailTopic();
    AWS_BEDROCK_API GuardrailTopic(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailTopic& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the topic to deny.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GuardrailTopic& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GuardrailTopic& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GuardrailTopic& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A definition of the topic to deny.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline void SetDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.assign(value); }
    inline GuardrailTopic& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}
    inline GuardrailTopic& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}
    inline GuardrailTopic& WithDefinition(const char* value) { SetDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of prompts, each of which is an example of a prompt that can be
     * categorized as belonging to the topic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExamples() const{ return m_examples; }
    inline bool ExamplesHasBeenSet() const { return m_examplesHasBeenSet; }
    inline void SetExamples(const Aws::Vector<Aws::String>& value) { m_examplesHasBeenSet = true; m_examples = value; }
    inline void SetExamples(Aws::Vector<Aws::String>&& value) { m_examplesHasBeenSet = true; m_examples = std::move(value); }
    inline GuardrailTopic& WithExamples(const Aws::Vector<Aws::String>& value) { SetExamples(value); return *this;}
    inline GuardrailTopic& WithExamples(Aws::Vector<Aws::String>&& value) { SetExamples(std::move(value)); return *this;}
    inline GuardrailTopic& AddExamples(const Aws::String& value) { m_examplesHasBeenSet = true; m_examples.push_back(value); return *this; }
    inline GuardrailTopic& AddExamples(Aws::String&& value) { m_examplesHasBeenSet = true; m_examples.push_back(std::move(value)); return *this; }
    inline GuardrailTopic& AddExamples(const char* value) { m_examplesHasBeenSet = true; m_examples.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies to deny the topic.</p>
     */
    inline const GuardrailTopicType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const GuardrailTopicType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(GuardrailTopicType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline GuardrailTopic& WithType(const GuardrailTopicType& value) { SetType(value); return *this;}
    inline GuardrailTopic& WithType(GuardrailTopicType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::Vector<Aws::String> m_examples;
    bool m_examplesHasBeenSet = false;

    GuardrailTopicType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
