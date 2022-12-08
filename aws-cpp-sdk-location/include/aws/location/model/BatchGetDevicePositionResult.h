/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/DevicePosition.h>
#include <aws/location/model/BatchGetDevicePositionError.h>
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


    /**
     * <p>Contains device position details such as the device ID, position, and
     * timestamps for when the position was received and sampled.</p>
     */
    inline const Aws::Vector<DevicePosition>& GetDevicePositions() const{ return m_devicePositions; }

    /**
     * <p>Contains device position details such as the device ID, position, and
     * timestamps for when the position was received and sampled.</p>
     */
    inline void SetDevicePositions(const Aws::Vector<DevicePosition>& value) { m_devicePositions = value; }

    /**
     * <p>Contains device position details such as the device ID, position, and
     * timestamps for when the position was received and sampled.</p>
     */
    inline void SetDevicePositions(Aws::Vector<DevicePosition>&& value) { m_devicePositions = std::move(value); }

    /**
     * <p>Contains device position details such as the device ID, position, and
     * timestamps for when the position was received and sampled.</p>
     */
    inline BatchGetDevicePositionResult& WithDevicePositions(const Aws::Vector<DevicePosition>& value) { SetDevicePositions(value); return *this;}

    /**
     * <p>Contains device position details such as the device ID, position, and
     * timestamps for when the position was received and sampled.</p>
     */
    inline BatchGetDevicePositionResult& WithDevicePositions(Aws::Vector<DevicePosition>&& value) { SetDevicePositions(std::move(value)); return *this;}

    /**
     * <p>Contains device position details such as the device ID, position, and
     * timestamps for when the position was received and sampled.</p>
     */
    inline BatchGetDevicePositionResult& AddDevicePositions(const DevicePosition& value) { m_devicePositions.push_back(value); return *this; }

    /**
     * <p>Contains device position details such as the device ID, position, and
     * timestamps for when the position was received and sampled.</p>
     */
    inline BatchGetDevicePositionResult& AddDevicePositions(DevicePosition&& value) { m_devicePositions.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains error details for each device that failed to send its position to
     * the tracker resource.</p>
     */
    inline const Aws::Vector<BatchGetDevicePositionError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Contains error details for each device that failed to send its position to
     * the tracker resource.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchGetDevicePositionError>& value) { m_errors = value; }

    /**
     * <p>Contains error details for each device that failed to send its position to
     * the tracker resource.</p>
     */
    inline void SetErrors(Aws::Vector<BatchGetDevicePositionError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Contains error details for each device that failed to send its position to
     * the tracker resource.</p>
     */
    inline BatchGetDevicePositionResult& WithErrors(const Aws::Vector<BatchGetDevicePositionError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Contains error details for each device that failed to send its position to
     * the tracker resource.</p>
     */
    inline BatchGetDevicePositionResult& WithErrors(Aws::Vector<BatchGetDevicePositionError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Contains error details for each device that failed to send its position to
     * the tracker resource.</p>
     */
    inline BatchGetDevicePositionResult& AddErrors(const BatchGetDevicePositionError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Contains error details for each device that failed to send its position to
     * the tracker resource.</p>
     */
    inline BatchGetDevicePositionResult& AddErrors(BatchGetDevicePositionError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DevicePosition> m_devicePositions;

    Aws::Vector<BatchGetDevicePositionError> m_errors;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
