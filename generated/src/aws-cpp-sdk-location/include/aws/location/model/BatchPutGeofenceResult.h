/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/BatchPutGeofenceSuccess.h>
#include <aws/location/model/BatchPutGeofenceError.h>
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
    AWS_LOCATIONSERVICE_API BatchPutGeofenceResult() = default;
    AWS_LOCATIONSERVICE_API BatchPutGeofenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API BatchPutGeofenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains each geofence that was successfully stored in a geofence
     * collection.</p>
     */
    inline const Aws::Vector<BatchPutGeofenceSuccess>& GetSuccesses() const { return m_successes; }
    template<typename SuccessesT = Aws::Vector<BatchPutGeofenceSuccess>>
    void SetSuccesses(SuccessesT&& value) { m_successesHasBeenSet = true; m_successes = std::forward<SuccessesT>(value); }
    template<typename SuccessesT = Aws::Vector<BatchPutGeofenceSuccess>>
    BatchPutGeofenceResult& WithSuccesses(SuccessesT&& value) { SetSuccesses(std::forward<SuccessesT>(value)); return *this;}
    template<typename SuccessesT = BatchPutGeofenceSuccess>
    BatchPutGeofenceResult& AddSuccesses(SuccessesT&& value) { m_successesHasBeenSet = true; m_successes.emplace_back(std::forward<SuccessesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains additional error details for each geofence that failed to be stored
     * in a geofence collection.</p>
     */
    inline const Aws::Vector<BatchPutGeofenceError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchPutGeofenceError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchPutGeofenceError>>
    BatchPutGeofenceResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchPutGeofenceError>
    BatchPutGeofenceResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchPutGeofenceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchPutGeofenceSuccess> m_successes;
    bool m_successesHasBeenSet = false;

    Aws::Vector<BatchPutGeofenceError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
