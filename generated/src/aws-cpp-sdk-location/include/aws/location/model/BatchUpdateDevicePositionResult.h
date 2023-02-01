/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/BatchUpdateDevicePositionError.h>
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
  class BatchUpdateDevicePositionResult
  {
  public:
    AWS_LOCATIONSERVICE_API BatchUpdateDevicePositionResult();
    AWS_LOCATIONSERVICE_API BatchUpdateDevicePositionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API BatchUpdateDevicePositionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains error details for each device that failed to update its
     * position.</p>
     */
    inline const Aws::Vector<BatchUpdateDevicePositionError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Contains error details for each device that failed to update its
     * position.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchUpdateDevicePositionError>& value) { m_errors = value; }

    /**
     * <p>Contains error details for each device that failed to update its
     * position.</p>
     */
    inline void SetErrors(Aws::Vector<BatchUpdateDevicePositionError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Contains error details for each device that failed to update its
     * position.</p>
     */
    inline BatchUpdateDevicePositionResult& WithErrors(const Aws::Vector<BatchUpdateDevicePositionError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Contains error details for each device that failed to update its
     * position.</p>
     */
    inline BatchUpdateDevicePositionResult& WithErrors(Aws::Vector<BatchUpdateDevicePositionError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Contains error details for each device that failed to update its
     * position.</p>
     */
    inline BatchUpdateDevicePositionResult& AddErrors(const BatchUpdateDevicePositionError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Contains error details for each device that failed to update its
     * position.</p>
     */
    inline BatchUpdateDevicePositionResult& AddErrors(BatchUpdateDevicePositionError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchUpdateDevicePositionError> m_errors;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
