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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/DevicePoolCompatibilityResult.h>

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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of describe device pool compatibility
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePoolCompatibilityResult">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API GetDevicePoolCompatibilityResult
  {
  public:
    GetDevicePoolCompatibilityResult();
    GetDevicePoolCompatibilityResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDevicePoolCompatibilityResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about compatible devices.</p>
     */
    inline const Aws::Vector<DevicePoolCompatibilityResult>& GetCompatibleDevices() const{ return m_compatibleDevices; }

    /**
     * <p>Information about compatible devices.</p>
     */
    inline void SetCompatibleDevices(const Aws::Vector<DevicePoolCompatibilityResult>& value) { m_compatibleDevices = value; }

    /**
     * <p>Information about compatible devices.</p>
     */
    inline void SetCompatibleDevices(Aws::Vector<DevicePoolCompatibilityResult>&& value) { m_compatibleDevices = value; }

    /**
     * <p>Information about compatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& WithCompatibleDevices(const Aws::Vector<DevicePoolCompatibilityResult>& value) { SetCompatibleDevices(value); return *this;}

    /**
     * <p>Information about compatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& WithCompatibleDevices(Aws::Vector<DevicePoolCompatibilityResult>&& value) { SetCompatibleDevices(value); return *this;}

    /**
     * <p>Information about compatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& AddCompatibleDevices(const DevicePoolCompatibilityResult& value) { m_compatibleDevices.push_back(value); return *this; }

    /**
     * <p>Information about compatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& AddCompatibleDevices(DevicePoolCompatibilityResult&& value) { m_compatibleDevices.push_back(value); return *this; }

    /**
     * <p>Information about incompatible devices.</p>
     */
    inline const Aws::Vector<DevicePoolCompatibilityResult>& GetIncompatibleDevices() const{ return m_incompatibleDevices; }

    /**
     * <p>Information about incompatible devices.</p>
     */
    inline void SetIncompatibleDevices(const Aws::Vector<DevicePoolCompatibilityResult>& value) { m_incompatibleDevices = value; }

    /**
     * <p>Information about incompatible devices.</p>
     */
    inline void SetIncompatibleDevices(Aws::Vector<DevicePoolCompatibilityResult>&& value) { m_incompatibleDevices = value; }

    /**
     * <p>Information about incompatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& WithIncompatibleDevices(const Aws::Vector<DevicePoolCompatibilityResult>& value) { SetIncompatibleDevices(value); return *this;}

    /**
     * <p>Information about incompatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& WithIncompatibleDevices(Aws::Vector<DevicePoolCompatibilityResult>&& value) { SetIncompatibleDevices(value); return *this;}

    /**
     * <p>Information about incompatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& AddIncompatibleDevices(const DevicePoolCompatibilityResult& value) { m_incompatibleDevices.push_back(value); return *this; }

    /**
     * <p>Information about incompatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& AddIncompatibleDevices(DevicePoolCompatibilityResult&& value) { m_incompatibleDevices.push_back(value); return *this; }

  private:
    Aws::Vector<DevicePoolCompatibilityResult> m_compatibleDevices;
    Aws::Vector<DevicePoolCompatibilityResult> m_incompatibleDevices;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
