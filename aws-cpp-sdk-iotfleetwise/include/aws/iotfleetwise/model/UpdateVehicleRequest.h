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


    /**
     * <p>The unique ID of the vehicle to update.</p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }

    /**
     * <p>The unique ID of the vehicle to update.</p>
     */
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }

    /**
     * <p>The unique ID of the vehicle to update.</p>
     */
    inline void SetVehicleName(const Aws::String& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = value; }

    /**
     * <p>The unique ID of the vehicle to update.</p>
     */
    inline void SetVehicleName(Aws::String&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::move(value); }

    /**
     * <p>The unique ID of the vehicle to update.</p>
     */
    inline void SetVehicleName(const char* value) { m_vehicleNameHasBeenSet = true; m_vehicleName.assign(value); }

    /**
     * <p>The unique ID of the vehicle to update.</p>
     */
    inline UpdateVehicleRequest& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}

    /**
     * <p>The unique ID of the vehicle to update.</p>
     */
    inline UpdateVehicleRequest& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the vehicle to update.</p>
     */
    inline UpdateVehicleRequest& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}


    /**
     * <p>The ARN of a vehicle model (model manifest) associated with the vehicle.</p>
     */
    inline const Aws::String& GetModelManifestArn() const{ return m_modelManifestArn; }

    /**
     * <p>The ARN of a vehicle model (model manifest) associated with the vehicle.</p>
     */
    inline bool ModelManifestArnHasBeenSet() const { return m_modelManifestArnHasBeenSet; }

    /**
     * <p>The ARN of a vehicle model (model manifest) associated with the vehicle.</p>
     */
    inline void SetModelManifestArn(const Aws::String& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = value; }

    /**
     * <p>The ARN of a vehicle model (model manifest) associated with the vehicle.</p>
     */
    inline void SetModelManifestArn(Aws::String&& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = std::move(value); }

    /**
     * <p>The ARN of a vehicle model (model manifest) associated with the vehicle.</p>
     */
    inline void SetModelManifestArn(const char* value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn.assign(value); }

    /**
     * <p>The ARN of a vehicle model (model manifest) associated with the vehicle.</p>
     */
    inline UpdateVehicleRequest& WithModelManifestArn(const Aws::String& value) { SetModelManifestArn(value); return *this;}

    /**
     * <p>The ARN of a vehicle model (model manifest) associated with the vehicle.</p>
     */
    inline UpdateVehicleRequest& WithModelManifestArn(Aws::String&& value) { SetModelManifestArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a vehicle model (model manifest) associated with the vehicle.</p>
     */
    inline UpdateVehicleRequest& WithModelManifestArn(const char* value) { SetModelManifestArn(value); return *this;}


    /**
     * <p>The ARN of the decoder manifest associated with this vehicle.</p>
     */
    inline const Aws::String& GetDecoderManifestArn() const{ return m_decoderManifestArn; }

    /**
     * <p>The ARN of the decoder manifest associated with this vehicle.</p>
     */
    inline bool DecoderManifestArnHasBeenSet() const { return m_decoderManifestArnHasBeenSet; }

    /**
     * <p>The ARN of the decoder manifest associated with this vehicle.</p>
     */
    inline void SetDecoderManifestArn(const Aws::String& value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn = value; }

    /**
     * <p>The ARN of the decoder manifest associated with this vehicle.</p>
     */
    inline void SetDecoderManifestArn(Aws::String&& value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn = std::move(value); }

    /**
     * <p>The ARN of the decoder manifest associated with this vehicle.</p>
     */
    inline void SetDecoderManifestArn(const char* value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn.assign(value); }

    /**
     * <p>The ARN of the decoder manifest associated with this vehicle.</p>
     */
    inline UpdateVehicleRequest& WithDecoderManifestArn(const Aws::String& value) { SetDecoderManifestArn(value); return *this;}

    /**
     * <p>The ARN of the decoder manifest associated with this vehicle.</p>
     */
    inline UpdateVehicleRequest& WithDecoderManifestArn(Aws::String&& value) { SetDecoderManifestArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the decoder manifest associated with this vehicle.</p>
     */
    inline UpdateVehicleRequest& WithDecoderManifestArn(const char* value) { SetDecoderManifestArn(value); return *this;}


    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline UpdateVehicleRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline UpdateVehicleRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline UpdateVehicleRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline UpdateVehicleRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline UpdateVehicleRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline UpdateVehicleRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline UpdateVehicleRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline UpdateVehicleRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline UpdateVehicleRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The method the specified attributes will update the existing attributes on
     * the vehicle. Use<code>Overwite</code> to replace the vehicle attributes with the
     * specified attributes. Or use <code>Merge</code> to combine all attributes.</p>
     * <p>This is required if attributes are present in the input.</p>
     */
    inline const UpdateMode& GetAttributeUpdateMode() const{ return m_attributeUpdateMode; }

    /**
     * <p>The method the specified attributes will update the existing attributes on
     * the vehicle. Use<code>Overwite</code> to replace the vehicle attributes with the
     * specified attributes. Or use <code>Merge</code> to combine all attributes.</p>
     * <p>This is required if attributes are present in the input.</p>
     */
    inline bool AttributeUpdateModeHasBeenSet() const { return m_attributeUpdateModeHasBeenSet; }

    /**
     * <p>The method the specified attributes will update the existing attributes on
     * the vehicle. Use<code>Overwite</code> to replace the vehicle attributes with the
     * specified attributes. Or use <code>Merge</code> to combine all attributes.</p>
     * <p>This is required if attributes are present in the input.</p>
     */
    inline void SetAttributeUpdateMode(const UpdateMode& value) { m_attributeUpdateModeHasBeenSet = true; m_attributeUpdateMode = value; }

    /**
     * <p>The method the specified attributes will update the existing attributes on
     * the vehicle. Use<code>Overwite</code> to replace the vehicle attributes with the
     * specified attributes. Or use <code>Merge</code> to combine all attributes.</p>
     * <p>This is required if attributes are present in the input.</p>
     */
    inline void SetAttributeUpdateMode(UpdateMode&& value) { m_attributeUpdateModeHasBeenSet = true; m_attributeUpdateMode = std::move(value); }

    /**
     * <p>The method the specified attributes will update the existing attributes on
     * the vehicle. Use<code>Overwite</code> to replace the vehicle attributes with the
     * specified attributes. Or use <code>Merge</code> to combine all attributes.</p>
     * <p>This is required if attributes are present in the input.</p>
     */
    inline UpdateVehicleRequest& WithAttributeUpdateMode(const UpdateMode& value) { SetAttributeUpdateMode(value); return *this;}

    /**
     * <p>The method the specified attributes will update the existing attributes on
     * the vehicle. Use<code>Overwite</code> to replace the vehicle attributes with the
     * specified attributes. Or use <code>Merge</code> to combine all attributes.</p>
     * <p>This is required if attributes are present in the input.</p>
     */
    inline UpdateVehicleRequest& WithAttributeUpdateMode(UpdateMode&& value) { SetAttributeUpdateMode(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
