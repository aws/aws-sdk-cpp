/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>

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
namespace ApplicationInsights
{
namespace Model
{
  class UpdateComponentResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API UpdateComponentResult();
    AWS_APPLICATIONINSIGHTS_API UpdateComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API UpdateComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
