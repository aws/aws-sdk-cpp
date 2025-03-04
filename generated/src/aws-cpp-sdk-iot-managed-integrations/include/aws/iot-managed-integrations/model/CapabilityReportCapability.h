/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The capability used in capability report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CapabilityReportCapability">AWS
   * API Reference</a></p>
   */
  class CapabilityReportCapability
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityReportCapability();
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityReportCapability(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityReportCapability& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The id of the schema version.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CapabilityReportCapability& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CapabilityReportCapability& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CapabilityReportCapability& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the capability.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CapabilityReportCapability& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CapabilityReportCapability& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CapabilityReportCapability& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the capability.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline CapabilityReportCapability& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CapabilityReportCapability& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CapabilityReportCapability& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capability properties used in the capability report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Vector<Aws::String>& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Vector<Aws::String>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline CapabilityReportCapability& WithProperties(const Aws::Vector<Aws::String>& value) { SetProperties(value); return *this;}
    inline CapabilityReportCapability& WithProperties(Aws::Vector<Aws::String>&& value) { SetProperties(std::move(value)); return *this;}
    inline CapabilityReportCapability& AddProperties(const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }
    inline CapabilityReportCapability& AddProperties(Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }
    inline CapabilityReportCapability& AddProperties(const char* value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The capability actions used in the capability report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline CapabilityReportCapability& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}
    inline CapabilityReportCapability& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}
    inline CapabilityReportCapability& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline CapabilityReportCapability& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    inline CapabilityReportCapability& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The capability events used in the capability report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEvents() const{ return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    inline void SetEvents(const Aws::Vector<Aws::String>& value) { m_eventsHasBeenSet = true; m_events = value; }
    inline void SetEvents(Aws::Vector<Aws::String>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }
    inline CapabilityReportCapability& WithEvents(const Aws::Vector<Aws::String>& value) { SetEvents(value); return *this;}
    inline CapabilityReportCapability& WithEvents(Aws::Vector<Aws::String>&& value) { SetEvents(std::move(value)); return *this;}
    inline CapabilityReportCapability& AddEvents(const Aws::String& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }
    inline CapabilityReportCapability& AddEvents(Aws::String&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }
    inline CapabilityReportCapability& AddEvents(const char* value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<Aws::String> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
