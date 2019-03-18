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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  class AWS_LAMBDA_API Concurrency
  {
  public:
    Concurrency();
    Concurrency(Aws::Utils::Json::JsonView jsonValue);
    Concurrency& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline bool ReservedConcurrentExecutionsHasBeenSet() const { return m_reservedConcurrentExecutionsHasBeenSet; }

    /**
     * <p>The number of concurrent executions that are reserved for this function. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
     * Concurrency</a>.</p>
     */
    inline void SetReservedConcurrentExecutions(int value) { m_reservedConcurrentExecutionsHasBeenSet = true; m_reservedConcurrentExecutions = value; }

    /**
     * <p>The number of concurrent executions that are reserved for this function. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
     * Concurrency</a>.</p>
     */
    inline Concurrency& WithReservedConcurrentExecutions(int value) { SetReservedConcurrentExecutions(value); return *this;}

  private:

    int m_reservedConcurrentExecutions;
    bool m_reservedConcurrentExecutionsHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
