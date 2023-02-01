/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>

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
namespace CodeDeploy
{
namespace Model
{
  class DeleteResourcesByExternalIdResult
  {
  public:
    AWS_CODEDEPLOY_API DeleteResourcesByExternalIdResult();
    AWS_CODEDEPLOY_API DeleteResourcesByExternalIdResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API DeleteResourcesByExternalIdResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
