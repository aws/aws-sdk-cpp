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

  /**
   * <p>Limits that are related to concurrency and code storage. All file and storage
   * sizes are in bytes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AccountLimit">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API AccountLimit
  {
  public:
    AccountLimit();
    AccountLimit(Aws::Utils::Json::JsonView jsonValue);
    AccountLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of storage space that you can use for all deployment packages and
     * layer archives.</p>
     */
    inline long long GetTotalCodeSize() const{ return m_totalCodeSize; }

    /**
     * <p>The amount of storage space that you can use for all deployment packages and
     * layer archives.</p>
     */
    inline bool TotalCodeSizeHasBeenSet() const { return m_totalCodeSizeHasBeenSet; }

    /**
     * <p>The amount of storage space that you can use for all deployment packages and
     * layer archives.</p>
     */
    inline void SetTotalCodeSize(long long value) { m_totalCodeSizeHasBeenSet = true; m_totalCodeSize = value; }

    /**
     * <p>The amount of storage space that you can use for all deployment packages and
     * layer archives.</p>
     */
    inline AccountLimit& WithTotalCodeSize(long long value) { SetTotalCodeSize(value); return *this;}


    /**
     * <p>The maximum size of your function's code and layers when they're
     * extracted.</p>
     */
    inline long long GetCodeSizeUnzipped() const{ return m_codeSizeUnzipped; }

    /**
     * <p>The maximum size of your function's code and layers when they're
     * extracted.</p>
     */
    inline bool CodeSizeUnzippedHasBeenSet() const { return m_codeSizeUnzippedHasBeenSet; }

    /**
     * <p>The maximum size of your function's code and layers when they're
     * extracted.</p>
     */
    inline void SetCodeSizeUnzipped(long long value) { m_codeSizeUnzippedHasBeenSet = true; m_codeSizeUnzipped = value; }

    /**
     * <p>The maximum size of your function's code and layers when they're
     * extracted.</p>
     */
    inline AccountLimit& WithCodeSizeUnzipped(long long value) { SetCodeSizeUnzipped(value); return *this;}


    /**
     * <p>The maximum size of a deployment package when it's uploaded directly to AWS
     * Lambda. Use Amazon S3 for larger files.</p>
     */
    inline long long GetCodeSizeZipped() const{ return m_codeSizeZipped; }

    /**
     * <p>The maximum size of a deployment package when it's uploaded directly to AWS
     * Lambda. Use Amazon S3 for larger files.</p>
     */
    inline bool CodeSizeZippedHasBeenSet() const { return m_codeSizeZippedHasBeenSet; }

    /**
     * <p>The maximum size of a deployment package when it's uploaded directly to AWS
     * Lambda. Use Amazon S3 for larger files.</p>
     */
    inline void SetCodeSizeZipped(long long value) { m_codeSizeZippedHasBeenSet = true; m_codeSizeZipped = value; }

    /**
     * <p>The maximum size of a deployment package when it's uploaded directly to AWS
     * Lambda. Use Amazon S3 for larger files.</p>
     */
    inline AccountLimit& WithCodeSizeZipped(long long value) { SetCodeSizeZipped(value); return *this;}


    /**
     * <p>The maximum number of simultaneous function executions.</p>
     */
    inline int GetConcurrentExecutions() const{ return m_concurrentExecutions; }

    /**
     * <p>The maximum number of simultaneous function executions.</p>
     */
    inline bool ConcurrentExecutionsHasBeenSet() const { return m_concurrentExecutionsHasBeenSet; }

    /**
     * <p>The maximum number of simultaneous function executions.</p>
     */
    inline void SetConcurrentExecutions(int value) { m_concurrentExecutionsHasBeenSet = true; m_concurrentExecutions = value; }

    /**
     * <p>The maximum number of simultaneous function executions.</p>
     */
    inline AccountLimit& WithConcurrentExecutions(int value) { SetConcurrentExecutions(value); return *this;}


    /**
     * <p>The maximum number of simultaneous function executions, minus the capacity
     * that's reserved for individual functions with <a>PutFunctionConcurrency</a>.</p>
     */
    inline int GetUnreservedConcurrentExecutions() const{ return m_unreservedConcurrentExecutions; }

    /**
     * <p>The maximum number of simultaneous function executions, minus the capacity
     * that's reserved for individual functions with <a>PutFunctionConcurrency</a>.</p>
     */
    inline bool UnreservedConcurrentExecutionsHasBeenSet() const { return m_unreservedConcurrentExecutionsHasBeenSet; }

    /**
     * <p>The maximum number of simultaneous function executions, minus the capacity
     * that's reserved for individual functions with <a>PutFunctionConcurrency</a>.</p>
     */
    inline void SetUnreservedConcurrentExecutions(int value) { m_unreservedConcurrentExecutionsHasBeenSet = true; m_unreservedConcurrentExecutions = value; }

    /**
     * <p>The maximum number of simultaneous function executions, minus the capacity
     * that's reserved for individual functions with <a>PutFunctionConcurrency</a>.</p>
     */
    inline AccountLimit& WithUnreservedConcurrentExecutions(int value) { SetUnreservedConcurrentExecutions(value); return *this;}

  private:

    long long m_totalCodeSize;
    bool m_totalCodeSizeHasBeenSet;

    long long m_codeSizeUnzipped;
    bool m_codeSizeUnzippedHasBeenSet;

    long long m_codeSizeZipped;
    bool m_codeSizeZippedHasBeenSet;

    int m_concurrentExecutions;
    bool m_concurrentExecutionsHasBeenSet;

    int m_unreservedConcurrentExecutions;
    bool m_unreservedConcurrentExecutionsHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
