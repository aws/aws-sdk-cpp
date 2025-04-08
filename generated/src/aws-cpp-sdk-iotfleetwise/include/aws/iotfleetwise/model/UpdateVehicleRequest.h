/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iotfleetwise/model/UpdateMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/StateTemplateAssociation.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class UpdateVehicleRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API UpdateVehicleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVehicle"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique ID of the vehicle to update.</p>
     */
    inline const Aws::String& GetVehicleName() const { return m_vehicleName; }
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }
    template<typename VehicleNameT = Aws::String>
    void SetVehicleName(VehicleNameT&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::forward<VehicleNameT>(value); }
    template<typename VehicleNameT = Aws::String>
    UpdateVehicleRequest& WithVehicleName(VehicleNameT&& value) { SetVehicleName(std::forward<VehicleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a vehicle model (model manifest) associated with the vehicle.</p>
     */
    inline const Aws::String& GetModelManifestArn() const { return m_modelManifestArn; }
    inline bool ModelManifestArnHasBeenSet() const { return m_modelManifestArnHasBeenSet; }
    template<typename ModelManifestArnT = Aws::String>
    void SetModelManifestArn(ModelManifestArnT&& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = std::forward<ModelManifestArnT>(value); }
    template<typename ModelManifestArnT = Aws::String>
    UpdateVehicleRequest& WithModelManifestArn(ModelManifestArnT&& value) { SetModelManifestArn(std::forward<ModelManifestArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the decoder manifest associated with this vehicle.</p>
     */
    inline const Aws::String& GetDecoderManifestArn() const { return m_decoderManifestArn; }
    inline bool DecoderManifestArnHasBeenSet() const { return m_decoderManifestArnHasBeenSet; }
    template<typename DecoderManifestArnT = Aws::String>
    void SetDecoderManifestArn(DecoderManifestArnT&& value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn = std::forward<DecoderManifestArnT>(value); }
    template<typename DecoderManifestArnT = Aws::String>
    UpdateVehicleRequest& WithDecoderManifestArn(DecoderManifestArnT&& value) { SetDecoderManifestArn(std::forward<DecoderManifestArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    UpdateVehicleRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    UpdateVehicleRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The method the specified attributes will update the existing attributes on
     * the vehicle. Use<code>Overwite</code> to replace the vehicle attributes with the
     * specified attributes. Or use <code>Merge</code> to combine all attributes.</p>
     * <p>This is required if attributes are present in the input.</p>
     */
    inline UpdateMode GetAttributeUpdateMode() const { return m_attributeUpdateMode; }
    inline bool AttributeUpdateModeHasBeenSet() const { return m_attributeUpdateModeHasBeenSet; }
    inline void SetAttributeUpdateMode(UpdateMode value) { m_attributeUpdateModeHasBeenSet = true; m_attributeUpdateMode = value; }
    inline UpdateVehicleRequest& WithAttributeUpdateMode(UpdateMode value) { SetAttributeUpdateMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associate state templates with the vehicle.</p>
     */
    inline const Aws::Vector<StateTemplateAssociation>& GetStateTemplatesToAdd() const { return m_stateTemplatesToAdd; }
    inline bool StateTemplatesToAddHasBeenSet() const { return m_stateTemplatesToAddHasBeenSet; }
    template<typename StateTemplatesToAddT = Aws::Vector<StateTemplateAssociation>>
    void SetStateTemplatesToAdd(StateTemplatesToAddT&& value) { m_stateTemplatesToAddHasBeenSet = true; m_stateTemplatesToAdd = std::forward<StateTemplatesToAddT>(value); }
    template<typename StateTemplatesToAddT = Aws::Vector<StateTemplateAssociation>>
    UpdateVehicleRequest& WithStateTemplatesToAdd(StateTemplatesToAddT&& value) { SetStateTemplatesToAdd(std::forward<StateTemplatesToAddT>(value)); return *this;}
    template<typename StateTemplatesToAddT = StateTemplateAssociation>
    UpdateVehicleRequest& AddStateTemplatesToAdd(StateTemplatesToAddT&& value) { m_stateTemplatesToAddHasBeenSet = true; m_stateTemplatesToAdd.emplace_back(std::forward<StateTemplatesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Remove state templates from the vehicle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStateTemplatesToRemove() const { return m_stateTemplatesToRemove; }
    inline bool StateTemplatesToRemoveHasBeenSet() const { return m_stateTemplatesToRemoveHasBeenSet; }
    template<typename StateTemplatesToRemoveT = Aws::Vector<Aws::String>>
    void SetStateTemplatesToRemove(StateTemplatesToRemoveT&& value) { m_stateTemplatesToRemoveHasBeenSet = true; m_stateTemplatesToRemove = std::forward<StateTemplatesToRemoveT>(value); }
    template<typename StateTemplatesToRemoveT = Aws::Vector<Aws::String>>
    UpdateVehicleRequest& WithStateTemplatesToRemove(StateTemplatesToRemoveT&& value) { SetStateTemplatesToRemove(std::forward<StateTemplatesToRemoveT>(value)); return *this;}
    template<typename StateTemplatesToRemoveT = Aws::String>
    UpdateVehicleRequest& AddStateTemplatesToRemove(StateTemplatesToRemoveT&& value) { m_stateTemplatesToRemoveHasBeenSet = true; m_stateTemplatesToRemove.emplace_back(std::forward<StateTemplatesToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Change the <code>stateTemplateUpdateStrategy</code> of state templates
     * already associated with the vehicle.</p>
     */
    inline const Aws::Vector<StateTemplateAssociation>& GetStateTemplatesToUpdate() const { return m_stateTemplatesToUpdate; }
    inline bool StateTemplatesToUpdateHasBeenSet() const { return m_stateTemplatesToUpdateHasBeenSet; }
    template<typename StateTemplatesToUpdateT = Aws::Vector<StateTemplateAssociation>>
    void SetStateTemplatesToUpdate(StateTemplatesToUpdateT&& value) { m_stateTemplatesToUpdateHasBeenSet = true; m_stateTemplatesToUpdate = std::forward<StateTemplatesToUpdateT>(value); }
    template<typename StateTemplatesToUpdateT = Aws::Vector<StateTemplateAssociation>>
    UpdateVehicleRequest& WithStateTemplatesToUpdate(StateTemplatesToUpdateT&& value) { SetStateTemplatesToUpdate(std::forward<StateTemplatesToUpdateT>(value)); return *this;}
    template<typename StateTemplatesToUpdateT = StateTemplateAssociation>
    UpdateVehicleRequest& AddStateTemplatesToUpdate(StateTemplatesToUpdateT&& value) { m_stateTemplatesToUpdateHasBeenSet = true; m_stateTemplatesToUpdate.emplace_back(std::forward<StateTemplatesToUpdateT>(value)); return *this; }
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

    UpdateMode m_attributeUpdateMode{UpdateMode::NOT_SET};
    bool m_attributeUpdateModeHasBeenSet = false;

    Aws::Vector<StateTemplateAssociation> m_stateTemplatesToAdd;
    bool m_stateTemplatesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_stateTemplatesToRemove;
    bool m_stateTemplatesToRemoveHasBeenSet = false;

    Aws::Vector<StateTemplateAssociation> m_stateTemplatesToUpdate;
    bool m_stateTemplatesToUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
