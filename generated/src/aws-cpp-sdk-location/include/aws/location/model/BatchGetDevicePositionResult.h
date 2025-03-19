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
    AWS_LOCATIONSERVICE_API BatchGetDevicePositionResult() = default;
    AWS_LOCATIONSERVICE_API BatchGetDevicePositionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API BatchGetDevicePositionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains error details for each device that failed to send its position to
     * the tracker resource.</p>
     */
    inline const Aws::Vector<BatchGetDevicePositionError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchGetDevicePositionError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchGetDevicePositionError>>
    BatchGetDevicePositionResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchGetDevicePositionError>
    BatchGetDevicePositionResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains device position details such as the device ID, position, and
     * timestamps for when the position was received and sampled.</p>
     */
    inline const Aws::Vector<DevicePosition>& GetDevicePositions() const { return m_devicePositions; }
    template<typename DevicePositionsT = Aws::Vector<DevicePosition>>
    void SetDevicePositions(DevicePositionsT&& value) { m_devicePositionsHasBeenSet = true; m_devicePositions = std::forward<DevicePositionsT>(value); }
    template<typename DevicePositionsT = Aws::Vector<DevicePosition>>
    BatchGetDevicePositionResult& WithDevicePositions(DevicePositionsT&& value) { SetDevicePositions(std::forward<DevicePositionsT>(value)); return *this;}
    template<typename DevicePositionsT = DevicePosition>
    BatchGetDevicePositionResult& AddDevicePositions(DevicePositionsT&& value) { m_devicePositionsHasBeenSet = true; m_devicePositions.emplace_back(std::forward<DevicePositionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetDevicePositionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchGetDevicePositionError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Vector<DevicePosition> m_devicePositions;
    bool m_devicePositionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
