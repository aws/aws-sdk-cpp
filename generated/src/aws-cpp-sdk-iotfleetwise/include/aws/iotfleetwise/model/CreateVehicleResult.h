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
  class CreateVehicleResult
  {
  public:
    AWS_IOTFLEETWISE_API CreateVehicleResult() = default;
    AWS_IOTFLEETWISE_API CreateVehicleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API CreateVehicleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the created vehicle.</p>
     */
    inline const Aws::String& GetVehicleName() const { return m_vehicleName; }
    template<typename VehicleNameT = Aws::String>
    void SetVehicleName(VehicleNameT&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::forward<VehicleNameT>(value); }
    template<typename VehicleNameT = Aws::String>
    CreateVehicleResult& WithVehicleName(VehicleNameT&& value) { SetVehicleName(std::forward<VehicleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the created vehicle. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateVehicleResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of a created or validated Amazon Web Services IoT thing. </p>
     */
    inline const Aws::String& GetThingArn() const { return m_thingArn; }
    template<typename ThingArnT = Aws::String>
    void SetThingArn(ThingArnT&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::forward<ThingArnT>(value); }
    template<typename ThingArnT = Aws::String>
    CreateVehicleResult& WithThingArn(ThingArnT&& value) { SetThingArn(std::forward<ThingArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateVehicleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vehicleName;
    bool m_vehicleNameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
