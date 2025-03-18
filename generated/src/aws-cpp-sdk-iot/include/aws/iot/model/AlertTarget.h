/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A structure containing the alert target ARN and the role ARN.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AlertTarget">AWS API
   * Reference</a></p>
   */
  class AlertTarget
  {
  public:
    AWS_IOT_API AlertTarget() = default;
    AWS_IOT_API AlertTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AlertTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the notification target to which alerts are
     * sent.</p>
     */
    inline const Aws::String& GetAlertTargetArn() const { return m_alertTargetArn; }
    inline bool AlertTargetArnHasBeenSet() const { return m_alertTargetArnHasBeenSet; }
    template<typename AlertTargetArnT = Aws::String>
    void SetAlertTargetArn(AlertTargetArnT&& value) { m_alertTargetArnHasBeenSet = true; m_alertTargetArn = std::forward<AlertTargetArnT>(value); }
    template<typename AlertTargetArnT = Aws::String>
    AlertTarget& WithAlertTargetArn(AlertTargetArnT&& value) { SetAlertTargetArn(std::forward<AlertTargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that grants permission to send alerts to the notification
     * target.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    AlertTarget& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alertTargetArn;
    bool m_alertTargetArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
