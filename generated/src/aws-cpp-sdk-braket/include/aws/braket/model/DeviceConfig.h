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
   * <p>Configures the quantum processing units (QPUs) or simulator used to create
   * and run an Amazon Braket job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/DeviceConfig">AWS
   * API Reference</a></p>
   */
  class DeviceConfig
  {
  public:
    AWS_BRAKET_API DeviceConfig();
    AWS_BRAKET_API DeviceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API DeviceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The primary quantum processing unit (QPU) or simulator used to create and run
     * an Amazon Braket job.</p>
     */
    inline const Aws::String& GetDevice() const{ return m_device; }

    /**
     * <p>The primary quantum processing unit (QPU) or simulator used to create and run
     * an Amazon Braket job.</p>
     */
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }

    /**
     * <p>The primary quantum processing unit (QPU) or simulator used to create and run
     * an Amazon Braket job.</p>
     */
    inline void SetDevice(const Aws::String& value) { m_deviceHasBeenSet = true; m_device = value; }

    /**
     * <p>The primary quantum processing unit (QPU) or simulator used to create and run
     * an Amazon Braket job.</p>
     */
    inline void SetDevice(Aws::String&& value) { m_deviceHasBeenSet = true; m_device = std::move(value); }

    /**
     * <p>The primary quantum processing unit (QPU) or simulator used to create and run
     * an Amazon Braket job.</p>
     */
    inline void SetDevice(const char* value) { m_deviceHasBeenSet = true; m_device.assign(value); }

    /**
     * <p>The primary quantum processing unit (QPU) or simulator used to create and run
     * an Amazon Braket job.</p>
     */
    inline DeviceConfig& WithDevice(const Aws::String& value) { SetDevice(value); return *this;}

    /**
     * <p>The primary quantum processing unit (QPU) or simulator used to create and run
     * an Amazon Braket job.</p>
     */
    inline DeviceConfig& WithDevice(Aws::String&& value) { SetDevice(std::move(value)); return *this;}

    /**
     * <p>The primary quantum processing unit (QPU) or simulator used to create and run
     * an Amazon Braket job.</p>
     */
    inline DeviceConfig& WithDevice(const char* value) { SetDevice(value); return *this;}

  private:

    Aws::String m_device;
    bool m_deviceHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
