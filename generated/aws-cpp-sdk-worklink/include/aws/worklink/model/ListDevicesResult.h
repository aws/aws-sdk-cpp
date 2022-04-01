﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/worklink/model/DeviceSummary.h>
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
namespace WorkLink
{
namespace Model
{
  class AWS_WORKLINK_API ListDevicesResult
  {
  public:
    ListDevicesResult();
    ListDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the devices.</p>
     */
    inline const Aws::Vector<DeviceSummary>& GetDevices() const{ return m_devices; }

    /**
     * <p>Information about the devices.</p>
     */
    inline void SetDevices(const Aws::Vector<DeviceSummary>& value) { m_devices = value; }

    /**
     * <p>Information about the devices.</p>
     */
    inline void SetDevices(Aws::Vector<DeviceSummary>&& value) { m_devices = std::move(value); }

    /**
     * <p>Information about the devices.</p>
     */
    inline ListDevicesResult& WithDevices(const Aws::Vector<DeviceSummary>& value) { SetDevices(value); return *this;}

    /**
     * <p>Information about the devices.</p>
     */
    inline ListDevicesResult& WithDevices(Aws::Vector<DeviceSummary>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>Information about the devices.</p>
     */
    inline ListDevicesResult& AddDevices(const DeviceSummary& value) { m_devices.push_back(value); return *this; }

    /**
     * <p>Information about the devices.</p>
     */
    inline ListDevicesResult& AddDevices(DeviceSummary&& value) { m_devices.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListDevicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListDevicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListDevicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DeviceSummary> m_devices;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
