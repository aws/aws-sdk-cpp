/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>

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
namespace CloudTrail
{
namespace Model
{
  class DeleteResourcePolicyResult
  {
  public:
    AWS_CLOUDTRAIL_API DeleteResourcePolicyResult();
    AWS_CLOUDTRAIL_API DeleteResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API DeleteResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
