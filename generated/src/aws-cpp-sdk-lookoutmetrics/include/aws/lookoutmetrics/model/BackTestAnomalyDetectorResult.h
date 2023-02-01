/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>

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
namespace LookoutMetrics
{
namespace Model
{
  class BackTestAnomalyDetectorResult
  {
  public:
    AWS_LOOKOUTMETRICS_API BackTestAnomalyDetectorResult();
    AWS_LOOKOUTMETRICS_API BackTestAnomalyDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API BackTestAnomalyDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
