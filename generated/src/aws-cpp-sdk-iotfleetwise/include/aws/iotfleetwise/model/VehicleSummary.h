/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
    AWS_IOTFLEETWISE_API VehicleSummary() = default;
    AWS_IOTFLEETWISE_API VehicleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API VehicleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline const Aws::String& GetVehicleName() const { return m_vehicleName; }
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }
    template<typename VehicleNameT = Aws::String>
    void SetVehicleName(VehicleNameT&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::forward<VehicleNameT>(value); }
    template<typename VehicleNameT = Aws::String>
    VehicleSummary& WithVehicleName(VehicleNameT&& value) { SetVehicleName(std::forward<VehicleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vehicle.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    VehicleSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a vehicle model (model manifest) associated with the vehicle.</p>
     */
    inline const Aws::String& GetModelManifestArn() const { return m_modelManifestArn; }
    inline bool ModelManifestArnHasBeenSet() const { return m_modelManifestArnHasBeenSet; }
    template<typename ModelManifestArnT = Aws::String>
    void SetModelManifestArn(ModelManifestArnT&& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = std::forward<ModelManifestArnT>(value); }
    template<typename ModelManifestArnT = Aws::String>
    VehicleSummary& WithModelManifestArn(ModelManifestArnT&& value) { SetModelManifestArn(std::forward<ModelManifestArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a decoder manifest associated with the vehicle.</p>
     */
    inline const Aws::String& GetDecoderManifestArn() const { return m_decoderManifestArn; }
    inline bool DecoderManifestArnHasBeenSet() const { return m_decoderManifestArnHasBeenSet; }
    template<typename DecoderManifestArnT = Aws::String>
    void SetDecoderManifestArn(DecoderManifestArnT&& value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn = std::forward<DecoderManifestArnT>(value); }
    template<typename DecoderManifestArnT = Aws::String>
    VehicleSummary& WithDecoderManifestArn(DecoderManifestArnT&& value) { SetDecoderManifestArn(std::forward<DecoderManifestArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the vehicle was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    VehicleSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the vehicle was last updated in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    VehicleSummary& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Static information about a vehicle in a key-value pair. For example:</p> <p>
     * <code>"engineType"</code> : <code>"1.3 L R2"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    VehicleSummary& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    VehicleSummary& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
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

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
