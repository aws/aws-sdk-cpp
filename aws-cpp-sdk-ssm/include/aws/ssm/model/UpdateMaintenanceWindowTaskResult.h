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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/MaintenanceWindowTaskInvocationParameters.h>
#include <aws/ssm/model/LoggingInfo.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/MaintenanceWindowTaskParameterValueExpression.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API UpdateMaintenanceWindowTaskResult
  {
  public:
    UpdateMaintenanceWindowTaskResult();
    UpdateMaintenanceWindowTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateMaintenanceWindowTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the maintenance window that was updated.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the maintenance window that was updated.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowId = value; }

    /**
     * <p>The ID of the maintenance window that was updated.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowId = std::move(value); }

    /**
     * <p>The ID of the maintenance window that was updated.</p>
     */
    inline void SetWindowId(const char* value) { m_windowId.assign(value); }

    /**
     * <p>The ID of the maintenance window that was updated.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the maintenance window that was updated.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window that was updated.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The task ID of the maintenance window that was updated.</p>
     */
    inline const Aws::String& GetWindowTaskId() const{ return m_windowTaskId; }

    /**
     * <p>The task ID of the maintenance window that was updated.</p>
     */
    inline void SetWindowTaskId(const Aws::String& value) { m_windowTaskId = value; }

    /**
     * <p>The task ID of the maintenance window that was updated.</p>
     */
    inline void SetWindowTaskId(Aws::String&& value) { m_windowTaskId = std::move(value); }

    /**
     * <p>The task ID of the maintenance window that was updated.</p>
     */
    inline void SetWindowTaskId(const char* value) { m_windowTaskId.assign(value); }

    /**
     * <p>The task ID of the maintenance window that was updated.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithWindowTaskId(const Aws::String& value) { SetWindowTaskId(value); return *this;}

    /**
     * <p>The task ID of the maintenance window that was updated.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithWindowTaskId(Aws::String&& value) { SetWindowTaskId(std::move(value)); return *this;}

    /**
     * <p>The task ID of the maintenance window that was updated.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithWindowTaskId(const char* value) { SetWindowTaskId(value); return *this;}


    /**
     * <p>The updated target values.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The updated target values.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targets = value; }

    /**
     * <p>The updated target values.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targets = std::move(value); }

    /**
     * <p>The updated target values.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The updated target values.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The updated target values.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& AddTargets(const Target& value) { m_targets.push_back(value); return *this; }

    /**
     * <p>The updated target values.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& AddTargets(Target&& value) { m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>The updated task ARN value.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The updated task ARN value.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }

    /**
     * <p>The updated task ARN value.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }

    /**
     * <p>The updated task ARN value.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }

    /**
     * <p>The updated task ARN value.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The updated task ARN value.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The updated task ARN value.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for maintenance window Run Command tasks.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for maintenance window Run Command tasks.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArn = value; }

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for maintenance window Run Command tasks.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for maintenance window Run Command tasks.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for maintenance window Run Command tasks.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for maintenance window Run Command tasks.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for maintenance window Run Command tasks.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p>The updated parameter values.</p> <note> <p> <code>TaskParameters</code> has
     * been deprecated. To specify parameters to pass to a task when it runs, instead
     * use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& GetTaskParameters() const{ return m_taskParameters; }

    /**
     * <p>The updated parameter values.</p> <note> <p> <code>TaskParameters</code> has
     * been deprecated. To specify parameters to pass to a task when it runs, instead
     * use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline void SetTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { m_taskParameters = value; }

    /**
     * <p>The updated parameter values.</p> <note> <p> <code>TaskParameters</code> has
     * been deprecated. To specify parameters to pass to a task when it runs, instead
     * use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline void SetTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { m_taskParameters = std::move(value); }

    /**
     * <p>The updated parameter values.</p> <note> <p> <code>TaskParameters</code> has
     * been deprecated. To specify parameters to pass to a task when it runs, instead
     * use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline UpdateMaintenanceWindowTaskResult& WithTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { SetTaskParameters(value); return *this;}

    /**
     * <p>The updated parameter values.</p> <note> <p> <code>TaskParameters</code> has
     * been deprecated. To specify parameters to pass to a task when it runs, instead
     * use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline UpdateMaintenanceWindowTaskResult& WithTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { SetTaskParameters(std::move(value)); return *this;}

    /**
     * <p>The updated parameter values.</p> <note> <p> <code>TaskParameters</code> has
     * been deprecated. To specify parameters to pass to a task when it runs, instead
     * use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline UpdateMaintenanceWindowTaskResult& AddTaskParameters(const Aws::String& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParameters.emplace(key, value); return *this; }

    /**
     * <p>The updated parameter values.</p> <note> <p> <code>TaskParameters</code> has
     * been deprecated. To specify parameters to pass to a task when it runs, instead
     * use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline UpdateMaintenanceWindowTaskResult& AddTaskParameters(Aws::String&& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The updated parameter values.</p> <note> <p> <code>TaskParameters</code> has
     * been deprecated. To specify parameters to pass to a task when it runs, instead
     * use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline UpdateMaintenanceWindowTaskResult& AddTaskParameters(const Aws::String& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The updated parameter values.</p> <note> <p> <code>TaskParameters</code> has
     * been deprecated. To specify parameters to pass to a task when it runs, instead
     * use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline UpdateMaintenanceWindowTaskResult& AddTaskParameters(Aws::String&& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The updated parameter values.</p> <note> <p> <code>TaskParameters</code> has
     * been deprecated. To specify parameters to pass to a task when it runs, instead
     * use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline UpdateMaintenanceWindowTaskResult& AddTaskParameters(const char* key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The updated parameter values.</p> <note> <p> <code>TaskParameters</code> has
     * been deprecated. To specify parameters to pass to a task when it runs, instead
     * use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline UpdateMaintenanceWindowTaskResult& AddTaskParameters(const char* key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParameters.emplace(key, value); return *this; }


    /**
     * <p>The updated parameter values.</p>
     */
    inline const MaintenanceWindowTaskInvocationParameters& GetTaskInvocationParameters() const{ return m_taskInvocationParameters; }

    /**
     * <p>The updated parameter values.</p>
     */
    inline void SetTaskInvocationParameters(const MaintenanceWindowTaskInvocationParameters& value) { m_taskInvocationParameters = value; }

    /**
     * <p>The updated parameter values.</p>
     */
    inline void SetTaskInvocationParameters(MaintenanceWindowTaskInvocationParameters&& value) { m_taskInvocationParameters = std::move(value); }

    /**
     * <p>The updated parameter values.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithTaskInvocationParameters(const MaintenanceWindowTaskInvocationParameters& value) { SetTaskInvocationParameters(value); return *this;}

    /**
     * <p>The updated parameter values.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithTaskInvocationParameters(MaintenanceWindowTaskInvocationParameters&& value) { SetTaskInvocationParameters(std::move(value)); return *this;}


    /**
     * <p>The updated priority value.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The updated priority value.</p>
     */
    inline void SetPriority(int value) { m_priority = value; }

    /**
     * <p>The updated priority value.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The updated MaxConcurrency value.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The updated MaxConcurrency value.</p>
     */
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrency = value; }

    /**
     * <p>The updated MaxConcurrency value.</p>
     */
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrency = std::move(value); }

    /**
     * <p>The updated MaxConcurrency value.</p>
     */
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrency.assign(value); }

    /**
     * <p>The updated MaxConcurrency value.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>The updated MaxConcurrency value.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

    /**
     * <p>The updated MaxConcurrency value.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The updated MaxErrors value.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }

    /**
     * <p>The updated MaxErrors value.</p>
     */
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrors = value; }

    /**
     * <p>The updated MaxErrors value.</p>
     */
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrors = std::move(value); }

    /**
     * <p>The updated MaxErrors value.</p>
     */
    inline void SetMaxErrors(const char* value) { m_maxErrors.assign(value); }

    /**
     * <p>The updated MaxErrors value.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The updated MaxErrors value.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

    /**
     * <p>The updated MaxErrors value.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}


    /**
     * <p>The updated logging information in Amazon S3.</p> <note> <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an S3 bucket to contain
     * logs, instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline const LoggingInfo& GetLoggingInfo() const{ return m_loggingInfo; }

    /**
     * <p>The updated logging information in Amazon S3.</p> <note> <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an S3 bucket to contain
     * logs, instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline void SetLoggingInfo(const LoggingInfo& value) { m_loggingInfo = value; }

    /**
     * <p>The updated logging information in Amazon S3.</p> <note> <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an S3 bucket to contain
     * logs, instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline void SetLoggingInfo(LoggingInfo&& value) { m_loggingInfo = std::move(value); }

    /**
     * <p>The updated logging information in Amazon S3.</p> <note> <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an S3 bucket to contain
     * logs, instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline UpdateMaintenanceWindowTaskResult& WithLoggingInfo(const LoggingInfo& value) { SetLoggingInfo(value); return *this;}

    /**
     * <p>The updated logging information in Amazon S3.</p> <note> <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an S3 bucket to contain
     * logs, instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline UpdateMaintenanceWindowTaskResult& WithLoggingInfo(LoggingInfo&& value) { SetLoggingInfo(std::move(value)); return *this;}


    /**
     * <p>The updated task name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The updated task name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The updated task name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The updated task name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The updated task name.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The updated task name.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The updated task name.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The updated task description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated task description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The updated task description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The updated task description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The updated task description.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated task description.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated task description.</p>
     */
    inline UpdateMaintenanceWindowTaskResult& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_windowId;

    Aws::String m_windowTaskId;

    Aws::Vector<Target> m_targets;

    Aws::String m_taskArn;

    Aws::String m_serviceRoleArn;

    Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression> m_taskParameters;

    MaintenanceWindowTaskInvocationParameters m_taskInvocationParameters;

    int m_priority;

    Aws::String m_maxConcurrency;

    Aws::String m_maxErrors;

    LoggingInfo m_loggingInfo;

    Aws::String m_name;

    Aws::String m_description;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
