/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/Condition.h>
#include <aws/lexv2-models/model/DialogState.h>
#include <aws/lexv2-models/model/ResponseSpecification.h>
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
   * <p>A set of actions that Amazon Lex should run if the condition is
   * matched.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ConditionalBranch">AWS
   * API Reference</a></p>
   */
  class ConditionalBranch
  {
  public:
    AWS_LEXMODELSV2_API ConditionalBranch() = default;
    AWS_LEXMODELSV2_API ConditionalBranch(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConditionalBranch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the branch. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConditionalBranch& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the expression to evaluate. If the condition is true, the branch's
     * actions are taken.</p>
     */
    inline const Condition& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = Condition>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = Condition>
    ConditionalBranch& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next step in the conversation.</p>
     */
    inline const DialogState& GetNextStep() const { return m_nextStep; }
    inline bool NextStepHasBeenSet() const { return m_nextStepHasBeenSet; }
    template<typename NextStepT = DialogState>
    void SetNextStep(NextStepT&& value) { m_nextStepHasBeenSet = true; m_nextStep = std::forward<NextStepT>(value); }
    template<typename NextStepT = DialogState>
    ConditionalBranch& WithNextStep(NextStepT&& value) { SetNextStep(std::forward<NextStepT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseSpecification& GetResponse() const { return m_response; }
    inline bool ResponseHasBeenSet() const { return m_responseHasBeenSet; }
    template<typename ResponseT = ResponseSpecification>
    void SetResponse(ResponseT&& value) { m_responseHasBeenSet = true; m_response = std::forward<ResponseT>(value); }
    template<typename ResponseT = ResponseSpecification>
    ConditionalBranch& WithResponse(ResponseT&& value) { SetResponse(std::forward<ResponseT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Condition m_condition;
    bool m_conditionHasBeenSet = false;

    DialogState m_nextStep;
    bool m_nextStepHasBeenSet = false;

    ResponseSpecification m_response;
    bool m_responseHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
