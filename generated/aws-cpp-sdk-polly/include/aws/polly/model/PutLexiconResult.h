/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>

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
namespace Polly
{
namespace Model
{
  class AWS_POLLY_API PutLexiconResult
  {
  public:
    PutLexiconResult();
    PutLexiconResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutLexiconResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace Polly
} // namespace Aws
