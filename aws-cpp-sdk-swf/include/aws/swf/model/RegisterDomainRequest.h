/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API RegisterDomainRequest : public SWFRequest
  {
  public:
    RegisterDomainRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Name of the domain to register. The name must be unique in the region that
     * the domain is registered in.</p> <p>The specified string must not start or end
     * with whitespace. It must not contain a <code>:</code> (colon), <code>/</code>
     * (slash), <code>|</code> (vertical bar), or any control characters (\u0000-\u001f
     * | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the domain to register. The name must be unique in the region that
     * the domain is registered in.</p> <p>The specified string must not start or end
     * with whitespace. It must not contain a <code>:</code> (colon), <code>/</code>
     * (slash), <code>|</code> (vertical bar), or any control characters (\u0000-\u001f
     * | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the domain to register. The name must be unique in the region that
     * the domain is registered in.</p> <p>The specified string must not start or end
     * with whitespace. It must not contain a <code>:</code> (colon), <code>/</code>
     * (slash), <code>|</code> (vertical bar), or any control characters (\u0000-\u001f
     * | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the domain to register. The name must be unique in the region that
     * the domain is registered in.</p> <p>The specified string must not start or end
     * with whitespace. It must not contain a <code>:</code> (colon), <code>/</code>
     * (slash), <code>|</code> (vertical bar), or any control characters (\u0000-\u001f
     * | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the domain to register. The name must be unique in the region that
     * the domain is registered in.</p> <p>The specified string must not start or end
     * with whitespace. It must not contain a <code>:</code> (colon), <code>/</code>
     * (slash), <code>|</code> (vertical bar), or any control characters (\u0000-\u001f
     * | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline RegisterDomainRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the domain to register. The name must be unique in the region that
     * the domain is registered in.</p> <p>The specified string must not start or end
     * with whitespace. It must not contain a <code>:</code> (colon), <code>/</code>
     * (slash), <code>|</code> (vertical bar), or any control characters (\u0000-\u001f
     * | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline RegisterDomainRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Name of the domain to register. The name must be unique in the region that
     * the domain is registered in.</p> <p>The specified string must not start or end
     * with whitespace. It must not contain a <code>:</code> (colon), <code>/</code>
     * (slash), <code>|</code> (vertical bar), or any control characters (\u0000-\u001f
     * | \u007f - \u009f). Also, it must not contain the literal string
     * quotarnquot.</p>
     */
    inline RegisterDomainRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A text description of the domain.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A text description of the domain.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A text description of the domain.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A text description of the domain.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A text description of the domain.</p>
     */
    inline RegisterDomainRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A text description of the domain.</p>
     */
    inline RegisterDomainRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A text description of the domain.</p>
     */
    inline RegisterDomainRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The duration (in days) that records and histories of workflow executions on
     * the domain should be kept by the service. After the retention period, the
     * workflow execution is not available in the results of visibility calls.</p>
     * <p>If you pass the value <code>NONE</code> or <code>0</code> (zero), then the
     * workflow execution history will not be retained. As soon as the workflow
     * execution completes, the execution record and its history are deleted.</p>
     * <p>The maximum workflow execution retention period is 90 days. For more
     * information about Amazon SWF service limits, see: <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-limits.html">Amazon
     * SWF Service Limits</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetWorkflowExecutionRetentionPeriodInDays() const{ return m_workflowExecutionRetentionPeriodInDays; }

    /**
     * <p>The duration (in days) that records and histories of workflow executions on
     * the domain should be kept by the service. After the retention period, the
     * workflow execution is not available in the results of visibility calls.</p>
     * <p>If you pass the value <code>NONE</code> or <code>0</code> (zero), then the
     * workflow execution history will not be retained. As soon as the workflow
     * execution completes, the execution record and its history are deleted.</p>
     * <p>The maximum workflow execution retention period is 90 days. For more
     * information about Amazon SWF service limits, see: <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-limits.html">Amazon
     * SWF Service Limits</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetWorkflowExecutionRetentionPeriodInDays(const Aws::String& value) { m_workflowExecutionRetentionPeriodInDaysHasBeenSet = true; m_workflowExecutionRetentionPeriodInDays = value; }

    /**
     * <p>The duration (in days) that records and histories of workflow executions on
     * the domain should be kept by the service. After the retention period, the
     * workflow execution is not available in the results of visibility calls.</p>
     * <p>If you pass the value <code>NONE</code> or <code>0</code> (zero), then the
     * workflow execution history will not be retained. As soon as the workflow
     * execution completes, the execution record and its history are deleted.</p>
     * <p>The maximum workflow execution retention period is 90 days. For more
     * information about Amazon SWF service limits, see: <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-limits.html">Amazon
     * SWF Service Limits</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetWorkflowExecutionRetentionPeriodInDays(Aws::String&& value) { m_workflowExecutionRetentionPeriodInDaysHasBeenSet = true; m_workflowExecutionRetentionPeriodInDays = value; }

    /**
     * <p>The duration (in days) that records and histories of workflow executions on
     * the domain should be kept by the service. After the retention period, the
     * workflow execution is not available in the results of visibility calls.</p>
     * <p>If you pass the value <code>NONE</code> or <code>0</code> (zero), then the
     * workflow execution history will not be retained. As soon as the workflow
     * execution completes, the execution record and its history are deleted.</p>
     * <p>The maximum workflow execution retention period is 90 days. For more
     * information about Amazon SWF service limits, see: <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-limits.html">Amazon
     * SWF Service Limits</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline void SetWorkflowExecutionRetentionPeriodInDays(const char* value) { m_workflowExecutionRetentionPeriodInDaysHasBeenSet = true; m_workflowExecutionRetentionPeriodInDays.assign(value); }

    /**
     * <p>The duration (in days) that records and histories of workflow executions on
     * the domain should be kept by the service. After the retention period, the
     * workflow execution is not available in the results of visibility calls.</p>
     * <p>If you pass the value <code>NONE</code> or <code>0</code> (zero), then the
     * workflow execution history will not be retained. As soon as the workflow
     * execution completes, the execution record and its history are deleted.</p>
     * <p>The maximum workflow execution retention period is 90 days. For more
     * information about Amazon SWF service limits, see: <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-limits.html">Amazon
     * SWF Service Limits</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline RegisterDomainRequest& WithWorkflowExecutionRetentionPeriodInDays(const Aws::String& value) { SetWorkflowExecutionRetentionPeriodInDays(value); return *this;}

    /**
     * <p>The duration (in days) that records and histories of workflow executions on
     * the domain should be kept by the service. After the retention period, the
     * workflow execution is not available in the results of visibility calls.</p>
     * <p>If you pass the value <code>NONE</code> or <code>0</code> (zero), then the
     * workflow execution history will not be retained. As soon as the workflow
     * execution completes, the execution record and its history are deleted.</p>
     * <p>The maximum workflow execution retention period is 90 days. For more
     * information about Amazon SWF service limits, see: <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-limits.html">Amazon
     * SWF Service Limits</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline RegisterDomainRequest& WithWorkflowExecutionRetentionPeriodInDays(Aws::String&& value) { SetWorkflowExecutionRetentionPeriodInDays(value); return *this;}

    /**
     * <p>The duration (in days) that records and histories of workflow executions on
     * the domain should be kept by the service. After the retention period, the
     * workflow execution is not available in the results of visibility calls.</p>
     * <p>If you pass the value <code>NONE</code> or <code>0</code> (zero), then the
     * workflow execution history will not be retained. As soon as the workflow
     * execution completes, the execution record and its history are deleted.</p>
     * <p>The maximum workflow execution retention period is 90 days. For more
     * information about Amazon SWF service limits, see: <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-limits.html">Amazon
     * SWF Service Limits</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline RegisterDomainRequest& WithWorkflowExecutionRetentionPeriodInDays(const char* value) { SetWorkflowExecutionRetentionPeriodInDays(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_workflowExecutionRetentionPeriodInDays;
    bool m_workflowExecutionRetentionPeriodInDaysHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
