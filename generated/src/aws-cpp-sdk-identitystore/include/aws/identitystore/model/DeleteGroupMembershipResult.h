/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>

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
namespace IdentityStore
{
namespace Model
{
  class DeleteGroupMembershipResult
  {
  public:
    AWS_IDENTITYSTORE_API DeleteGroupMembershipResult();
    AWS_IDENTITYSTORE_API DeleteGroupMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IDENTITYSTORE_API DeleteGroupMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
