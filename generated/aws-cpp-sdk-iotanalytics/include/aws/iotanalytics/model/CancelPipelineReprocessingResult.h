﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>

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
namespace IoTAnalytics
{
namespace Model
{
  class AWS_IOTANALYTICS_API CancelPipelineReprocessingResult
  {
  public:
    CancelPipelineReprocessingResult();
    CancelPipelineReprocessingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CancelPipelineReprocessingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
