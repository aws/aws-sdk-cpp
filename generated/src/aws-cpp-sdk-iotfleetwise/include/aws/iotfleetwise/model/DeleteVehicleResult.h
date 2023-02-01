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
  class DeleteVehicleResult
  {
  public:
    AWS_IOTFLEETWISE_API DeleteVehicleResult();
    AWS_IOTFLEETWISE_API DeleteVehicleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API DeleteVehicleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the deleted vehicle.</p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }

    /**
     * <p>The ID of the deleted vehicle.</p>
     */
    inline void SetVehicleName(const Aws::String& value) { m_vehicleName = value; }

    /**
     * <p>The ID of the deleted vehicle.</p>
     */
    inline void SetVehicleName(Aws::String&& value) { m_vehicleName = std::move(value); }

    /**
     * <p>The ID of the deleted vehicle.</p>
     */
    inline void SetVehicleName(const char* value) { m_vehicleName.assign(value); }

    /**
     * <p>The ID of the deleted vehicle.</p>
     */
    inline DeleteVehicleResult& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}

    /**
     * <p>The ID of the deleted vehicle.</p>
     */
    inline DeleteVehicleResult& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}

    /**
     * <p>The ID of the deleted vehicle.</p>
     */
    inline DeleteVehicleResult& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the deleted vehicle.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted vehicle.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted vehicle.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted vehicle.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted vehicle.</p>
     */
    inline DeleteVehicleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted vehicle.</p>
     */
    inline DeleteVehicleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted vehicle.</p>
     */
    inline DeleteVehicleResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_vehicleName;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
