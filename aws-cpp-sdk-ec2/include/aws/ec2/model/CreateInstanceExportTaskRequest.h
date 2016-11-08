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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ExportEnvironment.h>
#include <aws/ec2/model/ExportToS3TaskSpecification.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateInstanceExportTask.</p>
   */
  class AWS_EC2_API CreateInstanceExportTaskRequest : public EC2Request
  {
  public:
    CreateInstanceExportTaskRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A description for the conversion task or the resource being exported. The
     * maximum length is 255 bytes.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the conversion task or the resource being exported. The
     * maximum length is 255 bytes.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the conversion task or the resource being exported. The
     * maximum length is 255 bytes.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the conversion task or the resource being exported. The
     * maximum length is 255 bytes.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the conversion task or the resource being exported. The
     * maximum length is 255 bytes.</p>
     */
    inline CreateInstanceExportTaskRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the conversion task or the resource being exported. The
     * maximum length is 255 bytes.</p>
     */
    inline CreateInstanceExportTaskRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the conversion task or the resource being exported. The
     * maximum length is 255 bytes.</p>
     */
    inline CreateInstanceExportTaskRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline CreateInstanceExportTaskRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline CreateInstanceExportTaskRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline CreateInstanceExportTaskRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The target virtualization environment.</p>
     */
    inline const ExportEnvironment& GetTargetEnvironment() const{ return m_targetEnvironment; }

    /**
     * <p>The target virtualization environment.</p>
     */
    inline void SetTargetEnvironment(const ExportEnvironment& value) { m_targetEnvironmentHasBeenSet = true; m_targetEnvironment = value; }

    /**
     * <p>The target virtualization environment.</p>
     */
    inline void SetTargetEnvironment(ExportEnvironment&& value) { m_targetEnvironmentHasBeenSet = true; m_targetEnvironment = value; }

    /**
     * <p>The target virtualization environment.</p>
     */
    inline CreateInstanceExportTaskRequest& WithTargetEnvironment(const ExportEnvironment& value) { SetTargetEnvironment(value); return *this;}

    /**
     * <p>The target virtualization environment.</p>
     */
    inline CreateInstanceExportTaskRequest& WithTargetEnvironment(ExportEnvironment&& value) { SetTargetEnvironment(value); return *this;}

    /**
     * <p>The format and location for an instance export task.</p>
     */
    inline const ExportToS3TaskSpecification& GetExportToS3Task() const{ return m_exportToS3Task; }

    /**
     * <p>The format and location for an instance export task.</p>
     */
    inline void SetExportToS3Task(const ExportToS3TaskSpecification& value) { m_exportToS3TaskHasBeenSet = true; m_exportToS3Task = value; }

    /**
     * <p>The format and location for an instance export task.</p>
     */
    inline void SetExportToS3Task(ExportToS3TaskSpecification&& value) { m_exportToS3TaskHasBeenSet = true; m_exportToS3Task = value; }

    /**
     * <p>The format and location for an instance export task.</p>
     */
    inline CreateInstanceExportTaskRequest& WithExportToS3Task(const ExportToS3TaskSpecification& value) { SetExportToS3Task(value); return *this;}

    /**
     * <p>The format and location for an instance export task.</p>
     */
    inline CreateInstanceExportTaskRequest& WithExportToS3Task(ExportToS3TaskSpecification&& value) { SetExportToS3Task(value); return *this;}

  private:
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    ExportEnvironment m_targetEnvironment;
    bool m_targetEnvironmentHasBeenSet;
    ExportToS3TaskSpecification m_exportToS3Task;
    bool m_exportToS3TaskHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
