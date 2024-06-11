﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>Contains error details for each device that failed to evaluate its position
     * against the given geofence collection.</p>
     */
    inline const Aws::Vector<BatchEvaluateGeofencesError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchEvaluateGeofencesError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchEvaluateGeofencesError>&& value) { m_errors = std::move(value); }
    inline BatchEvaluateGeofencesResult& WithErrors(const Aws::Vector<BatchEvaluateGeofencesError>& value) { SetErrors(value); return *this;}
    inline BatchEvaluateGeofencesResult& WithErrors(Aws::Vector<BatchEvaluateGeofencesError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchEvaluateGeofencesResult& AddErrors(const BatchEvaluateGeofencesError& value) { m_errors.push_back(value); return *this; }
    inline BatchEvaluateGeofencesResult& AddErrors(BatchEvaluateGeofencesError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchEvaluateGeofencesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchEvaluateGeofencesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchEvaluateGeofencesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchEvaluateGeofencesError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
