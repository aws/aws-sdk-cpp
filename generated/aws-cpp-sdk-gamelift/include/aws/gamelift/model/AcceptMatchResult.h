﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>

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
namespace GameLift
{
namespace Model
{
  class AWS_GAMELIFT_API AcceptMatchResult
  {
  public:
    AcceptMatchResult();
    AcceptMatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AcceptMatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
