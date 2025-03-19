/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iotfleetwise/model/VehicleAssociationBehavior.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/Tag.h>
#include <aws/iotfleetwise/model/StateTemplateAssociation.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about the vehicle to create.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CreateVehicleRequestItem">AWS
   * API Reference</a></p>
   */
  class CreateVehicleRequestItem
  {
  public:
    AWS_IOTFLEETWISE_API CreateVehicleRequestItem() = default;
    AWS_IOTFLEETWISE_API CreateVehicleRequestItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API CreateVehicleRequestItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the vehicle to create.</p>
     */
    inline const Aws::String& GetVehicleName() const { return m_vehicleName; }
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }
    template<typename VehicleNameT = Aws::String>
    void SetVehicleName(VehicleNameT&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::forward<VehicleNameT>(value); }
    template<typename VehicleNameT = Aws::String>
    CreateVehicleRequestItem& WithVehicleName(VehicleNameT&& value) { SetVehicleName(std::forward<VehicleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the vehicle model (model manifest) to create the vehicle from.</p>
     */
    inline const Aws::String& GetModelManifestArn() const { return m_modelManifestArn; }
    inline bool ModelManifestArnHasBeenSet() const { return m_modelManifestArnHasBeenSet; }
    template<typename ModelManifestArnT = Aws::String>
    void SetModelManifestArn(ModelManifestArnT&& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = std::forward<ModelManifestArnT>(value); }
    template<typename ModelManifestArnT = Aws::String>
    CreateVehicleRequestItem& WithModelManifestArn(ModelManifestArnT&& value) { SetModelManifestArn(std::forward<ModelManifestArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a decoder manifest associated with the
     * vehicle to create. </p>
     */
    inline const Aws::String& GetDecoderManifestArn() const { return m_decoderManifestArn; }
    inline bool DecoderManifestArnHasBeenSet() const { return m_decoderManifestArnHasBeenSet; }
    template<typename DecoderManifestArnT = Aws::String>
    void SetDecoderManifestArn(DecoderManifestArnT&& value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn = std::forward<DecoderManifestArnT>(value); }
    template<typename DecoderManifestArnT = Aws::String>
    CreateVehicleRequestItem& WithDecoderManifestArn(DecoderManifestArnT&& value) { SetDecoderManifestArn(std::forward<DecoderManifestArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Static information about a vehicle in a key-value pair. For example:
     * <code>"engine Type"</code> : <code>"v6"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    CreateVehicleRequestItem& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    CreateVehicleRequestItem& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An option to create a new Amazon Web Services IoT thing when creating a
     * vehicle, or to validate an existing thing as a vehicle.</p>
     */
    inline VehicleAssociationBehavior GetAssociationBehavior() const { return m_associationBehavior; }
    inline bool AssociationBehaviorHasBeenSet() const { return m_associationBehaviorHasBeenSet; }
    inline void SetAssociationBehavior(VehicleAssociationBehavior value) { m_associationBehaviorHasBeenSet = true; m_associationBehavior = value; }
    inline CreateVehicleRequestItem& WithAssociationBehavior(VehicleAssociationBehavior value) { SetAssociationBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata which can be used to manage the vehicle.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateVehicleRequestItem& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateVehicleRequestItem& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Associate state templates to track the state of the vehicle. State templates
     * determine which signal updates the vehicle sends to the cloud.</p>
     */
    inline const Aws::Vector<StateTemplateAssociation>& GetStateTemplates() const { return m_stateTemplates; }
    inline bool StateTemplatesHasBeenSet() const { return m_stateTemplatesHasBeenSet; }
    template<typename StateTemplatesT = Aws::Vector<StateTemplateAssociation>>
    void SetStateTemplates(StateTemplatesT&& value) { m_stateTemplatesHasBeenSet = true; m_stateTemplates = std::forward<StateTemplatesT>(value); }
    template<typename StateTemplatesT = Aws::Vector<StateTemplateAssociation>>
    CreateVehicleRequestItem& WithStateTemplates(StateTemplatesT&& value) { SetStateTemplates(std::forward<StateTemplatesT>(value)); return *this;}
    template<typename StateTemplatesT = StateTemplateAssociation>
    CreateVehicleRequestItem& AddStateTemplates(StateTemplatesT&& value) { m_stateTemplatesHasBeenSet = true; m_stateTemplates.emplace_back(std::forward<StateTemplatesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_vehicleName;
    bool m_vehicleNameHasBeenSet = false;

    Aws::String m_modelManifestArn;
    bool m_modelManifestArnHasBeenSet = false;

    Aws::String m_decoderManifestArn;
    bool m_decoderManifestArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    VehicleAssociationBehavior m_associationBehavior{VehicleAssociationBehavior::NOT_SET};
    bool m_associationBehaviorHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<StateTemplateAssociation> m_stateTemplates;
    bool m_stateTemplatesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
