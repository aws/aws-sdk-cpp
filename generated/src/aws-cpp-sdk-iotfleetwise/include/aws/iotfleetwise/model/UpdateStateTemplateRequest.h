/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class UpdateStateTemplateRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API UpdateStateTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStateTemplate"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique ID of the state template.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateStateTemplateRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the state template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateStateTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Add signals from which data is collected as part of the state template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStateTemplatePropertiesToAdd() const { return m_stateTemplatePropertiesToAdd; }
    inline bool StateTemplatePropertiesToAddHasBeenSet() const { return m_stateTemplatePropertiesToAddHasBeenSet; }
    template<typename StateTemplatePropertiesToAddT = Aws::Vector<Aws::String>>
    void SetStateTemplatePropertiesToAdd(StateTemplatePropertiesToAddT&& value) { m_stateTemplatePropertiesToAddHasBeenSet = true; m_stateTemplatePropertiesToAdd = std::forward<StateTemplatePropertiesToAddT>(value); }
    template<typename StateTemplatePropertiesToAddT = Aws::Vector<Aws::String>>
    UpdateStateTemplateRequest& WithStateTemplatePropertiesToAdd(StateTemplatePropertiesToAddT&& value) { SetStateTemplatePropertiesToAdd(std::forward<StateTemplatePropertiesToAddT>(value)); return *this;}
    template<typename StateTemplatePropertiesToAddT = Aws::String>
    UpdateStateTemplateRequest& AddStateTemplatePropertiesToAdd(StateTemplatePropertiesToAddT&& value) { m_stateTemplatePropertiesToAddHasBeenSet = true; m_stateTemplatePropertiesToAdd.emplace_back(std::forward<StateTemplatePropertiesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Remove signals from which data is collected as part of the state
     * template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStateTemplatePropertiesToRemove() const { return m_stateTemplatePropertiesToRemove; }
    inline bool StateTemplatePropertiesToRemoveHasBeenSet() const { return m_stateTemplatePropertiesToRemoveHasBeenSet; }
    template<typename StateTemplatePropertiesToRemoveT = Aws::Vector<Aws::String>>
    void SetStateTemplatePropertiesToRemove(StateTemplatePropertiesToRemoveT&& value) { m_stateTemplatePropertiesToRemoveHasBeenSet = true; m_stateTemplatePropertiesToRemove = std::forward<StateTemplatePropertiesToRemoveT>(value); }
    template<typename StateTemplatePropertiesToRemoveT = Aws::Vector<Aws::String>>
    UpdateStateTemplateRequest& WithStateTemplatePropertiesToRemove(StateTemplatePropertiesToRemoveT&& value) { SetStateTemplatePropertiesToRemove(std::forward<StateTemplatePropertiesToRemoveT>(value)); return *this;}
    template<typename StateTemplatePropertiesToRemoveT = Aws::String>
    UpdateStateTemplateRequest& AddStateTemplatePropertiesToRemove(StateTemplatePropertiesToRemoveT&& value) { m_stateTemplatePropertiesToRemoveHasBeenSet = true; m_stateTemplatePropertiesToRemove.emplace_back(std::forward<StateTemplatePropertiesToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of vehicle attributes to associate with the payload published on the
     * state template's MQTT topic. (See <a
     * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/process-visualize-data.html#process-last-known-state-vehicle-data">
     * Processing last known state vehicle data using MQTT messaging</a>). For example,
     * if you add <code>Vehicle.Attributes.Make</code> and
     * <code>Vehicle.Attributes.Model</code> attributes, Amazon Web Services IoT
     * FleetWise will enrich the protobuf encoded payload with those attributes in the
     * <code>extraDimensions</code> field.</p> <p>Default: An empty array</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataExtraDimensions() const { return m_dataExtraDimensions; }
    inline bool DataExtraDimensionsHasBeenSet() const { return m_dataExtraDimensionsHasBeenSet; }
    template<typename DataExtraDimensionsT = Aws::Vector<Aws::String>>
    void SetDataExtraDimensions(DataExtraDimensionsT&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions = std::forward<DataExtraDimensionsT>(value); }
    template<typename DataExtraDimensionsT = Aws::Vector<Aws::String>>
    UpdateStateTemplateRequest& WithDataExtraDimensions(DataExtraDimensionsT&& value) { SetDataExtraDimensions(std::forward<DataExtraDimensionsT>(value)); return *this;}
    template<typename DataExtraDimensionsT = Aws::String>
    UpdateStateTemplateRequest& AddDataExtraDimensions(DataExtraDimensionsT&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.emplace_back(std::forward<DataExtraDimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of vehicle attributes to associate with user properties of the
     * messages published on the state template's MQTT topic. (See <a
     * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/process-visualize-data.html#process-last-known-state-vehicle-data">
     * Processing last known state vehicle data using MQTT messaging</a>). For example,
     * if you add <code>Vehicle.Attributes.Make</code> and
     * <code>Vehicle.Attributes.Model</code> attributes, Amazon Web Services IoT
     * FleetWise will include these attributes as User Properties with the MQTT
     * message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetadataExtraDimensions() const { return m_metadataExtraDimensions; }
    inline bool MetadataExtraDimensionsHasBeenSet() const { return m_metadataExtraDimensionsHasBeenSet; }
    template<typename MetadataExtraDimensionsT = Aws::Vector<Aws::String>>
    void SetMetadataExtraDimensions(MetadataExtraDimensionsT&& value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions = std::forward<MetadataExtraDimensionsT>(value); }
    template<typename MetadataExtraDimensionsT = Aws::Vector<Aws::String>>
    UpdateStateTemplateRequest& WithMetadataExtraDimensions(MetadataExtraDimensionsT&& value) { SetMetadataExtraDimensions(std::forward<MetadataExtraDimensionsT>(value)); return *this;}
    template<typename MetadataExtraDimensionsT = Aws::String>
    UpdateStateTemplateRequest& AddMetadataExtraDimensions(MetadataExtraDimensionsT&& value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions.emplace_back(std::forward<MetadataExtraDimensionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_stateTemplatePropertiesToAdd;
    bool m_stateTemplatePropertiesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_stateTemplatePropertiesToRemove;
    bool m_stateTemplatePropertiesToRemoveHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataExtraDimensions;
    bool m_dataExtraDimensionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_metadataExtraDimensions;
    bool m_metadataExtraDimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
