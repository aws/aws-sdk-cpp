/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>

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
namespace CodeGuruProfiler
{
namespace Model
{
  class UntagResourceResult
  {
  public:
    AWS_CODEGURUPROFILER_API UntagResourceResult();
    AWS_CODEGURUPROFILER_API UntagResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API UntagResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
