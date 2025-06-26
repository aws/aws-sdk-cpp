/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Describe a Matter cluster with an id, and the relevant attributes, commands,
   * and events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/MatterCluster">AWS
   * API Reference</a></p>
   */
  class MatterCluster
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API MatterCluster() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API MatterCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API MatterCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cluster id.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    MatterCluster& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Matter attributes.</p>
     */
    inline Aws::Utils::DocumentView GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Utils::Document>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Utils::Document>
    MatterCluster& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describe the Matter commands with the Matter command identifier mapped to the
     * command fields.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetCommands() const { return m_commands; }
    inline bool CommandsHasBeenSet() const { return m_commandsHasBeenSet; }
    template<typename CommandsT = Aws::Map<Aws::String, Aws::Utils::Document>>
    void SetCommands(CommandsT&& value) { m_commandsHasBeenSet = true; m_commands = std::forward<CommandsT>(value); }
    template<typename CommandsT = Aws::Map<Aws::String, Aws::Utils::Document>>
    MatterCluster& WithCommands(CommandsT&& value) { SetCommands(std::forward<CommandsT>(value)); return *this;}
    template<typename CommandsKeyT = Aws::String, typename CommandsValueT = Aws::Utils::Document>
    MatterCluster& AddCommands(CommandsKeyT&& key, CommandsValueT&& value) {
      m_commandsHasBeenSet = true; m_commands.emplace(std::forward<CommandsKeyT>(key), std::forward<CommandsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Describe the Matter events with the Matter event identifier mapped to the
     * event fields.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Map<Aws::String, Aws::Utils::Document>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Map<Aws::String, Aws::Utils::Document>>
    MatterCluster& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsKeyT = Aws::String, typename EventsValueT = Aws::Utils::Document>
    MatterCluster& AddEvents(EventsKeyT&& key, EventsValueT&& value) {
      m_eventsHasBeenSet = true; m_events.emplace(std::forward<EventsKeyT>(key), std::forward<EventsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::Document m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Utils::Document> m_commands;
    bool m_commandsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Utils::Document> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
