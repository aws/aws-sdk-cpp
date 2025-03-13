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
    AWS_EC2_API CreateInstanceExportTaskRequest() = default;

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
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateInstanceExportTaskRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateInstanceExportTaskRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description for the conversion task or the resource being exported. The
     * maximum length is 255 characters.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateInstanceExportTaskRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    CreateInstanceExportTaskRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target virtualization environment.</p>
     */
    inline ExportEnvironment GetTargetEnvironment() const { return m_targetEnvironment; }
    inline bool TargetEnvironmentHasBeenSet() const { return m_targetEnvironmentHasBeenSet; }
    inline void SetTargetEnvironment(ExportEnvironment value) { m_targetEnvironmentHasBeenSet = true; m_targetEnvironment = value; }
    inline CreateInstanceExportTaskRequest& WithTargetEnvironment(ExportEnvironment value) { SetTargetEnvironment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format and location for an export instance task.</p>
     */
    inline const ExportToS3TaskSpecification& GetExportToS3Task() const { return m_exportToS3Task; }
    inline bool ExportToS3TaskHasBeenSet() const { return m_exportToS3TaskHasBeenSet; }
    template<typename ExportToS3TaskT = ExportToS3TaskSpecification>
    void SetExportToS3Task(ExportToS3TaskT&& value) { m_exportToS3TaskHasBeenSet = true; m_exportToS3Task = std::forward<ExportToS3TaskT>(value); }
    template<typename ExportToS3TaskT = ExportToS3TaskSpecification>
    CreateInstanceExportTaskRequest& WithExportToS3Task(ExportToS3TaskT&& value) { SetExportToS3Task(std::forward<ExportToS3TaskT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    ExportEnvironment m_targetEnvironment{ExportEnvironment::NOT_SET};
    bool m_targetEnvironmentHasBeenSet = false;

    ExportToS3TaskSpecification m_exportToS3Task;
    bool m_exportToS3TaskHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
