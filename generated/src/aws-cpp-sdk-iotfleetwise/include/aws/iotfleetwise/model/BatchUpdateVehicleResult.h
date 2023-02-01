/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/UpdateVehicleResponseItem.h>
#include <aws/iotfleetwise/model/UpdateVehicleError.h>
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
  class BatchUpdateVehicleResult
  {
  public:
    AWS_IOTFLEETWISE_API BatchUpdateVehicleResult();
    AWS_IOTFLEETWISE_API BatchUpdateVehicleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API BatchUpdateVehicleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of information about the batch of updated vehicles. </p> 
     * <p>This list contains only unique IDs for the vehicles that were updated.</p>
     * 
     */
    inline const Aws::Vector<UpdateVehicleResponseItem>& GetVehicles() const{ return m_vehicles; }

    /**
     * <p> A list of information about the batch of updated vehicles. </p> 
     * <p>This list contains only unique IDs for the vehicles that were updated.</p>
     * 
     */
    inline void SetVehicles(const Aws::Vector<UpdateVehicleResponseItem>& value) { m_vehicles = value; }

    /**
     * <p> A list of information about the batch of updated vehicles. </p> 
     * <p>This list contains only unique IDs for the vehicles that were updated.</p>
     * 
     */
    inline void SetVehicles(Aws::Vector<UpdateVehicleResponseItem>&& value) { m_vehicles = std::move(value); }

    /**
     * <p> A list of information about the batch of updated vehicles. </p> 
     * <p>This list contains only unique IDs for the vehicles that were updated.</p>
     * 
     */
    inline BatchUpdateVehicleResult& WithVehicles(const Aws::Vector<UpdateVehicleResponseItem>& value) { SetVehicles(value); return *this;}

    /**
     * <p> A list of information about the batch of updated vehicles. </p> 
     * <p>This list contains only unique IDs for the vehicles that were updated.</p>
     * 
     */
    inline BatchUpdateVehicleResult& WithVehicles(Aws::Vector<UpdateVehicleResponseItem>&& value) { SetVehicles(std::move(value)); return *this;}

    /**
     * <p> A list of information about the batch of updated vehicles. </p> 
     * <p>This list contains only unique IDs for the vehicles that were updated.</p>
     * 
     */
    inline BatchUpdateVehicleResult& AddVehicles(const UpdateVehicleResponseItem& value) { m_vehicles.push_back(value); return *this; }

    /**
     * <p> A list of information about the batch of updated vehicles. </p> 
     * <p>This list contains only unique IDs for the vehicles that were updated.</p>
     * 
     */
    inline BatchUpdateVehicleResult& AddVehicles(UpdateVehicleResponseItem&& value) { m_vehicles.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of information about errors returned while updating a batch of
     * vehicles, or, if there aren't any errors, an empty list.</p>
     */
    inline const Aws::Vector<UpdateVehicleError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of information about errors returned while updating a batch of
     * vehicles, or, if there aren't any errors, an empty list.</p>
     */
    inline void SetErrors(const Aws::Vector<UpdateVehicleError>& value) { m_errors = value; }

    /**
     * <p>A list of information about errors returned while updating a batch of
     * vehicles, or, if there aren't any errors, an empty list.</p>
     */
    inline void SetErrors(Aws::Vector<UpdateVehicleError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of information about errors returned while updating a batch of
     * vehicles, or, if there aren't any errors, an empty list.</p>
     */
    inline BatchUpdateVehicleResult& WithErrors(const Aws::Vector<UpdateVehicleError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of information about errors returned while updating a batch of
     * vehicles, or, if there aren't any errors, an empty list.</p>
     */
    inline BatchUpdateVehicleResult& WithErrors(Aws::Vector<UpdateVehicleError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of information about errors returned while updating a batch of
     * vehicles, or, if there aren't any errors, an empty list.</p>
     */
    inline BatchUpdateVehicleResult& AddErrors(const UpdateVehicleError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of information about errors returned while updating a batch of
     * vehicles, or, if there aren't any errors, an empty list.</p>
     */
    inline BatchUpdateVehicleResult& AddErrors(UpdateVehicleError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UpdateVehicleResponseItem> m_vehicles;

    Aws::Vector<UpdateVehicleError> m_errors;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
