/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>

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
namespace ApplicationAutoScaling
{
namespace Model
{
  class DeleteScheduledActionResult
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API DeleteScheduledActionResult();
    AWS_APPLICATIONAUTOSCALING_API DeleteScheduledActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONAUTOSCALING_API DeleteScheduledActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
