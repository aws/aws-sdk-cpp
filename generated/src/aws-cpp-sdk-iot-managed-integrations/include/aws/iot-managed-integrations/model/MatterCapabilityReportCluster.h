/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/model/MatterCapabilityReportAttribute.h>
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
   * <p>Capability used in Matter capability report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/MatterCapabilityReportCluster">AWS
   * API Reference</a></p>
   */
  class MatterCapabilityReportCluster
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API MatterCapabilityReportCluster() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API MatterCapabilityReportCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API MatterCapabilityReportCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The id of the Amazon Web Services Matter capability report cluster.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    MatterCapabilityReportCluster& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the revision for the Amazon Web Services Matter capability
     * report.</p>
     */
    inline int GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline MatterCapabilityReportCluster& WithRevision(int value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the schema version.</p>
     */
    inline const Aws::String& GetPublicId() const { return m_publicId; }
    inline bool PublicIdHasBeenSet() const { return m_publicIdHasBeenSet; }
    template<typename PublicIdT = Aws::String>
    void SetPublicId(PublicIdT&& value) { m_publicIdHasBeenSet = true; m_publicId = std::forward<PublicIdT>(value); }
    template<typename PublicIdT = Aws::String>
    MatterCapabilityReportCluster& WithPublicId(PublicIdT&& value) { SetPublicId(std::forward<PublicIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capability name used in the Amazon Web Services Matter capability
     * report.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MatterCapabilityReportCluster& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The spec version used in the Amazon Web Services Matter capability
     * report.</p>
     */
    inline const Aws::String& GetSpecVersion() const { return m_specVersion; }
    inline bool SpecVersionHasBeenSet() const { return m_specVersionHasBeenSet; }
    template<typename SpecVersionT = Aws::String>
    void SetSpecVersion(SpecVersionT&& value) { m_specVersionHasBeenSet = true; m_specVersion = std::forward<SpecVersionT>(value); }
    template<typename SpecVersionT = Aws::String>
    MatterCapabilityReportCluster& WithSpecVersion(SpecVersionT&& value) { SetSpecVersion(std::forward<SpecVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes of the Amazon Web Services Matter capability report.</p>
     */
    inline const Aws::Vector<MatterCapabilityReportAttribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<MatterCapabilityReportAttribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<MatterCapabilityReportAttribute>>
    MatterCapabilityReportCluster& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = MatterCapabilityReportAttribute>
    MatterCapabilityReportCluster& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The commands used with the Amazon Web Services Matter capability report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommands() const { return m_commands; }
    inline bool CommandsHasBeenSet() const { return m_commandsHasBeenSet; }
    template<typename CommandsT = Aws::Vector<Aws::String>>
    void SetCommands(CommandsT&& value) { m_commandsHasBeenSet = true; m_commands = std::forward<CommandsT>(value); }
    template<typename CommandsT = Aws::Vector<Aws::String>>
    MatterCapabilityReportCluster& WithCommands(CommandsT&& value) { SetCommands(std::forward<CommandsT>(value)); return *this;}
    template<typename CommandsT = Aws::String>
    MatterCapabilityReportCluster& AddCommands(CommandsT&& value) { m_commandsHasBeenSet = true; m_commands.emplace_back(std::forward<CommandsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The events used with the Amazon Web Services Matter capability report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Vector<Aws::String>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<Aws::String>>
    MatterCapabilityReportCluster& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = Aws::String>
    MatterCapabilityReportCluster& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>32 bit-map used to indicate which features a cluster supports.</p>
     */
    inline long long GetFeatureMap() const { return m_featureMap; }
    inline bool FeatureMapHasBeenSet() const { return m_featureMapHasBeenSet; }
    inline void SetFeatureMap(long long value) { m_featureMapHasBeenSet = true; m_featureMap = value; }
    inline MatterCapabilityReportCluster& WithFeatureMap(long long value) { SetFeatureMap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matter clusters used in capability report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGeneratedCommands() const { return m_generatedCommands; }
    inline bool GeneratedCommandsHasBeenSet() const { return m_generatedCommandsHasBeenSet; }
    template<typename GeneratedCommandsT = Aws::Vector<Aws::String>>
    void SetGeneratedCommands(GeneratedCommandsT&& value) { m_generatedCommandsHasBeenSet = true; m_generatedCommands = std::forward<GeneratedCommandsT>(value); }
    template<typename GeneratedCommandsT = Aws::Vector<Aws::String>>
    MatterCapabilityReportCluster& WithGeneratedCommands(GeneratedCommandsT&& value) { SetGeneratedCommands(std::forward<GeneratedCommandsT>(value)); return *this;}
    template<typename GeneratedCommandsT = Aws::String>
    MatterCapabilityReportCluster& AddGeneratedCommands(GeneratedCommandsT&& value) { m_generatedCommandsHasBeenSet = true; m_generatedCommands.emplace_back(std::forward<GeneratedCommandsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The fabric index for the Amazon Web Services Matter capability report.</p>
     */
    inline int GetFabricIndex() const { return m_fabricIndex; }
    inline bool FabricIndexHasBeenSet() const { return m_fabricIndexHasBeenSet; }
    inline void SetFabricIndex(int value) { m_fabricIndexHasBeenSet = true; m_fabricIndex = value; }
    inline MatterCapabilityReportCluster& WithFabricIndex(int value) { SetFabricIndex(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_revision{0};
    bool m_revisionHasBeenSet = false;

    Aws::String m_publicId;
    bool m_publicIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_specVersion;
    bool m_specVersionHasBeenSet = false;

    Aws::Vector<MatterCapabilityReportAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<Aws::String> m_commands;
    bool m_commandsHasBeenSet = false;

    Aws::Vector<Aws::String> m_events;
    bool m_eventsHasBeenSet = false;

    long long m_featureMap{0};
    bool m_featureMapHasBeenSet = false;

    Aws::Vector<Aws::String> m_generatedCommands;
    bool m_generatedCommandsHasBeenSet = false;

    int m_fabricIndex{0};
    bool m_fabricIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
