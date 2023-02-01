/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>

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
namespace IoTSecureTunneling
{
namespace Model
{
  class TagResourceResult
  {
  public:
    AWS_IOTSECURETUNNELING_API TagResourceResult();
    AWS_IOTSECURETUNNELING_API TagResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSECURETUNNELING_API TagResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
