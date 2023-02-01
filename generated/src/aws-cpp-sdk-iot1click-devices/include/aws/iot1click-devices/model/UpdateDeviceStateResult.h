/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>

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
  class UpdateDeviceStateResult
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API UpdateDeviceStateResult();
    AWS_IOT1CLICKDEVICESSERVICE_API UpdateDeviceStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKDEVICESSERVICE_API UpdateDeviceStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
