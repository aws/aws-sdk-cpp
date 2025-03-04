/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/LogLevel.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class CreateEventLogConfigurationRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CreateEventLogConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventLogConfiguration"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The type of resource for the event log configuration.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline CreateEventLogConfigurationRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline CreateEventLogConfigurationRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline CreateEventLogConfigurationRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the resource for the event log configuration.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline CreateEventLogConfigurationRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline CreateEventLogConfigurationRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline CreateEventLogConfigurationRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging level for the event log configuration.</p>
     */
    inline const LogLevel& GetEventLogLevel() const{ return m_eventLogLevel; }
    inline bool EventLogLevelHasBeenSet() const { return m_eventLogLevelHasBeenSet; }
    inline void SetEventLogLevel(const LogLevel& value) { m_eventLogLevelHasBeenSet = true; m_eventLogLevel = value; }
    inline void SetEventLogLevel(LogLevel&& value) { m_eventLogLevelHasBeenSet = true; m_eventLogLevel = std::move(value); }
    inline CreateEventLogConfigurationRequest& WithEventLogLevel(const LogLevel& value) { SetEventLogLevel(value); return *this;}
    inline CreateEventLogConfigurationRequest& WithEventLogLevel(LogLevel&& value) { SetEventLogLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token. If you retry a request that completed successfully
     * initially using the same client token and parameters, then the retry attempt
     * will succeed without performing any further actions.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateEventLogConfigurationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateEventLogConfigurationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateEventLogConfigurationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    LogLevel m_eventLogLevel;
    bool m_eventLogLevelHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
