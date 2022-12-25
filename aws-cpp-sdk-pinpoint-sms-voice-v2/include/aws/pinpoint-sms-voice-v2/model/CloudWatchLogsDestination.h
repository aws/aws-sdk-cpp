/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Contains the destination configuration to use when publishing message sending
   * events. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CloudWatchLogsDestination">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogsDestination
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API CloudWatchLogsDestination();
    AWS_PINPOINTSMSVOICEV2_API CloudWatchLogsDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API CloudWatchLogsDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Identity and Access Management
     * (IAM) role that is able to write event data to an Amazon CloudWatch
     * destination.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Identity and Access Management
     * (IAM) role that is able to write event data to an Amazon CloudWatch
     * destination.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Identity and Access Management
     * (IAM) role that is able to write event data to an Amazon CloudWatch
     * destination.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Identity and Access Management
     * (IAM) role that is able to write event data to an Amazon CloudWatch
     * destination.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Identity and Access Management
     * (IAM) role that is able to write event data to an Amazon CloudWatch
     * destination.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Identity and Access Management
     * (IAM) role that is able to write event data to an Amazon CloudWatch
     * destination.</p>
     */
    inline CloudWatchLogsDestination& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Identity and Access Management
     * (IAM) role that is able to write event data to an Amazon CloudWatch
     * destination.</p>
     */
    inline CloudWatchLogsDestination& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Identity and Access Management
     * (IAM) role that is able to write event data to an Amazon CloudWatch
     * destination.</p>
     */
    inline CloudWatchLogsDestination& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The name of the Amazon CloudWatch log group that you want to record events
     * in. </p>
     */
    inline const Aws::String& GetLogGroupArn() const{ return m_logGroupArn; }

    /**
     * <p>The name of the Amazon CloudWatch log group that you want to record events
     * in. </p>
     */
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }

    /**
     * <p>The name of the Amazon CloudWatch log group that you want to record events
     * in. </p>
     */
    inline void SetLogGroupArn(const Aws::String& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = value; }

    /**
     * <p>The name of the Amazon CloudWatch log group that you want to record events
     * in. </p>
     */
    inline void SetLogGroupArn(Aws::String&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::move(value); }

    /**
     * <p>The name of the Amazon CloudWatch log group that you want to record events
     * in. </p>
     */
    inline void SetLogGroupArn(const char* value) { m_logGroupArnHasBeenSet = true; m_logGroupArn.assign(value); }

    /**
     * <p>The name of the Amazon CloudWatch log group that you want to record events
     * in. </p>
     */
    inline CloudWatchLogsDestination& WithLogGroupArn(const Aws::String& value) { SetLogGroupArn(value); return *this;}

    /**
     * <p>The name of the Amazon CloudWatch log group that you want to record events
     * in. </p>
     */
    inline CloudWatchLogsDestination& WithLogGroupArn(Aws::String&& value) { SetLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon CloudWatch log group that you want to record events
     * in. </p>
     */
    inline CloudWatchLogsDestination& WithLogGroupArn(const char* value) { SetLogGroupArn(value); return *this;}

  private:

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
