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
#include <aws/swf/SWF_EXPORTS.h>

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
namespace SWF
{
namespace Model
{
  /**
   * <p>Status information about an activity task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTaskStatus">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API RecordActivityTaskHeartbeatResult
  {
  public:
    RecordActivityTaskHeartbeatResult();
    RecordActivityTaskHeartbeatResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RecordActivityTaskHeartbeatResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Set to <code>true</code> if cancellation of the task is requested.</p>
     */
    inline bool GetCancelRequested() const{ return m_cancelRequested; }

    /**
     * <p>Set to <code>true</code> if cancellation of the task is requested.</p>
     */
    inline void SetCancelRequested(bool value) { m_cancelRequested = value; }

    /**
     * <p>Set to <code>true</code> if cancellation of the task is requested.</p>
     */
    inline RecordActivityTaskHeartbeatResult& WithCancelRequested(bool value) { SetCancelRequested(value); return *this;}

  private:

    bool m_cancelRequested;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
