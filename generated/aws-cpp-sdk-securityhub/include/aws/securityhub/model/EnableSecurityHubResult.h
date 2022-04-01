/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
namespace SecurityHub
{
namespace Model
{
  class AWS_SECURITYHUB_API EnableSecurityHubResult
  {
  public:
    EnableSecurityHubResult();
    EnableSecurityHubResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    EnableSecurityHubResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
