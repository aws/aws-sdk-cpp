/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

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
namespace IoTWireless
{
namespace Model
{
  class StartBulkDisassociateWirelessDeviceFromMulticastGroupResult
  {
  public:
    AWS_IOTWIRELESS_API StartBulkDisassociateWirelessDeviceFromMulticastGroupResult();
    AWS_IOTWIRELESS_API StartBulkDisassociateWirelessDeviceFromMulticastGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API StartBulkDisassociateWirelessDeviceFromMulticastGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
