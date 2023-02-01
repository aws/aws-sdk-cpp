/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetFunctionConcurrencyResult
  {
  public:
    AWS_LAMBDA_API GetFunctionConcurrencyResult();
    AWS_LAMBDA_API GetFunctionConcurrencyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API GetFunctionConcurrencyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of simultaneous executions that are reserved for the function.</p>
     */
    inline int GetReservedConcurrentExecutions() const{ return m_reservedConcurrentExecutions; }

    /**
     * <p>The number of simultaneous executions that are reserved for the function.</p>
     */
    inline void SetReservedConcurrentExecutions(int value) { m_reservedConcurrentExecutions = value; }

    /**
     * <p>The number of simultaneous executions that are reserved for the function.</p>
     */
    inline GetFunctionConcurrencyResult& WithReservedConcurrentExecutions(int value) { SetReservedConcurrentExecutions(value); return *this;}

  private:

    int m_reservedConcurrentExecutions;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
