/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Associates a type name with a specific value name, used for referencing type
   * values in rules and other policy elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyDefinitionTypeValuePair">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyDefinitionTypeValuePair
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyDefinitionTypeValuePair() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyDefinitionTypeValuePair(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyDefinitionTypeValuePair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the custom type that contains the referenced value.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    AutomatedReasoningPolicyDefinitionTypeValuePair& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the specific value within the type.</p>
     */
    inline const Aws::String& GetValueName() const { return m_valueName; }
    inline bool ValueNameHasBeenSet() const { return m_valueNameHasBeenSet; }
    template<typename ValueNameT = Aws::String>
    void SetValueName(ValueNameT&& value) { m_valueNameHasBeenSet = true; m_valueName = std::forward<ValueNameT>(value); }
    template<typename ValueNameT = Aws::String>
    AutomatedReasoningPolicyDefinitionTypeValuePair& WithValueName(ValueNameT&& value) { SetValueName(std::forward<ValueNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_valueName;
    bool m_valueNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
