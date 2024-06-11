﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/BatchDeleteGeofenceError.h>
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
  class BatchDeleteGeofenceResult
  {
  public:
    AWS_LOCATIONSERVICE_API BatchDeleteGeofenceResult();
    AWS_LOCATIONSERVICE_API BatchDeleteGeofenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API BatchDeleteGeofenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains error details for each geofence that failed to delete.</p>
     */
    inline const Aws::Vector<BatchDeleteGeofenceError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchDeleteGeofenceError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchDeleteGeofenceError>&& value) { m_errors = std::move(value); }
    inline BatchDeleteGeofenceResult& WithErrors(const Aws::Vector<BatchDeleteGeofenceError>& value) { SetErrors(value); return *this;}
    inline BatchDeleteGeofenceResult& WithErrors(Aws::Vector<BatchDeleteGeofenceError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDeleteGeofenceResult& AddErrors(const BatchDeleteGeofenceError& value) { m_errors.push_back(value); return *this; }
    inline BatchDeleteGeofenceResult& AddErrors(BatchDeleteGeofenceError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteGeofenceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteGeofenceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteGeofenceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDeleteGeofenceError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
