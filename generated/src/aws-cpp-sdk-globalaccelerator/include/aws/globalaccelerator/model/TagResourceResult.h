/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>

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
namespace GlobalAccelerator
{
namespace Model
{
  class TagResourceResult
  {
  public:
    AWS_GLOBALACCELERATOR_API TagResourceResult();
    AWS_GLOBALACCELERATOR_API TagResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API TagResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
