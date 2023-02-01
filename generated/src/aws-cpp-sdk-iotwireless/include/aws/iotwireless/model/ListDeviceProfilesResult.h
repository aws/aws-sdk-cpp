/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/DeviceProfile.h>
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
namespace IoTWireless
{
namespace Model
{
  class ListDeviceProfilesResult
  {
  public:
    AWS_IOTWIRELESS_API ListDeviceProfilesResult();
    AWS_IOTWIRELESS_API ListDeviceProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListDeviceProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListDeviceProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListDeviceProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListDeviceProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of device profiles.</p>
     */
    inline const Aws::Vector<DeviceProfile>& GetDeviceProfileList() const{ return m_deviceProfileList; }

    /**
     * <p>The list of device profiles.</p>
     */
    inline void SetDeviceProfileList(const Aws::Vector<DeviceProfile>& value) { m_deviceProfileList = value; }

    /**
     * <p>The list of device profiles.</p>
     */
    inline void SetDeviceProfileList(Aws::Vector<DeviceProfile>&& value) { m_deviceProfileList = std::move(value); }

    /**
     * <p>The list of device profiles.</p>
     */
    inline ListDeviceProfilesResult& WithDeviceProfileList(const Aws::Vector<DeviceProfile>& value) { SetDeviceProfileList(value); return *this;}

    /**
     * <p>The list of device profiles.</p>
     */
    inline ListDeviceProfilesResult& WithDeviceProfileList(Aws::Vector<DeviceProfile>&& value) { SetDeviceProfileList(std::move(value)); return *this;}

    /**
     * <p>The list of device profiles.</p>
     */
    inline ListDeviceProfilesResult& AddDeviceProfileList(const DeviceProfile& value) { m_deviceProfileList.push_back(value); return *this; }

    /**
     * <p>The list of device profiles.</p>
     */
    inline ListDeviceProfilesResult& AddDeviceProfileList(DeviceProfile&& value) { m_deviceProfileList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<DeviceProfile> m_deviceProfileList;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
