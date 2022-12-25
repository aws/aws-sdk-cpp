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
    AWS_KAFKA_API ClusterOperationStep();
    AWS_KAFKA_API ClusterOperationStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClusterOperationStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Information about the step and its status.</p>
         
     */
    inline const ClusterOperationStepInfo& GetStepInfo() const{ return m_stepInfo; }

    /**
     * 
            <p>Information about the step and its status.</p>
         
     */
    inline bool StepInfoHasBeenSet() const { return m_stepInfoHasBeenSet; }

    /**
     * 
            <p>Information about the step and its status.</p>
         
     */
    inline void SetStepInfo(const ClusterOperationStepInfo& value) { m_stepInfoHasBeenSet = true; m_stepInfo = value; }

    /**
     * 
            <p>Information about the step and its status.</p>
         
     */
    inline void SetStepInfo(ClusterOperationStepInfo&& value) { m_stepInfoHasBeenSet = true; m_stepInfo = std::move(value); }

    /**
     * 
            <p>Information about the step and its status.</p>
         
     */
    inline ClusterOperationStep& WithStepInfo(const ClusterOperationStepInfo& value) { SetStepInfo(value); return *this;}

    /**
     * 
            <p>Information about the step and its status.</p>
         
     */
    inline ClusterOperationStep& WithStepInfo(ClusterOperationStepInfo&& value) { SetStepInfo(std::move(value)); return *this;}


    /**
     * 
            <p>The name of the step.</p>
         
     */
    inline const Aws::String& GetStepName() const{ return m_stepName; }

    /**
     * 
            <p>The name of the step.</p>
         
     */
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }

    /**
     * 
            <p>The name of the step.</p>
         
     */
    inline void SetStepName(const Aws::String& value) { m_stepNameHasBeenSet = true; m_stepName = value; }

    /**
     * 
            <p>The name of the step.</p>
         
     */
    inline void SetStepName(Aws::String&& value) { m_stepNameHasBeenSet = true; m_stepName = std::move(value); }

    /**
     * 
            <p>The name of the step.</p>
         
     */
    inline void SetStepName(const char* value) { m_stepNameHasBeenSet = true; m_stepName.assign(value); }

    /**
     * 
            <p>The name of the step.</p>
         
     */
    inline ClusterOperationStep& WithStepName(const Aws::String& value) { SetStepName(value); return *this;}

    /**
     * 
            <p>The name of the step.</p>
         
     */
    inline ClusterOperationStep& WithStepName(Aws::String&& value) { SetStepName(std::move(value)); return *this;}

    /**
     * 
            <p>The name of the step.</p>
         
     */
    inline ClusterOperationStep& WithStepName(const char* value) { SetStepName(value); return *this;}

  private:

    ClusterOperationStepInfo m_stepInfo;
    bool m_stepInfoHasBeenSet = false;

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
