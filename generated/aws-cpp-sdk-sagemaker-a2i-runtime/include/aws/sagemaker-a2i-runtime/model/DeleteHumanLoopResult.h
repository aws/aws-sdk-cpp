/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>

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
namespace AugmentedAIRuntime
{
namespace Model
{
  class AWS_AUGMENTEDAIRUNTIME_API DeleteHumanLoopResult
  {
  public:
    DeleteHumanLoopResult();
    DeleteHumanLoopResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteHumanLoopResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
