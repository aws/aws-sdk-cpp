/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TrafficMirrorNetworkService.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyTrafficMirrorFilterNetworkServicesRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyTrafficMirrorFilterNetworkServicesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyTrafficMirrorFilterNetworkServices"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterId() const { return m_trafficMirrorFilterId; }
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }
    template<typename TrafficMirrorFilterIdT = Aws::String>
    void SetTrafficMirrorFilterId(TrafficMirrorFilterIdT&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::forward<TrafficMirrorFilterIdT>(value); }
    template<typename TrafficMirrorFilterIdT = Aws::String>
    ModifyTrafficMirrorFilterNetworkServicesRequest& WithTrafficMirrorFilterId(TrafficMirrorFilterIdT&& value) { SetTrafficMirrorFilterId(std::forward<TrafficMirrorFilterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network service, for example Amazon DNS, that you want to mirror.</p>
     */
    inline const Aws::Vector<TrafficMirrorNetworkService>& GetAddNetworkServices() const { return m_addNetworkServices; }
    inline bool AddNetworkServicesHasBeenSet() const { return m_addNetworkServicesHasBeenSet; }
    template<typename AddNetworkServicesT = Aws::Vector<TrafficMirrorNetworkService>>
    void SetAddNetworkServices(AddNetworkServicesT&& value) { m_addNetworkServicesHasBeenSet = true; m_addNetworkServices = std::forward<AddNetworkServicesT>(value); }
    template<typename AddNetworkServicesT = Aws::Vector<TrafficMirrorNetworkService>>
    ModifyTrafficMirrorFilterNetworkServicesRequest& WithAddNetworkServices(AddNetworkServicesT&& value) { SetAddNetworkServices(std::forward<AddNetworkServicesT>(value)); return *this;}
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& AddAddNetworkServices(TrafficMirrorNetworkService value) { m_addNetworkServicesHasBeenSet = true; m_addNetworkServices.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network service, for example Amazon DNS, that you no longer want to
     * mirror.</p>
     */
    inline const Aws::Vector<TrafficMirrorNetworkService>& GetRemoveNetworkServices() const { return m_removeNetworkServices; }
    inline bool RemoveNetworkServicesHasBeenSet() const { return m_removeNetworkServicesHasBeenSet; }
    template<typename RemoveNetworkServicesT = Aws::Vector<TrafficMirrorNetworkService>>
    void SetRemoveNetworkServices(RemoveNetworkServicesT&& value) { m_removeNetworkServicesHasBeenSet = true; m_removeNetworkServices = std::forward<RemoveNetworkServicesT>(value); }
    template<typename RemoveNetworkServicesT = Aws::Vector<TrafficMirrorNetworkService>>
    ModifyTrafficMirrorFilterNetworkServicesRequest& WithRemoveNetworkServices(RemoveNetworkServicesT&& value) { SetRemoveNetworkServices(std::forward<RemoveNetworkServicesT>(value)); return *this;}
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& AddRemoveNetworkServices(TrafficMirrorNetworkService value) { m_removeNetworkServicesHasBeenSet = true; m_removeNetworkServices.push_back(value); return *this; }
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
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_trafficMirrorFilterId;
    bool m_trafficMirrorFilterIdHasBeenSet = false;

    Aws::Vector<TrafficMirrorNetworkService> m_addNetworkServices;
    bool m_addNetworkServicesHasBeenSet = false;

    Aws::Vector<TrafficMirrorNetworkService> m_removeNetworkServices;
    bool m_removeNetworkServicesHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
