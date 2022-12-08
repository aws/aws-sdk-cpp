/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT1ClickDevicesService
{
namespace Model
{
  class InitiateDeviceClaimResult
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API InitiateDeviceClaimResult();
    AWS_IOT1CLICKDEVICESSERVICE_API InitiateDeviceClaimResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKDEVICESSERVICE_API InitiateDeviceClaimResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The device's final claim state.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The device's final claim state.</p>
     */
    inline void SetState(const Aws::String& value) { m_state = value; }

    /**
     * <p>The device's final claim state.</p>
     */
    inline void SetState(Aws::String&& value) { m_state = std::move(value); }

    /**
     * <p>The device's final claim state.</p>
     */
    inline void SetState(const char* value) { m_state.assign(value); }

    /**
     * <p>The device's final claim state.</p>
     */
    inline InitiateDeviceClaimResult& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The device's final claim state.</p>
     */
    inline InitiateDeviceClaimResult& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The device's final claim state.</p>
     */
    inline InitiateDeviceClaimResult& WithState(const char* value) { SetState(value); return *this;}

  private:

    Aws::String m_state;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
