/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

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
namespace CustomerProfiles
{
namespace Model
{
  class DeleteWorkflowResult
  {
  public:
    AWS_CUSTOMERPROFILES_API DeleteWorkflowResult();
    AWS_CUSTOMERPROFILES_API DeleteWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API DeleteWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
