/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>

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
namespace Lambda
{
namespace Model
{
  class AWS_LAMBDA_API PutFunctionConcurrencyResult
  {
  public:
    PutFunctionConcurrencyResult();
    PutFunctionConcurrencyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutFunctionConcurrencyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of concurrent executions that are reserved for this function. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
     * Concurrency</a>.</p>
     */
    inline int GetReservedConcurrentExecutions() const{ return m_reservedConcurrentExecutions; }

    /**
     * <p>The number of concurrent executions that are reserved for this function. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
     * Concurrency</a>.</p>
     */
    inline void SetReservedConcurrentExecutions(int value) { m_reservedConcurrentExecutions = value; }

    /**
     * <p>The number of concurrent executions that are reserved for this function. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
     * Concurrency</a>.</p>
     */
    inline PutFunctionConcurrencyResult& WithReservedConcurrentExecutions(int value) { SetReservedConcurrentExecutions(value); return *this;}

  private:

    int m_reservedConcurrentExecutions;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
