/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about a created vehicle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CreateVehicleResponseItem">AWS
   * API Reference</a></p>
   */
  class CreateVehicleResponseItem
  {
  public:
    AWS_IOTFLEETWISE_API CreateVehicleResponseItem();
    AWS_IOTFLEETWISE_API CreateVehicleResponseItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API CreateVehicleResponseItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the vehicle to create.</p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }
    inline void SetVehicleName(const Aws::String& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = value; }
    inline void SetVehicleName(Aws::String&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::move(value); }
    inline void SetVehicleName(const char* value) { m_vehicleNameHasBeenSet = true; m_vehicleName.assign(value); }
    inline CreateVehicleResponseItem& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}
    inline CreateVehicleResponseItem& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}
    inline CreateVehicleResponseItem& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the created vehicle.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CreateVehicleResponseItem& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateVehicleResponseItem& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateVehicleResponseItem& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a created or validated Amazon Web Services IoT thing.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }
    inline void SetThingArn(const Aws::String& value) { m_thingArnHasBeenSet = true; m_thingArn = value; }
    inline void SetThingArn(Aws::String&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::move(value); }
    inline void SetThingArn(const char* value) { m_thingArnHasBeenSet = true; m_thingArn.assign(value); }
    inline CreateVehicleResponseItem& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}
    inline CreateVehicleResponseItem& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}
    inline CreateVehicleResponseItem& WithThingArn(const char* value) { SetThingArn(value); return *this;}
    ///@}
  private:

    Aws::String m_vehicleName;
    bool m_vehicleNameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
