/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
            <p>State information about the operation step.</p>
        
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ClusterOperationStepInfo">AWS
   * API Reference</a></p>
   */
  class ClusterOperationStepInfo
  {
  public:
    AWS_KAFKA_API ClusterOperationStepInfo() = default;
    AWS_KAFKA_API ClusterOperationStepInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClusterOperationStepInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The steps current status.</p>
         
     */
    inline const Aws::String& GetStepStatus() const { return m_stepStatus; }
    inline bool StepStatusHasBeenSet() const { return m_stepStatusHasBeenSet; }
    template<typename StepStatusT = Aws::String>
    void SetStepStatus(StepStatusT&& value) { m_stepStatusHasBeenSet = true; m_stepStatus = std::forward<StepStatusT>(value); }
    template<typename StepStatusT = Aws::String>
    ClusterOperationStepInfo& WithStepStatus(StepStatusT&& value) { SetStepStatus(std::forward<StepStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepStatus;
    bool m_stepStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
