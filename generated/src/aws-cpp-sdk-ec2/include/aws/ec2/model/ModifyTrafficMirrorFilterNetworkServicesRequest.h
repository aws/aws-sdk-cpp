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
    AWS_EC2_API ModifyTrafficMirrorFilterNetworkServicesRequest();

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
    inline const Aws::String& GetTrafficMirrorFilterId() const{ return m_trafficMirrorFilterId; }
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }
    inline void SetTrafficMirrorFilterId(const Aws::String& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = value; }
    inline void SetTrafficMirrorFilterId(Aws::String&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::move(value); }
    inline void SetTrafficMirrorFilterId(const char* value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId.assign(value); }
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithTrafficMirrorFilterId(const Aws::String& value) { SetTrafficMirrorFilterId(value); return *this;}
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithTrafficMirrorFilterId(Aws::String&& value) { SetTrafficMirrorFilterId(std::move(value)); return *this;}
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithTrafficMirrorFilterId(const char* value) { SetTrafficMirrorFilterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network service, for example Amazon DNS, that you want to mirror.</p>
     */
    inline const Aws::Vector<TrafficMirrorNetworkService>& GetAddNetworkServices() const{ return m_addNetworkServices; }
    inline bool AddNetworkServicesHasBeenSet() const { return m_addNetworkServicesHasBeenSet; }
    inline void SetAddNetworkServices(const Aws::Vector<TrafficMirrorNetworkService>& value) { m_addNetworkServicesHasBeenSet = true; m_addNetworkServices = value; }
    inline void SetAddNetworkServices(Aws::Vector<TrafficMirrorNetworkService>&& value) { m_addNetworkServicesHasBeenSet = true; m_addNetworkServices = std::move(value); }
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithAddNetworkServices(const Aws::Vector<TrafficMirrorNetworkService>& value) { SetAddNetworkServices(value); return *this;}
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithAddNetworkServices(Aws::Vector<TrafficMirrorNetworkService>&& value) { SetAddNetworkServices(std::move(value)); return *this;}
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& AddAddNetworkServices(const TrafficMirrorNetworkService& value) { m_addNetworkServicesHasBeenSet = true; m_addNetworkServices.push_back(value); return *this; }
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& AddAddNetworkServices(TrafficMirrorNetworkService&& value) { m_addNetworkServicesHasBeenSet = true; m_addNetworkServices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network service, for example Amazon DNS, that you no longer want to
     * mirror.</p>
     */
    inline const Aws::Vector<TrafficMirrorNetworkService>& GetRemoveNetworkServices() const{ return m_removeNetworkServices; }
    inline bool RemoveNetworkServicesHasBeenSet() const { return m_removeNetworkServicesHasBeenSet; }
    inline void SetRemoveNetworkServices(const Aws::Vector<TrafficMirrorNetworkService>& value) { m_removeNetworkServicesHasBeenSet = true; m_removeNetworkServices = value; }
    inline void SetRemoveNetworkServices(Aws::Vector<TrafficMirrorNetworkService>&& value) { m_removeNetworkServicesHasBeenSet = true; m_removeNetworkServices = std::move(value); }
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithRemoveNetworkServices(const Aws::Vector<TrafficMirrorNetworkService>& value) { SetRemoveNetworkServices(value); return *this;}
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithRemoveNetworkServices(Aws::Vector<TrafficMirrorNetworkService>&& value) { SetRemoveNetworkServices(std::move(value)); return *this;}
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& AddRemoveNetworkServices(const TrafficMirrorNetworkService& value) { m_removeNetworkServicesHasBeenSet = true; m_removeNetworkServices.push_back(value); return *this; }
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& AddRemoveNetworkServices(TrafficMirrorNetworkService&& value) { m_removeNetworkServicesHasBeenSet = true; m_removeNetworkServices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
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

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
