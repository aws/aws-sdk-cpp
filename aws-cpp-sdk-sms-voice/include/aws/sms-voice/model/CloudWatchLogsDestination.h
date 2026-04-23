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
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
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
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   * An object that contains information about an event destination that sends data
   * to Amazon CloudWatch Logs.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/CloudWatchLogsDestination">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTSMSVOICE_API CloudWatchLogsDestination
  {
  public:
    CloudWatchLogsDestination();
    CloudWatchLogsDestination(Aws::Utils::Json::JsonView jsonValue);
    CloudWatchLogsDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Amazon Resource Name (ARN) of an Amazon Identity and Access Management (IAM)
     * role that is able to write event data to an Amazon CloudWatch destination.
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * The Amazon Resource Name (ARN) of an Amazon Identity and Access Management (IAM)
     * role that is able to write event data to an Amazon CloudWatch destination.
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of an Amazon Identity and Access Management (IAM)
     * role that is able to write event data to an Amazon CloudWatch destination.
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * The Amazon Resource Name (ARN) of an Amazon Identity and Access Management (IAM)
     * role that is able to write event data to an Amazon CloudWatch destination.
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of an Amazon Identity and Access Management (IAM)
     * role that is able to write event data to an Amazon CloudWatch destination.
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of an Amazon Identity and Access Management (IAM)
     * role that is able to write event data to an Amazon CloudWatch destination.
     */
    inline CloudWatchLogsDestination& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of an Amazon Identity and Access Management (IAM)
     * role that is able to write event data to an Amazon CloudWatch destination.
     */
    inline CloudWatchLogsDestination& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of an Amazon Identity and Access Management (IAM)
     * role that is able to write event data to an Amazon CloudWatch destination.
     */
    inline CloudWatchLogsDestination& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * The name of the Amazon CloudWatch Log Group that you want to record events in.
     */
    inline const Aws::String& GetLogGroupArn() const{ return m_logGroupArn; }

    /**
     * The name of the Amazon CloudWatch Log Group that you want to record events in.
     */
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }

    /**
     * The name of the Amazon CloudWatch Log Group that you want to record events in.
     */
    inline void SetLogGroupArn(const Aws::String& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = value; }

    /**
     * The name of the Amazon CloudWatch Log Group that you want to record events in.
     */
    inline void SetLogGroupArn(Aws::String&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::move(value); }

    /**
     * The name of the Amazon CloudWatch Log Group that you want to record events in.
     */
    inline void SetLogGroupArn(const char* value) { m_logGroupArnHasBeenSet = true; m_logGroupArn.assign(value); }

    /**
     * The name of the Amazon CloudWatch Log Group that you want to record events in.
     */
    inline CloudWatchLogsDestination& WithLogGroupArn(const Aws::String& value) { SetLogGroupArn(value); return *this;}

    /**
     * The name of the Amazon CloudWatch Log Group that you want to record events in.
     */
    inline CloudWatchLogsDestination& WithLogGroupArn(Aws::String&& value) { SetLogGroupArn(std::move(value)); return *this;}

    /**
     * The name of the Amazon CloudWatch Log Group that you want to record events in.
     */
    inline CloudWatchLogsDestination& WithLogGroupArn(const char* value) { SetLogGroupArn(value); return *this;}

  private:

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet;

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
