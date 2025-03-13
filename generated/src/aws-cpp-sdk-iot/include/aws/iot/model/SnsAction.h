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
    AWS_IOT_API SnsAction() = default;
    AWS_IOT_API SnsAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API SnsAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    SnsAction& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    SnsAction& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The message format of the message to publish. Accepted values are
     * "JSON" and "RAW". The default value of the attribute is "RAW". SNS uses this
     * setting to determine if the payload should be parsed and relevant
     * platform-specific bits of the payload should be extracted. To read more about
     * SNS message formats, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/json-formats.html">https://docs.aws.amazon.com/sns/latest/dg/json-formats.html</a>
     * refer to their official documentation.</p>
     */
    inline MessageFormat GetMessageFormat() const { return m_messageFormat; }
    inline bool MessageFormatHasBeenSet() const { return m_messageFormatHasBeenSet; }
    inline void SetMessageFormat(MessageFormat value) { m_messageFormatHasBeenSet = true; m_messageFormat = value; }
    inline SnsAction& WithMessageFormat(MessageFormat value) { SetMessageFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    MessageFormat m_messageFormat{MessageFormat::NOT_SET};
    bool m_messageFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
