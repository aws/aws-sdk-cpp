/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/DiscoveryType.h>
#include <aws/iot-managed-integrations/model/DeviceDiscoveryStatus.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure containing summary information about a device discovery job,
   * including its identifier, type, and status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DeviceDiscoverySummary">AWS
   * API Reference</a></p>
   */
  class DeviceDiscoverySummary
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API DeviceDiscoverySummary() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API DeviceDiscoverySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API DeviceDiscoverySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the device discovery job.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DeviceDiscoverySummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of discovery process used to find devices.</p>
     */
    inline DiscoveryType GetDiscoveryType() const { return m_discoveryType; }
    inline bool DiscoveryTypeHasBeenSet() const { return m_discoveryTypeHasBeenSet; }
    inline void SetDiscoveryType(DiscoveryType value) { m_discoveryTypeHasBeenSet = true; m_discoveryType = value; }
    inline DeviceDiscoverySummary& WithDiscoveryType(DiscoveryType value) { SetDiscoveryType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the device discovery job.</p>
     */
    inline DeviceDiscoveryStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DeviceDiscoveryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeviceDiscoverySummary& WithStatus(DeviceDiscoveryStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    DiscoveryType m_discoveryType{DiscoveryType::NOT_SET};
    bool m_discoveryTypeHasBeenSet = false;

    DeviceDiscoveryStatus m_status{DeviceDiscoveryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
