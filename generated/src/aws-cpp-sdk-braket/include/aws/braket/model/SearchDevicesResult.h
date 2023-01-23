/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/DeviceSummary.h>
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
namespace Braket
{
namespace Model
{
  class SearchDevicesResult
  {
  public:
    AWS_BRAKET_API SearchDevicesResult();
    AWS_BRAKET_API SearchDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BRAKET_API SearchDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>DeviceSummary</code> objects for devices that match the
     * specified filter values.</p>
     */
    inline const Aws::Vector<DeviceSummary>& GetDevices() const{ return m_devices; }

    /**
     * <p>An array of <code>DeviceSummary</code> objects for devices that match the
     * specified filter values.</p>
     */
    inline void SetDevices(const Aws::Vector<DeviceSummary>& value) { m_devices = value; }

    /**
     * <p>An array of <code>DeviceSummary</code> objects for devices that match the
     * specified filter values.</p>
     */
    inline void SetDevices(Aws::Vector<DeviceSummary>&& value) { m_devices = std::move(value); }

    /**
     * <p>An array of <code>DeviceSummary</code> objects for devices that match the
     * specified filter values.</p>
     */
    inline SearchDevicesResult& WithDevices(const Aws::Vector<DeviceSummary>& value) { SetDevices(value); return *this;}

    /**
     * <p>An array of <code>DeviceSummary</code> objects for devices that match the
     * specified filter values.</p>
     */
    inline SearchDevicesResult& WithDevices(Aws::Vector<DeviceSummary>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>An array of <code>DeviceSummary</code> objects for devices that match the
     * specified filter values.</p>
     */
    inline SearchDevicesResult& AddDevices(const DeviceSummary& value) { m_devices.push_back(value); return *this; }

    /**
     * <p>An array of <code>DeviceSummary</code> objects for devices that match the
     * specified filter values.</p>
     */
    inline SearchDevicesResult& AddDevices(DeviceSummary&& value) { m_devices.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used for pagination of results, or null if there are no additional
     * results. Use the token value in a subsequent request to continue results where
     * the previous request ended.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used for pagination of results, or null if there are no additional
     * results. Use the token value in a subsequent request to continue results where
     * the previous request ended.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token used for pagination of results, or null if there are no additional
     * results. Use the token value in a subsequent request to continue results where
     * the previous request ended.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token used for pagination of results, or null if there are no additional
     * results. Use the token value in a subsequent request to continue results where
     * the previous request ended.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token used for pagination of results, or null if there are no additional
     * results. Use the token value in a subsequent request to continue results where
     * the previous request ended.</p>
     */
    inline SearchDevicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used for pagination of results, or null if there are no additional
     * results. Use the token value in a subsequent request to continue results where
     * the previous request ended.</p>
     */
    inline SearchDevicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used for pagination of results, or null if there are no additional
     * results. Use the token value in a subsequent request to continue results where
     * the previous request ended.</p>
     */
    inline SearchDevicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DeviceSummary> m_devices;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
