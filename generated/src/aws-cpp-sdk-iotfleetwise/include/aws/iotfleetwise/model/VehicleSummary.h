/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about a vehicle.</p> <p>To return this information about vehicles
   * in your account, you can use the API operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/VehicleSummary">AWS
   * API Reference</a></p>
   */
  class VehicleSummary
  {
  public:
    AWS_IOTFLEETWISE_API VehicleSummary();
    AWS_IOTFLEETWISE_API VehicleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API VehicleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }

    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }

    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline void SetVehicleName(const Aws::String& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = value; }

    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline void SetVehicleName(Aws::String&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::move(value); }

    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline void SetVehicleName(const char* value) { m_vehicleNameHasBeenSet = true; m_vehicleName.assign(value); }

    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline VehicleSummary& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}

    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline VehicleSummary& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline VehicleSummary& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle.</p>
     */
    inline VehicleSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle.</p>
     */
    inline VehicleSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle.</p>
     */
    inline VehicleSummary& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline VehicleSummary& WithModelManifestArn(const Aws::String& value) { SetModelManifestArn(value); return *this;}

    /**
     * <p>The ARN of a vehicle model (model manifest) associated with the vehicle.</p>
     */
    inline VehicleSummary& WithModelManifestArn(Aws::String&& value) { SetModelManifestArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a vehicle model (model manifest) associated with the vehicle.</p>
     */
    inline VehicleSummary& WithModelManifestArn(const char* value) { SetModelManifestArn(value); return *this;}


    /**
     * <p>The ARN of a decoder manifest associated with the vehicle.</p>
     */
    inline const Aws::String& GetDecoderManifestArn() const{ return m_decoderManifestArn; }

    /**
     * <p>The ARN of a decoder manifest associated with the vehicle.</p>
     */
    inline bool DecoderManifestArnHasBeenSet() const { return m_decoderManifestArnHasBeenSet; }

    /**
     * <p>The ARN of a decoder manifest associated with the vehicle.</p>
     */
    inline void SetDecoderManifestArn(const Aws::String& value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn = value; }

    /**
     * <p>The ARN of a decoder manifest associated with the vehicle.</p>
     */
    inline void SetDecoderManifestArn(Aws::String&& value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn = std::move(value); }

    /**
     * <p>The ARN of a decoder manifest associated with the vehicle.</p>
     */
    inline void SetDecoderManifestArn(const char* value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn.assign(value); }

    /**
     * <p>The ARN of a decoder manifest associated with the vehicle.</p>
     */
    inline VehicleSummary& WithDecoderManifestArn(const Aws::String& value) { SetDecoderManifestArn(value); return *this;}

    /**
     * <p>The ARN of a decoder manifest associated with the vehicle.</p>
     */
    inline VehicleSummary& WithDecoderManifestArn(Aws::String&& value) { SetDecoderManifestArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a decoder manifest associated with the vehicle.</p>
     */
    inline VehicleSummary& WithDecoderManifestArn(const char* value) { SetDecoderManifestArn(value); return *this;}


    /**
     * <p>The time the vehicle was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the vehicle was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time).</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the vehicle was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the vehicle was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the vehicle was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time).</p>
     */
    inline VehicleSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the vehicle was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time).</p>
     */
    inline VehicleSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time the vehicle was last updated in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>The time the vehicle was last updated in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }

    /**
     * <p>The time the vehicle was last updated in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }

    /**
     * <p>The time the vehicle was last updated in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }

    /**
     * <p>The time the vehicle was last updated in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline VehicleSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The time the vehicle was last updated in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline VehicleSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_vehicleName;
    bool m_vehicleNameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_modelManifestArn;
    bool m_modelManifestArnHasBeenSet = false;

    Aws::String m_decoderManifestArn;
    bool m_decoderManifestArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime;
    bool m_lastModificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
