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
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>Provides code size usage and function count associated with the current
   * account and region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AccountUsage">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API AccountUsage
  {
  public:
    AccountUsage();
    AccountUsage(const Aws::Utils::Json::JsonValue& jsonValue);
    AccountUsage& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Total size, in bytes, of the account's deployment packages per region.</p>
     */
    inline long long GetTotalCodeSize() const{ return m_totalCodeSize; }

    /**
     * <p>Total size, in bytes, of the account's deployment packages per region.</p>
     */
    inline void SetTotalCodeSize(long long value) { m_totalCodeSizeHasBeenSet = true; m_totalCodeSize = value; }

    /**
     * <p>Total size, in bytes, of the account's deployment packages per region.</p>
     */
    inline AccountUsage& WithTotalCodeSize(long long value) { SetTotalCodeSize(value); return *this;}

    /**
     * <p>The number of your account's existing functions per region.</p>
     */
    inline long long GetFunctionCount() const{ return m_functionCount; }

    /**
     * <p>The number of your account's existing functions per region.</p>
     */
    inline void SetFunctionCount(long long value) { m_functionCountHasBeenSet = true; m_functionCount = value; }

    /**
     * <p>The number of your account's existing functions per region.</p>
     */
    inline AccountUsage& WithFunctionCount(long long value) { SetFunctionCount(value); return *this;}

  private:
    long long m_totalCodeSize;
    bool m_totalCodeSizeHasBeenSet;
    long long m_functionCount;
    bool m_functionCountHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
