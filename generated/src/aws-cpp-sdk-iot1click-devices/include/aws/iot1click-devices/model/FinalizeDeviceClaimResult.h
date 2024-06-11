﻿/**
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
  class FinalizeDeviceClaimResult
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API FinalizeDeviceClaimResult();
    AWS_IOT1CLICKDEVICESSERVICE_API FinalizeDeviceClaimResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKDEVICESSERVICE_API FinalizeDeviceClaimResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The device's final claim state.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline void SetState(const Aws::String& value) { m_state = value; }
    inline void SetState(Aws::String&& value) { m_state = std::move(value); }
    inline void SetState(const char* value) { m_state.assign(value); }
    inline FinalizeDeviceClaimResult& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline FinalizeDeviceClaimResult& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline FinalizeDeviceClaimResult& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline FinalizeDeviceClaimResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline FinalizeDeviceClaimResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline FinalizeDeviceClaimResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
