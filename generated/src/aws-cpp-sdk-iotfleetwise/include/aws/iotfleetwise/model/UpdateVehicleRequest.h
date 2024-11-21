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
    AWS_IOTFLEETWISE_API UpdateVehicleRequest();

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
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }
    inline void SetVehicleName(const Aws::String& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = value; }
    inline void SetVehicleName(Aws::String&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::move(value); }
    inline void SetVehicleName(const char* value) { m_vehicleNameHasBeenSet = true; m_vehicleName.assign(value); }
    inline UpdateVehicleRequest& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}
    inline UpdateVehicleRequest& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}
    inline UpdateVehicleRequest& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a vehicle model (model manifest) associated with the vehicle.</p>
     */
    inline const Aws::String& GetModelManifestArn() const{ return m_modelManifestArn; }
    inline bool ModelManifestArnHasBeenSet() const { return m_modelManifestArnHasBeenSet; }
    inline void SetModelManifestArn(const Aws::String& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = value; }
    inline void SetModelManifestArn(Aws::String&& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = std::move(value); }
    inline void SetModelManifestArn(const char* value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn.assign(value); }
    inline UpdateVehicleRequest& WithModelManifestArn(const Aws::String& value) { SetModelManifestArn(value); return *this;}
    inline UpdateVehicleRequest& WithModelManifestArn(Aws::String&& value) { SetModelManifestArn(std::move(value)); return *this;}
    inline UpdateVehicleRequest& WithModelManifestArn(const char* value) { SetModelManifestArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the decoder manifest associated with this vehicle.</p>
     */
    inline const Aws::String& GetDecoderManifestArn() const{ return m_decoderManifestArn; }
    inline bool DecoderManifestArnHasBeenSet() const { return m_decoderManifestArnHasBeenSet; }
    inline void SetDecoderManifestArn(const Aws::String& value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn = value; }
    inline void SetDecoderManifestArn(Aws::String&& value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn = std::move(value); }
    inline void SetDecoderManifestArn(const char* value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn.assign(value); }
    inline UpdateVehicleRequest& WithDecoderManifestArn(const Aws::String& value) { SetDecoderManifestArn(value); return *this;}
    inline UpdateVehicleRequest& WithDecoderManifestArn(Aws::String&& value) { SetDecoderManifestArn(std::move(value)); return *this;}
    inline UpdateVehicleRequest& WithDecoderManifestArn(const char* value) { SetDecoderManifestArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline UpdateVehicleRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline UpdateVehicleRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline UpdateVehicleRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline UpdateVehicleRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline UpdateVehicleRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline UpdateVehicleRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateVehicleRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline UpdateVehicleRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline UpdateVehicleRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The method the specified attributes will update the existing attributes on
     * the vehicle. Use<code>Overwite</code> to replace the vehicle attributes with the
     * specified attributes. Or use <code>Merge</code> to combine all attributes.</p>
     * <p>This is required if attributes are present in the input.</p>
     */
    inline const UpdateMode& GetAttributeUpdateMode() const{ return m_attributeUpdateMode; }
    inline bool AttributeUpdateModeHasBeenSet() const { return m_attributeUpdateModeHasBeenSet; }
    inline void SetAttributeUpdateMode(const UpdateMode& value) { m_attributeUpdateModeHasBeenSet = true; m_attributeUpdateMode = value; }
    inline void SetAttributeUpdateMode(UpdateMode&& value) { m_attributeUpdateModeHasBeenSet = true; m_attributeUpdateMode = std::move(value); }
    inline UpdateVehicleRequest& WithAttributeUpdateMode(const UpdateMode& value) { SetAttributeUpdateMode(value); return *this;}
    inline UpdateVehicleRequest& WithAttributeUpdateMode(UpdateMode&& value) { SetAttributeUpdateMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associate state templates with the vehicle.</p>
     */
    inline const Aws::Vector<StateTemplateAssociation>& GetStateTemplatesToAdd() const{ return m_stateTemplatesToAdd; }
    inline bool StateTemplatesToAddHasBeenSet() const { return m_stateTemplatesToAddHasBeenSet; }
    inline void SetStateTemplatesToAdd(const Aws::Vector<StateTemplateAssociation>& value) { m_stateTemplatesToAddHasBeenSet = true; m_stateTemplatesToAdd = value; }
    inline void SetStateTemplatesToAdd(Aws::Vector<StateTemplateAssociation>&& value) { m_stateTemplatesToAddHasBeenSet = true; m_stateTemplatesToAdd = std::move(value); }
    inline UpdateVehicleRequest& WithStateTemplatesToAdd(const Aws::Vector<StateTemplateAssociation>& value) { SetStateTemplatesToAdd(value); return *this;}
    inline UpdateVehicleRequest& WithStateTemplatesToAdd(Aws::Vector<StateTemplateAssociation>&& value) { SetStateTemplatesToAdd(std::move(value)); return *this;}
    inline UpdateVehicleRequest& AddStateTemplatesToAdd(const StateTemplateAssociation& value) { m_stateTemplatesToAddHasBeenSet = true; m_stateTemplatesToAdd.push_back(value); return *this; }
    inline UpdateVehicleRequest& AddStateTemplatesToAdd(StateTemplateAssociation&& value) { m_stateTemplatesToAddHasBeenSet = true; m_stateTemplatesToAdd.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Remove state templates from the vehicle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStateTemplatesToRemove() const{ return m_stateTemplatesToRemove; }
    inline bool StateTemplatesToRemoveHasBeenSet() const { return m_stateTemplatesToRemoveHasBeenSet; }
    inline void SetStateTemplatesToRemove(const Aws::Vector<Aws::String>& value) { m_stateTemplatesToRemoveHasBeenSet = true; m_stateTemplatesToRemove = value; }
    inline void SetStateTemplatesToRemove(Aws::Vector<Aws::String>&& value) { m_stateTemplatesToRemoveHasBeenSet = true; m_stateTemplatesToRemove = std::move(value); }
    inline UpdateVehicleRequest& WithStateTemplatesToRemove(const Aws::Vector<Aws::String>& value) { SetStateTemplatesToRemove(value); return *this;}
    inline UpdateVehicleRequest& WithStateTemplatesToRemove(Aws::Vector<Aws::String>&& value) { SetStateTemplatesToRemove(std::move(value)); return *this;}
    inline UpdateVehicleRequest& AddStateTemplatesToRemove(const Aws::String& value) { m_stateTemplatesToRemoveHasBeenSet = true; m_stateTemplatesToRemove.push_back(value); return *this; }
    inline UpdateVehicleRequest& AddStateTemplatesToRemove(Aws::String&& value) { m_stateTemplatesToRemoveHasBeenSet = true; m_stateTemplatesToRemove.push_back(std::move(value)); return *this; }
    inline UpdateVehicleRequest& AddStateTemplatesToRemove(const char* value) { m_stateTemplatesToRemoveHasBeenSet = true; m_stateTemplatesToRemove.push_back(value); return *this; }
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

    UpdateMode m_attributeUpdateMode;
    bool m_attributeUpdateModeHasBeenSet = false;

    Aws::Vector<StateTemplateAssociation> m_stateTemplatesToAdd;
    bool m_stateTemplatesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_stateTemplatesToRemove;
    bool m_stateTemplatesToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
