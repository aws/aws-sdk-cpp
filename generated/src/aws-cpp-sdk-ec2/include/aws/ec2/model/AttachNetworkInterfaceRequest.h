/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/EnaSrdSpecification.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for AttachNetworkInterface.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachNetworkInterfaceRequest">AWS
   * API Reference</a></p>
   */
  class AttachNetworkInterfaceRequest : public EC2Request
  {
  public:
    AWS_EC2_API AttachNetworkInterfaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachNetworkInterface"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The index of the network card. Some instance types support multiple network
     * cards. The primary network interface must be assigned to network card index 0.
     * The default is network card index 0.</p>
     */
    inline int GetNetworkCardIndex() const { return m_networkCardIndex; }
    inline bool NetworkCardIndexHasBeenSet() const { return m_networkCardIndexHasBeenSet; }
    inline void SetNetworkCardIndex(int value) { m_networkCardIndexHasBeenSet = true; m_networkCardIndex = value; }
    inline AttachNetworkInterfaceRequest& WithNetworkCardIndex(int value) { SetNetworkCardIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures ENA Express for the network interface that this action attaches to
     * the instance.</p>
     */
    inline const EnaSrdSpecification& GetEnaSrdSpecification() const { return m_enaSrdSpecification; }
    inline bool EnaSrdSpecificationHasBeenSet() const { return m_enaSrdSpecificationHasBeenSet; }
    template<typename EnaSrdSpecificationT = EnaSrdSpecification>
    void SetEnaSrdSpecification(EnaSrdSpecificationT&& value) { m_enaSrdSpecificationHasBeenSet = true; m_enaSrdSpecification = std::forward<EnaSrdSpecificationT>(value); }
    template<typename EnaSrdSpecificationT = EnaSrdSpecification>
    AttachNetworkInterfaceRequest& WithEnaSrdSpecification(EnaSrdSpecificationT&& value) { SetEnaSrdSpecification(std::forward<EnaSrdSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of ENA queues to be created with the instance.</p>
     */
    inline int GetEnaQueueCount() const { return m_enaQueueCount; }
    inline bool EnaQueueCountHasBeenSet() const { return m_enaQueueCountHasBeenSet; }
    inline void SetEnaQueueCount(int value) { m_enaQueueCountHasBeenSet = true; m_enaQueueCount = value; }
    inline AttachNetworkInterfaceRequest& WithEnaQueueCount(int value) { SetEnaQueueCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline AttachNetworkInterfaceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    AttachNetworkInterfaceRequest& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    AttachNetworkInterfaceRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index of the device for the network interface attachment.</p>
     */
    inline int GetDeviceIndex() const { return m_deviceIndex; }
    inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }
    inline void SetDeviceIndex(int value) { m_deviceIndexHasBeenSet = true; m_deviceIndex = value; }
    inline AttachNetworkInterfaceRequest& WithDeviceIndex(int value) { SetDeviceIndex(value); return *this;}
    ///@}
  private:

    int m_networkCardIndex{0};
    bool m_networkCardIndexHasBeenSet = false;

    EnaSrdSpecification m_enaSrdSpecification;
    bool m_enaSrdSpecificationHasBeenSet = false;

    int m_enaQueueCount{0};
    bool m_enaQueueCountHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    int m_deviceIndex{0};
    bool m_deviceIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
