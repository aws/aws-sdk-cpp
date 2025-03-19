/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/DeviceCertificateUpdateAction.h>
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
   * <p>Parameters to define a mitigation action that changes the state of the device
   * certificate to inactive.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateDeviceCertificateParams">AWS
   * API Reference</a></p>
   */
  class UpdateDeviceCertificateParams
  {
  public:
    AWS_IOT_API UpdateDeviceCertificateParams() = default;
    AWS_IOT_API UpdateDeviceCertificateParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API UpdateDeviceCertificateParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action that you want to apply to the device certificate. The only
     * supported value is <code>DEACTIVATE</code>.</p>
     */
    inline DeviceCertificateUpdateAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(DeviceCertificateUpdateAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline UpdateDeviceCertificateParams& WithAction(DeviceCertificateUpdateAction value) { SetAction(value); return *this;}
    ///@}
  private:

    DeviceCertificateUpdateAction m_action{DeviceCertificateUpdateAction::NOT_SET};
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
