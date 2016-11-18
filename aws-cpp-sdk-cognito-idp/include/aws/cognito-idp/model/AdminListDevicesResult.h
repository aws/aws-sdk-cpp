﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/DeviceType.h>

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
namespace CognitoIdentityProvider
{
namespace Model
{
  /**
   * <p>Lists the device's response, as an administrator.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AdminListDevicesResult
  {
  public:
    AdminListDevicesResult();
    AdminListDevicesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AdminListDevicesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The devices in the list of devices response.</p>
     */
    inline const Aws::Vector<DeviceType>& GetDevices() const{ return m_devices; }

    /**
     * <p>The devices in the list of devices response.</p>
     */
    inline void SetDevices(const Aws::Vector<DeviceType>& value) { m_devices = value; }

    /**
     * <p>The devices in the list of devices response.</p>
     */
    inline void SetDevices(Aws::Vector<DeviceType>&& value) { m_devices = value; }

    /**
     * <p>The devices in the list of devices response.</p>
     */
    inline AdminListDevicesResult& WithDevices(const Aws::Vector<DeviceType>& value) { SetDevices(value); return *this;}

    /**
     * <p>The devices in the list of devices response.</p>
     */
    inline AdminListDevicesResult& WithDevices(Aws::Vector<DeviceType>&& value) { SetDevices(value); return *this;}

    /**
     * <p>The devices in the list of devices response.</p>
     */
    inline AdminListDevicesResult& AddDevices(const DeviceType& value) { m_devices.push_back(value); return *this; }

    /**
     * <p>The devices in the list of devices response.</p>
     */
    inline AdminListDevicesResult& AddDevices(DeviceType&& value) { m_devices.push_back(value); return *this; }

    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline AdminListDevicesResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline AdminListDevicesResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline AdminListDevicesResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}

  private:
    Aws::Vector<DeviceType> m_devices;
    Aws::String m_paginationToken;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
