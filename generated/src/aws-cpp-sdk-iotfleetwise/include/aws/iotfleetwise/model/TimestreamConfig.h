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
    AWS_IOTFLEETWISE_API TimestreamConfig();
    AWS_IOTFLEETWISE_API TimestreamConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API TimestreamConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Timestream table.</p>
     */
    inline const Aws::String& GetTimestreamTableArn() const{ return m_timestreamTableArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Timestream table.</p>
     */
    inline bool TimestreamTableArnHasBeenSet() const { return m_timestreamTableArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Timestream table.</p>
     */
    inline void SetTimestreamTableArn(const Aws::String& value) { m_timestreamTableArnHasBeenSet = true; m_timestreamTableArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Timestream table.</p>
     */
    inline void SetTimestreamTableArn(Aws::String&& value) { m_timestreamTableArnHasBeenSet = true; m_timestreamTableArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Timestream table.</p>
     */
    inline void SetTimestreamTableArn(const char* value) { m_timestreamTableArnHasBeenSet = true; m_timestreamTableArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Timestream table.</p>
     */
    inline TimestreamConfig& WithTimestreamTableArn(const Aws::String& value) { SetTimestreamTableArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Timestream table.</p>
     */
    inline TimestreamConfig& WithTimestreamTableArn(Aws::String&& value) { SetTimestreamTableArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Timestream table.</p>
     */
    inline TimestreamConfig& WithTimestreamTableArn(const char* value) { SetTimestreamTableArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants Amazon
     * Web Services IoT FleetWise permission to deliver data to the Amazon Timestream
     * table.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants Amazon
     * Web Services IoT FleetWise permission to deliver data to the Amazon Timestream
     * table.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants Amazon
     * Web Services IoT FleetWise permission to deliver data to the Amazon Timestream
     * table.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants Amazon
     * Web Services IoT FleetWise permission to deliver data to the Amazon Timestream
     * table.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants Amazon
     * Web Services IoT FleetWise permission to deliver data to the Amazon Timestream
     * table.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants Amazon
     * Web Services IoT FleetWise permission to deliver data to the Amazon Timestream
     * table.</p>
     */
    inline TimestreamConfig& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants Amazon
     * Web Services IoT FleetWise permission to deliver data to the Amazon Timestream
     * table.</p>
     */
    inline TimestreamConfig& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants Amazon
     * Web Services IoT FleetWise permission to deliver data to the Amazon Timestream
     * table.</p>
     */
    inline TimestreamConfig& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}

  private:

    Aws::String m_timestreamTableArn;
    bool m_timestreamTableArnHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
