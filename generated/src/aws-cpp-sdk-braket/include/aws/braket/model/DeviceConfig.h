/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>Configures the primary device used to create and run an Amazon Braket hybrid
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/DeviceConfig">AWS
   * API Reference</a></p>
   */
  class DeviceConfig
  {
  public:
    AWS_BRAKET_API DeviceConfig() = default;
    AWS_BRAKET_API DeviceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API DeviceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The primary device ARN used to create and run an Amazon Braket hybrid
     * job.</p>
     */
    inline const Aws::String& GetDevice() const { return m_device; }
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }
    template<typename DeviceT = Aws::String>
    void SetDevice(DeviceT&& value) { m_deviceHasBeenSet = true; m_device = std::forward<DeviceT>(value); }
    template<typename DeviceT = Aws::String>
    DeviceConfig& WithDevice(DeviceT&& value) { SetDevice(std::forward<DeviceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_device;
    bool m_deviceHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
