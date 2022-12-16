/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace DataSync
{
namespace Model
{
  /**
   * <p>StartTaskExecutionResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/StartTaskExecutionResponse">AWS
   * API Reference</a></p>
   */
  class StartTaskExecutionResult
  {
  public:
    AWS_DATASYNC_API StartTaskExecutionResult();
    AWS_DATASYNC_API StartTaskExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API StartTaskExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the running task execution.</p>
     */
    inline const Aws::String& GetTaskExecutionArn() const{ return m_taskExecutionArn; }

    /**
     * <p>The ARN of the running task execution.</p>
     */
    inline void SetTaskExecutionArn(const Aws::String& value) { m_taskExecutionArn = value; }

    /**
     * <p>The ARN of the running task execution.</p>
     */
    inline void SetTaskExecutionArn(Aws::String&& value) { m_taskExecutionArn = std::move(value); }

    /**
     * <p>The ARN of the running task execution.</p>
     */
    inline void SetTaskExecutionArn(const char* value) { m_taskExecutionArn.assign(value); }

    /**
     * <p>The ARN of the running task execution.</p>
     */
    inline StartTaskExecutionResult& WithTaskExecutionArn(const Aws::String& value) { SetTaskExecutionArn(value); return *this;}

    /**
     * <p>The ARN of the running task execution.</p>
     */
    inline StartTaskExecutionResult& WithTaskExecutionArn(Aws::String&& value) { SetTaskExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the running task execution.</p>
     */
    inline StartTaskExecutionResult& WithTaskExecutionArn(const char* value) { SetTaskExecutionArn(value); return *this;}

  private:

    Aws::String m_taskExecutionArn;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
