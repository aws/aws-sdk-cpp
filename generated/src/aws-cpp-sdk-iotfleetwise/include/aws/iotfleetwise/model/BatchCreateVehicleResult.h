﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/CreateVehicleResponseItem.h>
#include <aws/iotfleetwise/model/CreateVehicleError.h>
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
  class BatchCreateVehicleResult
  {
  public:
    AWS_IOTFLEETWISE_API BatchCreateVehicleResult();
    AWS_IOTFLEETWISE_API BatchCreateVehicleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API BatchCreateVehicleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of information about a batch of created vehicles. For more
     * information, see the API data type.</p>
     */
    inline const Aws::Vector<CreateVehicleResponseItem>& GetVehicles() const{ return m_vehicles; }
    inline void SetVehicles(const Aws::Vector<CreateVehicleResponseItem>& value) { m_vehicles = value; }
    inline void SetVehicles(Aws::Vector<CreateVehicleResponseItem>&& value) { m_vehicles = std::move(value); }
    inline BatchCreateVehicleResult& WithVehicles(const Aws::Vector<CreateVehicleResponseItem>& value) { SetVehicles(value); return *this;}
    inline BatchCreateVehicleResult& WithVehicles(Aws::Vector<CreateVehicleResponseItem>&& value) { SetVehicles(std::move(value)); return *this;}
    inline BatchCreateVehicleResult& AddVehicles(const CreateVehicleResponseItem& value) { m_vehicles.push_back(value); return *this; }
    inline BatchCreateVehicleResult& AddVehicles(CreateVehicleResponseItem&& value) { m_vehicles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of information about creation errors, or an empty list if there aren't
     * any errors. </p>
     */
    inline const Aws::Vector<CreateVehicleError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<CreateVehicleError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<CreateVehicleError>&& value) { m_errors = std::move(value); }
    inline BatchCreateVehicleResult& WithErrors(const Aws::Vector<CreateVehicleError>& value) { SetErrors(value); return *this;}
    inline BatchCreateVehicleResult& WithErrors(Aws::Vector<CreateVehicleError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchCreateVehicleResult& AddErrors(const CreateVehicleError& value) { m_errors.push_back(value); return *this; }
    inline BatchCreateVehicleResult& AddErrors(CreateVehicleError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchCreateVehicleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchCreateVehicleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchCreateVehicleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CreateVehicleResponseItem> m_vehicles;

    Aws::Vector<CreateVehicleError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
