﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>

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
namespace KendraRanking
{
namespace Model
{
  /**
   * <p>If the action is successful, the service sends back an HTTP 200 response with
   * an empty HTTP body.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/UntagResourceResponse">AWS
   * API Reference</a></p>
   */
  class UntagResourceResult
  {
  public:
    AWS_KENDRARANKING_API UntagResourceResult();
    AWS_KENDRARANKING_API UntagResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRARANKING_API UntagResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
