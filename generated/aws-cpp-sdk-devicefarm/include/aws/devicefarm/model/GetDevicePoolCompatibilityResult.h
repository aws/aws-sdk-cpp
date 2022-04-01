﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/DevicePoolCompatibilityResult.h>
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
    GetDevicePoolCompatibilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDevicePoolCompatibilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetCompatibleDevices(Aws::Vector<DevicePoolCompatibilityResult>&& value) { m_compatibleDevices = std::move(value); }

    /**
     * <p>Information about compatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& WithCompatibleDevices(const Aws::Vector<DevicePoolCompatibilityResult>& value) { SetCompatibleDevices(value); return *this;}

    /**
     * <p>Information about compatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& WithCompatibleDevices(Aws::Vector<DevicePoolCompatibilityResult>&& value) { SetCompatibleDevices(std::move(value)); return *this;}

    /**
     * <p>Information about compatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& AddCompatibleDevices(const DevicePoolCompatibilityResult& value) { m_compatibleDevices.push_back(value); return *this; }

    /**
     * <p>Information about compatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& AddCompatibleDevices(DevicePoolCompatibilityResult&& value) { m_compatibleDevices.push_back(std::move(value)); return *this; }


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
    inline void SetIncompatibleDevices(Aws::Vector<DevicePoolCompatibilityResult>&& value) { m_incompatibleDevices = std::move(value); }

    /**
     * <p>Information about incompatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& WithIncompatibleDevices(const Aws::Vector<DevicePoolCompatibilityResult>& value) { SetIncompatibleDevices(value); return *this;}

    /**
     * <p>Information about incompatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& WithIncompatibleDevices(Aws::Vector<DevicePoolCompatibilityResult>&& value) { SetIncompatibleDevices(std::move(value)); return *this;}

    /**
     * <p>Information about incompatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& AddIncompatibleDevices(const DevicePoolCompatibilityResult& value) { m_incompatibleDevices.push_back(value); return *this; }

    /**
     * <p>Information about incompatible devices.</p>
     */
    inline GetDevicePoolCompatibilityResult& AddIncompatibleDevices(DevicePoolCompatibilityResult&& value) { m_incompatibleDevices.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DevicePoolCompatibilityResult> m_compatibleDevices;

    Aws::Vector<DevicePoolCompatibilityResult> m_incompatibleDevices;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
