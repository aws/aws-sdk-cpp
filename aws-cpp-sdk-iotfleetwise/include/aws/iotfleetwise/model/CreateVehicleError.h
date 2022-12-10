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
   * <p>An HTTP error resulting from creating a vehicle.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CreateVehicleError">AWS
   * API Reference</a></p>
   */
  class CreateVehicleError
  {
  public:
    AWS_IOTFLEETWISE_API CreateVehicleError();
    AWS_IOTFLEETWISE_API CreateVehicleError(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API CreateVehicleError& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline CreateVehicleError& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}

    /**
     * <p>The ID of the vehicle with the error.</p>
     */
    inline CreateVehicleError& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}

    /**
     * <p>The ID of the vehicle with the error.</p>
     */
    inline CreateVehicleError& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}


    /**
     * <p>An HTTP error code.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>An HTTP error code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>An HTTP error code.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>An HTTP error code.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>An HTTP error code.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>An HTTP error code.</p>
     */
    inline CreateVehicleError& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>An HTTP error code.</p>
     */
    inline CreateVehicleError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>An HTTP error code.</p>
     */
    inline CreateVehicleError& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>A description of the HTTP error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the HTTP error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of the HTTP error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the HTTP error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of the HTTP error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the HTTP error.</p>
     */
    inline CreateVehicleError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the HTTP error.</p>
     */
    inline CreateVehicleError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the HTTP error.</p>
     */
    inline CreateVehicleError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_vehicleName;
    bool m_vehicleNameHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
