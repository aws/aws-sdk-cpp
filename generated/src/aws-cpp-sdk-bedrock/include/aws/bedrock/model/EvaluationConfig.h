/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedEvaluationConfig.h>
#include <aws/bedrock/model/HumanEvaluationConfig.h>
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
   * <p>Used to specify either a <code>AutomatedEvaluationConfig</code> or
   * <code>HumanEvaluationConfig</code> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationConfig">AWS
   * API Reference</a></p>
   */
  class EvaluationConfig
  {
  public:
    AWS_BEDROCK_API EvaluationConfig();
    AWS_BEDROCK_API EvaluationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Used to specify an automated model evaluation job. See
     * <code>AutomatedEvaluationConfig</code> to view the required parameters.</p>
     */
    inline const AutomatedEvaluationConfig& GetAutomated() const{ return m_automated; }

    /**
     * <p>Used to specify an automated model evaluation job. See
     * <code>AutomatedEvaluationConfig</code> to view the required parameters.</p>
     */
    inline bool AutomatedHasBeenSet() const { return m_automatedHasBeenSet; }

    /**
     * <p>Used to specify an automated model evaluation job. See
     * <code>AutomatedEvaluationConfig</code> to view the required parameters.</p>
     */
    inline void SetAutomated(const AutomatedEvaluationConfig& value) { m_automatedHasBeenSet = true; m_automated = value; }

    /**
     * <p>Used to specify an automated model evaluation job. See
     * <code>AutomatedEvaluationConfig</code> to view the required parameters.</p>
     */
    inline void SetAutomated(AutomatedEvaluationConfig&& value) { m_automatedHasBeenSet = true; m_automated = std::move(value); }

    /**
     * <p>Used to specify an automated model evaluation job. See
     * <code>AutomatedEvaluationConfig</code> to view the required parameters.</p>
     */
    inline EvaluationConfig& WithAutomated(const AutomatedEvaluationConfig& value) { SetAutomated(value); return *this;}

    /**
     * <p>Used to specify an automated model evaluation job. See
     * <code>AutomatedEvaluationConfig</code> to view the required parameters.</p>
     */
    inline EvaluationConfig& WithAutomated(AutomatedEvaluationConfig&& value) { SetAutomated(std::move(value)); return *this;}


    /**
     * <p>Used to specify a model evaluation job that uses human workers.See
     * <code>HumanEvaluationConfig</code> to view the required parameters.</p>
     */
    inline const HumanEvaluationConfig& GetHuman() const{ return m_human; }

    /**
     * <p>Used to specify a model evaluation job that uses human workers.See
     * <code>HumanEvaluationConfig</code> to view the required parameters.</p>
     */
    inline bool HumanHasBeenSet() const { return m_humanHasBeenSet; }

    /**
     * <p>Used to specify a model evaluation job that uses human workers.See
     * <code>HumanEvaluationConfig</code> to view the required parameters.</p>
     */
    inline void SetHuman(const HumanEvaluationConfig& value) { m_humanHasBeenSet = true; m_human = value; }

    /**
     * <p>Used to specify a model evaluation job that uses human workers.See
     * <code>HumanEvaluationConfig</code> to view the required parameters.</p>
     */
    inline void SetHuman(HumanEvaluationConfig&& value) { m_humanHasBeenSet = true; m_human = std::move(value); }

    /**
     * <p>Used to specify a model evaluation job that uses human workers.See
     * <code>HumanEvaluationConfig</code> to view the required parameters.</p>
     */
    inline EvaluationConfig& WithHuman(const HumanEvaluationConfig& value) { SetHuman(value); return *this;}

    /**
     * <p>Used to specify a model evaluation job that uses human workers.See
     * <code>HumanEvaluationConfig</code> to view the required parameters.</p>
     */
    inline EvaluationConfig& WithHuman(HumanEvaluationConfig&& value) { SetHuman(std::move(value)); return *this;}

  private:

    AutomatedEvaluationConfig m_automated;
    bool m_automatedHasBeenSet = false;

    HumanEvaluationConfig m_human;
    bool m_humanHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
