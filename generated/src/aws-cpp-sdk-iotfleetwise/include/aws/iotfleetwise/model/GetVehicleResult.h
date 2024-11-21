/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotfleetwise/model/StateTemplateAssociation.h>
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


    ///@{
    /**
     * <p>The ID of the vehicle.</p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }
    inline void SetVehicleName(const Aws::String& value) { m_vehicleName = value; }
    inline void SetVehicleName(Aws::String&& value) { m_vehicleName = std::move(value); }
    inline void SetVehicleName(const char* value) { m_vehicleName.assign(value); }
    inline GetVehicleResult& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}
    inline GetVehicleResult& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}
    inline GetVehicleResult& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the vehicle to retrieve information about.
     * </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetVehicleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetVehicleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetVehicleResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the vehicle.
     * </p>
     */
    inline const Aws::String& GetModelManifestArn() const{ return m_modelManifestArn; }
    inline void SetModelManifestArn(const Aws::String& value) { m_modelManifestArn = value; }
    inline void SetModelManifestArn(Aws::String&& value) { m_modelManifestArn = std::move(value); }
    inline void SetModelManifestArn(const char* value) { m_modelManifestArn.assign(value); }
    inline GetVehicleResult& WithModelManifestArn(const Aws::String& value) { SetModelManifestArn(value); return *this;}
    inline GetVehicleResult& WithModelManifestArn(Aws::String&& value) { SetModelManifestArn(std::move(value)); return *this;}
    inline GetVehicleResult& WithModelManifestArn(const char* value) { SetModelManifestArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of a decoder manifest associated with the vehicle. </p>
     */
    inline const Aws::String& GetDecoderManifestArn() const{ return m_decoderManifestArn; }
    inline void SetDecoderManifestArn(const Aws::String& value) { m_decoderManifestArn = value; }
    inline void SetDecoderManifestArn(Aws::String&& value) { m_decoderManifestArn = std::move(value); }
    inline void SetDecoderManifestArn(const char* value) { m_decoderManifestArn.assign(value); }
    inline GetVehicleResult& WithDecoderManifestArn(const Aws::String& value) { SetDecoderManifestArn(value); return *this;}
    inline GetVehicleResult& WithDecoderManifestArn(Aws::String&& value) { SetDecoderManifestArn(std::move(value)); return *this;}
    inline GetVehicleResult& WithDecoderManifestArn(const char* value) { SetDecoderManifestArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributes = std::move(value); }
    inline GetVehicleResult& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline GetVehicleResult& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline GetVehicleResult& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributes.emplace(key, value); return *this; }
    inline GetVehicleResult& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributes.emplace(std::move(key), value); return *this; }
    inline GetVehicleResult& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }
    inline GetVehicleResult& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline GetVehicleResult& AddAttributes(const char* key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }
    inline GetVehicleResult& AddAttributes(Aws::String&& key, const char* value) { m_attributes.emplace(std::move(key), value); return *this; }
    inline GetVehicleResult& AddAttributes(const char* key, const char* value) { m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>State templates associated with the vehicle.</p>
     */
    inline const Aws::Vector<StateTemplateAssociation>& GetStateTemplates() const{ return m_stateTemplates; }
    inline void SetStateTemplates(const Aws::Vector<StateTemplateAssociation>& value) { m_stateTemplates = value; }
    inline void SetStateTemplates(Aws::Vector<StateTemplateAssociation>&& value) { m_stateTemplates = std::move(value); }
    inline GetVehicleResult& WithStateTemplates(const Aws::Vector<StateTemplateAssociation>& value) { SetStateTemplates(value); return *this;}
    inline GetVehicleResult& WithStateTemplates(Aws::Vector<StateTemplateAssociation>&& value) { SetStateTemplates(std::move(value)); return *this;}
    inline GetVehicleResult& AddStateTemplates(const StateTemplateAssociation& value) { m_stateTemplates.push_back(value); return *this; }
    inline GetVehicleResult& AddStateTemplates(StateTemplateAssociation&& value) { m_stateTemplates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The time the vehicle was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetVehicleResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetVehicleResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time the vehicle was last updated in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }
    inline GetVehicleResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline GetVehicleResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetVehicleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetVehicleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetVehicleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_vehicleName;

    Aws::String m_arn;

    Aws::String m_modelManifestArn;

    Aws::String m_decoderManifestArn;

    Aws::Map<Aws::String, Aws::String> m_attributes;

    Aws::Vector<StateTemplateAssociation> m_stateTemplates;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
