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
   * <p>Contains the count of tasks in a task list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/PendingTaskCount">AWS
   * API Reference</a></p>
   */
  class CountPendingActivityTasksResult
  {
  public:
    AWS_SWF_API CountPendingActivityTasksResult();
    AWS_SWF_API CountPendingActivityTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API CountPendingActivityTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of tasks in the task list.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of tasks in the task list.</p>
     */
    inline void SetCount(int value) { m_count = value; }

    /**
     * <p>The number of tasks in the task list.</p>
     */
    inline CountPendingActivityTasksResult& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>If set to true, indicates that the actual count was more than the maximum
     * supported by this API and the count returned is the truncated value.</p>
     */
    inline bool GetTruncated() const{ return m_truncated; }

    /**
     * <p>If set to true, indicates that the actual count was more than the maximum
     * supported by this API and the count returned is the truncated value.</p>
     */
    inline void SetTruncated(bool value) { m_truncated = value; }

    /**
     * <p>If set to true, indicates that the actual count was more than the maximum
     * supported by this API and the count returned is the truncated value.</p>
     */
    inline CountPendingActivityTasksResult& WithTruncated(bool value) { SetTruncated(value); return *this;}

  private:

    int m_count;

    bool m_truncated;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
