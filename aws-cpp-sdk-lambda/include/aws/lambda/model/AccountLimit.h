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
   * <p>Provides limits of code size and concurrency associated with the current
   * account and region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AccountLimit">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API AccountLimit
  {
  public:
    AccountLimit();
    AccountLimit(const Aws::Utils::Json::JsonValue& jsonValue);
    AccountLimit& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Maximum size, in bytes, of a code package you can upload per region. The
     * default size is 75 GB. </p>
     */
    inline long long GetTotalCodeSize() const{ return m_totalCodeSize; }

    /**
     * <p>Maximum size, in bytes, of a code package you can upload per region. The
     * default size is 75 GB. </p>
     */
    inline void SetTotalCodeSize(long long value) { m_totalCodeSizeHasBeenSet = true; m_totalCodeSize = value; }

    /**
     * <p>Maximum size, in bytes, of a code package you can upload per region. The
     * default size is 75 GB. </p>
     */
    inline AccountLimit& WithTotalCodeSize(long long value) { SetTotalCodeSize(value); return *this;}

    /**
     * <p>Size, in bytes, of code/dependencies that you can zip into a deployment
     * package (uncompressed zip/jar size) for uploading. The default limit is 250
     * MB.</p>
     */
    inline long long GetCodeSizeUnzipped() const{ return m_codeSizeUnzipped; }

    /**
     * <p>Size, in bytes, of code/dependencies that you can zip into a deployment
     * package (uncompressed zip/jar size) for uploading. The default limit is 250
     * MB.</p>
     */
    inline void SetCodeSizeUnzipped(long long value) { m_codeSizeUnzippedHasBeenSet = true; m_codeSizeUnzipped = value; }

    /**
     * <p>Size, in bytes, of code/dependencies that you can zip into a deployment
     * package (uncompressed zip/jar size) for uploading. The default limit is 250
     * MB.</p>
     */
    inline AccountLimit& WithCodeSizeUnzipped(long long value) { SetCodeSizeUnzipped(value); return *this;}

    /**
     * <p>Size, in bytes, of a single zipped code/dependencies package you can upload
     * for your Lambda function(.zip/.jar file). Try using Amazon S3 for uploading
     * larger files. Default limit is 50 MB.</p>
     */
    inline long long GetCodeSizeZipped() const{ return m_codeSizeZipped; }

    /**
     * <p>Size, in bytes, of a single zipped code/dependencies package you can upload
     * for your Lambda function(.zip/.jar file). Try using Amazon S3 for uploading
     * larger files. Default limit is 50 MB.</p>
     */
    inline void SetCodeSizeZipped(long long value) { m_codeSizeZippedHasBeenSet = true; m_codeSizeZipped = value; }

    /**
     * <p>Size, in bytes, of a single zipped code/dependencies package you can upload
     * for your Lambda function(.zip/.jar file). Try using Amazon S3 for uploading
     * larger files. Default limit is 50 MB.</p>
     */
    inline AccountLimit& WithCodeSizeZipped(long long value) { SetCodeSizeZipped(value); return *this;}

    /**
     * <p>Number of simultaneous executions of your function per region. For more
     * information or to request a limit increase for concurrent executions, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Lambda
     * Function Concurrent Executions</a>. The default limit is 100.</p>
     */
    inline int GetConcurrentExecutions() const{ return m_concurrentExecutions; }

    /**
     * <p>Number of simultaneous executions of your function per region. For more
     * information or to request a limit increase for concurrent executions, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Lambda
     * Function Concurrent Executions</a>. The default limit is 100.</p>
     */
    inline void SetConcurrentExecutions(int value) { m_concurrentExecutionsHasBeenSet = true; m_concurrentExecutions = value; }

    /**
     * <p>Number of simultaneous executions of your function per region. For more
     * information or to request a limit increase for concurrent executions, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Lambda
     * Function Concurrent Executions</a>. The default limit is 100.</p>
     */
    inline AccountLimit& WithConcurrentExecutions(int value) { SetConcurrentExecutions(value); return *this;}

  private:
    long long m_totalCodeSize;
    bool m_totalCodeSizeHasBeenSet;
    long long m_codeSizeUnzipped;
    bool m_codeSizeUnzippedHasBeenSet;
    long long m_codeSizeZipped;
    bool m_codeSizeZippedHasBeenSet;
    int m_concurrentExecutions;
    bool m_concurrentExecutionsHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
