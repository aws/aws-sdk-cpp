/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>

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
namespace IoT1ClickProjects
{
namespace Model
{
  class DisassociateDeviceFromPlacementResult
  {
  public:
    AWS_IOT1CLICKPROJECTS_API DisassociateDeviceFromPlacementResult();
    AWS_IOT1CLICKPROJECTS_API DisassociateDeviceFromPlacementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKPROJECTS_API DisassociateDeviceFromPlacementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
