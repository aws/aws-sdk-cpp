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
   * <p>Information about the updated vehicle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UpdateVehicleResponseItem">AWS
   * API Reference</a></p>
   */
  class UpdateVehicleResponseItem
  {
  public:
    AWS_IOTFLEETWISE_API UpdateVehicleResponseItem();
    AWS_IOTFLEETWISE_API UpdateVehicleResponseItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API UpdateVehicleResponseItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the updated vehicle.</p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }

    /**
     * <p>The unique ID of the updated vehicle.</p>
     */
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }

    /**
     * <p>The unique ID of the updated vehicle.</p>
     */
    inline void SetVehicleName(const Aws::String& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = value; }

    /**
     * <p>The unique ID of the updated vehicle.</p>
     */
    inline void SetVehicleName(Aws::String&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::move(value); }

    /**
     * <p>The unique ID of the updated vehicle.</p>
     */
    inline void SetVehicleName(const char* value) { m_vehicleNameHasBeenSet = true; m_vehicleName.assign(value); }

    /**
     * <p>The unique ID of the updated vehicle.</p>
     */
    inline UpdateVehicleResponseItem& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}

    /**
     * <p>The unique ID of the updated vehicle.</p>
     */
    inline UpdateVehicleResponseItem& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the updated vehicle.</p>
     */
    inline UpdateVehicleResponseItem& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the updated vehicle.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated vehicle.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated vehicle.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated vehicle.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated vehicle.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated vehicle.</p>
     */
    inline UpdateVehicleResponseItem& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated vehicle.</p>
     */
    inline UpdateVehicleResponseItem& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated vehicle.</p>
     */
    inline UpdateVehicleResponseItem& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_vehicleName;
    bool m_vehicleNameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
