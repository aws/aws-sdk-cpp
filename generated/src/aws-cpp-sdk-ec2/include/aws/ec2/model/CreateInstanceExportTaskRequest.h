/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ExportEnvironment.h>
#include <aws/ec2/model/ExportToS3TaskSpecification.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateInstanceExportTaskRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateInstanceExportTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInstanceExportTask"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The tags to apply to the export instance task during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateInstanceExportTaskRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateInstanceExportTaskRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateInstanceExportTaskRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateInstanceExportTaskRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description for the conversion task or the resource being exported. The
     * maximum length is 255 characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateInstanceExportTaskRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateInstanceExportTaskRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateInstanceExportTaskRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline CreateInstanceExportTaskRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline CreateInstanceExportTaskRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline CreateInstanceExportTaskRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target virtualization environment.</p>
     */
    inline const ExportEnvironment& GetTargetEnvironment() const{ return m_targetEnvironment; }
    inline bool TargetEnvironmentHasBeenSet() const { return m_targetEnvironmentHasBeenSet; }
    inline void SetTargetEnvironment(const ExportEnvironment& value) { m_targetEnvironmentHasBeenSet = true; m_targetEnvironment = value; }
    inline void SetTargetEnvironment(ExportEnvironment&& value) { m_targetEnvironmentHasBeenSet = true; m_targetEnvironment = std::move(value); }
    inline CreateInstanceExportTaskRequest& WithTargetEnvironment(const ExportEnvironment& value) { SetTargetEnvironment(value); return *this;}
    inline CreateInstanceExportTaskRequest& WithTargetEnvironment(ExportEnvironment&& value) { SetTargetEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format and location for an export instance task.</p>
     */
    inline const ExportToS3TaskSpecification& GetExportToS3Task() const{ return m_exportToS3Task; }
    inline bool ExportToS3TaskHasBeenSet() const { return m_exportToS3TaskHasBeenSet; }
    inline void SetExportToS3Task(const ExportToS3TaskSpecification& value) { m_exportToS3TaskHasBeenSet = true; m_exportToS3Task = value; }
    inline void SetExportToS3Task(ExportToS3TaskSpecification&& value) { m_exportToS3TaskHasBeenSet = true; m_exportToS3Task = std::move(value); }
    inline CreateInstanceExportTaskRequest& WithExportToS3Task(const ExportToS3TaskSpecification& value) { SetExportToS3Task(value); return *this;}
    inline CreateInstanceExportTaskRequest& WithExportToS3Task(ExportToS3TaskSpecification&& value) { SetExportToS3Task(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    ExportEnvironment m_targetEnvironment;
    bool m_targetEnvironmentHasBeenSet = false;

    ExportToS3TaskSpecification m_exportToS3Task;
    bool m_exportToS3TaskHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
