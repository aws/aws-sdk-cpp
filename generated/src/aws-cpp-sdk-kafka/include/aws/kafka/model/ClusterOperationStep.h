/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ClusterOperationStepInfo.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Step taken during a cluster operation.</p>
         <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ClusterOperationStep">AWS
   * API Reference</a></p>
   */
  class ClusterOperationStep
  {
  public:
    AWS_KAFKA_API ClusterOperationStep() = default;
    AWS_KAFKA_API ClusterOperationStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClusterOperationStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Information about the step and its status.</p>
         
     */
    inline const ClusterOperationStepInfo& GetStepInfo() const { return m_stepInfo; }
    inline bool StepInfoHasBeenSet() const { return m_stepInfoHasBeenSet; }
    template<typename StepInfoT = ClusterOperationStepInfo>
    void SetStepInfo(StepInfoT&& value) { m_stepInfoHasBeenSet = true; m_stepInfo = std::forward<StepInfoT>(value); }
    template<typename StepInfoT = ClusterOperationStepInfo>
    ClusterOperationStep& WithStepInfo(StepInfoT&& value) { SetStepInfo(std::forward<StepInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The name of the step.</p>
         
     */
    inline const Aws::String& GetStepName() const { return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    template<typename StepNameT = Aws::String>
    void SetStepName(StepNameT&& value) { m_stepNameHasBeenSet = true; m_stepName = std::forward<StepNameT>(value); }
    template<typename StepNameT = Aws::String>
    ClusterOperationStep& WithStepName(StepNameT&& value) { SetStepName(std::forward<StepNameT>(value)); return *this;}
    ///@}
  private:

    ClusterOperationStepInfo m_stepInfo;
    bool m_stepInfoHasBeenSet = false;

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
