/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API PutDestinationRequest : public CloudWatchLogsRequest
  {
  public:
    PutDestinationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A name for the destination.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>A name for the destination.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    /**
     * <p>A name for the destination.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    /**
     * <p>A name for the destination.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }

    /**
     * <p>A name for the destination.</p>
     */
    inline PutDestinationRequest& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>A name for the destination.</p>
     */
    inline PutDestinationRequest& WithDestinationName(Aws::String&& value) { SetDestinationName(value); return *this;}

    /**
     * <p>A name for the destination.</p>
     */
    inline PutDestinationRequest& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}

    /**
     * <p>The ARN of an Amazon Kinesis stream to deliver matching log events to.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The ARN of an Amazon Kinesis stream to deliver matching log events to.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The ARN of an Amazon Kinesis stream to deliver matching log events to.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The ARN of an Amazon Kinesis stream to deliver matching log events to.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The ARN of an Amazon Kinesis stream to deliver matching log events to.</p>
     */
    inline PutDestinationRequest& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The ARN of an Amazon Kinesis stream to deliver matching log events to.</p>
     */
    inline PutDestinationRequest& WithTargetArn(Aws::String&& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The ARN of an Amazon Kinesis stream to deliver matching log events to.</p>
     */
    inline PutDestinationRequest& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to call Amazon
     * Kinesis PutRecord on the destination stream.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to call Amazon
     * Kinesis PutRecord on the destination stream.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to call Amazon
     * Kinesis PutRecord on the destination stream.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to call Amazon
     * Kinesis PutRecord on the destination stream.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to call Amazon
     * Kinesis PutRecord on the destination stream.</p>
     */
    inline PutDestinationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to call Amazon
     * Kinesis PutRecord on the destination stream.</p>
     */
    inline PutDestinationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to call Amazon
     * Kinesis PutRecord on the destination stream.</p>
     */
    inline PutDestinationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:
    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet;
    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet;
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
