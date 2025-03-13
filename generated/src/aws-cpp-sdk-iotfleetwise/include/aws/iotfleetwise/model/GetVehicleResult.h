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
    AWS_IOTFLEETWISE_API GetVehicleResult() = default;
    AWS_IOTFLEETWISE_API GetVehicleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetVehicleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the vehicle.</p>
     */
    inline const Aws::String& GetVehicleName() const { return m_vehicleName; }
    template<typename VehicleNameT = Aws::String>
    void SetVehicleName(VehicleNameT&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::forward<VehicleNameT>(value); }
    template<typename VehicleNameT = Aws::String>
    GetVehicleResult& WithVehicleName(VehicleNameT&& value) { SetVehicleName(std::forward<VehicleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the vehicle to retrieve information about.
     * </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetVehicleResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the vehicle.
     * </p>
     */
    inline const Aws::String& GetModelManifestArn() const { return m_modelManifestArn; }
    template<typename ModelManifestArnT = Aws::String>
    void SetModelManifestArn(ModelManifestArnT&& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = std::forward<ModelManifestArnT>(value); }
    template<typename ModelManifestArnT = Aws::String>
    GetVehicleResult& WithModelManifestArn(ModelManifestArnT&& value) { SetModelManifestArn(std::forward<ModelManifestArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of a decoder manifest associated with the vehicle. </p>
     */
    inline const Aws::String& GetDecoderManifestArn() const { return m_decoderManifestArn; }
    template<typename DecoderManifestArnT = Aws::String>
    void SetDecoderManifestArn(DecoderManifestArnT&& value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn = std::forward<DecoderManifestArnT>(value); }
    template<typename DecoderManifestArnT = Aws::String>
    GetVehicleResult& WithDecoderManifestArn(DecoderManifestArnT&& value) { SetDecoderManifestArn(std::forward<DecoderManifestArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    GetVehicleResult& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    GetVehicleResult& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>State templates associated with the vehicle.</p>
     */
    inline const Aws::Vector<StateTemplateAssociation>& GetStateTemplates() const { return m_stateTemplates; }
    template<typename StateTemplatesT = Aws::Vector<StateTemplateAssociation>>
    void SetStateTemplates(StateTemplatesT&& value) { m_stateTemplatesHasBeenSet = true; m_stateTemplates = std::forward<StateTemplatesT>(value); }
    template<typename StateTemplatesT = Aws::Vector<StateTemplateAssociation>>
    GetVehicleResult& WithStateTemplates(StateTemplatesT&& value) { SetStateTemplates(std::forward<StateTemplatesT>(value)); return *this;}
    template<typename StateTemplatesT = StateTemplateAssociation>
    GetVehicleResult& AddStateTemplates(StateTemplatesT&& value) { m_stateTemplatesHasBeenSet = true; m_stateTemplates.emplace_back(std::forward<StateTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The time the vehicle was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetVehicleResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time the vehicle was last updated in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    GetVehicleResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetVehicleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vehicleName;
    bool m_vehicleNameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_modelManifestArn;
    bool m_modelManifestArnHasBeenSet = false;

    Aws::String m_decoderManifestArn;
    bool m_decoderManifestArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<StateTemplateAssociation> m_stateTemplates;
    bool m_stateTemplatesHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
