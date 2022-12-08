/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RecordActivityTaskHeartbeatResult
  {
  public:
    AWS_SWF_API RecordActivityTaskHeartbeatResult();
    AWS_SWF_API RecordActivityTaskHeartbeatResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API RecordActivityTaskHeartbeatResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
