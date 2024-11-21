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
    AWS_IOTFLEETWISE_API UpdateStateTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStateTemplate"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique, service-generated identifier.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateStateTemplateRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateStateTemplateRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateStateTemplateRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the state template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateStateTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateStateTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateStateTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Add signals from which data is collected as part of the state template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStateTemplatePropertiesToAdd() const{ return m_stateTemplatePropertiesToAdd; }
    inline bool StateTemplatePropertiesToAddHasBeenSet() const { return m_stateTemplatePropertiesToAddHasBeenSet; }
    inline void SetStateTemplatePropertiesToAdd(const Aws::Vector<Aws::String>& value) { m_stateTemplatePropertiesToAddHasBeenSet = true; m_stateTemplatePropertiesToAdd = value; }
    inline void SetStateTemplatePropertiesToAdd(Aws::Vector<Aws::String>&& value) { m_stateTemplatePropertiesToAddHasBeenSet = true; m_stateTemplatePropertiesToAdd = std::move(value); }
    inline UpdateStateTemplateRequest& WithStateTemplatePropertiesToAdd(const Aws::Vector<Aws::String>& value) { SetStateTemplatePropertiesToAdd(value); return *this;}
    inline UpdateStateTemplateRequest& WithStateTemplatePropertiesToAdd(Aws::Vector<Aws::String>&& value) { SetStateTemplatePropertiesToAdd(std::move(value)); return *this;}
    inline UpdateStateTemplateRequest& AddStateTemplatePropertiesToAdd(const Aws::String& value) { m_stateTemplatePropertiesToAddHasBeenSet = true; m_stateTemplatePropertiesToAdd.push_back(value); return *this; }
    inline UpdateStateTemplateRequest& AddStateTemplatePropertiesToAdd(Aws::String&& value) { m_stateTemplatePropertiesToAddHasBeenSet = true; m_stateTemplatePropertiesToAdd.push_back(std::move(value)); return *this; }
    inline UpdateStateTemplateRequest& AddStateTemplatePropertiesToAdd(const char* value) { m_stateTemplatePropertiesToAddHasBeenSet = true; m_stateTemplatePropertiesToAdd.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Remove signals from which data is collected as part of the state
     * template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStateTemplatePropertiesToRemove() const{ return m_stateTemplatePropertiesToRemove; }
    inline bool StateTemplatePropertiesToRemoveHasBeenSet() const { return m_stateTemplatePropertiesToRemoveHasBeenSet; }
    inline void SetStateTemplatePropertiesToRemove(const Aws::Vector<Aws::String>& value) { m_stateTemplatePropertiesToRemoveHasBeenSet = true; m_stateTemplatePropertiesToRemove = value; }
    inline void SetStateTemplatePropertiesToRemove(Aws::Vector<Aws::String>&& value) { m_stateTemplatePropertiesToRemoveHasBeenSet = true; m_stateTemplatePropertiesToRemove = std::move(value); }
    inline UpdateStateTemplateRequest& WithStateTemplatePropertiesToRemove(const Aws::Vector<Aws::String>& value) { SetStateTemplatePropertiesToRemove(value); return *this;}
    inline UpdateStateTemplateRequest& WithStateTemplatePropertiesToRemove(Aws::Vector<Aws::String>&& value) { SetStateTemplatePropertiesToRemove(std::move(value)); return *this;}
    inline UpdateStateTemplateRequest& AddStateTemplatePropertiesToRemove(const Aws::String& value) { m_stateTemplatePropertiesToRemoveHasBeenSet = true; m_stateTemplatePropertiesToRemove.push_back(value); return *this; }
    inline UpdateStateTemplateRequest& AddStateTemplatePropertiesToRemove(Aws::String&& value) { m_stateTemplatePropertiesToRemoveHasBeenSet = true; m_stateTemplatePropertiesToRemove.push_back(std::move(value)); return *this; }
    inline UpdateStateTemplateRequest& AddStateTemplatePropertiesToRemove(const char* value) { m_stateTemplatePropertiesToRemoveHasBeenSet = true; m_stateTemplatePropertiesToRemove.push_back(value); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetDataExtraDimensions() const{ return m_dataExtraDimensions; }
    inline bool DataExtraDimensionsHasBeenSet() const { return m_dataExtraDimensionsHasBeenSet; }
    inline void SetDataExtraDimensions(const Aws::Vector<Aws::String>& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions = value; }
    inline void SetDataExtraDimensions(Aws::Vector<Aws::String>&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions = std::move(value); }
    inline UpdateStateTemplateRequest& WithDataExtraDimensions(const Aws::Vector<Aws::String>& value) { SetDataExtraDimensions(value); return *this;}
    inline UpdateStateTemplateRequest& WithDataExtraDimensions(Aws::Vector<Aws::String>&& value) { SetDataExtraDimensions(std::move(value)); return *this;}
    inline UpdateStateTemplateRequest& AddDataExtraDimensions(const Aws::String& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.push_back(value); return *this; }
    inline UpdateStateTemplateRequest& AddDataExtraDimensions(Aws::String&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.push_back(std::move(value)); return *this; }
    inline UpdateStateTemplateRequest& AddDataExtraDimensions(const char* value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.push_back(value); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetMetadataExtraDimensions() const{ return m_metadataExtraDimensions; }
    inline bool MetadataExtraDimensionsHasBeenSet() const { return m_metadataExtraDimensionsHasBeenSet; }
    inline void SetMetadataExtraDimensions(const Aws::Vector<Aws::String>& value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions = value; }
    inline void SetMetadataExtraDimensions(Aws::Vector<Aws::String>&& value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions = std::move(value); }
    inline UpdateStateTemplateRequest& WithMetadataExtraDimensions(const Aws::Vector<Aws::String>& value) { SetMetadataExtraDimensions(value); return *this;}
    inline UpdateStateTemplateRequest& WithMetadataExtraDimensions(Aws::Vector<Aws::String>&& value) { SetMetadataExtraDimensions(std::move(value)); return *this;}
    inline UpdateStateTemplateRequest& AddMetadataExtraDimensions(const Aws::String& value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions.push_back(value); return *this; }
    inline UpdateStateTemplateRequest& AddMetadataExtraDimensions(Aws::String&& value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions.push_back(std::move(value)); return *this; }
    inline UpdateStateTemplateRequest& AddMetadataExtraDimensions(const char* value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions.push_back(value); return *this; }
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
