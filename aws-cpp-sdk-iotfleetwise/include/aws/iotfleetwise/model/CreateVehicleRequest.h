﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iotfleetwise/model/VehicleAssociationBehavior.h>
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
  class AWS_IOTFLEETWISE_API CreateVehicleRequest : public IoTFleetWiseRequest
  {
  public:
    CreateVehicleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVehicle"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The unique ID of the vehicle to create. </p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }

    /**
     * <p> The unique ID of the vehicle to create. </p>
     */
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }

    /**
     * <p> The unique ID of the vehicle to create. </p>
     */
    inline void SetVehicleName(const Aws::String& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = value; }

    /**
     * <p> The unique ID of the vehicle to create. </p>
     */
    inline void SetVehicleName(Aws::String&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::move(value); }

    /**
     * <p> The unique ID of the vehicle to create. </p>
     */
    inline void SetVehicleName(const char* value) { m_vehicleNameHasBeenSet = true; m_vehicleName.assign(value); }

    /**
     * <p> The unique ID of the vehicle to create. </p>
     */
    inline CreateVehicleRequest& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}

    /**
     * <p> The unique ID of the vehicle to create. </p>
     */
    inline CreateVehicleRequest& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}

    /**
     * <p> The unique ID of the vehicle to create. </p>
     */
    inline CreateVehicleRequest& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}


    /**
     * <p> The Amazon Resource Name ARN of a vehicle model. </p>
     */
    inline const Aws::String& GetModelManifestArn() const{ return m_modelManifestArn; }

    /**
     * <p> The Amazon Resource Name ARN of a vehicle model. </p>
     */
    inline bool ModelManifestArnHasBeenSet() const { return m_modelManifestArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name ARN of a vehicle model. </p>
     */
    inline void SetModelManifestArn(const Aws::String& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = value; }

    /**
     * <p> The Amazon Resource Name ARN of a vehicle model. </p>
     */
    inline void SetModelManifestArn(Aws::String&& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name ARN of a vehicle model. </p>
     */
    inline void SetModelManifestArn(const char* value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn.assign(value); }

    /**
     * <p> The Amazon Resource Name ARN of a vehicle model. </p>
     */
    inline CreateVehicleRequest& WithModelManifestArn(const Aws::String& value) { SetModelManifestArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name ARN of a vehicle model. </p>
     */
    inline CreateVehicleRequest& WithModelManifestArn(Aws::String&& value) { SetModelManifestArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name ARN of a vehicle model. </p>
     */
    inline CreateVehicleRequest& WithModelManifestArn(const char* value) { SetModelManifestArn(value); return *this;}


    /**
     * <p> The ARN of a decoder manifest. </p>
     */
    inline const Aws::String& GetDecoderManifestArn() const{ return m_decoderManifestArn; }

    /**
     * <p> The ARN of a decoder manifest. </p>
     */
    inline bool DecoderManifestArnHasBeenSet() const { return m_decoderManifestArnHasBeenSet; }

    /**
     * <p> The ARN of a decoder manifest. </p>
     */
    inline void SetDecoderManifestArn(const Aws::String& value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn = value; }

    /**
     * <p> The ARN of a decoder manifest. </p>
     */
    inline void SetDecoderManifestArn(Aws::String&& value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn = std::move(value); }

    /**
     * <p> The ARN of a decoder manifest. </p>
     */
    inline void SetDecoderManifestArn(const char* value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn.assign(value); }

    /**
     * <p> The ARN of a decoder manifest. </p>
     */
    inline CreateVehicleRequest& WithDecoderManifestArn(const Aws::String& value) { SetDecoderManifestArn(value); return *this;}

    /**
     * <p> The ARN of a decoder manifest. </p>
     */
    inline CreateVehicleRequest& WithDecoderManifestArn(Aws::String&& value) { SetDecoderManifestArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of a decoder manifest. </p>
     */
    inline CreateVehicleRequest& WithDecoderManifestArn(const char* value) { SetDecoderManifestArn(value); return *this;}


    /**
     * <p>Static information about a vehicle in a key-value pair. For example:
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline CreateVehicleRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline CreateVehicleRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline CreateVehicleRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline CreateVehicleRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline CreateVehicleRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline CreateVehicleRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline CreateVehicleRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline CreateVehicleRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline CreateVehicleRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p> An option to create a new Amazon Web Services IoT thing when creating a
     * vehicle, or to validate an existing Amazon Web Services IoT thing as a vehicle.
     * </p> <p>Default: <code/> </p>
     */
    inline const VehicleAssociationBehavior& GetAssociationBehavior() const{ return m_associationBehavior; }

    /**
     * <p> An option to create a new Amazon Web Services IoT thing when creating a
     * vehicle, or to validate an existing Amazon Web Services IoT thing as a vehicle.
     * </p> <p>Default: <code/> </p>
     */
    inline bool AssociationBehaviorHasBeenSet() const { return m_associationBehaviorHasBeenSet; }

    /**
     * <p> An option to create a new Amazon Web Services IoT thing when creating a
     * vehicle, or to validate an existing Amazon Web Services IoT thing as a vehicle.
     * </p> <p>Default: <code/> </p>
     */
    inline void SetAssociationBehavior(const VehicleAssociationBehavior& value) { m_associationBehaviorHasBeenSet = true; m_associationBehavior = value; }

    /**
     * <p> An option to create a new Amazon Web Services IoT thing when creating a
     * vehicle, or to validate an existing Amazon Web Services IoT thing as a vehicle.
     * </p> <p>Default: <code/> </p>
     */
    inline void SetAssociationBehavior(VehicleAssociationBehavior&& value) { m_associationBehaviorHasBeenSet = true; m_associationBehavior = std::move(value); }

    /**
     * <p> An option to create a new Amazon Web Services IoT thing when creating a
     * vehicle, or to validate an existing Amazon Web Services IoT thing as a vehicle.
     * </p> <p>Default: <code/> </p>
     */
    inline CreateVehicleRequest& WithAssociationBehavior(const VehicleAssociationBehavior& value) { SetAssociationBehavior(value); return *this;}

    /**
     * <p> An option to create a new Amazon Web Services IoT thing when creating a
     * vehicle, or to validate an existing Amazon Web Services IoT thing as a vehicle.
     * </p> <p>Default: <code/> </p>
     */
    inline CreateVehicleRequest& WithAssociationBehavior(VehicleAssociationBehavior&& value) { SetAssociationBehavior(std::move(value)); return *this;}


    /**
     * <p>Metadata that can be used to manage the vehicle.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata that can be used to manage the vehicle.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata that can be used to manage the vehicle.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata that can be used to manage the vehicle.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata that can be used to manage the vehicle.</p>
     */
    inline CreateVehicleRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata that can be used to manage the vehicle.</p>
     */
    inline CreateVehicleRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata that can be used to manage the vehicle.</p>
     */
    inline CreateVehicleRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata that can be used to manage the vehicle.</p>
     */
    inline CreateVehicleRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_vehicleName;
    bool m_vehicleNameHasBeenSet = false;

    Aws::String m_modelManifestArn;
    bool m_modelManifestArnHasBeenSet = false;

    Aws::String m_decoderManifestArn;
    bool m_decoderManifestArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    VehicleAssociationBehavior m_associationBehavior;
    bool m_associationBehaviorHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
