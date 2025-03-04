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

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class UpdateEventLogConfigurationRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API UpdateEventLogConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEventLogConfiguration"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The log configuration id.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateEventLogConfigurationRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateEventLogConfigurationRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateEventLogConfigurationRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log level for the event in terms of severity.</p>
     */
    inline const LogLevel& GetEventLogLevel() const{ return m_eventLogLevel; }
    inline bool EventLogLevelHasBeenSet() const { return m_eventLogLevelHasBeenSet; }
    inline void SetEventLogLevel(const LogLevel& value) { m_eventLogLevelHasBeenSet = true; m_eventLogLevel = value; }
    inline void SetEventLogLevel(LogLevel&& value) { m_eventLogLevelHasBeenSet = true; m_eventLogLevel = std::move(value); }
    inline UpdateEventLogConfigurationRequest& WithEventLogLevel(const LogLevel& value) { SetEventLogLevel(value); return *this;}
    inline UpdateEventLogConfigurationRequest& WithEventLogLevel(LogLevel&& value) { SetEventLogLevel(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    LogLevel m_eventLogLevel;
    bool m_eventLogLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
