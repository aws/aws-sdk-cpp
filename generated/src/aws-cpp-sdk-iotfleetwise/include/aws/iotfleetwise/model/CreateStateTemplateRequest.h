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
    AWS_IOTFLEETWISE_API CreateStateTemplateRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateStateTemplateRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CreateStateTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the signal catalog associated with the state template.</p>
     */
    inline const Aws::String& GetSignalCatalogArn() const { return m_signalCatalogArn; }
    inline bool SignalCatalogArnHasBeenSet() const { return m_signalCatalogArnHasBeenSet; }
    template<typename SignalCatalogArnT = Aws::String>
    void SetSignalCatalogArn(SignalCatalogArnT&& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = std::forward<SignalCatalogArnT>(value); }
    template<typename SignalCatalogArnT = Aws::String>
    CreateStateTemplateRequest& WithSignalCatalogArn(SignalCatalogArnT&& value) { SetSignalCatalogArn(std::forward<SignalCatalogArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of signals from which data is collected. The state template properties
     * contain the fully qualified names of the signals.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStateTemplateProperties() const { return m_stateTemplateProperties; }
    inline bool StateTemplatePropertiesHasBeenSet() const { return m_stateTemplatePropertiesHasBeenSet; }
    template<typename StateTemplatePropertiesT = Aws::Vector<Aws::String>>
    void SetStateTemplateProperties(StateTemplatePropertiesT&& value) { m_stateTemplatePropertiesHasBeenSet = true; m_stateTemplateProperties = std::forward<StateTemplatePropertiesT>(value); }
    template<typename StateTemplatePropertiesT = Aws::Vector<Aws::String>>
    CreateStateTemplateRequest& WithStateTemplateProperties(StateTemplatePropertiesT&& value) { SetStateTemplateProperties(std::forward<StateTemplatePropertiesT>(value)); return *this;}
    template<typename StateTemplatePropertiesT = Aws::String>
    CreateStateTemplateRequest& AddStateTemplateProperties(StateTemplatePropertiesT&& value) { m_stateTemplatePropertiesHasBeenSet = true; m_stateTemplateProperties.emplace_back(std::forward<StateTemplatePropertiesT>(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetDataExtraDimensions() const { return m_dataExtraDimensions; }
    inline bool DataExtraDimensionsHasBeenSet() const { return m_dataExtraDimensionsHasBeenSet; }
    template<typename DataExtraDimensionsT = Aws::Vector<Aws::String>>
    void SetDataExtraDimensions(DataExtraDimensionsT&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions = std::forward<DataExtraDimensionsT>(value); }
    template<typename DataExtraDimensionsT = Aws::Vector<Aws::String>>
    CreateStateTemplateRequest& WithDataExtraDimensions(DataExtraDimensionsT&& value) { SetDataExtraDimensions(std::forward<DataExtraDimensionsT>(value)); return *this;}
    template<typename DataExtraDimensionsT = Aws::String>
    CreateStateTemplateRequest& AddDataExtraDimensions(DataExtraDimensionsT&& value) { m_dataExtraDimensionsHasBeenSet = true; m_dataExtraDimensions.emplace_back(std::forward<DataExtraDimensionsT>(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetMetadataExtraDimensions() const { return m_metadataExtraDimensions; }
    inline bool MetadataExtraDimensionsHasBeenSet() const { return m_metadataExtraDimensionsHasBeenSet; }
    template<typename MetadataExtraDimensionsT = Aws::Vector<Aws::String>>
    void SetMetadataExtraDimensions(MetadataExtraDimensionsT&& value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions = std::forward<MetadataExtraDimensionsT>(value); }
    template<typename MetadataExtraDimensionsT = Aws::Vector<Aws::String>>
    CreateStateTemplateRequest& WithMetadataExtraDimensions(MetadataExtraDimensionsT&& value) { SetMetadataExtraDimensions(std::forward<MetadataExtraDimensionsT>(value)); return *this;}
    template<typename MetadataExtraDimensionsT = Aws::String>
    CreateStateTemplateRequest& AddMetadataExtraDimensions(MetadataExtraDimensionsT&& value) { m_metadataExtraDimensionsHasBeenSet = true; m_metadataExtraDimensions.emplace_back(std::forward<MetadataExtraDimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to manage the state template.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateStateTemplateRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateStateTemplateRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
