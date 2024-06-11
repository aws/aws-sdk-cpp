/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/BatchGetDevicePositionError.h>
#include <aws/location/model/DevicePosition.h>
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
  class BatchGetDevicePositionResult
  {
  public:
    AWS_LOCATIONSERVICE_API BatchGetDevicePositionResult();
    AWS_LOCATIONSERVICE_API BatchGetDevicePositionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API BatchGetDevicePositionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains error details for each device that failed to send its position to
     * the tracker resource.</p>
     */
    inline const Aws::Vector<BatchGetDevicePositionError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchGetDevicePositionError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchGetDevicePositionError>&& value) { m_errors = std::move(value); }
    inline BatchGetDevicePositionResult& WithErrors(const Aws::Vector<BatchGetDevicePositionError>& value) { SetErrors(value); return *this;}
    inline BatchGetDevicePositionResult& WithErrors(Aws::Vector<BatchGetDevicePositionError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchGetDevicePositionResult& AddErrors(const BatchGetDevicePositionError& value) { m_errors.push_back(value); return *this; }
    inline BatchGetDevicePositionResult& AddErrors(BatchGetDevicePositionError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains device position details such as the device ID, position, and
     * timestamps for when the position was received and sampled.</p>
     */
    inline const Aws::Vector<DevicePosition>& GetDevicePositions() const{ return m_devicePositions; }
    inline void SetDevicePositions(const Aws::Vector<DevicePosition>& value) { m_devicePositions = value; }
    inline void SetDevicePositions(Aws::Vector<DevicePosition>&& value) { m_devicePositions = std::move(value); }
    inline BatchGetDevicePositionResult& WithDevicePositions(const Aws::Vector<DevicePosition>& value) { SetDevicePositions(value); return *this;}
    inline BatchGetDevicePositionResult& WithDevicePositions(Aws::Vector<DevicePosition>&& value) { SetDevicePositions(std::move(value)); return *this;}
    inline BatchGetDevicePositionResult& AddDevicePositions(const DevicePosition& value) { m_devicePositions.push_back(value); return *this; }
    inline BatchGetDevicePositionResult& AddDevicePositions(DevicePosition&& value) { m_devicePositions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetDevicePositionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetDevicePositionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetDevicePositionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchGetDevicePositionError> m_errors;

    Aws::Vector<DevicePosition> m_devicePositions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
