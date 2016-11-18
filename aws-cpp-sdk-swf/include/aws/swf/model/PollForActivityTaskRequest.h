﻿/*
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
#include <aws/swf/model/TaskList.h>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API PollForActivityTaskRequest : public SWFRequest
  {
  public:
    PollForActivityTaskRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the domain that contains the task lists being polled.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain that contains the task lists being polled.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain that contains the task lists being polled.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain that contains the task lists being polled.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain that contains the task lists being polled.</p>
     */
    inline PollForActivityTaskRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain that contains the task lists being polled.</p>
     */
    inline PollForActivityTaskRequest& WithDomain(Aws::String&& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain that contains the task lists being polled.</p>
     */
    inline PollForActivityTaskRequest& WithDomain(const char* value) { SetDomain(value); return *this;}

    /**
     * <p>Specifies the task list to poll for activity tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }

    /**
     * <p>Specifies the task list to poll for activity tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>Specifies the task list to poll for activity tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>Specifies the task list to poll for activity tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline PollForActivityTaskRequest& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}

    /**
     * <p>Specifies the task list to poll for activity tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (\u0000-\u001f | \u007f - \u009f). Also, it must not
     * contain the literal string quotarnquot.</p>
     */
    inline PollForActivityTaskRequest& WithTaskList(TaskList&& value) { SetTaskList(value); return *this;}

    /**
     * <p>Identity of the worker making the request, recorded in the
     * <code>ActivityTaskStarted</code> event in the workflow history. This enables
     * diagnostic tracing when problems arise. The form of this identity is user
     * defined.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p>Identity of the worker making the request, recorded in the
     * <code>ActivityTaskStarted</code> event in the workflow history. This enables
     * diagnostic tracing when problems arise. The form of this identity is user
     * defined.</p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>Identity of the worker making the request, recorded in the
     * <code>ActivityTaskStarted</code> event in the workflow history. This enables
     * diagnostic tracing when problems arise. The form of this identity is user
     * defined.</p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>Identity of the worker making the request, recorded in the
     * <code>ActivityTaskStarted</code> event in the workflow history. This enables
     * diagnostic tracing when problems arise. The form of this identity is user
     * defined.</p>
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * <p>Identity of the worker making the request, recorded in the
     * <code>ActivityTaskStarted</code> event in the workflow history. This enables
     * diagnostic tracing when problems arise. The form of this identity is user
     * defined.</p>
     */
    inline PollForActivityTaskRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p>Identity of the worker making the request, recorded in the
     * <code>ActivityTaskStarted</code> event in the workflow history. This enables
     * diagnostic tracing when problems arise. The form of this identity is user
     * defined.</p>
     */
    inline PollForActivityTaskRequest& WithIdentity(Aws::String&& value) { SetIdentity(value); return *this;}

    /**
     * <p>Identity of the worker making the request, recorded in the
     * <code>ActivityTaskStarted</code> event in the workflow history. This enables
     * diagnostic tracing when problems arise. The form of this identity is user
     * defined.</p>
     */
    inline PollForActivityTaskRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}

  private:
    Aws::String m_domain;
    bool m_domainHasBeenSet;
    TaskList m_taskList;
    bool m_taskListHasBeenSet;
    Aws::String m_identity;
    bool m_identityHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
