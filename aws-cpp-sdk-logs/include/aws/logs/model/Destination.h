﻿/*
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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Represents a cross-account destination that receives subscription log
   * events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/Destination">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHLOGS_API Destination
  {
  public:
    Destination();
    Destination(Aws::Utils::Json::JsonView jsonValue);
    Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the destination.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>The name of the destination.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    /**
     * <p>The name of the destination.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }

    /**
     * <p>The name of the destination.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }

    /**
     * <p>The name of the destination.</p>
     */
    inline Destination& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>The name of the destination.</p>
     */
    inline Destination& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name of the destination.</p>
     */
    inline Destination& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the physical target to where the log events
     * are delivered (for example, a Kinesis stream).</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the physical target to where the log events
     * are delivered (for example, a Kinesis stream).</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the physical target to where the log events
     * are delivered (for example, a Kinesis stream).</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the physical target to where the log events
     * are delivered (for example, a Kinesis stream).</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the physical target to where the log events
     * are delivered (for example, a Kinesis stream).</p>
     */
    inline Destination& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the physical target to where the log events
     * are delivered (for example, a Kinesis stream).</p>
     */
    inline Destination& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the physical target to where the log events
     * are delivered (for example, a Kinesis stream).</p>
     */
    inline Destination& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>A role for impersonation, used when delivering log events to the target.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>A role for impersonation, used when delivering log events to the target.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>A role for impersonation, used when delivering log events to the target.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>A role for impersonation, used when delivering log events to the target.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>A role for impersonation, used when delivering log events to the target.</p>
     */
    inline Destination& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>A role for impersonation, used when delivering log events to the target.</p>
     */
    inline Destination& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>A role for impersonation, used when delivering log events to the target.</p>
     */
    inline Destination& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An IAM policy document that governs which AWS accounts can create
     * subscription filters against this destination.</p>
     */
    inline const Aws::String& GetAccessPolicy() const{ return m_accessPolicy; }

    /**
     * <p>An IAM policy document that governs which AWS accounts can create
     * subscription filters against this destination.</p>
     */
    inline void SetAccessPolicy(const Aws::String& value) { m_accessPolicyHasBeenSet = true; m_accessPolicy = value; }

    /**
     * <p>An IAM policy document that governs which AWS accounts can create
     * subscription filters against this destination.</p>
     */
    inline void SetAccessPolicy(Aws::String&& value) { m_accessPolicyHasBeenSet = true; m_accessPolicy = std::move(value); }

    /**
     * <p>An IAM policy document that governs which AWS accounts can create
     * subscription filters against this destination.</p>
     */
    inline void SetAccessPolicy(const char* value) { m_accessPolicyHasBeenSet = true; m_accessPolicy.assign(value); }

    /**
     * <p>An IAM policy document that governs which AWS accounts can create
     * subscription filters against this destination.</p>
     */
    inline Destination& WithAccessPolicy(const Aws::String& value) { SetAccessPolicy(value); return *this;}

    /**
     * <p>An IAM policy document that governs which AWS accounts can create
     * subscription filters against this destination.</p>
     */
    inline Destination& WithAccessPolicy(Aws::String&& value) { SetAccessPolicy(std::move(value)); return *this;}

    /**
     * <p>An IAM policy document that governs which AWS accounts can create
     * subscription filters against this destination.</p>
     */
    inline Destination& WithAccessPolicy(const char* value) { SetAccessPolicy(value); return *this;}


    /**
     * <p>The ARN of this destination.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of this destination.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of this destination.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of this destination.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of this destination.</p>
     */
    inline Destination& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of this destination.</p>
     */
    inline Destination& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of this destination.</p>
     */
    inline Destination& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The creation time of the destination, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline long long GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the destination, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of the destination, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline Destination& WithCreationTime(long long value) { SetCreationTime(value); return *this;}

  private:

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_accessPolicy;
    bool m_accessPolicyHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    long long m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
