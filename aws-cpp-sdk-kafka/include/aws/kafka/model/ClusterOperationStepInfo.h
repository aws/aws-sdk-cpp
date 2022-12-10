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
    AWS_KAFKA_API ClusterOperationStepInfo();
    AWS_KAFKA_API ClusterOperationStepInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClusterOperationStepInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The steps current status.</p>
         
     */
    inline const Aws::String& GetStepStatus() const{ return m_stepStatus; }

    /**
     * 
            <p>The steps current status.</p>
         
     */
    inline bool StepStatusHasBeenSet() const { return m_stepStatusHasBeenSet; }

    /**
     * 
            <p>The steps current status.</p>
         
     */
    inline void SetStepStatus(const Aws::String& value) { m_stepStatusHasBeenSet = true; m_stepStatus = value; }

    /**
     * 
            <p>The steps current status.</p>
         
     */
    inline void SetStepStatus(Aws::String&& value) { m_stepStatusHasBeenSet = true; m_stepStatus = std::move(value); }

    /**
     * 
            <p>The steps current status.</p>
         
     */
    inline void SetStepStatus(const char* value) { m_stepStatusHasBeenSet = true; m_stepStatus.assign(value); }

    /**
     * 
            <p>The steps current status.</p>
         
     */
    inline ClusterOperationStepInfo& WithStepStatus(const Aws::String& value) { SetStepStatus(value); return *this;}

    /**
     * 
            <p>The steps current status.</p>
         
     */
    inline ClusterOperationStepInfo& WithStepStatus(Aws::String&& value) { SetStepStatus(std::move(value)); return *this;}

    /**
     * 
            <p>The steps current status.</p>
         
     */
    inline ClusterOperationStepInfo& WithStepStatus(const char* value) { SetStepStatus(value); return *this;}

  private:

    Aws::String m_stepStatus;
    bool m_stepStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
