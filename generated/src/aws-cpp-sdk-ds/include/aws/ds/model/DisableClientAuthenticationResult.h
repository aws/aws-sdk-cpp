/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>

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
namespace DirectoryService
{
namespace Model
{
  class DisableClientAuthenticationResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DisableClientAuthenticationResult();
    AWS_DIRECTORYSERVICE_API DisableClientAuthenticationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DisableClientAuthenticationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
