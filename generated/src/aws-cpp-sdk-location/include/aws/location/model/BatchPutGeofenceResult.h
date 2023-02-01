/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/BatchPutGeofenceError.h>
#include <aws/location/model/BatchPutGeofenceSuccess.h>
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
namespace LocationService
{
namespace Model
{
  class BatchPutGeofenceResult
  {
  public:
    AWS_LOCATIONSERVICE_API BatchPutGeofenceResult();
    AWS_LOCATIONSERVICE_API BatchPutGeofenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API BatchPutGeofenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains additional error details for each geofence that failed to be stored
     * in a geofence collection.</p>
     */
    inline const Aws::Vector<BatchPutGeofenceError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Contains additional error details for each geofence that failed to be stored
     * in a geofence collection.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchPutGeofenceError>& value) { m_errors = value; }

    /**
     * <p>Contains additional error details for each geofence that failed to be stored
     * in a geofence collection.</p>
     */
    inline void SetErrors(Aws::Vector<BatchPutGeofenceError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Contains additional error details for each geofence that failed to be stored
     * in a geofence collection.</p>
     */
    inline BatchPutGeofenceResult& WithErrors(const Aws::Vector<BatchPutGeofenceError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Contains additional error details for each geofence that failed to be stored
     * in a geofence collection.</p>
     */
    inline BatchPutGeofenceResult& WithErrors(Aws::Vector<BatchPutGeofenceError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Contains additional error details for each geofence that failed to be stored
     * in a geofence collection.</p>
     */
    inline BatchPutGeofenceResult& AddErrors(const BatchPutGeofenceError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Contains additional error details for each geofence that failed to be stored
     * in a geofence collection.</p>
     */
    inline BatchPutGeofenceResult& AddErrors(BatchPutGeofenceError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains each geofence that was successfully stored in a geofence
     * collection.</p>
     */
    inline const Aws::Vector<BatchPutGeofenceSuccess>& GetSuccesses() const{ return m_successes; }

    /**
     * <p>Contains each geofence that was successfully stored in a geofence
     * collection.</p>
     */
    inline void SetSuccesses(const Aws::Vector<BatchPutGeofenceSuccess>& value) { m_successes = value; }

    /**
     * <p>Contains each geofence that was successfully stored in a geofence
     * collection.</p>
     */
    inline void SetSuccesses(Aws::Vector<BatchPutGeofenceSuccess>&& value) { m_successes = std::move(value); }

    /**
     * <p>Contains each geofence that was successfully stored in a geofence
     * collection.</p>
     */
    inline BatchPutGeofenceResult& WithSuccesses(const Aws::Vector<BatchPutGeofenceSuccess>& value) { SetSuccesses(value); return *this;}

    /**
     * <p>Contains each geofence that was successfully stored in a geofence
     * collection.</p>
     */
    inline BatchPutGeofenceResult& WithSuccesses(Aws::Vector<BatchPutGeofenceSuccess>&& value) { SetSuccesses(std::move(value)); return *this;}

    /**
     * <p>Contains each geofence that was successfully stored in a geofence
     * collection.</p>
     */
    inline BatchPutGeofenceResult& AddSuccesses(const BatchPutGeofenceSuccess& value) { m_successes.push_back(value); return *this; }

    /**
     * <p>Contains each geofence that was successfully stored in a geofence
     * collection.</p>
     */
    inline BatchPutGeofenceResult& AddSuccesses(BatchPutGeofenceSuccess&& value) { m_successes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchPutGeofenceError> m_errors;

    Aws::Vector<BatchPutGeofenceSuccess> m_successes;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
