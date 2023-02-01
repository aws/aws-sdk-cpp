/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>

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
namespace IoTDeviceAdvisor
{
namespace Model
{
  class StopSuiteRunResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API StopSuiteRunResult();
    AWS_IOTDEVICEADVISOR_API StopSuiteRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API StopSuiteRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
