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
   * <p>An HTTP error resulting from updating the description for a
   * vehicle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UpdateVehicleError">AWS
   * API Reference</a></p>
   */
  class UpdateVehicleError
  {
  public:
    AWS_IOTFLEETWISE_API UpdateVehicleError();
    AWS_IOTFLEETWISE_API UpdateVehicleError(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API UpdateVehicleError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the vehicle with the error.</p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }

    /**
     * <p>The ID of the vehicle with the error.</p>
     */
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }

    /**
     * <p>The ID of the vehicle with the error.</p>
     */
    inline void SetVehicleName(const Aws::String& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = value; }

    /**
     * <p>The ID of the vehicle with the error.</p>
     */
    inline void SetVehicleName(Aws::String&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::move(value); }

    /**
     * <p>The ID of the vehicle with the error.</p>
     */
    inline void SetVehicleName(const char* value) { m_vehicleNameHasBeenSet = true; m_vehicleName.assign(value); }

    /**
     * <p>The ID of the vehicle with the error.</p>
     */
    inline UpdateVehicleError& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}

    /**
     * <p>The ID of the vehicle with the error.</p>
     */
    inline UpdateVehicleError& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}

    /**
     * <p>The ID of the vehicle with the error.</p>
     */
    inline UpdateVehicleError& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}


    /**
     * <p>The relevant HTTP error code (400+).</p>
     */
    inline int GetCode() const{ return m_code; }

    /**
     * <p>The relevant HTTP error code (400+).</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The relevant HTTP error code (400+).</p>
     */
    inline void SetCode(int value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The relevant HTTP error code (400+).</p>
     */
    inline UpdateVehicleError& WithCode(int value) { SetCode(value); return *this;}


    /**
     * <p>A message associated with the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message associated with the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message associated with the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message associated with the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message associated with the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message associated with the error.</p>
     */
    inline UpdateVehicleError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message associated with the error.</p>
     */
    inline UpdateVehicleError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message associated with the error.</p>
     */
    inline UpdateVehicleError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_vehicleName;
    bool m_vehicleNameHasBeenSet = false;

    int m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
