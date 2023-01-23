/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/BatchEvaluateGeofencesError.h>
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
  class BatchEvaluateGeofencesResult
  {
  public:
    AWS_LOCATIONSERVICE_API BatchEvaluateGeofencesResult();
    AWS_LOCATIONSERVICE_API BatchEvaluateGeofencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API BatchEvaluateGeofencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains error details for each device that failed to evaluate its position
     * against the given geofence collection.</p>
     */
    inline const Aws::Vector<BatchEvaluateGeofencesError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Contains error details for each device that failed to evaluate its position
     * against the given geofence collection.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchEvaluateGeofencesError>& value) { m_errors = value; }

    /**
     * <p>Contains error details for each device that failed to evaluate its position
     * against the given geofence collection.</p>
     */
    inline void SetErrors(Aws::Vector<BatchEvaluateGeofencesError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Contains error details for each device that failed to evaluate its position
     * against the given geofence collection.</p>
     */
    inline BatchEvaluateGeofencesResult& WithErrors(const Aws::Vector<BatchEvaluateGeofencesError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Contains error details for each device that failed to evaluate its position
     * against the given geofence collection.</p>
     */
    inline BatchEvaluateGeofencesResult& WithErrors(Aws::Vector<BatchEvaluateGeofencesError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Contains error details for each device that failed to evaluate its position
     * against the given geofence collection.</p>
     */
    inline BatchEvaluateGeofencesResult& AddErrors(const BatchEvaluateGeofencesError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Contains error details for each device that failed to evaluate its position
     * against the given geofence collection.</p>
     */
    inline BatchEvaluateGeofencesResult& AddErrors(BatchEvaluateGeofencesError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchEvaluateGeofencesError> m_errors;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
