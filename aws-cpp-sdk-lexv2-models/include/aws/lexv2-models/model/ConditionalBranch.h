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
    AWS_LEXMODELSV2_API ConditionalBranch();
    AWS_LEXMODELSV2_API ConditionalBranch(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConditionalBranch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the branch. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the branch. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the branch. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the branch. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the branch. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the branch. </p>
     */
    inline ConditionalBranch& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the branch. </p>
     */
    inline ConditionalBranch& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the branch. </p>
     */
    inline ConditionalBranch& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Contains the expression to evaluate. If the condition is true, the branch's
     * actions are taken.</p>
     */
    inline const Condition& GetCondition() const{ return m_condition; }

    /**
     * <p>Contains the expression to evaluate. If the condition is true, the branch's
     * actions are taken.</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>Contains the expression to evaluate. If the condition is true, the branch's
     * actions are taken.</p>
     */
    inline void SetCondition(const Condition& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>Contains the expression to evaluate. If the condition is true, the branch's
     * actions are taken.</p>
     */
    inline void SetCondition(Condition&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>Contains the expression to evaluate. If the condition is true, the branch's
     * actions are taken.</p>
     */
    inline ConditionalBranch& WithCondition(const Condition& value) { SetCondition(value); return *this;}

    /**
     * <p>Contains the expression to evaluate. If the condition is true, the branch's
     * actions are taken.</p>
     */
    inline ConditionalBranch& WithCondition(Condition&& value) { SetCondition(std::move(value)); return *this;}


    /**
     * <p>The next step in the conversation.</p>
     */
    inline const DialogState& GetNextStep() const{ return m_nextStep; }

    /**
     * <p>The next step in the conversation.</p>
     */
    inline bool NextStepHasBeenSet() const { return m_nextStepHasBeenSet; }

    /**
     * <p>The next step in the conversation.</p>
     */
    inline void SetNextStep(const DialogState& value) { m_nextStepHasBeenSet = true; m_nextStep = value; }

    /**
     * <p>The next step in the conversation.</p>
     */
    inline void SetNextStep(DialogState&& value) { m_nextStepHasBeenSet = true; m_nextStep = std::move(value); }

    /**
     * <p>The next step in the conversation.</p>
     */
    inline ConditionalBranch& WithNextStep(const DialogState& value) { SetNextStep(value); return *this;}

    /**
     * <p>The next step in the conversation.</p>
     */
    inline ConditionalBranch& WithNextStep(DialogState&& value) { SetNextStep(std::move(value)); return *this;}


    
    inline const ResponseSpecification& GetResponse() const{ return m_response; }

    
    inline bool ResponseHasBeenSet() const { return m_responseHasBeenSet; }

    
    inline void SetResponse(const ResponseSpecification& value) { m_responseHasBeenSet = true; m_response = value; }

    
    inline void SetResponse(ResponseSpecification&& value) { m_responseHasBeenSet = true; m_response = std::move(value); }

    
    inline ConditionalBranch& WithResponse(const ResponseSpecification& value) { SetResponse(value); return *this;}

    
    inline ConditionalBranch& WithResponse(ResponseSpecification&& value) { SetResponse(std::move(value)); return *this;}

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
