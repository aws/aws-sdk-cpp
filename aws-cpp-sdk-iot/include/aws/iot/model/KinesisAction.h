/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes an action to write data to an Amazon Kinesis stream.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/KinesisAction">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API KinesisAction
  {
  public:
    KinesisAction();
    KinesisAction(Aws::Utils::Json::JsonView jsonValue);
    KinesisAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the IAM role that grants access to the Amazon Kinesis stream.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that grants access to the Amazon Kinesis stream.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that grants access to the Amazon Kinesis stream.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that grants access to the Amazon Kinesis stream.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that grants access to the Amazon Kinesis stream.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that grants access to the Amazon Kinesis stream.</p>
     */
    inline KinesisAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that grants access to the Amazon Kinesis stream.</p>
     */
    inline KinesisAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that grants access to the Amazon Kinesis stream.</p>
     */
    inline KinesisAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The name of the Amazon Kinesis stream.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the Amazon Kinesis stream.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Kinesis stream.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the Amazon Kinesis stream.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the Amazon Kinesis stream.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the Amazon Kinesis stream.</p>
     */
    inline KinesisAction& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the Amazon Kinesis stream.</p>
     */
    inline KinesisAction& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Kinesis stream.</p>
     */
    inline KinesisAction& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The partition key.</p>
     */
    inline const Aws::String& GetPartitionKey() const{ return m_partitionKey; }

    /**
     * <p>The partition key.</p>
     */
    inline bool PartitionKeyHasBeenSet() const { return m_partitionKeyHasBeenSet; }

    /**
     * <p>The partition key.</p>
     */
    inline void SetPartitionKey(const Aws::String& value) { m_partitionKeyHasBeenSet = true; m_partitionKey = value; }

    /**
     * <p>The partition key.</p>
     */
    inline void SetPartitionKey(Aws::String&& value) { m_partitionKeyHasBeenSet = true; m_partitionKey = std::move(value); }

    /**
     * <p>The partition key.</p>
     */
    inline void SetPartitionKey(const char* value) { m_partitionKeyHasBeenSet = true; m_partitionKey.assign(value); }

    /**
     * <p>The partition key.</p>
     */
    inline KinesisAction& WithPartitionKey(const Aws::String& value) { SetPartitionKey(value); return *this;}

    /**
     * <p>The partition key.</p>
     */
    inline KinesisAction& WithPartitionKey(Aws::String&& value) { SetPartitionKey(std::move(value)); return *this;}

    /**
     * <p>The partition key.</p>
     */
    inline KinesisAction& WithPartitionKey(const char* value) { SetPartitionKey(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;

    Aws::String m_partitionKey;
    bool m_partitionKeyHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
