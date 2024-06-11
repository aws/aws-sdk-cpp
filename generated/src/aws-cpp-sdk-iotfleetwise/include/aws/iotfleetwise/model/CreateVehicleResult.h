﻿/**
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
    AWS_IOTFLEETWISE_API CreateVehicleResult();
    AWS_IOTFLEETWISE_API CreateVehicleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API CreateVehicleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the created vehicle.</p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }
    inline void SetVehicleName(const Aws::String& value) { m_vehicleName = value; }
    inline void SetVehicleName(Aws::String&& value) { m_vehicleName = std::move(value); }
    inline void SetVehicleName(const char* value) { m_vehicleName.assign(value); }
    inline CreateVehicleResult& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}
    inline CreateVehicleResult& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}
    inline CreateVehicleResult& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the created vehicle. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateVehicleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateVehicleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateVehicleResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of a created or validated Amazon Web Services IoT thing. </p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }
    inline void SetThingArn(const Aws::String& value) { m_thingArn = value; }
    inline void SetThingArn(Aws::String&& value) { m_thingArn = std::move(value); }
    inline void SetThingArn(const char* value) { m_thingArn.assign(value); }
    inline CreateVehicleResult& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}
    inline CreateVehicleResult& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}
    inline CreateVehicleResult& WithThingArn(const char* value) { SetThingArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateVehicleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateVehicleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateVehicleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_vehicleName;

    Aws::String m_arn;

    Aws::String m_thingArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
