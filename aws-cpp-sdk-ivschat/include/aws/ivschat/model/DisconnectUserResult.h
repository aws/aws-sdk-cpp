/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>

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
namespace ivschat
{
namespace Model
{
  class AWS_IVSCHAT_API DisconnectUserResult
  {
  public:
    DisconnectUserResult();
    DisconnectUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DisconnectUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
