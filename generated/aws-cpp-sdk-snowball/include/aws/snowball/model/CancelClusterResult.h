﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>

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
namespace Snowball
{
namespace Model
{
  class AWS_SNOWBALL_API CancelClusterResult
  {
  public:
    CancelClusterResult();
    CancelClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CancelClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
