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
   * <p>An annotation for modifying an existing variable in an Automated Reasoning
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyUpdateVariableAnnotation">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyUpdateVariableAnnotation
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateVariableAnnotation() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateVariableAnnotation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateVariableAnnotation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current name of the variable to update.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AutomatedReasoningPolicyUpdateVariableAnnotation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the variable, if you want to rename it. If not provided, the
     * name remains unchanged.</p>
     */
    inline const Aws::String& GetNewName() const { return m_newName; }
    inline bool NewNameHasBeenSet() const { return m_newNameHasBeenSet; }
    template<typename NewNameT = Aws::String>
    void SetNewName(NewNameT&& value) { m_newNameHasBeenSet = true; m_newName = std::forward<NewNameT>(value); }
    template<typename NewNameT = Aws::String>
    AutomatedReasoningPolicyUpdateVariableAnnotation& WithNewName(NewNameT&& value) { SetNewName(std::forward<NewNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description for the variable, replacing the previous description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AutomatedReasoningPolicyUpdateVariableAnnotation& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_newName;
    bool m_newNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
