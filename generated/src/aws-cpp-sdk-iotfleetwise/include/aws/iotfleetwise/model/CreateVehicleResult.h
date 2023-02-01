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
    AWS_IOTFLEETWISE_API CreateVehicleResult();
    AWS_IOTFLEETWISE_API CreateVehicleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API CreateVehicleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID of the created vehicle.</p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }

    /**
     * <p>The unique ID of the created vehicle.</p>
     */
    inline void SetVehicleName(const Aws::String& value) { m_vehicleName = value; }

    /**
     * <p>The unique ID of the created vehicle.</p>
     */
    inline void SetVehicleName(Aws::String&& value) { m_vehicleName = std::move(value); }

    /**
     * <p>The unique ID of the created vehicle.</p>
     */
    inline void SetVehicleName(const char* value) { m_vehicleName.assign(value); }

    /**
     * <p>The unique ID of the created vehicle.</p>
     */
    inline CreateVehicleResult& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}

    /**
     * <p>The unique ID of the created vehicle.</p>
     */
    inline CreateVehicleResult& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the created vehicle.</p>
     */
    inline CreateVehicleResult& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}


    /**
     * <p> The ARN of the created vehicle. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The ARN of the created vehicle. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p> The ARN of the created vehicle. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p> The ARN of the created vehicle. </p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p> The ARN of the created vehicle. </p>
     */
    inline CreateVehicleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The ARN of the created vehicle. </p>
     */
    inline CreateVehicleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the created vehicle. </p>
     */
    inline CreateVehicleResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The ARN of a created or validated Amazon Web Services IoT thing. </p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }

    /**
     * <p> The ARN of a created or validated Amazon Web Services IoT thing. </p>
     */
    inline void SetThingArn(const Aws::String& value) { m_thingArn = value; }

    /**
     * <p> The ARN of a created or validated Amazon Web Services IoT thing. </p>
     */
    inline void SetThingArn(Aws::String&& value) { m_thingArn = std::move(value); }

    /**
     * <p> The ARN of a created or validated Amazon Web Services IoT thing. </p>
     */
    inline void SetThingArn(const char* value) { m_thingArn.assign(value); }

    /**
     * <p> The ARN of a created or validated Amazon Web Services IoT thing. </p>
     */
    inline CreateVehicleResult& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}

    /**
     * <p> The ARN of a created or validated Amazon Web Services IoT thing. </p>
     */
    inline CreateVehicleResult& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of a created or validated Amazon Web Services IoT thing. </p>
     */
    inline CreateVehicleResult& WithThingArn(const char* value) { SetThingArn(value); return *this;}

  private:

    Aws::String m_vehicleName;

    Aws::String m_arn;

    Aws::String m_thingArn;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
