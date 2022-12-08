/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CloudWatchLogsDestination
  {
  public:
    AWS_PINPOINTSMSVOICE_API CloudWatchLogsDestination();
    AWS_PINPOINTSMSVOICE_API CloudWatchLogsDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICE_API CloudWatchLogsDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
