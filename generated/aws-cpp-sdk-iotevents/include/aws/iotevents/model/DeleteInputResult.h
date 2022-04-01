﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>

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
namespace IoTEvents
{
namespace Model
{
  class AWS_IOTEVENTS_API DeleteInputResult
  {
  public:
    DeleteInputResult();
    DeleteInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
