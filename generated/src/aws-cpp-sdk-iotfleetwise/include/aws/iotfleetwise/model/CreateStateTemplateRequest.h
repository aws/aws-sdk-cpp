/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class CreateStateTemplateRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API CreateStateTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStateTemplate"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the state template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateStateTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateStateTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateStateTemplateRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline CreateStateTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateStateTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateStateTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the signal catalog associated with the state template.</p>
     */
    inline const Aws::String& GetSignalCatalogArn() const{ return m_signalCatalogArn; }
    inline bool SignalCatalogArnHasBeenSet() const { return m_signalCatalogArnHasBeenSet; }
    inline void SetSignalCatalogArn(const Aws::String& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = value; }
    inline void SetSignalCatalogArn(Aws::String&& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = std::move(value); }
    inline void SetSignalCatalogArn(const char* value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn.assign(value); }
    inline CreateStateTemplateRequest& WithSignalCatalogArn(const Aws::String& value) { SetSignalCatalogArn(value); return *this;}
    inline CreateStateTemplateRequest& WithSignalCatalogArn(Aws::String&& value) { SetSignalCatalogArn(std::move(value)); return *this;}
    inline CreateStateTemplateRequest& WithSignalCatalogArn(const char* value) { SetSignalCatalogArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of signals from which data is collected. The state template properties
     * contain the fully qualified names of the signals.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStateTemplateProperties() const{ return m_stateTemplateProperties; }
    inline bool StateTemplatePropertiesHasBeenSet() const { return m_stateTemplatePropertiesHasBeenSet; }
    inline void SetStateTemplateProperties(const Aws::Vector<Aws::String>& value) { m_stateTemplatePropertiesHasBeenSet = true; m_stateTemplateProperties = value; }
    inline void SetStateTemplateProperties(Aws::Vector<Aws::String>&& value) { m_stateTemplatePropertiesHasBeenSet = true; m_stateTemplateProperties = std::move(value); }
    inline CreateStateTemplateRequest& WithStateTemplateProperties(const Aws::Vector<Aws::String>& value) { SetStateTemplateProperties(value); return *this;}
    inline CreateStateTemplateRequest& WithStateTemplateProperties(Aws::Vector<Aws::String>&& value) { SetStateTemplateProperties(std::move(value)); return *this;}
    inline CreateStateTemplateRequest& AddStateTemplateProperties(const Aws::String& value) { m_stateTemplatePropertiesHasBeenSet = true; m_stateTemplateProperties.push_back(value); return *this; }
    inline CreateStateTemplateRequest& AddStateTemplateProperties(Aws::String&& value) { m_stateTemplatePropertiesHasBeenSet = true; m_stateTemplateProperties.push_back(std::move(value)); return *this; }
    inline CreateStateTemplateRequest& AddStateTemplateProperties(const char* value) { m_stateTemplatePropertiesHasBeenSet = true; m_stateTemplateProperties.push_back(value); return *this; }
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
     * <code>extraDimensions</code> field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataExtraDimensions() const{ return m_dataExtraDimensions; }
    inline bool DataExtraDimensionsHasBeenSet() const { return m_dataExtraDimensionsHasBeenSet; }
    inline void SetDataExtraDimensions(const Aws::Vector<Aws::String>& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions = value; }
    inline void SetDataExtraDimensions(Aws::Vector<Aws::String>&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions = std::move(value); }
    inline CreateStateTemplateRequest& WithDataExtraDimensions(const Aws::Vector<Aws::String>& value) { SetDataExtraDimensions(value); return *this;}
    inline CreateStateTemplateRequest& WithDataExtraDimensions(Aws::Vector<Aws::String>&& value) { SetDataExtraDimensions(std::move(value)); return *this;}
    inline CreateStateTemplateRequest& AddDataExtraDimensions(const Aws::String& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.push_back(value); return *this; }
    inline CreateStateTemplateRequest& AddDataExtraDimensions(Aws::String&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.push_back(std::move(value)); return *this; }
    inline CreateStateTemplateRequest& AddDataExtraDimensions(const char* value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.push_back(value); return *this; }
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
     * message.</p> <p>Default: An empty array</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetadataExtraDimensions() const{ return m_metadataExtraDimensions; }
    inline bool MetadataExtraDimensionsHasBeenSet() const { return m_metadataExtraDimensionsHasBeenSet; }
    inline void SetMetadataExtraDimensions(const Aws::Vector<Aws::String>& value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions = value; }
    inline void SetMetadataExtraDimensions(Aws::Vector<Aws::String>&& value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions = std::move(value); }
    inline CreateStateTemplateRequest& WithMetadataExtraDimensions(const Aws::Vector<Aws::String>& value) { SetMetadataExtraDimensions(value); return *this;}
    inline CreateStateTemplateRequest& WithMetadataExtraDimensions(Aws::Vector<Aws::String>&& value) { SetMetadataExtraDimensions(std::move(value)); return *this;}
    inline CreateStateTemplateRequest& AddMetadataExtraDimensions(const Aws::String& value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions.push_back(value); return *this; }
    inline CreateStateTemplateRequest& AddMetadataExtraDimensions(Aws::String&& value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions.push_back(std::move(value)); return *this; }
    inline CreateStateTemplateRequest& AddMetadataExtraDimensions(const char* value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to manage the state template.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateStateTemplateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateStateTemplateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateStateTemplateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateStateTemplateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_signalCatalogArn;
    bool m_signalCatalogArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_stateTemplateProperties;
    bool m_stateTemplatePropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataExtraDimensions;
    bool m_dataExtraDimensionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_metadataExtraDimensions;
    bool m_metadataExtraDimensionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
