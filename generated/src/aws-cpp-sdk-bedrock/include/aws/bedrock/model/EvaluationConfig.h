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
   * <p>The configuration details of either an automated or human-based evaluation
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationConfig">AWS
   * API Reference</a></p>
   */
  class EvaluationConfig
  {
  public:
    AWS_BEDROCK_API EvaluationConfig() = default;
    AWS_BEDROCK_API EvaluationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the configuration details of an automated evaluation job that
     * computes metrics.</p>
     */
    inline const AutomatedEvaluationConfig& GetAutomated() const { return m_automated; }
    inline bool AutomatedHasBeenSet() const { return m_automatedHasBeenSet; }
    template<typename AutomatedT = AutomatedEvaluationConfig>
    void SetAutomated(AutomatedT&& value) { m_automatedHasBeenSet = true; m_automated = std::forward<AutomatedT>(value); }
    template<typename AutomatedT = AutomatedEvaluationConfig>
    EvaluationConfig& WithAutomated(AutomatedT&& value) { SetAutomated(std::forward<AutomatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration details of an evaluation job that uses human
     * workers.</p>
     */
    inline const HumanEvaluationConfig& GetHuman() const { return m_human; }
    inline bool HumanHasBeenSet() const { return m_humanHasBeenSet; }
    template<typename HumanT = HumanEvaluationConfig>
    void SetHuman(HumanT&& value) { m_humanHasBeenSet = true; m_human = std::forward<HumanT>(value); }
    template<typename HumanT = HumanEvaluationConfig>
    EvaluationConfig& WithHuman(HumanT&& value) { SetHuman(std::forward<HumanT>(value)); return *this;}
    ///@}
  private:

    AutomatedEvaluationConfig m_automated;
    bool m_automatedHasBeenSet = false;

    HumanEvaluationConfig m_human;
    bool m_humanHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
