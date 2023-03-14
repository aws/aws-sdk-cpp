/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Device.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a get device request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDeviceResult">AWS
   * API Reference</a></p>
   */
  class GetDeviceResult
  {
  public:
    AWS_DEVICEFARM_API GetDeviceResult();
    AWS_DEVICEFARM_API GetDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains information about the requested device.</p>
     */
    inline const Device& GetDevice() const{ return m_device; }

    /**
     * <p>An object that contains information about the requested device.</p>
     */
    inline void SetDevice(const Device& value) { m_device = value; }

    /**
     * <p>An object that contains information about the requested device.</p>
     */
    inline void SetDevice(Device&& value) { m_device = std::move(value); }

    /**
     * <p>An object that contains information about the requested device.</p>
     */
    inline GetDeviceResult& WithDevice(const Device& value) { SetDevice(value); return *this;}

    /**
     * <p>An object that contains information about the requested device.</p>
     */
    inline GetDeviceResult& WithDevice(Device&& value) { SetDevice(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDeviceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDeviceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDeviceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Device m_device;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
