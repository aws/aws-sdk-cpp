/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/MessageFormat.h>
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
   * <p>Describes an action to publish to an Amazon SNS topic.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SnsAction">AWS API
   * Reference</a></p>
   */
  class SnsAction
  {
  public:
    AWS_IOT_API SnsAction();
    AWS_IOT_API SnsAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API SnsAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline SnsAction& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline SnsAction& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline SnsAction& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline SnsAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline SnsAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline SnsAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>(Optional) The message format of the message to publish. Accepted values are
     * "JSON" and "RAW". The default value of the attribute is "RAW". SNS uses this
     * setting to determine if the payload should be parsed and relevant
     * platform-specific bits of the payload should be extracted. To read more about
     * SNS message formats, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/json-formats.html">https://docs.aws.amazon.com/sns/latest/dg/json-formats.html</a>
     * refer to their official documentation.</p>
     */
    inline const MessageFormat& GetMessageFormat() const{ return m_messageFormat; }

    /**
     * <p>(Optional) The message format of the message to publish. Accepted values are
     * "JSON" and "RAW". The default value of the attribute is "RAW". SNS uses this
     * setting to determine if the payload should be parsed and relevant
     * platform-specific bits of the payload should be extracted. To read more about
     * SNS message formats, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/json-formats.html">https://docs.aws.amazon.com/sns/latest/dg/json-formats.html</a>
     * refer to their official documentation.</p>
     */
    inline bool MessageFormatHasBeenSet() const { return m_messageFormatHasBeenSet; }

    /**
     * <p>(Optional) The message format of the message to publish. Accepted values are
     * "JSON" and "RAW". The default value of the attribute is "RAW". SNS uses this
     * setting to determine if the payload should be parsed and relevant
     * platform-specific bits of the payload should be extracted. To read more about
     * SNS message formats, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/json-formats.html">https://docs.aws.amazon.com/sns/latest/dg/json-formats.html</a>
     * refer to their official documentation.</p>
     */
    inline void SetMessageFormat(const MessageFormat& value) { m_messageFormatHasBeenSet = true; m_messageFormat = value; }

    /**
     * <p>(Optional) The message format of the message to publish. Accepted values are
     * "JSON" and "RAW". The default value of the attribute is "RAW". SNS uses this
     * setting to determine if the payload should be parsed and relevant
     * platform-specific bits of the payload should be extracted. To read more about
     * SNS message formats, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/json-formats.html">https://docs.aws.amazon.com/sns/latest/dg/json-formats.html</a>
     * refer to their official documentation.</p>
     */
    inline void SetMessageFormat(MessageFormat&& value) { m_messageFormatHasBeenSet = true; m_messageFormat = std::move(value); }

    /**
     * <p>(Optional) The message format of the message to publish. Accepted values are
     * "JSON" and "RAW". The default value of the attribute is "RAW". SNS uses this
     * setting to determine if the payload should be parsed and relevant
     * platform-specific bits of the payload should be extracted. To read more about
     * SNS message formats, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/json-formats.html">https://docs.aws.amazon.com/sns/latest/dg/json-formats.html</a>
     * refer to their official documentation.</p>
     */
    inline SnsAction& WithMessageFormat(const MessageFormat& value) { SetMessageFormat(value); return *this;}

    /**
     * <p>(Optional) The message format of the message to publish. Accepted values are
     * "JSON" and "RAW". The default value of the attribute is "RAW". SNS uses this
     * setting to determine if the payload should be parsed and relevant
     * platform-specific bits of the payload should be extracted. To read more about
     * SNS message formats, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/json-formats.html">https://docs.aws.amazon.com/sns/latest/dg/json-formats.html</a>
     * refer to their official documentation.</p>
     */
    inline SnsAction& WithMessageFormat(MessageFormat&& value) { SetMessageFormat(std::move(value)); return *this;}

  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    MessageFormat m_messageFormat;
    bool m_messageFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
