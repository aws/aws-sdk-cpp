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
  class AWS_DATASYNC_API StartTaskExecutionResult
  {
  public:
    StartTaskExecutionResult();
    StartTaskExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartTaskExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the specific task execution that was
     * started.</p>
     */
    inline const Aws::String& GetTaskExecutionArn() const{ return m_taskExecutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specific task execution that was
     * started.</p>
     */
    inline void SetTaskExecutionArn(const Aws::String& value) { m_taskExecutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specific task execution that was
     * started.</p>
     */
    inline void SetTaskExecutionArn(Aws::String&& value) { m_taskExecutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specific task execution that was
     * started.</p>
     */
    inline void SetTaskExecutionArn(const char* value) { m_taskExecutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specific task execution that was
     * started.</p>
     */
    inline StartTaskExecutionResult& WithTaskExecutionArn(const Aws::String& value) { SetTaskExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specific task execution that was
     * started.</p>
     */
    inline StartTaskExecutionResult& WithTaskExecutionArn(Aws::String&& value) { SetTaskExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specific task execution that was
     * started.</p>
     */
    inline StartTaskExecutionResult& WithTaskExecutionArn(const char* value) { SetTaskExecutionArn(value); return *this;}

  private:

    Aws::String m_taskExecutionArn;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
