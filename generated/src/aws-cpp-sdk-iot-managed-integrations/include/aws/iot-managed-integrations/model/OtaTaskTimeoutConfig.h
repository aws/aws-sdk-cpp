/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>

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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Over-the-air (OTA) task timeout config.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/OtaTaskTimeoutConfig">AWS
   * API Reference</a></p>
   */
  class OtaTaskTimeoutConfig
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskTimeoutConfig() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskTimeoutConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskTimeoutConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the amount of time the device has to finish execution of this task.
     * The timeout interval can be anywhere between 1 minute and 7 days.</p>
     */
    inline long long GetInProgressTimeoutInMinutes() const { return m_inProgressTimeoutInMinutes; }
    inline bool InProgressTimeoutInMinutesHasBeenSet() const { return m_inProgressTimeoutInMinutesHasBeenSet; }
    inline void SetInProgressTimeoutInMinutes(long long value) { m_inProgressTimeoutInMinutesHasBeenSet = true; m_inProgressTimeoutInMinutes = value; }
    inline OtaTaskTimeoutConfig& WithInProgressTimeoutInMinutes(long long value) { SetInProgressTimeoutInMinutes(value); return *this;}
    ///@}
  private:

    long long m_inProgressTimeoutInMinutes{0};
    bool m_inProgressTimeoutInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
