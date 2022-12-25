/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTFleetWise
{
namespace Model
{
  class GetVehicleResult
  {
  public:
    AWS_IOTFLEETWISE_API GetVehicleResult();
    AWS_IOTFLEETWISE_API GetVehicleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetVehicleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the vehicle.</p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }

    /**
     * <p>The ID of the vehicle.</p>
     */
    inline void SetVehicleName(const Aws::String& value) { m_vehicleName = value; }

    /**
     * <p>The ID of the vehicle.</p>
     */
    inline void SetVehicleName(Aws::String&& value) { m_vehicleName = std::move(value); }

    /**
     * <p>The ID of the vehicle.</p>
     */
    inline void SetVehicleName(const char* value) { m_vehicleName.assign(value); }

    /**
     * <p>The ID of the vehicle.</p>
     */
    inline GetVehicleResult& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}

    /**
     * <p>The ID of the vehicle.</p>
     */
    inline GetVehicleResult& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}

    /**
     * <p>The ID of the vehicle.</p>
     */
    inline GetVehicleResult& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the vehicle to retrieve information about.
     * </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the vehicle to retrieve information about.
     * </p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the vehicle to retrieve information about.
     * </p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the vehicle to retrieve information about.
     * </p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the vehicle to retrieve information about.
     * </p>
     */
    inline GetVehicleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the vehicle to retrieve information about.
     * </p>
     */
    inline GetVehicleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the vehicle to retrieve information about.
     * </p>
     */
    inline GetVehicleResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the vehicle.
     * </p>
     */
    inline const Aws::String& GetModelManifestArn() const{ return m_modelManifestArn; }

    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the vehicle.
     * </p>
     */
    inline void SetModelManifestArn(const Aws::String& value) { m_modelManifestArn = value; }

    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the vehicle.
     * </p>
     */
    inline void SetModelManifestArn(Aws::String&& value) { m_modelManifestArn = std::move(value); }

    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the vehicle.
     * </p>
     */
    inline void SetModelManifestArn(const char* value) { m_modelManifestArn.assign(value); }

    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the vehicle.
     * </p>
     */
    inline GetVehicleResult& WithModelManifestArn(const Aws::String& value) { SetModelManifestArn(value); return *this;}

    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the vehicle.
     * </p>
     */
    inline GetVehicleResult& WithModelManifestArn(Aws::String&& value) { SetModelManifestArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the vehicle.
     * </p>
     */
    inline GetVehicleResult& WithModelManifestArn(const char* value) { SetModelManifestArn(value); return *this;}


    /**
     * <p> The ARN of a decoder manifest associated with the vehicle. </p>
     */
    inline const Aws::String& GetDecoderManifestArn() const{ return m_decoderManifestArn; }

    /**
     * <p> The ARN of a decoder manifest associated with the vehicle. </p>
     */
    inline void SetDecoderManifestArn(const Aws::String& value) { m_decoderManifestArn = value; }

    /**
     * <p> The ARN of a decoder manifest associated with the vehicle. </p>
     */
    inline void SetDecoderManifestArn(Aws::String&& value) { m_decoderManifestArn = std::move(value); }

    /**
     * <p> The ARN of a decoder manifest associated with the vehicle. </p>
     */
    inline void SetDecoderManifestArn(const char* value) { m_decoderManifestArn.assign(value); }

    /**
     * <p> The ARN of a decoder manifest associated with the vehicle. </p>
     */
    inline GetVehicleResult& WithDecoderManifestArn(const Aws::String& value) { SetDecoderManifestArn(value); return *this;}

    /**
     * <p> The ARN of a decoder manifest associated with the vehicle. </p>
     */
    inline GetVehicleResult& WithDecoderManifestArn(Aws::String&& value) { SetDecoderManifestArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of a decoder manifest associated with the vehicle. </p>
     */
    inline GetVehicleResult& WithDecoderManifestArn(const char* value) { SetDecoderManifestArn(value); return *this;}


    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributes = value; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributes = std::move(value); }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline GetVehicleResult& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline GetVehicleResult& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline GetVehicleResult& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline GetVehicleResult& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline GetVehicleResult& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline GetVehicleResult& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline GetVehicleResult& AddAttributes(const char* key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline GetVehicleResult& AddAttributes(Aws::String&& key, const char* value) { m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline GetVehicleResult& AddAttributes(const char* key, const char* value) { m_attributes.emplace(key, value); return *this; }


    /**
     * <p> The time the vehicle was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The time the vehicle was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p> The time the vehicle was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p> The time the vehicle was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline GetVehicleResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The time the vehicle was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline GetVehicleResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p> The time the vehicle was last updated in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p> The time the vehicle was last updated in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p> The time the vehicle was last updated in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p> The time the vehicle was last updated in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline GetVehicleResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p> The time the vehicle was last updated in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline GetVehicleResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_vehicleName;

    Aws::String m_arn;

    Aws::String m_modelManifestArn;

    Aws::String m_decoderManifestArn;

    Aws::Map<Aws::String, Aws::String> m_attributes;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
