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
  class UpdateVehicleResult
  {
  public:
    AWS_IOTFLEETWISE_API UpdateVehicleResult();
    AWS_IOTFLEETWISE_API UpdateVehicleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API UpdateVehicleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the updated vehicle.</p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }

    /**
     * <p>The ID of the updated vehicle.</p>
     */
    inline void SetVehicleName(const Aws::String& value) { m_vehicleName = value; }

    /**
     * <p>The ID of the updated vehicle.</p>
     */
    inline void SetVehicleName(Aws::String&& value) { m_vehicleName = std::move(value); }

    /**
     * <p>The ID of the updated vehicle.</p>
     */
    inline void SetVehicleName(const char* value) { m_vehicleName.assign(value); }

    /**
     * <p>The ID of the updated vehicle.</p>
     */
    inline UpdateVehicleResult& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}

    /**
     * <p>The ID of the updated vehicle.</p>
     */
    inline UpdateVehicleResult& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}

    /**
     * <p>The ID of the updated vehicle.</p>
     */
    inline UpdateVehicleResult& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}


    /**
     * <p>The ARN of the updated vehicle.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the updated vehicle.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the updated vehicle.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the updated vehicle.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the updated vehicle.</p>
     */
    inline UpdateVehicleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the updated vehicle.</p>
     */
    inline UpdateVehicleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the updated vehicle.</p>
     */
    inline UpdateVehicleResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_vehicleName;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
