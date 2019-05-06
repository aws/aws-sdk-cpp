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
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/CustomHealthStatus.h>
#include <utility>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class AWS_SERVICEDISCOVERY_API UpdateInstanceCustomHealthStatusRequest : public ServiceDiscoveryRequest
  {
  public:
    UpdateInstanceCustomHealthStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInstanceCustomHealthStatus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the service that includes the configuration for the custom health
     * check that you want to change the status for.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the service that includes the configuration for the custom health
     * check that you want to change the status for.</p>
     */
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }

    /**
     * <p>The ID of the service that includes the configuration for the custom health
     * check that you want to change the status for.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the service that includes the configuration for the custom health
     * check that you want to change the status for.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the service that includes the configuration for the custom health
     * check that you want to change the status for.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the service that includes the configuration for the custom health
     * check that you want to change the status for.</p>
     */
    inline UpdateInstanceCustomHealthStatusRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the service that includes the configuration for the custom health
     * check that you want to change the status for.</p>
     */
    inline UpdateInstanceCustomHealthStatusRequest& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service that includes the configuration for the custom health
     * check that you want to change the status for.</p>
     */
    inline UpdateInstanceCustomHealthStatusRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The ID of the instance that you want to change the health status for.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance that you want to change the health status for.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance that you want to change the health status for.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance that you want to change the health status for.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance that you want to change the health status for.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance that you want to change the health status for.</p>
     */
    inline UpdateInstanceCustomHealthStatusRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance that you want to change the health status for.</p>
     */
    inline UpdateInstanceCustomHealthStatusRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance that you want to change the health status for.</p>
     */
    inline UpdateInstanceCustomHealthStatusRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The new status of the instance, <code>HEALTHY</code> or
     * <code>UNHEALTHY</code>.</p>
     */
    inline const CustomHealthStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The new status of the instance, <code>HEALTHY</code> or
     * <code>UNHEALTHY</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The new status of the instance, <code>HEALTHY</code> or
     * <code>UNHEALTHY</code>.</p>
     */
    inline void SetStatus(const CustomHealthStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The new status of the instance, <code>HEALTHY</code> or
     * <code>UNHEALTHY</code>.</p>
     */
    inline void SetStatus(CustomHealthStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The new status of the instance, <code>HEALTHY</code> or
     * <code>UNHEALTHY</code>.</p>
     */
    inline UpdateInstanceCustomHealthStatusRequest& WithStatus(const CustomHealthStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The new status of the instance, <code>HEALTHY</code> or
     * <code>UNHEALTHY</code>.</p>
     */
    inline UpdateInstanceCustomHealthStatusRequest& WithStatus(CustomHealthStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    CustomHealthStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
