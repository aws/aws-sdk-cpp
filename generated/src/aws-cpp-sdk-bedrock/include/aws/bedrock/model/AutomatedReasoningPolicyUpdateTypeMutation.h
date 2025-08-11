/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionType.h>
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
   * <p>A mutation operation that modifies an existing custom type in the policy
   * definition during the build process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyUpdateTypeMutation">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyUpdateTypeMutation
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateTypeMutation() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateTypeMutation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateTypeMutation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The updated type definition containing the modified name, description, or
     * values for the existing custom type.</p>
     */
    inline const AutomatedReasoningPolicyDefinitionType& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = AutomatedReasoningPolicyDefinitionType>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = AutomatedReasoningPolicyDefinitionType>
    AutomatedReasoningPolicyUpdateTypeMutation& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningPolicyDefinitionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
