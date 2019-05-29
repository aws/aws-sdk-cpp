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
   * <p>The parameters for a STEP_FUNCTION task.</p> <p>For information about
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
   * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For Step
   * Functions tasks, Systems Manager ignores any values specified for
   * <code>TaskParameters</code> and <code>LoggingInfo</code>.</p> </note><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowStepFunctionsParameters">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API MaintenanceWindowStepFunctionsParameters
  {
  public:
    MaintenanceWindowStepFunctionsParameters();
    MaintenanceWindowStepFunctionsParameters(Aws::Utils::Json::JsonView jsonValue);
    MaintenanceWindowStepFunctionsParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The inputs for the STEP_FUNCTION task.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The inputs for the STEP_FUNCTION task.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The inputs for the STEP_FUNCTION task.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The inputs for the STEP_FUNCTION task.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The inputs for the STEP_FUNCTION task.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The inputs for the STEP_FUNCTION task.</p>
     */
    inline MaintenanceWindowStepFunctionsParameters& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The inputs for the STEP_FUNCTION task.</p>
     */
    inline MaintenanceWindowStepFunctionsParameters& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The inputs for the STEP_FUNCTION task.</p>
     */
    inline MaintenanceWindowStepFunctionsParameters& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>The name of the STEP_FUNCTION task.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the STEP_FUNCTION task.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the STEP_FUNCTION task.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the STEP_FUNCTION task.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the STEP_FUNCTION task.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the STEP_FUNCTION task.</p>
     */
    inline MaintenanceWindowStepFunctionsParameters& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the STEP_FUNCTION task.</p>
     */
    inline MaintenanceWindowStepFunctionsParameters& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the STEP_FUNCTION task.</p>
     */
    inline MaintenanceWindowStepFunctionsParameters& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_input;
    bool m_inputHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
