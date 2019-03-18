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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides the details of the <code>ActivityTaskCancelRequested</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTaskCancelRequestedEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API ActivityTaskCancelRequestedEventAttributes
  {
  public:
    ActivityTaskCancelRequestedEventAttributes();
    ActivityTaskCancelRequestedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    ActivityTaskCancelRequestedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>RequestCancelActivityTask</code>
     * decision for this cancellation request. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>RequestCancelActivityTask</code>
     * decision for this cancellation request. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>RequestCancelActivityTask</code>
     * decision for this cancellation request. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>RequestCancelActivityTask</code>
     * decision for this cancellation request. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline ActivityTaskCancelRequestedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}


    /**
     * <p>The unique ID of the task.</p>
     */
    inline const Aws::String& GetActivityId() const{ return m_activityId; }

    /**
     * <p>The unique ID of the task.</p>
     */
    inline bool ActivityIdHasBeenSet() const { return m_activityIdHasBeenSet; }

    /**
     * <p>The unique ID of the task.</p>
     */
    inline void SetActivityId(const Aws::String& value) { m_activityIdHasBeenSet = true; m_activityId = value; }

    /**
     * <p>The unique ID of the task.</p>
     */
    inline void SetActivityId(Aws::String&& value) { m_activityIdHasBeenSet = true; m_activityId = std::move(value); }

    /**
     * <p>The unique ID of the task.</p>
     */
    inline void SetActivityId(const char* value) { m_activityIdHasBeenSet = true; m_activityId.assign(value); }

    /**
     * <p>The unique ID of the task.</p>
     */
    inline ActivityTaskCancelRequestedEventAttributes& WithActivityId(const Aws::String& value) { SetActivityId(value); return *this;}

    /**
     * <p>The unique ID of the task.</p>
     */
    inline ActivityTaskCancelRequestedEventAttributes& WithActivityId(Aws::String&& value) { SetActivityId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the task.</p>
     */
    inline ActivityTaskCancelRequestedEventAttributes& WithActivityId(const char* value) { SetActivityId(value); return *this;}

  private:

    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet;

    Aws::String m_activityId;
    bool m_activityIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
