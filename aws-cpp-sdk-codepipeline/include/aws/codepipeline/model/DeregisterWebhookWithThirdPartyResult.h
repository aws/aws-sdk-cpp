/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>

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
namespace CodePipeline
{
namespace Model
{
  class AWS_CODEPIPELINE_API DeregisterWebhookWithThirdPartyResult
  {
  public:
    DeregisterWebhookWithThirdPartyResult();
    DeregisterWebhookWithThirdPartyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeregisterWebhookWithThirdPartyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
