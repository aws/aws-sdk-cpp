/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_IOT1CLICKDEVICESSERVICE_API FinalizeDeviceClaimResult
  {
  public:
    FinalizeDeviceClaimResult();
    FinalizeDeviceClaimResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    FinalizeDeviceClaimResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline FinalizeDeviceClaimResult& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The device's final claim state.</p>
     */
    inline FinalizeDeviceClaimResult& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The device's final claim state.</p>
     */
    inline FinalizeDeviceClaimResult& WithState(const char* value) { SetState(value); return *this;}

  private:

    Aws::String m_state;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
