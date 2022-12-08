/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Shows the results of the human in the loop evaluation. If there is no
   * HumanLoopArn, the input did not trigger human review.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/HumanLoopActivationOutput">AWS
   * API Reference</a></p>
   */
  class HumanLoopActivationOutput
  {
  public:
    AWS_TEXTRACT_API HumanLoopActivationOutput();
    AWS_TEXTRACT_API HumanLoopActivationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API HumanLoopActivationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the HumanLoop created.</p>
     */
    inline const Aws::String& GetHumanLoopArn() const{ return m_humanLoopArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the HumanLoop created.</p>
     */
    inline bool HumanLoopArnHasBeenSet() const { return m_humanLoopArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the HumanLoop created.</p>
     */
    inline void SetHumanLoopArn(const Aws::String& value) { m_humanLoopArnHasBeenSet = true; m_humanLoopArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the HumanLoop created.</p>
     */
    inline void SetHumanLoopArn(Aws::String&& value) { m_humanLoopArnHasBeenSet = true; m_humanLoopArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the HumanLoop created.</p>
     */
    inline void SetHumanLoopArn(const char* value) { m_humanLoopArnHasBeenSet = true; m_humanLoopArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the HumanLoop created.</p>
     */
    inline HumanLoopActivationOutput& WithHumanLoopArn(const Aws::String& value) { SetHumanLoopArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the HumanLoop created.</p>
     */
    inline HumanLoopActivationOutput& WithHumanLoopArn(Aws::String&& value) { SetHumanLoopArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the HumanLoop created.</p>
     */
    inline HumanLoopActivationOutput& WithHumanLoopArn(const char* value) { SetHumanLoopArn(value); return *this;}


    /**
     * <p>Shows if and why human review was needed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHumanLoopActivationReasons() const{ return m_humanLoopActivationReasons; }

    /**
     * <p>Shows if and why human review was needed.</p>
     */
    inline bool HumanLoopActivationReasonsHasBeenSet() const { return m_humanLoopActivationReasonsHasBeenSet; }

    /**
     * <p>Shows if and why human review was needed.</p>
     */
    inline void SetHumanLoopActivationReasons(const Aws::Vector<Aws::String>& value) { m_humanLoopActivationReasonsHasBeenSet = true; m_humanLoopActivationReasons = value; }

    /**
     * <p>Shows if and why human review was needed.</p>
     */
    inline void SetHumanLoopActivationReasons(Aws::Vector<Aws::String>&& value) { m_humanLoopActivationReasonsHasBeenSet = true; m_humanLoopActivationReasons = std::move(value); }

    /**
     * <p>Shows if and why human review was needed.</p>
     */
    inline HumanLoopActivationOutput& WithHumanLoopActivationReasons(const Aws::Vector<Aws::String>& value) { SetHumanLoopActivationReasons(value); return *this;}

    /**
     * <p>Shows if and why human review was needed.</p>
     */
    inline HumanLoopActivationOutput& WithHumanLoopActivationReasons(Aws::Vector<Aws::String>&& value) { SetHumanLoopActivationReasons(std::move(value)); return *this;}

    /**
     * <p>Shows if and why human review was needed.</p>
     */
    inline HumanLoopActivationOutput& AddHumanLoopActivationReasons(const Aws::String& value) { m_humanLoopActivationReasonsHasBeenSet = true; m_humanLoopActivationReasons.push_back(value); return *this; }

    /**
     * <p>Shows if and why human review was needed.</p>
     */
    inline HumanLoopActivationOutput& AddHumanLoopActivationReasons(Aws::String&& value) { m_humanLoopActivationReasonsHasBeenSet = true; m_humanLoopActivationReasons.push_back(std::move(value)); return *this; }

    /**
     * <p>Shows if and why human review was needed.</p>
     */
    inline HumanLoopActivationOutput& AddHumanLoopActivationReasons(const char* value) { m_humanLoopActivationReasonsHasBeenSet = true; m_humanLoopActivationReasons.push_back(value); return *this; }


    /**
     * <p>Shows the result of condition evaluations, including those conditions which
     * activated a human review.</p>
     */
    inline const Aws::String& GetHumanLoopActivationConditionsEvaluationResults() const{ return m_humanLoopActivationConditionsEvaluationResults; }

    /**
     * <p>Shows the result of condition evaluations, including those conditions which
     * activated a human review.</p>
     */
    inline bool HumanLoopActivationConditionsEvaluationResultsHasBeenSet() const { return m_humanLoopActivationConditionsEvaluationResultsHasBeenSet; }

    /**
     * <p>Shows the result of condition evaluations, including those conditions which
     * activated a human review.</p>
     */
    inline void SetHumanLoopActivationConditionsEvaluationResults(const Aws::String& value) { m_humanLoopActivationConditionsEvaluationResultsHasBeenSet = true; m_humanLoopActivationConditionsEvaluationResults = value; }

    /**
     * <p>Shows the result of condition evaluations, including those conditions which
     * activated a human review.</p>
     */
    inline void SetHumanLoopActivationConditionsEvaluationResults(Aws::String&& value) { m_humanLoopActivationConditionsEvaluationResultsHasBeenSet = true; m_humanLoopActivationConditionsEvaluationResults = std::move(value); }

    /**
     * <p>Shows the result of condition evaluations, including those conditions which
     * activated a human review.</p>
     */
    inline void SetHumanLoopActivationConditionsEvaluationResults(const char* value) { m_humanLoopActivationConditionsEvaluationResultsHasBeenSet = true; m_humanLoopActivationConditionsEvaluationResults.assign(value); }

    /**
     * <p>Shows the result of condition evaluations, including those conditions which
     * activated a human review.</p>
     */
    inline HumanLoopActivationOutput& WithHumanLoopActivationConditionsEvaluationResults(const Aws::String& value) { SetHumanLoopActivationConditionsEvaluationResults(value); return *this;}

    /**
     * <p>Shows the result of condition evaluations, including those conditions which
     * activated a human review.</p>
     */
    inline HumanLoopActivationOutput& WithHumanLoopActivationConditionsEvaluationResults(Aws::String&& value) { SetHumanLoopActivationConditionsEvaluationResults(std::move(value)); return *this;}

    /**
     * <p>Shows the result of condition evaluations, including those conditions which
     * activated a human review.</p>
     */
    inline HumanLoopActivationOutput& WithHumanLoopActivationConditionsEvaluationResults(const char* value) { SetHumanLoopActivationConditionsEvaluationResults(value); return *this;}

  private:

    Aws::String m_humanLoopArn;
    bool m_humanLoopArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_humanLoopActivationReasons;
    bool m_humanLoopActivationReasonsHasBeenSet = false;

    Aws::String m_humanLoopActivationConditionsEvaluationResults;
    bool m_humanLoopActivationConditionsEvaluationResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
