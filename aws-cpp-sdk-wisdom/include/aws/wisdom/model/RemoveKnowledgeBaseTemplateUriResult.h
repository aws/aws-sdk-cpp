/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>

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
namespace ConnectWisdomService
{
namespace Model
{
  class RemoveKnowledgeBaseTemplateUriResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API RemoveKnowledgeBaseTemplateUriResult();
    AWS_CONNECTWISDOMSERVICE_API RemoveKnowledgeBaseTemplateUriResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API RemoveKnowledgeBaseTemplateUriResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
