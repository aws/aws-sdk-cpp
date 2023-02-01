/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>

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
namespace EventBridge
{
namespace Model
{
  class DeleteArchiveResult
  {
  public:
    AWS_EVENTBRIDGE_API DeleteArchiveResult();
    AWS_EVENTBRIDGE_API DeleteArchiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API DeleteArchiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
