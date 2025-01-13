/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/ConnectorOperationStepType.h>
#include <aws/kafkaconnect/model/ConnectorOperationStepState.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>Details of a step that is involved in a connector's operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ConnectorOperationStep">AWS
   * API Reference</a></p>
   */
  class ConnectorOperationStep
  {
  public:
    AWS_KAFKACONNECT_API ConnectorOperationStep();
    AWS_KAFKACONNECT_API ConnectorOperationStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API ConnectorOperationStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step type of the operation.</p>
     */
    inline const ConnectorOperationStepType& GetStepType() const{ return m_stepType; }
    inline bool StepTypeHasBeenSet() const { return m_stepTypeHasBeenSet; }
    inline void SetStepType(const ConnectorOperationStepType& value) { m_stepTypeHasBeenSet = true; m_stepType = value; }
    inline void SetStepType(ConnectorOperationStepType&& value) { m_stepTypeHasBeenSet = true; m_stepType = std::move(value); }
    inline ConnectorOperationStep& WithStepType(const ConnectorOperationStepType& value) { SetStepType(value); return *this;}
    inline ConnectorOperationStep& WithStepType(ConnectorOperationStepType&& value) { SetStepType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step state of the operation.</p>
     */
    inline const ConnectorOperationStepState& GetStepState() const{ return m_stepState; }
    inline bool StepStateHasBeenSet() const { return m_stepStateHasBeenSet; }
    inline void SetStepState(const ConnectorOperationStepState& value) { m_stepStateHasBeenSet = true; m_stepState = value; }
    inline void SetStepState(ConnectorOperationStepState&& value) { m_stepStateHasBeenSet = true; m_stepState = std::move(value); }
    inline ConnectorOperationStep& WithStepState(const ConnectorOperationStepState& value) { SetStepState(value); return *this;}
    inline ConnectorOperationStep& WithStepState(ConnectorOperationStepState&& value) { SetStepState(std::move(value)); return *this;}
    ///@}
  private:

    ConnectorOperationStepType m_stepType;
    bool m_stepTypeHasBeenSet = false;

    ConnectorOperationStepState m_stepState;
    bool m_stepStateHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
