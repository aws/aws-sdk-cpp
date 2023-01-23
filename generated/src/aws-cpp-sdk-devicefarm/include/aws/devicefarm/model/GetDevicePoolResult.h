/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/DevicePool.h>
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
   * <p>Represents the result of a get device pool request.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePoolResult">AWS
   * API Reference</a></p>
   */
  class GetDevicePoolResult
  {
  public:
    AWS_DEVICEFARM_API GetDevicePoolResult();
    AWS_DEVICEFARM_API GetDevicePoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetDevicePoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains information about the requested device pool.</p>
     */
    inline const DevicePool& GetDevicePool() const{ return m_devicePool; }

    /**
     * <p>An object that contains information about the requested device pool.</p>
     */
    inline void SetDevicePool(const DevicePool& value) { m_devicePool = value; }

    /**
     * <p>An object that contains information about the requested device pool.</p>
     */
    inline void SetDevicePool(DevicePool&& value) { m_devicePool = std::move(value); }

    /**
     * <p>An object that contains information about the requested device pool.</p>
     */
    inline GetDevicePoolResult& WithDevicePool(const DevicePool& value) { SetDevicePool(value); return *this;}

    /**
     * <p>An object that contains information about the requested device pool.</p>
     */
    inline GetDevicePoolResult& WithDevicePool(DevicePool&& value) { SetDevicePool(std::move(value)); return *this;}

  private:

    DevicePool m_devicePool;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
