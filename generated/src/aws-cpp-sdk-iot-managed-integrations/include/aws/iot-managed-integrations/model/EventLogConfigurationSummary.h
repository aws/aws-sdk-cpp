/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/LogLevel.h>
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
   * <p>List of event log configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/EventLogConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class EventLogConfigurationSummary
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API EventLogConfigurationSummary();
    AWS_IOTMANAGEDINTEGRATIONS_API EventLogConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API EventLogConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the event log configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline EventLogConfigurationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline EventLogConfigurationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline EventLogConfigurationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource for the event log configuration.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline EventLogConfigurationSummary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline EventLogConfigurationSummary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline EventLogConfigurationSummary& WithResourceType(const char* value) { SetResourceType(value); return *this;}
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
    inline EventLogConfigurationSummary& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline EventLogConfigurationSummary& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline EventLogConfigurationSummary& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging level for the event log configuration.</p>
     */
    inline const LogLevel& GetEventLogLevel() const{ return m_eventLogLevel; }
    inline bool EventLogLevelHasBeenSet() const { return m_eventLogLevelHasBeenSet; }
    inline void SetEventLogLevel(const LogLevel& value) { m_eventLogLevelHasBeenSet = true; m_eventLogLevel = value; }
    inline void SetEventLogLevel(LogLevel&& value) { m_eventLogLevelHasBeenSet = true; m_eventLogLevel = std::move(value); }
    inline EventLogConfigurationSummary& WithEventLogLevel(const LogLevel& value) { SetEventLogLevel(value); return *this;}
    inline EventLogConfigurationSummary& WithEventLogLevel(LogLevel&& value) { SetEventLogLevel(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    LogLevel m_eventLogLevel;
    bool m_eventLogLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
