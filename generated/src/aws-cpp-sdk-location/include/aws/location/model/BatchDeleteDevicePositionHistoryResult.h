/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/BatchDeleteDevicePositionHistoryError.h>
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
  class BatchDeleteDevicePositionHistoryResult
  {
  public:
    AWS_LOCATIONSERVICE_API BatchDeleteDevicePositionHistoryResult();
    AWS_LOCATIONSERVICE_API BatchDeleteDevicePositionHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API BatchDeleteDevicePositionHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains error details for each device history that failed to delete.</p>
     */
    inline const Aws::Vector<BatchDeleteDevicePositionHistoryError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Contains error details for each device history that failed to delete.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchDeleteDevicePositionHistoryError>& value) { m_errors = value; }

    /**
     * <p>Contains error details for each device history that failed to delete.</p>
     */
    inline void SetErrors(Aws::Vector<BatchDeleteDevicePositionHistoryError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Contains error details for each device history that failed to delete.</p>
     */
    inline BatchDeleteDevicePositionHistoryResult& WithErrors(const Aws::Vector<BatchDeleteDevicePositionHistoryError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Contains error details for each device history that failed to delete.</p>
     */
    inline BatchDeleteDevicePositionHistoryResult& WithErrors(Aws::Vector<BatchDeleteDevicePositionHistoryError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Contains error details for each device history that failed to delete.</p>
     */
    inline BatchDeleteDevicePositionHistoryResult& AddErrors(const BatchDeleteDevicePositionHistoryError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Contains error details for each device history that failed to delete.</p>
     */
    inline BatchDeleteDevicePositionHistoryResult& AddErrors(BatchDeleteDevicePositionHistoryError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchDeleteDevicePositionHistoryError> m_errors;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
