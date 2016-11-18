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
  class AWS_SWF_API CountPendingDecisionTasksRequest : public SWFRequest
  {
  public:
    CountPendingDecisionTasksRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the domain that contains the task list.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain that contains the task list.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain that contains the task list.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain that contains the task list.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain that contains the task list.</p>
     */
    inline CountPendingDecisionTasksRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain that contains the task list.</p>
     */
    inline CountPendingDecisionTasksRequest& WithDomain(Aws::String&& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain that contains the task list.</p>
     */
    inline CountPendingDecisionTasksRequest& WithDomain(const char* value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the task list.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }

    /**
     * <p>The name of the task list.</p>
     */
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>The name of the task list.</p>
     */
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = value; }

    /**
     * <p>The name of the task list.</p>
     */
    inline CountPendingDecisionTasksRequest& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}

    /**
     * <p>The name of the task list.</p>
     */
    inline CountPendingDecisionTasksRequest& WithTaskList(TaskList&& value) { SetTaskList(value); return *this;}

  private:
    Aws::String m_domain;
    bool m_domainHasBeenSet;
    TaskList m_taskList;
    bool m_taskListHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
