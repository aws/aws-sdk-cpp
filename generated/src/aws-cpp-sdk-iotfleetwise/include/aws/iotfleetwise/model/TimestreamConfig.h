/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>The Amazon Timestream table where the Amazon Web Services IoT FleetWise
   * campaign sends data. Timestream stores and organizes data to optimize query
   * processing time and to reduce storage costs. For more information, see <a
   * href="https://docs.aws.amazon.com/timestream/latest/developerguide/data-modeling.html">Data
   * modeling</a> in the <i>Amazon Timestream Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/TimestreamConfig">AWS
   * API Reference</a></p>
   */
  class TimestreamConfig
  {
  public:
    AWS_IOTFLEETWISE_API TimestreamConfig() = default;
    AWS_IOTFLEETWISE_API TimestreamConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API TimestreamConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Timestream table.</p>
     */
    inline const Aws::String& GetTimestreamTableArn() const { return m_timestreamTableArn; }
    inline bool TimestreamTableArnHasBeenSet() const { return m_timestreamTableArnHasBeenSet; }
    template<typename TimestreamTableArnT = Aws::String>
    void SetTimestreamTableArn(TimestreamTableArnT&& value) { m_timestreamTableArnHasBeenSet = true; m_timestreamTableArn = std::forward<TimestreamTableArnT>(value); }
    template<typename TimestreamTableArnT = Aws::String>
    TimestreamConfig& WithTimestreamTableArn(TimestreamTableArnT&& value) { SetTimestreamTableArn(std::forward<TimestreamTableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants Amazon
     * Web Services IoT FleetWise permission to deliver data to the Amazon Timestream
     * table.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    TimestreamConfig& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_timestreamTableArn;
    bool m_timestreamTableArnHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
