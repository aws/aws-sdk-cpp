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


    
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    
    inline UpdateInstanceCustomHealthStatusRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    
    inline UpdateInstanceCustomHealthStatusRequest& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    
    inline UpdateInstanceCustomHealthStatusRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    
    inline UpdateInstanceCustomHealthStatusRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    
    inline UpdateInstanceCustomHealthStatusRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    
    inline UpdateInstanceCustomHealthStatusRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    
    inline const CustomHealthStatus& GetStatus() const{ return m_status; }

    
    inline void SetStatus(const CustomHealthStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(CustomHealthStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline UpdateInstanceCustomHealthStatusRequest& WithStatus(const CustomHealthStatus& value) { SetStatus(value); return *this;}

    
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
