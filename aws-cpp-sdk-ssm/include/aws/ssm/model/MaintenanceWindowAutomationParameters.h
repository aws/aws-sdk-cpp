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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The parameters for an AUTOMATION task type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowAutomationParameters">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API MaintenanceWindowAutomationParameters
  {
  public:
    MaintenanceWindowAutomationParameters();
    MaintenanceWindowAutomationParameters(Aws::Utils::Json::JsonView jsonValue);
    MaintenanceWindowAutomationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of an Automation document to use during task execution.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The version of an Automation document to use during task execution.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The version of an Automation document to use during task execution.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The version of an Automation document to use during task execution.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The version of an Automation document to use during task execution.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The version of an Automation document to use during task execution.</p>
     */
    inline MaintenanceWindowAutomationParameters& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The version of an Automation document to use during task execution.</p>
     */
    inline MaintenanceWindowAutomationParameters& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of an Automation document to use during task execution.</p>
     */
    inline MaintenanceWindowAutomationParameters& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>The parameters for the AUTOMATION task.</p> <p>For information about
     * specifying and updating task parameters, see
     * <a>RegisterTaskWithMaintenanceWindow</a> and
     * <a>UpdateMaintenanceWindowTask</a>.</p> <note> <p> <code>LoggingInfo</code> has
     * been deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For
     * AUTOMATION task types, Systems Manager ignores any values specified for these
     * parameters.</p> </note>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters for the AUTOMATION task.</p> <p>For information about
     * specifying and updating task parameters, see
     * <a>RegisterTaskWithMaintenanceWindow</a> and
     * <a>UpdateMaintenanceWindowTask</a>.</p> <note> <p> <code>LoggingInfo</code> has
     * been deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For
     * AUTOMATION task types, Systems Manager ignores any values specified for these
     * parameters.</p> </note>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters for the AUTOMATION task.</p> <p>For information about
     * specifying and updating task parameters, see
     * <a>RegisterTaskWithMaintenanceWindow</a> and
     * <a>UpdateMaintenanceWindowTask</a>.</p> <note> <p> <code>LoggingInfo</code> has
     * been deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For
     * AUTOMATION task types, Systems Manager ignores any values specified for these
     * parameters.</p> </note>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters for the AUTOMATION task.</p> <p>For information about
     * specifying and updating task parameters, see
     * <a>RegisterTaskWithMaintenanceWindow</a> and
     * <a>UpdateMaintenanceWindowTask</a>.</p> <note> <p> <code>LoggingInfo</code> has
     * been deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For
     * AUTOMATION task types, Systems Manager ignores any values specified for these
     * parameters.</p> </note>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters for the AUTOMATION task.</p> <p>For information about
     * specifying and updating task parameters, see
     * <a>RegisterTaskWithMaintenanceWindow</a> and
     * <a>UpdateMaintenanceWindowTask</a>.</p> <note> <p> <code>LoggingInfo</code> has
     * been deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For
     * AUTOMATION task types, Systems Manager ignores any values specified for these
     * parameters.</p> </note>
     */
    inline MaintenanceWindowAutomationParameters& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters for the AUTOMATION task.</p> <p>For information about
     * specifying and updating task parameters, see
     * <a>RegisterTaskWithMaintenanceWindow</a> and
     * <a>UpdateMaintenanceWindowTask</a>.</p> <note> <p> <code>LoggingInfo</code> has
     * been deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For
     * AUTOMATION task types, Systems Manager ignores any values specified for these
     * parameters.</p> </note>
     */
    inline MaintenanceWindowAutomationParameters& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters for the AUTOMATION task.</p> <p>For information about
     * specifying and updating task parameters, see
     * <a>RegisterTaskWithMaintenanceWindow</a> and
     * <a>UpdateMaintenanceWindowTask</a>.</p> <note> <p> <code>LoggingInfo</code> has
     * been deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For
     * AUTOMATION task types, Systems Manager ignores any values specified for these
     * parameters.</p> </note>
     */
    inline MaintenanceWindowAutomationParameters& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters for the AUTOMATION task.</p> <p>For information about
     * specifying and updating task parameters, see
     * <a>RegisterTaskWithMaintenanceWindow</a> and
     * <a>UpdateMaintenanceWindowTask</a>.</p> <note> <p> <code>LoggingInfo</code> has
     * been deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For
     * AUTOMATION task types, Systems Manager ignores any values specified for these
     * parameters.</p> </note>
     */
    inline MaintenanceWindowAutomationParameters& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters for the AUTOMATION task.</p> <p>For information about
     * specifying and updating task parameters, see
     * <a>RegisterTaskWithMaintenanceWindow</a> and
     * <a>UpdateMaintenanceWindowTask</a>.</p> <note> <p> <code>LoggingInfo</code> has
     * been deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For
     * AUTOMATION task types, Systems Manager ignores any values specified for these
     * parameters.</p> </note>
     */
    inline MaintenanceWindowAutomationParameters& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters for the AUTOMATION task.</p> <p>For information about
     * specifying and updating task parameters, see
     * <a>RegisterTaskWithMaintenanceWindow</a> and
     * <a>UpdateMaintenanceWindowTask</a>.</p> <note> <p> <code>LoggingInfo</code> has
     * been deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For
     * AUTOMATION task types, Systems Manager ignores any values specified for these
     * parameters.</p> </note>
     */
    inline MaintenanceWindowAutomationParameters& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters for the AUTOMATION task.</p> <p>For information about
     * specifying and updating task parameters, see
     * <a>RegisterTaskWithMaintenanceWindow</a> and
     * <a>UpdateMaintenanceWindowTask</a>.</p> <note> <p> <code>LoggingInfo</code> has
     * been deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For
     * AUTOMATION task types, Systems Manager ignores any values specified for these
     * parameters.</p> </note>
     */
    inline MaintenanceWindowAutomationParameters& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters for the AUTOMATION task.</p> <p>For information about
     * specifying and updating task parameters, see
     * <a>RegisterTaskWithMaintenanceWindow</a> and
     * <a>UpdateMaintenanceWindowTask</a>.</p> <note> <p> <code>LoggingInfo</code> has
     * been deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For
     * AUTOMATION task types, Systems Manager ignores any values specified for these
     * parameters.</p> </note>
     */
    inline MaintenanceWindowAutomationParameters& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
