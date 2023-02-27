/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>

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
namespace InternetMonitor
{
namespace Model
{
  class DeleteMonitorResult
  {
  public:
    AWS_INTERNETMONITOR_API DeleteMonitorResult();
    AWS_INTERNETMONITOR_API DeleteMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INTERNETMONITOR_API DeleteMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
