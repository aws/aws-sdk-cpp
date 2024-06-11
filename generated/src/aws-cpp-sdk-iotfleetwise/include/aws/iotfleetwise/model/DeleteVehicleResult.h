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


    ///@{
    /**
     * <p>The ID of the deleted vehicle.</p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }
    inline void SetVehicleName(const Aws::String& value) { m_vehicleName = value; }
    inline void SetVehicleName(Aws::String&& value) { m_vehicleName = std::move(value); }
    inline void SetVehicleName(const char* value) { m_vehicleName.assign(value); }
    inline DeleteVehicleResult& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}
    inline DeleteVehicleResult& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}
    inline DeleteVehicleResult& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the deleted vehicle.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DeleteVehicleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeleteVehicleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeleteVehicleResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteVehicleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteVehicleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteVehicleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_vehicleName;

    Aws::String m_arn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
