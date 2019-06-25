/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API ModifyTrafficMirrorFilterNetworkServicesRequest : public EC2Request
  {
  public:
    ModifyTrafficMirrorFilterNetworkServicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyTrafficMirrorFilterNetworkServices"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterId() const{ return m_trafficMirrorFilterId; }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline void SetTrafficMirrorFilterId(const Aws::String& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = value; }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline void SetTrafficMirrorFilterId(Aws::String&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::move(value); }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline void SetTrafficMirrorFilterId(const char* value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId.assign(value); }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithTrafficMirrorFilterId(const Aws::String& value) { SetTrafficMirrorFilterId(value); return *this;}

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithTrafficMirrorFilterId(Aws::String&& value) { SetTrafficMirrorFilterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithTrafficMirrorFilterId(const char* value) { SetTrafficMirrorFilterId(value); return *this;}


    /**
     * <p>The network service, for example Amazon DNS, that you want to mirror.</p>
     */
    inline const Aws::Vector<TrafficMirrorNetworkService>& GetAddNetworkServices() const{ return m_addNetworkServices; }

    /**
     * <p>The network service, for example Amazon DNS, that you want to mirror.</p>
     */
    inline bool AddNetworkServicesHasBeenSet() const { return m_addNetworkServicesHasBeenSet; }

    /**
     * <p>The network service, for example Amazon DNS, that you want to mirror.</p>
     */
    inline void SetAddNetworkServices(const Aws::Vector<TrafficMirrorNetworkService>& value) { m_addNetworkServicesHasBeenSet = true; m_addNetworkServices = value; }

    /**
     * <p>The network service, for example Amazon DNS, that you want to mirror.</p>
     */
    inline void SetAddNetworkServices(Aws::Vector<TrafficMirrorNetworkService>&& value) { m_addNetworkServicesHasBeenSet = true; m_addNetworkServices = std::move(value); }

    /**
     * <p>The network service, for example Amazon DNS, that you want to mirror.</p>
     */
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithAddNetworkServices(const Aws::Vector<TrafficMirrorNetworkService>& value) { SetAddNetworkServices(value); return *this;}

    /**
     * <p>The network service, for example Amazon DNS, that you want to mirror.</p>
     */
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithAddNetworkServices(Aws::Vector<TrafficMirrorNetworkService>&& value) { SetAddNetworkServices(std::move(value)); return *this;}

    /**
     * <p>The network service, for example Amazon DNS, that you want to mirror.</p>
     */
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& AddAddNetworkServices(const TrafficMirrorNetworkService& value) { m_addNetworkServicesHasBeenSet = true; m_addNetworkServices.push_back(value); return *this; }

    /**
     * <p>The network service, for example Amazon DNS, that you want to mirror.</p>
     */
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& AddAddNetworkServices(TrafficMirrorNetworkService&& value) { m_addNetworkServicesHasBeenSet = true; m_addNetworkServices.push_back(std::move(value)); return *this; }


    /**
     * <p>The network service, for example Amazon DNS, that you no longer want to
     * mirror.</p>
     */
    inline const Aws::Vector<TrafficMirrorNetworkService>& GetRemoveNetworkServices() const{ return m_removeNetworkServices; }

    /**
     * <p>The network service, for example Amazon DNS, that you no longer want to
     * mirror.</p>
     */
    inline bool RemoveNetworkServicesHasBeenSet() const { return m_removeNetworkServicesHasBeenSet; }

    /**
     * <p>The network service, for example Amazon DNS, that you no longer want to
     * mirror.</p>
     */
    inline void SetRemoveNetworkServices(const Aws::Vector<TrafficMirrorNetworkService>& value) { m_removeNetworkServicesHasBeenSet = true; m_removeNetworkServices = value; }

    /**
     * <p>The network service, for example Amazon DNS, that you no longer want to
     * mirror.</p>
     */
    inline void SetRemoveNetworkServices(Aws::Vector<TrafficMirrorNetworkService>&& value) { m_removeNetworkServicesHasBeenSet = true; m_removeNetworkServices = std::move(value); }

    /**
     * <p>The network service, for example Amazon DNS, that you no longer want to
     * mirror.</p>
     */
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithRemoveNetworkServices(const Aws::Vector<TrafficMirrorNetworkService>& value) { SetRemoveNetworkServices(value); return *this;}

    /**
     * <p>The network service, for example Amazon DNS, that you no longer want to
     * mirror.</p>
     */
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithRemoveNetworkServices(Aws::Vector<TrafficMirrorNetworkService>&& value) { SetRemoveNetworkServices(std::move(value)); return *this;}

    /**
     * <p>The network service, for example Amazon DNS, that you no longer want to
     * mirror.</p>
     */
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& AddRemoveNetworkServices(const TrafficMirrorNetworkService& value) { m_removeNetworkServicesHasBeenSet = true; m_removeNetworkServices.push_back(value); return *this; }

    /**
     * <p>The network service, for example Amazon DNS, that you no longer want to
     * mirror.</p>
     */
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& AddRemoveNetworkServices(TrafficMirrorNetworkService&& value) { m_removeNetworkServicesHasBeenSet = true; m_removeNetworkServices.push_back(std::move(value)); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyTrafficMirrorFilterNetworkServicesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_trafficMirrorFilterId;
    bool m_trafficMirrorFilterIdHasBeenSet;

    Aws::Vector<TrafficMirrorNetworkService> m_addNetworkServices;
    bool m_addNetworkServicesHasBeenSet;

    Aws::Vector<TrafficMirrorNetworkService> m_removeNetworkServices;
    bool m_removeNetworkServicesHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
