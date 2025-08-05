/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAddTypeValue.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyUpdateTypeValue.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDeleteTypeValue.h>
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
   * <p>An annotation for managing values within custom types, including adding,
   * updating, or removing specific type values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyTypeValueAnnotation">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyTypeValueAnnotation
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyTypeValueAnnotation() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyTypeValueAnnotation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyTypeValueAnnotation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An operation to add a new value to an existing custom type.</p>
     */
    inline const AutomatedReasoningPolicyAddTypeValue& GetAddTypeValue() const { return m_addTypeValue; }
    inline bool AddTypeValueHasBeenSet() const { return m_addTypeValueHasBeenSet; }
    template<typename AddTypeValueT = AutomatedReasoningPolicyAddTypeValue>
    void SetAddTypeValue(AddTypeValueT&& value) { m_addTypeValueHasBeenSet = true; m_addTypeValue = std::forward<AddTypeValueT>(value); }
    template<typename AddTypeValueT = AutomatedReasoningPolicyAddTypeValue>
    AutomatedReasoningPolicyTypeValueAnnotation& WithAddTypeValue(AddTypeValueT&& value) { SetAddTypeValue(std::forward<AddTypeValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation to modify an existing value within a custom type.</p>
     */
    inline const AutomatedReasoningPolicyUpdateTypeValue& GetUpdateTypeValue() const { return m_updateTypeValue; }
    inline bool UpdateTypeValueHasBeenSet() const { return m_updateTypeValueHasBeenSet; }
    template<typename UpdateTypeValueT = AutomatedReasoningPolicyUpdateTypeValue>
    void SetUpdateTypeValue(UpdateTypeValueT&& value) { m_updateTypeValueHasBeenSet = true; m_updateTypeValue = std::forward<UpdateTypeValueT>(value); }
    template<typename UpdateTypeValueT = AutomatedReasoningPolicyUpdateTypeValue>
    AutomatedReasoningPolicyTypeValueAnnotation& WithUpdateTypeValue(UpdateTypeValueT&& value) { SetUpdateTypeValue(std::forward<UpdateTypeValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation to remove a value from an existing custom type.</p>
     */
    inline const AutomatedReasoningPolicyDeleteTypeValue& GetDeleteTypeValue() const { return m_deleteTypeValue; }
    inline bool DeleteTypeValueHasBeenSet() const { return m_deleteTypeValueHasBeenSet; }
    template<typename DeleteTypeValueT = AutomatedReasoningPolicyDeleteTypeValue>
    void SetDeleteTypeValue(DeleteTypeValueT&& value) { m_deleteTypeValueHasBeenSet = true; m_deleteTypeValue = std::forward<DeleteTypeValueT>(value); }
    template<typename DeleteTypeValueT = AutomatedReasoningPolicyDeleteTypeValue>
    AutomatedReasoningPolicyTypeValueAnnotation& WithDeleteTypeValue(DeleteTypeValueT&& value) { SetDeleteTypeValue(std::forward<DeleteTypeValueT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningPolicyAddTypeValue m_addTypeValue;
    bool m_addTypeValueHasBeenSet = false;

    AutomatedReasoningPolicyUpdateTypeValue m_updateTypeValue;
    bool m_updateTypeValueHasBeenSet = false;

    AutomatedReasoningPolicyDeleteTypeValue m_deleteTypeValue;
    bool m_deleteTypeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
